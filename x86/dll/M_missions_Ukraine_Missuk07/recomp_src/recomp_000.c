#include "recomp.h"

/* thunk_FUN_100031e0 @ 0x12661005 (5 bytes, 1 insns) */
void f_12661005(void) {
  FTRACE(0x12661005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12661005 jmp 0x126631e0 */
  f_126631e0(); return;
}

/* OnInit @ 0x1266100a (5 bytes, 1 insns) */
void f_1266100a(void) {
  FTRACE(0x1266100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266100a jmp 0x126610a0 */
  f_126610a0(); return;
}

/* thunk_FUN_10003230 @ 0x1266100f (5 bytes, 1 insns) */
void f_1266100f(void) {
  FTRACE(0x1266100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266100f jmp 0x12663230 */
  f_12663230(); return;
}

/* thunk_FUN_10001040 @ 0x12661014 (5 bytes, 1 insns) */
void f_12661014(void) {
  FTRACE(0x12661014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12661014 jmp 0x12661040 */
  f_12661040(); return;
}

/* ProcessScenary @ 0x12661019 (5 bytes, 1 insns) */
void f_12661019(void) {
  FTRACE(0x12661019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12661019 jmp 0x12661a90 */
  f_12661a90(); return;
}

/* FUN_10001040 @ 0x12661040 (67 bytes, 26 insns) */
void f_12661040(void) {
  FTRACE(0x12661040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12661040 push ebp */
  push32((uint32_t)(EBP));
  /* 12661041 mov ebp, esp */
  EBP = (ESP);
  /* 12661043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12661046 push ebx */
  push32((uint32_t)(EBX));
  /* 12661047 push esi */
  push32((uint32_t)(ESI));
  /* 12661048 push edi */
  push32((uint32_t)(EDI));
  /* 12661049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1266104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12661051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12661056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12661058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661062 je 0x12661066 */
  if (C.zf) goto L_12661066;
  /* 12661064 jmp 0x1266106b */
  goto L_1266106b;
L_12661066:;
  /* 12661066 call 0x1266100a */
  push32(0x1266106bu); f_1266100a();
L_1266106b:;
  /* 1266106b mov eax, 1 */
  EAX = (0x1u);
  /* 12661070 pop edi */
  EDI = (pop32());
  /* 12661071 pop esi */
  ESI = (pop32());
  /* 12661072 pop ebx */
  EBX = (pop32());
  /* 12661073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661078 call 0x12663360 */
  push32(0x1266107du); f_12663360();
  /* 1266107d mov esp, ebp */
  ESP = (EBP);
  /* 1266107f pop ebp */
  EBP = (pop32());
  /* 12661080 ret 0xc */
  ESPCHK(0x12661040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x126610a0 (2032 bytes, 520 insns) */
void f_126610a0(void) {
  FTRACE(0x126610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126610a1 mov ebp, esp */
  EBP = (ESP);
  /* 126610a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126610a6 push ebx */
  push32((uint32_t)(EBX));
  /* 126610a7 push esi */
  push32((uint32_t)(ESI));
  /* 126610a8 push edi */
  push32((uint32_t)(EDI));
  /* 126610a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 126610ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 126610b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 126610b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126610b8 mov esi, esp */
  ESI = (ESP);
  /* 126610ba push 0x1268b260 */
  push32((uint32_t)(0x1268b260u));
  /* 126610bf push 0x12690430 */
  push32((uint32_t)(0x12690430u));
  /* 126610c4 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x126610cau);
  /* 126610ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126610cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126610cf call 0x12663360 */
  push32(0x126610d4u); f_12663360();
  /* 126610d4 mov esi, esp */
  ESI = (ESP);
  /* 126610d6 push 0x1268b258 */
  push32((uint32_t)(0x1268b258u));
  /* 126610db push 0x12690438 */
  push32((uint32_t)(0x12690438u));
  /* 126610e0 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x126610e6u);
  /* 126610e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126610e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126610eb call 0x12663360 */
  push32(0x126610f0u); f_12663360();
  /* 126610f0 mov esi, esp */
  ESI = (ESP);
  /* 126610f2 push 0x1268b250 */
  push32((uint32_t)(0x1268b250u));
  /* 126610f7 push 0x12690440 */
  push32((uint32_t)(0x12690440u));
  /* 126610fc call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x12661102u);
  /* 12661102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661107 call 0x12663360 */
  push32(0x1266110cu); f_12663360();
  /* 1266110c mov esi, esp */
  ESI = (ESP);
  /* 1266110e push 0x1268b248 */
  push32((uint32_t)(0x1268b248u));
  /* 12661113 push 0x12690448 */
  push32((uint32_t)(0x12690448u));
  /* 12661118 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x1266111eu);
  /* 1266111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661123 call 0x12663360 */
  push32(0x12661128u); f_12663360();
  /* 12661128 mov esi, esp */
  ESI = (ESP);
  /* 1266112a push 0x1268b240 */
  push32((uint32_t)(0x1268b240u));
  /* 1266112f push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 12661134 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x1266113au);
  /* 1266113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266113f call 0x12663360 */
  push32(0x12661144u); f_12663360();
  /* 12661144 mov esi, esp */
  ESI = (ESP);
  /* 12661146 push 0x1268b238 */
  push32((uint32_t)(0x1268b238u));
  /* 1266114b push 0x12690458 */
  push32((uint32_t)(0x12690458u));
  /* 12661150 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x12661156u);
  /* 12661156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266115b call 0x12663360 */
  push32(0x12661160u); f_12663360();
  /* 12661160 mov esi, esp */
  ESI = (ESP);
  /* 12661162 push 0x1268b230 */
  push32((uint32_t)(0x1268b230u));
  /* 12661167 push 0x12690460 */
  push32((uint32_t)(0x12690460u));
  /* 1266116c call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x12661172u);
  /* 12661172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661177 call 0x12663360 */
  push32(0x1266117cu); f_12663360();
  /* 1266117c mov esi, esp */
  ESI = (ESP);
  /* 1266117e push 0x1268b228 */
  push32((uint32_t)(0x1268b228u));
  /* 12661183 push 0x12690468 */
  push32((uint32_t)(0x12690468u));
  /* 12661188 call dword ptr [0x12693488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693488))), 0x1266118eu);
  /* 1266118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661193 call 0x12663360 */
  push32(0x12661198u); f_12663360();
  /* 12661198 mov esi, esp */
  ESI = (ESP);
  /* 1266119a push 0x1268b220 */
  push32((uint32_t)(0x1268b220u));
  /* 1266119f push 0x126903e0 */
  push32((uint32_t)(0x126903e0u));
  /* 126611a4 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126611aau);
  /* 126611aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126611ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126611af call 0x12663360 */
  push32(0x126611b4u); f_12663360();
  /* 126611b4 mov esi, esp */
  ESI = (ESP);
  /* 126611b6 push 0x1268b218 */
  push32((uint32_t)(0x1268b218u));
  /* 126611bb push 0x126903f0 */
  push32((uint32_t)(0x126903f0u));
  /* 126611c0 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126611c6u);
  /* 126611c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126611c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126611cb call 0x12663360 */
  push32(0x126611d0u); f_12663360();
  /* 126611d0 mov esi, esp */
  ESI = (ESP);
  /* 126611d2 push 0x1268b210 */
  push32((uint32_t)(0x1268b210u));
  /* 126611d7 push 0x126903e8 */
  push32((uint32_t)(0x126903e8u));
  /* 126611dc call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126611e2u);
  /* 126611e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126611e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126611e7 call 0x12663360 */
  push32(0x126611ecu); f_12663360();
  /* 126611ec mov esi, esp */
  ESI = (ESP);
  /* 126611ee push 0x1268b208 */
  push32((uint32_t)(0x1268b208u));
  /* 126611f3 push 0x12690400 */
  push32((uint32_t)(0x12690400u));
  /* 126611f8 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126611feu);
  /* 126611fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661203 call 0x12663360 */
  push32(0x12661208u); f_12663360();
  /* 12661208 mov esi, esp */
  ESI = (ESP);
  /* 1266120a push 0x1268b200 */
  push32((uint32_t)(0x1268b200u));
  /* 1266120f push 0x126903f8 */
  push32((uint32_t)(0x126903f8u));
  /* 12661214 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266121au);
  /* 1266121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266121f call 0x12663360 */
  push32(0x12661224u); f_12663360();
  /* 12661224 mov esi, esp */
  ESI = (ESP);
  /* 12661226 push 0x1268b1f8 */
  push32((uint32_t)(0x1268b1f8u));
  /* 1266122b push 0x12690410 */
  push32((uint32_t)(0x12690410u));
  /* 12661230 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661236u);
  /* 12661236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266123b call 0x12663360 */
  push32(0x12661240u); f_12663360();
  /* 12661240 mov esi, esp */
  ESI = (ESP);
  /* 12661242 push 0x1268b1f0 */
  push32((uint32_t)(0x1268b1f0u));
  /* 12661247 push 0x12690408 */
  push32((uint32_t)(0x12690408u));
  /* 1266124c call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661252u);
  /* 12661252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661257 call 0x12663360 */
  push32(0x1266125cu); f_12663360();
  /* 1266125c mov esi, esp */
  ESI = (ESP);
  /* 1266125e push 0x1268b1e8 */
  push32((uint32_t)(0x1268b1e8u));
  /* 12661263 push 0x12690420 */
  push32((uint32_t)(0x12690420u));
  /* 12661268 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266126eu);
  /* 1266126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661273 call 0x12663360 */
  push32(0x12661278u); f_12663360();
  /* 12661278 mov esi, esp */
  ESI = (ESP);
  /* 1266127a push 0x1268b1e0 */
  push32((uint32_t)(0x1268b1e0u));
  /* 1266127f push 0x12690418 */
  push32((uint32_t)(0x12690418u));
  /* 12661284 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266128au);
  /* 1266128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266128f call 0x12663360 */
  push32(0x12661294u); f_12663360();
  /* 12661294 mov esi, esp */
  ESI = (ESP);
  /* 12661296 push 0x1268b1d4 */
  push32((uint32_t)(0x1268b1d4u));
  /* 1266129b push 0x126904c0 */
  push32((uint32_t)(0x126904c0u));
  /* 126612a0 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126612a6u);
  /* 126612a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126612a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126612ab call 0x12663360 */
  push32(0x126612b0u); f_12663360();
  /* 126612b0 mov esi, esp */
  ESI = (ESP);
  /* 126612b2 push 0x1268b1c8 */
  push32((uint32_t)(0x1268b1c8u));
  /* 126612b7 push 0x12690520 */
  push32((uint32_t)(0x12690520u));
  /* 126612bc call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126612c2u);
  /* 126612c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126612c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126612c7 call 0x12663360 */
  push32(0x126612ccu); f_12663360();
  /* 126612cc mov esi, esp */
  ESI = (ESP);
  /* 126612ce push 0x1268b1bc */
  push32((uint32_t)(0x1268b1bcu));
  /* 126612d3 push 0x12690528 */
  push32((uint32_t)(0x12690528u));
  /* 126612d8 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126612deu);
  /* 126612de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126612e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126612e3 call 0x12663360 */
  push32(0x126612e8u); f_12663360();
  /* 126612e8 mov esi, esp */
  ESI = (ESP);
  /* 126612ea push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 126612ef push 0x12690508 */
  push32((uint32_t)(0x12690508u));
  /* 126612f4 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126612fau);
  /* 126612fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126612fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126612ff call 0x12663360 */
  push32(0x12661304u); f_12663360();
  /* 12661304 mov esi, esp */
  ESI = (ESP);
  /* 12661306 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 1266130b push 0x12690518 */
  push32((uint32_t)(0x12690518u));
  /* 12661310 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661316u);
  /* 12661316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266131b call 0x12663360 */
  push32(0x12661320u); f_12663360();
  /* 12661320 mov esi, esp */
  ESI = (ESP);
  /* 12661322 push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 12661327 push 0x126904f0 */
  push32((uint32_t)(0x126904f0u));
  /* 1266132c call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661332u);
  /* 12661332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661337 call 0x12663360 */
  push32(0x1266133cu); f_12663360();
  /* 1266133c mov esi, esp */
  ESI = (ESP);
  /* 1266133e push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 12661343 push 0x12690500 */
  push32((uint32_t)(0x12690500u));
  /* 12661348 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266134eu);
  /* 1266134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661353 call 0x12663360 */
  push32(0x12661358u); f_12663360();
  /* 12661358 mov esi, esp */
  ESI = (ESP);
  /* 1266135a push 0x1268b180 */
  push32((uint32_t)(0x1268b180u));
  /* 1266135f push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 12661364 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266136au);
  /* 1266136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266136f call 0x12663360 */
  push32(0x12661374u); f_12663360();
  /* 12661374 mov esi, esp */
  ESI = (ESP);
  /* 12661376 push 0x1268b174 */
  push32((uint32_t)(0x1268b174u));
  /* 1266137b push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 12661380 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661386u);
  /* 12661386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266138b call 0x12663360 */
  push32(0x12661390u); f_12663360();
  /* 12661390 mov esi, esp */
  ESI = (ESP);
  /* 12661392 push 0x1268b168 */
  push32((uint32_t)(0x1268b168u));
  /* 12661397 push 0x12690538 */
  push32((uint32_t)(0x12690538u));
  /* 1266139c call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126613a2u);
  /* 126613a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126613a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126613a7 call 0x12663360 */
  push32(0x126613acu); f_12663360();
  /* 126613ac mov esi, esp */
  ESI = (ESP);
  /* 126613ae push 0x1268b15c */
  push32((uint32_t)(0x1268b15cu));
  /* 126613b3 push 0x12690510 */
  push32((uint32_t)(0x12690510u));
  /* 126613b8 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126613beu);
  /* 126613be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126613c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126613c3 call 0x12663360 */
  push32(0x126613c8u); f_12663360();
  /* 126613c8 mov esi, esp */
  ESI = (ESP);
  /* 126613ca push 0x1268b150 */
  push32((uint32_t)(0x1268b150u));
  /* 126613cf push 0x126904e8 */
  push32((uint32_t)(0x126904e8u));
  /* 126613d4 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126613dau);
  /* 126613da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126613dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126613df call 0x12663360 */
  push32(0x126613e4u); f_12663360();
  /* 126613e4 mov esi, esp */
  ESI = (ESP);
  /* 126613e6 push 0x1268b144 */
  push32((uint32_t)(0x1268b144u));
  /* 126613eb push 0x126904f8 */
  push32((uint32_t)(0x126904f8u));
  /* 126613f0 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x126613f6u);
  /* 126613f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126613f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126613fb call 0x12663360 */
  push32(0x12661400u); f_12663360();
  /* 12661400 mov esi, esp */
  ESI = (ESP);
  /* 12661402 push 0x1268b138 */
  push32((uint32_t)(0x1268b138u));
  /* 12661407 push 0x126904c8 */
  push32((uint32_t)(0x126904c8u));
  /* 1266140c call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x12661412u);
  /* 12661412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661417 call 0x12663360 */
  push32(0x1266141cu); f_12663360();
  /* 1266141c mov esi, esp */
  ESI = (ESP);
  /* 1266141e push 0x1268b12c */
  push32((uint32_t)(0x1268b12cu));
  /* 12661423 push 0x126904d8 */
  push32((uint32_t)(0x126904d8u));
  /* 12661428 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266142eu);
  /* 1266142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661433 call 0x12663360 */
  push32(0x12661438u); f_12663360();
  /* 12661438 mov esi, esp */
  ESI = (ESP);
  /* 1266143a push 0x1268b120 */
  push32((uint32_t)(0x1268b120u));
  /* 1266143f push 0x12690530 */
  push32((uint32_t)(0x12690530u));
  /* 12661444 call dword ptr [0x12693480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693480))), 0x1266144au);
  /* 1266144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266144f call 0x12663360 */
  push32(0x12661454u); f_12663360();
  /* 12661454 mov esi, esp */
  ESI = (ESP);
  /* 12661456 push 0x1268b110 */
  push32((uint32_t)(0x1268b110u));
  /* 1266145b push 0x12690478 */
  push32((uint32_t)(0x12690478u));
  /* 12661460 call dword ptr [0x12693490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693490))), 0x12661466u);
  /* 12661466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266146b call 0x12663360 */
  push32(0x12661470u); f_12663360();
  /* 12661470 mov esi, esp */
  ESI = (ESP);
  /* 12661472 push 0x1268b0f8 */
  push32((uint32_t)(0x1268b0f8u));
  /* 12661477 push 0x12690480 */
  push32((uint32_t)(0x12690480u));
  /* 1266147c call dword ptr [0x12693490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693490))), 0x12661482u);
  /* 12661482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661487 call 0x12663360 */
  push32(0x1266148cu); f_12663360();
  /* 1266148c mov esi, esp */
  ESI = (ESP);
  /* 1266148e push 0x1268b0e0 */
  push32((uint32_t)(0x1268b0e0u));
  /* 12661493 push 0x12690488 */
  push32((uint32_t)(0x12690488u));
  /* 12661498 call dword ptr [0x12693490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693490))), 0x1266149eu);
  /* 1266149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126614a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126614a3 call 0x12663360 */
  push32(0x126614a8u); f_12663360();
  /* 126614a8 mov esi, esp */
  ESI = (ESP);
  /* 126614aa push 0x1268b0c8 */
  push32((uint32_t)(0x1268b0c8u));
  /* 126614af push 0x12690470 */
  push32((uint32_t)(0x12690470u));
  /* 126614b4 call dword ptr [0x12693490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693490))), 0x126614bau);
  /* 126614ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126614bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126614bf call 0x12663360 */
  push32(0x126614c4u); f_12663360();
  /* 126614c4 mov esi, esp */
  ESI = (ESP);
  /* 126614c6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 126614c8 push 0x12690428 */
  push32((uint32_t)(0x12690428u));
  /* 126614cd call dword ptr [0x12693494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693494))), 0x126614d3u);
  /* 126614d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126614d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126614d8 call 0x12663360 */
  push32(0x126614ddu); f_12663360();
  /* 126614dd mov esi, esp */
  ESI = (ESP);
  /* 126614df push 0x1268b0b4 */
  push32((uint32_t)(0x1268b0b4u));
  /* 126614e4 push 0x12690490 */
  push32((uint32_t)(0x12690490u));
  /* 126614e9 call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x126614efu);
  /* 126614ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126614f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126614f4 call 0x12663360 */
  push32(0x126614f9u); f_12663360();
  /* 126614f9 mov esi, esp */
  ESI = (ESP);
  /* 126614fb push 0x1268b09c */
  push32((uint32_t)(0x1268b09cu));
  /* 12661500 push 0x12690498 */
  push32((uint32_t)(0x12690498u));
  /* 12661505 call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x1266150bu);
  /* 1266150b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266150e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661510 call 0x12663360 */
  push32(0x12661515u); f_12663360();
  /* 12661515 mov esi, esp */
  ESI = (ESP);
  /* 12661517 push 0x1268b084 */
  push32((uint32_t)(0x1268b084u));
  /* 1266151c push 0x126904a0 */
  push32((uint32_t)(0x126904a0u));
  /* 12661521 call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x12661527u);
  /* 12661527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266152a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266152c call 0x12663360 */
  push32(0x12661531u); f_12663360();
  /* 12661531 mov esi, esp */
  ESI = (ESP);
  /* 12661533 push 0x1268b06c */
  push32((uint32_t)(0x1268b06cu));
  /* 12661538 push 0x126904a8 */
  push32((uint32_t)(0x126904a8u));
  /* 1266153d call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x12661543u);
  /* 12661543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661548 call 0x12663360 */
  push32(0x1266154du); f_12663360();
  /* 1266154d mov esi, esp */
  ESI = (ESP);
  /* 1266154f push 0x1268b054 */
  push32((uint32_t)(0x1268b054u));
  /* 12661554 push 0x126904b0 */
  push32((uint32_t)(0x126904b0u));
  /* 12661559 call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x1266155fu);
  /* 1266155f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661564 call 0x12663360 */
  push32(0x12661569u); f_12663360();
  /* 12661569 mov esi, esp */
  ESI = (ESP);
  /* 1266156b push 0x1268b03c */
  push32((uint32_t)(0x1268b03cu));
  /* 12661570 push 0x126904b8 */
  push32((uint32_t)(0x126904b8u));
  /* 12661575 call dword ptr [0x1269348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269348c))), 0x1266157bu);
  /* 1266157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266157e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661580 call 0x12663360 */
  push32(0x12661585u); f_12663360();
  /* 12661585 mov esi, esp */
  ESI = (ESP);
  /* 12661587 push 0x1268b0b4 */
  push32((uint32_t)(0x1268b0b4u));
  /* 1266158c push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 12661591 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661597u);
  /* 12661597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266159a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266159c call 0x12663360 */
  push32(0x126615a1u); f_12663360();
  /* 126615a1 mov esi, esp */
  ESI = (ESP);
  /* 126615a3 push 0x1268b09c */
  push32((uint32_t)(0x1268b09cu));
  /* 126615a8 push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 126615ad call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126615b3u);
  /* 126615b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126615b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126615b8 call 0x12663360 */
  push32(0x126615bdu); f_12663360();
  /* 126615bd mov esi, esp */
  ESI = (ESP);
  /* 126615bf push 0x1268b084 */
  push32((uint32_t)(0x1268b084u));
  /* 126615c4 push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 126615c9 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126615cfu);
  /* 126615cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126615d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126615d4 call 0x12663360 */
  push32(0x126615d9u); f_12663360();
  /* 126615d9 mov esi, esp */
  ESI = (ESP);
  /* 126615db push 0x1268b06c */
  push32((uint32_t)(0x1268b06cu));
  /* 126615e0 push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 126615e5 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126615ebu);
  /* 126615eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126615ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126615f0 call 0x12663360 */
  push32(0x126615f5u); f_12663360();
  /* 126615f5 mov esi, esp */
  ESI = (ESP);
  /* 126615f7 push 0x1268b054 */
  push32((uint32_t)(0x1268b054u));
  /* 126615fc push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 12661601 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661607u);
  /* 12661607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266160a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266160c call 0x12663360 */
  push32(0x12661611u); f_12663360();
  /* 12661611 mov esi, esp */
  ESI = (ESP);
  /* 12661613 push 0x1268b03c */
  push32((uint32_t)(0x1268b03cu));
  /* 12661618 push 0x1268b1b0 */
  push32((uint32_t)(0x1268b1b0u));
  /* 1266161d call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661623u);
  /* 12661623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661628 call 0x12663360 */
  push32(0x1266162du); f_12663360();
  /* 1266162d mov esi, esp */
  ESI = (ESP);
  /* 1266162f push 0x1268b0b4 */
  push32((uint32_t)(0x1268b0b4u));
  /* 12661634 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 12661639 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266163fu);
  /* 1266163f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661644 call 0x12663360 */
  push32(0x12661649u); f_12663360();
  /* 12661649 mov esi, esp */
  ESI = (ESP);
  /* 1266164b push 0x1268b09c */
  push32((uint32_t)(0x1268b09cu));
  /* 12661650 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 12661655 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266165bu);
  /* 1266165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661660 call 0x12663360 */
  push32(0x12661665u); f_12663360();
  /* 12661665 mov esi, esp */
  ESI = (ESP);
  /* 12661667 push 0x1268b084 */
  push32((uint32_t)(0x1268b084u));
  /* 1266166c push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 12661671 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661677u);
  /* 12661677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266167c call 0x12663360 */
  push32(0x12661681u); f_12663360();
  /* 12661681 mov esi, esp */
  ESI = (ESP);
  /* 12661683 push 0x1268b06c */
  push32((uint32_t)(0x1268b06cu));
  /* 12661688 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 1266168d call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661693u);
  /* 12661693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661698 call 0x12663360 */
  push32(0x1266169du); f_12663360();
  /* 1266169d mov esi, esp */
  ESI = (ESP);
  /* 1266169f push 0x1268b054 */
  push32((uint32_t)(0x1268b054u));
  /* 126616a4 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 126616a9 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126616afu);
  /* 126616af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126616b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126616b4 call 0x12663360 */
  push32(0x126616b9u); f_12663360();
  /* 126616b9 mov esi, esp */
  ESI = (ESP);
  /* 126616bb push 0x1268b03c */
  push32((uint32_t)(0x1268b03cu));
  /* 126616c0 push 0x1268b1a4 */
  push32((uint32_t)(0x1268b1a4u));
  /* 126616c5 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126616cbu);
  /* 126616cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126616ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126616d0 call 0x12663360 */
  push32(0x126616d5u); f_12663360();
  /* 126616d5 mov esi, esp */
  ESI = (ESP);
  /* 126616d7 push 0x1268b0b4 */
  push32((uint32_t)(0x1268b0b4u));
  /* 126616dc push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 126616e1 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126616e7u);
  /* 126616e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126616ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126616ec call 0x12663360 */
  push32(0x126616f1u); f_12663360();
  /* 126616f1 mov esi, esp */
  ESI = (ESP);
  /* 126616f3 push 0x1268b09c */
  push32((uint32_t)(0x1268b09cu));
  /* 126616f8 push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 126616fd call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661703u);
  /* 12661703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661708 call 0x12663360 */
  push32(0x1266170du); f_12663360();
  /* 1266170d mov esi, esp */
  ESI = (ESP);
  /* 1266170f push 0x1268b084 */
  push32((uint32_t)(0x1268b084u));
  /* 12661714 push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 12661719 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266171fu);
  /* 1266171f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661724 call 0x12663360 */
  push32(0x12661729u); f_12663360();
  /* 12661729 mov esi, esp */
  ESI = (ESP);
  /* 1266172b push 0x1268b06c */
  push32((uint32_t)(0x1268b06cu));
  /* 12661730 push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 12661735 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266173bu);
  /* 1266173b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266173e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661740 call 0x12663360 */
  push32(0x12661745u); f_12663360();
  /* 12661745 mov esi, esp */
  ESI = (ESP);
  /* 12661747 push 0x1268b054 */
  push32((uint32_t)(0x1268b054u));
  /* 1266174c push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 12661751 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661757u);
  /* 12661757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266175c call 0x12663360 */
  push32(0x12661761u); f_12663360();
  /* 12661761 mov esi, esp */
  ESI = (ESP);
  /* 12661763 push 0x1268b03c */
  push32((uint32_t)(0x1268b03cu));
  /* 12661768 push 0x1268b198 */
  push32((uint32_t)(0x1268b198u));
  /* 1266176d call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x12661773u);
  /* 12661773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661778 call 0x12663360 */
  push32(0x1266177du); f_12663360();
  /* 1266177d mov esi, esp */
  ESI = (ESP);
  /* 1266177f push 0x1268b0b4 */
  push32((uint32_t)(0x1268b0b4u));
  /* 12661784 push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 12661789 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266178fu);
  /* 1266178f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661794 call 0x12663360 */
  push32(0x12661799u); f_12663360();
  /* 12661799 mov esi, esp */
  ESI = (ESP);
  /* 1266179b push 0x1268b09c */
  push32((uint32_t)(0x1268b09cu));
  /* 126617a0 push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 126617a5 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126617abu);
  /* 126617ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126617ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126617b0 call 0x12663360 */
  push32(0x126617b5u); f_12663360();
  /* 126617b5 mov esi, esp */
  ESI = (ESP);
  /* 126617b7 push 0x1268b084 */
  push32((uint32_t)(0x1268b084u));
  /* 126617bc push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 126617c1 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126617c7u);
  /* 126617c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126617ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126617cc call 0x12663360 */
  push32(0x126617d1u); f_12663360();
  /* 126617d1 mov esi, esp */
  ESI = (ESP);
  /* 126617d3 push 0x1268b06c */
  push32((uint32_t)(0x1268b06cu));
  /* 126617d8 push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 126617dd call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126617e3u);
  /* 126617e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126617e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126617e8 call 0x12663360 */
  push32(0x126617edu); f_12663360();
  /* 126617ed mov esi, esp */
  ESI = (ESP);
  /* 126617ef push 0x1268b054 */
  push32((uint32_t)(0x1268b054u));
  /* 126617f4 push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 126617f9 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x126617ffu);
  /* 126617ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661804 call 0x12663360 */
  push32(0x12661809u); f_12663360();
  /* 12661809 mov esi, esp */
  ESI = (ESP);
  /* 1266180b push 0x1268b03c */
  push32((uint32_t)(0x1268b03cu));
  /* 12661810 push 0x1268b18c */
  push32((uint32_t)(0x1268b18cu));
  /* 12661815 call dword ptr [0x1269349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269349c))), 0x1266181bu);
  /* 1266181b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266181e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661820 call 0x12663360 */
  push32(0x12661825u); f_12663360();
  /* 12661825 mov esi, esp */
  ESI = (ESP);
  /* 12661827 push 0x1268b030 */
  push32((uint32_t)(0x1268b030u));
  /* 1266182c push 4 */
  push32((uint32_t)(0x4u));
  /* 1266182e call dword ptr [0x126934a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126934a0))), 0x12661834u);
  /* 12661834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661839 call 0x12663360 */
  push32(0x1266183eu); f_12663360();
  /* 1266183e mov esi, esp */
  ESI = (ESP);
  /* 12661840 push 0x1268b024 */
  push32((uint32_t)(0x1268b024u));
  /* 12661845 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661847 call dword ptr [0x126934a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126934a0))), 0x1266184du);
  /* 1266184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661850 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661852 call 0x12663360 */
  push32(0x12661857u); f_12663360();
  /* 12661857 mov esi, esp */
  ESI = (ESP);
  /* 12661859 push 0x1268b01c */
  push32((uint32_t)(0x1268b01cu));
  /* 1266185e push 5 */
  push32((uint32_t)(0x5u));
  /* 12661860 call dword ptr [0x126934a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126934a0))), 0x12661866u);
  /* 12661866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266186b call 0x12663360 */
  push32(0x12661870u); f_12663360();
  /* 12661870 mov esi, esp */
  ESI = (ESP);
  /* 12661872 call dword ptr [0x12693498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693498))), 0x12661878u);
  /* 12661878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266187a call 0x12663360 */
  push32(0x1266187fu); f_12663360();
  /* 1266187f pop edi */
  EDI = (pop32());
  /* 12661880 pop esi */
  ESI = (pop32());
  /* 12661881 pop ebx */
  EBX = (pop32());
  /* 12661882 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661885 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661887 call 0x12663360 */
  push32(0x1266188cu); f_12663360();
  /* 1266188c mov esp, ebp */
  ESP = (EBP);
  /* 1266188e pop ebp */
  EBP = (pop32());
  /* 1266188f ret  */
  ESPCHK(0x126610a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a90 @ 0x12661a90 (4766 bytes, 1423 insns) */
void f_12661a90(void) {
  FTRACE(0x12661a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12661a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12661a91 mov ebp, esp */
  EBP = (ESP);
  /* 12661a93 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12661a96 push ebx */
  push32((uint32_t)(EBX));
  /* 12661a97 push esi */
  push32((uint32_t)(ESI));
  /* 12661a98 push edi */
  push32((uint32_t)(EDI));
  /* 12661a99 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12661a9c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12661aa1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12661aa6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12661aa8 mov esi, esp */
  ESI = (ESP);
  /* 12661aaa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12661aac call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12661ab2u);
  /* 12661ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ab7 call 0x12663360 */
  push32(0x12661abcu); f_12663360();
  /* 12661abc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12661ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12661ac3 je 0x12661f62 */
  if (C.zf) goto L_12661f62;
  /* 12661ac9 mov esi, esp */
  ESI = (ESP);
  /* 12661acb push 0 */
  push32((uint32_t)(0x0u));
  /* 12661acd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12661acf call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12661ad5u);
  /* 12661ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ad8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ada call 0x12663360 */
  push32(0x12661adfu); f_12663360();
  /* 12661adf mov esi, esp */
  ESI = (ESP);
  /* 12661ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661ae5 call dword ptr [0x12693420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693420))), 0x12661aebu);
  /* 12661aeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661af0 call 0x12663360 */
  push32(0x12661af5u); f_12663360();
  /* 12661af5 mov esi, esp */
  ESI = (ESP);
  /* 12661af7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12661af9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661afb call dword ptr [0x12693420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693420))), 0x12661b01u);
  /* 12661b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b06 call 0x12663360 */
  push32(0x12661b0bu); f_12663360();
  /* 12661b0b mov esi, esp */
  ESI = (ESP);
  /* 12661b0d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12661b0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12661b11 call dword ptr [0x12693420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693420))), 0x12661b17u);
  /* 12661b17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b1c call 0x12663360 */
  push32(0x12661b21u); f_12663360();
  /* 12661b21 mov esi, esp */
  ESI = (ESP);
  /* 12661b23 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12661b25 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661b27 call dword ptr [0x12693420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693420))), 0x12661b2du);
  /* 12661b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b32 call 0x12663360 */
  push32(0x12661b37u); f_12663360();
  /* 12661b37 mov esi, esp */
  ESI = (ESP);
  /* 12661b39 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661b3e push 3 */
  push32((uint32_t)(0x3u));
  /* 12661b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661b42 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661b48u);
  /* 12661b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b4d call 0x12663360 */
  push32(0x12661b52u); f_12663360();
  /* 12661b52 mov esi, esp */
  ESI = (ESP);
  /* 12661b54 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661b59 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12661b5d call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661b63u);
  /* 12661b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b68 call 0x12663360 */
  push32(0x12661b6du); f_12663360();
  /* 12661b6d mov esi, esp */
  ESI = (ESP);
  /* 12661b6f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661b78 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661b7eu);
  /* 12661b7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b83 call 0x12663360 */
  push32(0x12661b88u); f_12663360();
  /* 12661b88 mov esi, esp */
  ESI = (ESP);
  /* 12661b8a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 12661b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661b93 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661b99u);
  /* 12661b99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661b9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661b9e call 0x12663360 */
  push32(0x12661ba3u); f_12663360();
  /* 12661ba3 mov esi, esp */
  ESI = (ESP);
  /* 12661ba5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661baa push 5 */
  push32((uint32_t)(0x5u));
  /* 12661bac push 0 */
  push32((uint32_t)(0x0u));
  /* 12661bae call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661bb4u);
  /* 12661bb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661bb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661bb9 call 0x12663360 */
  push32(0x12661bbeu); f_12663360();
  /* 12661bbe mov esi, esp */
  ESI = (ESP);
  /* 12661bc0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661bc5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661bc9 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661bcfu);
  /* 12661bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661bd4 call 0x12663360 */
  push32(0x12661bd9u); f_12663360();
  /* 12661bd9 mov esi, esp */
  ESI = (ESP);
  /* 12661bdb push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 12661be0 push 3 */
  push32((uint32_t)(0x3u));
  /* 12661be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661be4 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661beau);
  /* 12661bea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661bef call 0x12663360 */
  push32(0x12661bf4u); f_12663360();
  /* 12661bf4 mov esi, esp */
  ESI = (ESP);
  /* 12661bf6 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12661bfb push 1 */
  push32((uint32_t)(0x1u));
  /* 12661bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 12661bff call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c05u);
  /* 12661c05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c0a call 0x12663360 */
  push32(0x12661c0fu); f_12663360();
  /* 12661c0f mov esi, esp */
  ESI = (ESP);
  /* 12661c11 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12661c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661c18 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661c1a call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c20u);
  /* 12661c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c25 call 0x12663360 */
  push32(0x12661c2au); f_12663360();
  /* 12661c2a mov esi, esp */
  ESI = (ESP);
  /* 12661c2c push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12661c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12661c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661c35 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c3bu);
  /* 12661c3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c40 call 0x12663360 */
  push32(0x12661c45u); f_12663360();
  /* 12661c45 mov esi, esp */
  ESI = (ESP);
  /* 12661c47 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12661c4c push 5 */
  push32((uint32_t)(0x5u));
  /* 12661c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12661c50 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c56u);
  /* 12661c56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c5b call 0x12663360 */
  push32(0x12661c60u); f_12663360();
  /* 12661c60 mov esi, esp */
  ESI = (ESP);
  /* 12661c62 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12661c67 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661c69 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661c6b call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c71u);
  /* 12661c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c76 call 0x12663360 */
  push32(0x12661c7bu); f_12663360();
  /* 12661c7b mov esi, esp */
  ESI = (ESP);
  /* 12661c7d push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 12661c82 push 3 */
  push32((uint32_t)(0x3u));
  /* 12661c84 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661c86 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661c8cu);
  /* 12661c8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661c91 call 0x12663360 */
  push32(0x12661c96u); f_12663360();
  /* 12661c96 mov esi, esp */
  ESI = (ESP);
  /* 12661c98 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12661c9f push 4 */
  push32((uint32_t)(0x4u));
  /* 12661ca1 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661ca7u);
  /* 12661ca7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661caa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661cac call 0x12663360 */
  push32(0x12661cb1u); f_12663360();
  /* 12661cb1 mov esi, esp */
  ESI = (ESP);
  /* 12661cb3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661cba push 4 */
  push32((uint32_t)(0x4u));
  /* 12661cbc call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661cc2u);
  /* 12661cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661cc7 call 0x12663360 */
  push32(0x12661cccu); f_12663360();
  /* 12661ccc mov esi, esp */
  ESI = (ESP);
  /* 12661cce push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12661cd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661cd7 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661cddu);
  /* 12661cdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ce2 call 0x12663360 */
  push32(0x12661ce7u); f_12663360();
  /* 12661ce7 mov esi, esp */
  ESI = (ESP);
  /* 12661ce9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661cee push 5 */
  push32((uint32_t)(0x5u));
  /* 12661cf0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661cf2 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661cf8u);
  /* 12661cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661cfd call 0x12663360 */
  push32(0x12661d02u); f_12663360();
  /* 12661d02 mov esi, esp */
  ESI = (ESP);
  /* 12661d04 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12661d09 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661d0b push 4 */
  push32((uint32_t)(0x4u));
  /* 12661d0d call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d13u);
  /* 12661d13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d18 call 0x12663360 */
  push32(0x12661d1du); f_12663360();
  /* 12661d1d mov esi, esp */
  ESI = (ESP);
  /* 12661d1f push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661d24 push 3 */
  push32((uint32_t)(0x3u));
  /* 12661d26 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d28 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d2eu);
  /* 12661d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d33 call 0x12663360 */
  push32(0x12661d38u); f_12663360();
  /* 12661d38 mov esi, esp */
  ESI = (ESP);
  /* 12661d3a push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12661d41 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d43 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d49u);
  /* 12661d49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d4e call 0x12663360 */
  push32(0x12661d53u); f_12663360();
  /* 12661d53 mov esi, esp */
  ESI = (ESP);
  /* 12661d55 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12661d5c push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d5e call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d64u);
  /* 12661d64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d69 call 0x12663360 */
  push32(0x12661d6eu); f_12663360();
  /* 12661d6e mov esi, esp */
  ESI = (ESP);
  /* 12661d70 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12661d77 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d79 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d7fu);
  /* 12661d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d84 call 0x12663360 */
  push32(0x12661d89u); f_12663360();
  /* 12661d89 mov esi, esp */
  ESI = (ESP);
  /* 12661d8b push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661d90 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d92 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661d94 call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661d9au);
  /* 12661d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661d9f call 0x12663360 */
  push32(0x12661da4u); f_12663360();
  /* 12661da4 mov esi, esp */
  ESI = (ESP);
  /* 12661da6 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 12661dab push 4 */
  push32((uint32_t)(0x4u));
  /* 12661dad push 5 */
  push32((uint32_t)(0x5u));
  /* 12661daf call dword ptr [0x12693430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693430))), 0x12661db5u);
  /* 12661db5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661db8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661dba call 0x12663360 */
  push32(0x12661dbfu); f_12663360();
  /* 12661dbf mov esi, esp */
  ESI = (ESP);
  /* 12661dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661dc3 push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 12661dc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661dca call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661dd0u);
  /* 12661dd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661dd5 call 0x12663360 */
  push32(0x12661ddau); f_12663360();
  /* 12661dda mov esi, esp */
  ESI = (ESP);
  /* 12661ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 12661dde push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 12661de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661de5 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661debu);
  /* 12661deb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661df0 call 0x12663360 */
  push32(0x12661df5u); f_12663360();
  /* 12661df5 mov esi, esp */
  ESI = (ESP);
  /* 12661df7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12661df9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661dfb call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x12661e01u);
  /* 12661e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e06 call 0x12663360 */
  push32(0x12661e0bu); f_12663360();
  /* 12661e0b mov esi, esp */
  ESI = (ESP);
  /* 12661e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12661e0f push 0x12690538 */
  push32((uint32_t)(0x12690538u));
  /* 12661e14 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e16 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661e1cu);
  /* 12661e1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e21 call 0x12663360 */
  push32(0x12661e26u); f_12663360();
  /* 12661e26 mov esi, esp */
  ESI = (ESP);
  /* 12661e28 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661e2a push 0x12690510 */
  push32((uint32_t)(0x12690510u));
  /* 12661e2f push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e31 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661e37u);
  /* 12661e37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e3c call 0x12663360 */
  push32(0x12661e41u); f_12663360();
  /* 12661e41 mov esi, esp */
  ESI = (ESP);
  /* 12661e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661e45 push 0x126904e8 */
  push32((uint32_t)(0x126904e8u));
  /* 12661e4a push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e4c call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661e52u);
  /* 12661e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e57 call 0x12663360 */
  push32(0x12661e5cu); f_12663360();
  /* 12661e5c mov esi, esp */
  ESI = (ESP);
  /* 12661e5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12661e60 push 0x126904f8 */
  push32((uint32_t)(0x126904f8u));
  /* 12661e65 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e67 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661e6du);
  /* 12661e6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e72 call 0x12663360 */
  push32(0x12661e77u); f_12663360();
  /* 12661e77 mov esi, esp */
  ESI = (ESP);
  /* 12661e79 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661e7b push 0x126904c8 */
  push32((uint32_t)(0x126904c8u));
  /* 12661e80 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e82 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661e88u);
  /* 12661e88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661e8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661e8d call 0x12663360 */
  push32(0x12661e92u); f_12663360();
  /* 12661e92 mov esi, esp */
  ESI = (ESP);
  /* 12661e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661e96 push 0x126904d8 */
  push32((uint32_t)(0x126904d8u));
  /* 12661e9b push 4 */
  push32((uint32_t)(0x4u));
  /* 12661e9d call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661ea3u);
  /* 12661ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ea8 call 0x12663360 */
  push32(0x12661eadu); f_12663360();
  /* 12661ead mov esi, esp */
  ESI = (ESP);
  /* 12661eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12661eb1 push 0x12690530 */
  push32((uint32_t)(0x12690530u));
  /* 12661eb6 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661eb8 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12661ebeu);
  /* 12661ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ec1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ec3 call 0x12663360 */
  push32(0x12661ec8u); f_12663360();
  /* 12661ec8 mov esi, esp */
  ESI = (ESP);
  /* 12661eca push 4 */
  push32((uint32_t)(0x4u));
  /* 12661ecc call dword ptr [0x1269343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269343c))), 0x12661ed2u);
  /* 12661ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ed7 call 0x12663360 */
  push32(0x12661edcu); f_12663360();
  /* 12661edc mov esi, esp */
  ESI = (ESP);
  /* 12661ede push 0 */
  push32((uint32_t)(0x0u));
  /* 12661ee0 push 0x12690478 */
  push32((uint32_t)(0x12690478u));
  /* 12661ee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661ee7 call dword ptr [0x12693440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693440))), 0x12661eedu);
  /* 12661eed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661ef0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ef2 call 0x12663360 */
  push32(0x12661ef7u); f_12663360();
  /* 12661ef7 mov esi, esp */
  ESI = (ESP);
  /* 12661ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661efb push 0x12690478 */
  push32((uint32_t)(0x12690478u));
  /* 12661f00 push 4 */
  push32((uint32_t)(0x4u));
  /* 12661f02 call dword ptr [0x12693440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693440))), 0x12661f08u);
  /* 12661f08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f0d call 0x12663360 */
  push32(0x12661f12u); f_12663360();
  /* 12661f12 mov esi, esp */
  ESI = (ESP);
  /* 12661f14 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12661f16 call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12661f1cu);
  /* 12661f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f21 call 0x12663360 */
  push32(0x12661f26u); f_12663360();
  /* 12661f26 mov esi, esp */
  ESI = (ESP);
  /* 12661f28 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12661f2a call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12661f30u);
  /* 12661f30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f35 call 0x12663360 */
  push32(0x12661f3au); f_12663360();
  /* 12661f3a mov esi, esp */
  ESI = (ESP);
  /* 12661f3c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12661f3e call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12661f44u);
  /* 12661f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f49 call 0x12663360 */
  push32(0x12661f4eu); f_12663360();
  /* 12661f4e mov esi, esp */
  ESI = (ESP);
  /* 12661f50 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12661f52 call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12661f58u);
  /* 12661f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f5d call 0x12663360 */
  push32(0x12661f62u); f_12663360();
L_12661f62:;
  /* 12661f62 mov esi, esp */
  ESI = (ESP);
  /* 12661f64 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12661f66 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12661f6cu);
  /* 12661f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f71 call 0x12663360 */
  push32(0x12661f76u); f_12663360();
  /* 12661f76 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12661f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12661f7d je 0x12661fc3 */
  if (C.zf) goto L_12661fc3;
  /* 12661f7f mov esi, esp */
  ESI = (ESP);
  /* 12661f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661f83 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12661f85 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12661f8bu);
  /* 12661f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661f90 call 0x12663360 */
  push32(0x12661f95u); f_12663360();
  /* 12661f95 mov esi, esp */
  ESI = (ESP);
  /* 12661f97 push 0x1268b2d8 */
  push32((uint32_t)(0x1268b2d8u));
  /* 12661f9c call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12661fa2u);
  /* 12661fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661fa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661fa7 call 0x12663360 */
  push32(0x12661facu); f_12663360();
  /* 12661fac mov esi, esp */
  ESI = (ESP);
  /* 12661fae push 0x1268b2d0 */
  push32((uint32_t)(0x1268b2d0u));
  /* 12661fb3 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12661fb9u);
  /* 12661fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661fbe call 0x12663360 */
  push32(0x12661fc3u); f_12663360();
L_12661fc3:;
  /* 12661fc3 mov esi, esp */
  ESI = (ESP);
  /* 12661fc5 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12661fc7 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12661fcdu);
  /* 12661fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661fd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661fd2 call 0x12663360 */
  push32(0x12661fd7u); f_12663360();
  /* 12661fd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12661fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12661fde je 0x12662017 */
  if (C.zf) goto L_12662017;
  /* 12661fe0 mov esi, esp */
  ESI = (ESP);
  /* 12661fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12661fe4 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12661fe6 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12661fecu);
  /* 12661fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12661fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12661ff1 call 0x12663360 */
  push32(0x12661ff6u); f_12663360();
  /* 12661ff6 mov esi, esp */
  ESI = (ESP);
  /* 12661ff8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12661ffa push 2 */
  push32((uint32_t)(0x2u));
  /* 12661ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 12661ffe push 2 */
  push32((uint32_t)(0x2u));
  /* 12662000 push 0x1268b2c4 */
  push32((uint32_t)(0x1268b2c4u));
  /* 12662005 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662007 call dword ptr [0x1269344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269344c))), 0x1266200du);
  /* 1266200d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662012 call 0x12663360 */
  push32(0x12662017u); f_12663360();
L_12662017:;
  /* 12662017 mov esi, esp */
  ESI = (ESP);
  /* 12662019 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1266201b call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662021u);
  /* 12662021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662024 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662026 call 0x12663360 */
  push32(0x1266202bu); f_12663360();
  /* 1266202b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662032 je 0x1266206b */
  if (C.zf) goto L_1266206b;
  /* 12662034 mov esi, esp */
  ESI = (ESP);
  /* 12662036 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662038 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1266203a call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662040u);
  /* 12662040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662045 call 0x12663360 */
  push32(0x1266204au); f_12663360();
  /* 1266204a mov esi, esp */
  ESI = (ESP);
  /* 1266204c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266204e push 2 */
  push32((uint32_t)(0x2u));
  /* 12662050 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662052 push 2 */
  push32((uint32_t)(0x2u));
  /* 12662054 push 0x1268b2c4 */
  push32((uint32_t)(0x1268b2c4u));
  /* 12662059 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266205b call dword ptr [0x1269344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269344c))), 0x12662061u);
  /* 12662061 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662066 call 0x12663360 */
  push32(0x1266206bu); f_12663360();
L_1266206b:;
  /* 1266206b mov esi, esp */
  ESI = (ESP);
  /* 1266206d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1266206f call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662075u);
  /* 12662075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662078 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266207a call 0x12663360 */
  push32(0x1266207fu); f_12663360();
  /* 1266207f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662086 je 0x12662122 */
  if (C.zf) goto L_12662122;
  /* 1266208c mov esi, esp */
  ESI = (ESP);
  /* 1266208e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12662090 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662096u);
  /* 12662096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266209b call 0x12663360 */
  push32(0x126620a0u); f_12663360();
  /* 126620a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126620a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126620a7 je 0x12662122 */
  if (C.zf) goto L_12662122;
  /* 126620a9 mov esi, esp */
  ESI = (ESP);
  /* 126620ab push 0 */
  push32((uint32_t)(0x0u));
  /* 126620ad push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 126620b2 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126620b8u);
  /* 126620b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126620bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126620bd call 0x12663360 */
  push32(0x126620c2u); f_12663360();
  /* 126620c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126620c4 jle 0x12662122 */
  if ((C.zf||C.sf!=C.of)) goto L_12662122;
  /* 126620c6 mov esi, esp */
  ESI = (ESP);
  /* 126620c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126620ca push 0x5d */
  push32((uint32_t)(0x5du));
  /* 126620cc call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126620d2u);
  /* 126620d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126620d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126620d7 call 0x12663360 */
  push32(0x126620dcu); f_12663360();
  /* 126620dc mov esi, esp */
  ESI = (ESP);
  /* 126620de push 0x1268b2bc */
  push32((uint32_t)(0x1268b2bcu));
  /* 126620e3 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x126620e9u);
  /* 126620e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126620ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126620ee call 0x12663360 */
  push32(0x126620f3u); f_12663360();
  /* 126620f3 mov esi, esp */
  ESI = (ESP);
  /* 126620f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 126620f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126620f9 push 0x12690448 */
  push32((uint32_t)(0x12690448u));
  /* 126620fe call dword ptr [0x12693454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693454))), 0x12662104u);
  /* 12662104 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662107 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662109 call 0x12663360 */
  push32(0x1266210eu); f_12663360();
  /* 1266210e mov esi, esp */
  ESI = (ESP);
  /* 12662110 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12662112 call dword ptr [0x12693458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693458))), 0x12662118u);
  /* 12662118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266211b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266211d call 0x12663360 */
  push32(0x12662122u); f_12663360();
L_12662122:;
  /* 12662122 mov esi, esp */
  ESI = (ESP);
  /* 12662124 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12662126 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x1266212cu);
  /* 1266212c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266212f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662131 call 0x12663360 */
  push32(0x12662136u); f_12663360();
  /* 12662136 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266213b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266213d je 0x126621aa */
  if (C.zf) goto L_126621aa;
  /* 1266213f mov esi, esp */
  ESI = (ESP);
  /* 12662141 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662143 push 0x12690458 */
  push32((uint32_t)(0x12690458u));
  /* 12662148 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x1266214eu);
  /* 1266214e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662153 call 0x12663360 */
  push32(0x12662158u); f_12663360();
  /* 12662158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266215a jle 0x126621aa */
  if ((C.zf||C.sf!=C.of)) goto L_126621aa;
  /* 1266215c mov esi, esp */
  ESI = (ESP);
  /* 1266215e push 0 */
  push32((uint32_t)(0x0u));
  /* 12662160 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12662162 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662168u);
  /* 12662168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266216b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266216d call 0x12663360 */
  push32(0x12662172u); f_12663360();
  /* 12662172 mov esi, esp */
  ESI = (ESP);
  /* 12662174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662176 push 0x126904d8 */
  push32((uint32_t)(0x126904d8u));
  /* 1266217b push 4 */
  push32((uint32_t)(0x4u));
  /* 1266217d call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662183u);
  /* 12662183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662186 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662188 call 0x12663360 */
  push32(0x1266218du); f_12663360();
  /* 1266218d mov esi, esp */
  ESI = (ESP);
  /* 1266218f push 0 */
  push32((uint32_t)(0x0u));
  /* 12662191 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662193 push 0x12690458 */
  push32((uint32_t)(0x12690458u));
  /* 12662198 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266219a call dword ptr [0x12693450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693450))), 0x126621a0u);
  /* 126621a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126621a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126621a5 call 0x12663360 */
  push32(0x126621aau); f_12663360();
L_126621aa:;
  /* 126621aa mov esi, esp */
  ESI = (ESP);
  /* 126621ac push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 126621ae call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126621b4u);
  /* 126621b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126621b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126621b9 call 0x12663360 */
  push32(0x126621beu); f_12663360();
  /* 126621be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126621c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126621c5 je 0x126622a1 */
  if (C.zf) goto L_126622a1;
  /* 126621cb mov esi, esp */
  ESI = (ESP);
  /* 126621cd push 0 */
  push32((uint32_t)(0x0u));
  /* 126621cf push 0x12690448 */
  push32((uint32_t)(0x12690448u));
  /* 126621d4 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126621dau);
  /* 126621da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126621dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126621df call 0x12663360 */
  push32(0x126621e4u); f_12663360();
  /* 126621e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126621e6 jle 0x126622a1 */
  if ((C.zf||C.sf!=C.of)) goto L_126622a1;
  /* 126621ec mov esi, esp */
  ESI = (ESP);
  /* 126621ee push 0 */
  push32((uint32_t)(0x0u));
  /* 126621f0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 126621f2 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126621f8u);
  /* 126621f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126621fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126621fd call 0x12663360 */
  push32(0x12662202u); f_12663360();
  /* 12662202 mov esi, esp */
  ESI = (ESP);
  /* 12662204 push 0x1268b2b4 */
  push32((uint32_t)(0x1268b2b4u));
  /* 12662209 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x1266220fu);
  /* 1266220f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662212 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662214 call 0x12663360 */
  push32(0x12662219u); f_12663360();
  /* 12662219 mov esi, esp */
  ESI = (ESP);
  /* 1266221b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266221d push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 12662222 push 5 */
  push32((uint32_t)(0x5u));
  /* 12662224 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x1266222au);
  /* 1266222a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266222d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266222f call 0x12663360 */
  push32(0x12662234u); f_12663360();
  /* 12662234 mov esi, esp */
  ESI = (ESP);
  /* 12662236 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662238 push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 1266223d push 5 */
  push32((uint32_t)(0x5u));
  /* 1266223f call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662245u);
  /* 12662245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662248 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266224a call 0x12663360 */
  push32(0x1266224fu); f_12663360();
  /* 1266224f mov esi, esp */
  ESI = (ESP);
  /* 12662251 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662253 push 5 */
  push32((uint32_t)(0x5u));
  /* 12662255 call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x1266225bu);
  /* 1266225b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266225e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662260 call 0x12663360 */
  push32(0x12662265u); f_12663360();
  /* 12662265 mov esi, esp */
  ESI = (ESP);
  /* 12662267 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12662269 call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x1266226fu);
  /* 1266226f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662274 call 0x12663360 */
  push32(0x12662279u); f_12663360();
  /* 12662279 mov esi, esp */
  ESI = (ESP);
  /* 1266227b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1266227d call dword ptr [0x12693458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693458))), 0x12662283u);
  /* 12662283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662286 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662288 call 0x12663360 */
  push32(0x1266228du); f_12663360();
  /* 1266228d mov esi, esp */
  ESI = (ESP);
  /* 1266228f push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12662291 call dword ptr [0x12693458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693458))), 0x12662297u);
  /* 12662297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266229a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266229c call 0x12663360 */
  push32(0x126622a1u); f_12663360();
L_126622a1:;
  /* 126622a1 mov esi, esp */
  ESI = (ESP);
  /* 126622a3 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 126622a5 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126622abu);
  /* 126622ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126622ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126622b0 call 0x12663360 */
  push32(0x126622b5u); f_12663360();
  /* 126622b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126622ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126622bc je 0x126623b6 */
  if (C.zf) goto L_126623b6;
  /* 126622c2 mov esi, esp */
  ESI = (ESP);
  /* 126622c4 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 126622c6 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126622ccu);
  /* 126622cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126622cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126622d1 call 0x12663360 */
  push32(0x126622d6u); f_12663360();
  /* 126622d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126622db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126622dd jne 0x126623b6 */
  if (!C.zf) goto L_126623b6;
  /* 126622e3 mov esi, esp */
  ESI = (ESP);
  /* 126622e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126622e7 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 126622e9 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126622efu);
  /* 126622ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126622f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126622f4 call 0x12663360 */
  push32(0x126622f9u); f_12663360();
  /* 126622f9 mov esi, esp */
  ESI = (ESP);
  /* 126622fb push 0 */
  push32((uint32_t)(0x0u));
  /* 126622fd push 0x12690538 */
  push32((uint32_t)(0x12690538u));
  /* 12662302 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662304 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x1266230au);
  /* 1266230a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266230d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266230f call 0x12663360 */
  push32(0x12662314u); f_12663360();
  /* 12662314 mov esi, esp */
  ESI = (ESP);
  /* 12662316 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662318 push 0x12690510 */
  push32((uint32_t)(0x12690510u));
  /* 1266231d push 4 */
  push32((uint32_t)(0x4u));
  /* 1266231f call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662325u);
  /* 12662325 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662328 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266232a call 0x12663360 */
  push32(0x1266232fu); f_12663360();
  /* 1266232f mov esi, esp */
  ESI = (ESP);
  /* 12662331 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662333 push 0x126904e8 */
  push32((uint32_t)(0x126904e8u));
  /* 12662338 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266233a call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662340u);
  /* 12662340 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662345 call 0x12663360 */
  push32(0x1266234au); f_12663360();
  /* 1266234a mov esi, esp */
  ESI = (ESP);
  /* 1266234c push 1 */
  push32((uint32_t)(0x1u));
  /* 1266234e push 0x126904f8 */
  push32((uint32_t)(0x126904f8u));
  /* 12662353 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662355 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x1266235bu);
  /* 1266235b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266235e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662360 call 0x12663360 */
  push32(0x12662365u); f_12663360();
  /* 12662365 mov esi, esp */
  ESI = (ESP);
  /* 12662367 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662369 push 0x12690530 */
  push32((uint32_t)(0x12690530u));
  /* 1266236e push 4 */
  push32((uint32_t)(0x4u));
  /* 12662370 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662376u);
  /* 12662376 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266237b call 0x12663360 */
  push32(0x12662380u); f_12663360();
  /* 12662380 mov esi, esp */
  ESI = (ESP);
  /* 12662382 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662384 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662386 push 0x12690448 */
  push32((uint32_t)(0x12690448u));
  /* 1266238b push 4 */
  push32((uint32_t)(0x4u));
  /* 1266238d call dword ptr [0x12693450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693450))), 0x12662393u);
  /* 12662393 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662398 call 0x12663360 */
  push32(0x1266239du); f_12663360();
  /* 1266239d mov esi, esp */
  ESI = (ESP);
  /* 1266239f push 0x258 */
  push32((uint32_t)(0x258u));
  /* 126623a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 126623a6 call dword ptr [0x12693460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693460))), 0x126623acu);
  /* 126623ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126623af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126623b1 call 0x12663360 */
  push32(0x126623b6u); f_12663360();
L_126623b6:;
  /* 126623b6 mov esi, esp */
  ESI = (ESP);
  /* 126623b8 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 126623ba call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126623c0u);
  /* 126623c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126623c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126623c5 call 0x12663360 */
  push32(0x126623cau); f_12663360();
  /* 126623ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126623cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126623d1 je 0x1266243a */
  if (C.zf) goto L_1266243a;
  /* 126623d3 mov esi, esp */
  ESI = (ESP);
  /* 126623d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 126623d7 call dword ptr [0x12693464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693464))), 0x126623ddu);
  /* 126623dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126623e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126623e2 call 0x12663360 */
  push32(0x126623e7u); f_12663360();
  /* 126623e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126623ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126623ee je 0x1266243a */
  if (C.zf) goto L_1266243a;
  /* 126623f0 mov esi, esp */
  ESI = (ESP);
  /* 126623f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126623f4 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 126623f6 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126623fcu);
  /* 126623fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126623ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662401 call 0x12663360 */
  push32(0x12662406u); f_12663360();
  /* 12662406 mov esi, esp */
  ESI = (ESP);
  /* 12662408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266240a push 0x126904c8 */
  push32((uint32_t)(0x126904c8u));
  /* 1266240f push 4 */
  push32((uint32_t)(0x4u));
  /* 12662411 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662417u);
  /* 12662417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266241a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266241c call 0x12663360 */
  push32(0x12662421u); f_12663360();
  /* 12662421 mov esi, esp */
  ESI = (ESP);
  /* 12662423 push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 12662428 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266242a call dword ptr [0x1269345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269345c))), 0x12662430u);
  /* 12662430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662435 call 0x12663360 */
  push32(0x1266243au); f_12663360();
L_1266243a:;
  /* 1266243a mov esi, esp */
  ESI = (ESP);
  /* 1266243c push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1266243e call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662444u);
  /* 12662444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662449 call 0x12663360 */
  push32(0x1266244eu); f_12663360();
  /* 1266244e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662455 je 0x126624cf */
  if (C.zf) goto L_126624cf;
  /* 12662457 mov esi, esp */
  ESI = (ESP);
  /* 12662459 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1266245b call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662461u);
  /* 12662461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662466 call 0x12663360 */
  push32(0x1266246bu); f_12663360();
  /* 1266246b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662472 jne 0x126624cf */
  if (!C.zf) goto L_126624cf;
  /* 12662474 push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 12662479 call 0x12661005 */
  push32(0x1266247eu); f_12661005();
  /* 1266247e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662483 jne 0x126624cf */
  if (!C.zf) goto L_126624cf;
  /* 12662485 mov esi, esp */
  ESI = (ESP);
  /* 12662487 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662489 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1266248b call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662491u);
  /* 12662491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662496 call 0x12663360 */
  push32(0x1266249bu); f_12663360();
  /* 1266249b mov esi, esp */
  ESI = (ESP);
  /* 1266249d push 0 */
  push32((uint32_t)(0x0u));
  /* 1266249f push 0x126904c8 */
  push32((uint32_t)(0x126904c8u));
  /* 126624a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 126624a6 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x126624acu);
  /* 126624ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126624af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126624b1 call 0x12663360 */
  push32(0x126624b6u); f_12663360();
  /* 126624b6 mov esi, esp */
  ESI = (ESP);
  /* 126624b8 push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 126624bd push 4 */
  push32((uint32_t)(0x4u));
  /* 126624bf call dword ptr [0x1269345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269345c))), 0x126624c5u);
  /* 126624c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126624c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126624ca call 0x12663360 */
  push32(0x126624cfu); f_12663360();
L_126624cf:;
  /* 126624cf mov esi, esp */
  ESI = (ESP);
  /* 126624d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 126624d3 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126624d9u);
  /* 126624d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126624dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126624de call 0x12663360 */
  push32(0x126624e3u); f_12663360();
  /* 126624e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126624e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126624ea je 0x126626b2 */
  if (C.zf) goto L_126626b2;
  /* 126624f0 mov esi, esp */
  ESI = (ESP);
  /* 126624f2 push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 126624f7 push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 126624fc call dword ptr [0x1269346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269346c))), 0x12662502u);
  /* 12662502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662507 call 0x12663360 */
  push32(0x1266250cu); f_12663360();
  /* 1266250c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266250e jle 0x126626b2 */
  if ((C.zf||C.sf!=C.of)) goto L_126626b2;
  /* 12662514 mov esi, esp */
  ESI = (ESP);
  /* 12662516 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662518 push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 1266251d call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662523u);
  /* 12662523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662526 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662528 call 0x12663360 */
  push32(0x1266252du); f_12663360();
  /* 1266252d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266252f jne 0x126626b2 */
  if (!C.zf) goto L_126626b2;
  /* 12662535 mov esi, esp */
  ESI = (ESP);
  /* 12662537 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662539 push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 1266253e call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662544u);
  /* 12662544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662549 call 0x12663360 */
  push32(0x1266254eu); f_12663360();
  /* 1266254e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662550 jne 0x126626b2 */
  if (!C.zf) goto L_126626b2;
  /* 12662556 mov esi, esp */
  ESI = (ESP);
  /* 12662558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266255a push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1266255c call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662562u);
  /* 12662562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662567 call 0x12663360 */
  push32(0x1266256cu); f_12663360();
  /* 1266256c mov esi, esp */
  ESI = (ESP);
  /* 1266256e push 0x1268b2ac */
  push32((uint32_t)(0x1268b2acu));
  /* 12662573 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662579u);
  /* 12662579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266257c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266257e call 0x12663360 */
  push32(0x12662583u); f_12663360();
  /* 12662583 mov esi, esp */
  ESI = (ESP);
  /* 12662585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662587 push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 1266258c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266258e call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662594u);
  /* 12662594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662597 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662599 call 0x12663360 */
  push32(0x1266259eu); f_12663360();
  /* 1266259e mov esi, esp */
  ESI = (ESP);
  /* 126625a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 126625a2 push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 126625a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126625a9 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x126625afu);
  /* 126625af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126625b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126625b4 call 0x12663360 */
  push32(0x126625b9u); f_12663360();
  /* 126625b9 mov esi, esp */
  ESI = (ESP);
  /* 126625bb push 5 */
  push32((uint32_t)(0x5u));
  /* 126625bd push 0 */
  push32((uint32_t)(0x0u));
  /* 126625bf call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x126625c5u);
  /* 126625c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126625c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126625ca call 0x12663360 */
  push32(0x126625cfu); f_12663360();
  /* 126625cf mov esi, esp */
  ESI = (ESP);
  /* 126625d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126625d3 push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 126625d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 126625da call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x126625e0u);
  /* 126625e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126625e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126625e5 call 0x12663360 */
  push32(0x126625eau); f_12663360();
  /* 126625ea mov esi, esp */
  ESI = (ESP);
  /* 126625ec push 1 */
  push32((uint32_t)(0x1u));
  /* 126625ee push 0x126904e0 */
  push32((uint32_t)(0x126904e0u));
  /* 126625f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 126625f5 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x126625fbu);
  /* 126625fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126625fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662600 call 0x12663360 */
  push32(0x12662605u); f_12663360();
  /* 12662605 mov esi, esp */
  ESI = (ESP);
  /* 12662607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662609 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1266260b push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 12662610 push 5 */
  push32((uint32_t)(0x5u));
  /* 12662612 call dword ptr [0x12693470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693470))), 0x12662618u);
  /* 12662618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266261b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266261d call 0x12663360 */
  push32(0x12662622u); f_12663360();
  /* 12662622 mov esi, esp */
  ESI = (ESP);
  /* 12662624 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 12662629 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266262b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266262d call dword ptr [0x12693468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693468))), 0x12662633u);
  /* 12662633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662638 call 0x12663360 */
  push32(0x1266263du); f_12663360();
  /* 1266263d mov esi, esp */
  ESI = (ESP);
  /* 1266263f push 2 */
  push32((uint32_t)(0x2u));
  /* 12662641 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662643 push 0x12690460 */
  push32((uint32_t)(0x12690460u));
  /* 12662648 call dword ptr [0x12693454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693454))), 0x1266264eu);
  /* 1266264e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662653 call 0x12663360 */
  push32(0x12662658u); f_12663360();
  /* 12662658 mov esi, esp */
  ESI = (ESP);
  /* 1266265a push 3 */
  push32((uint32_t)(0x3u));
  /* 1266265c push 1 */
  push32((uint32_t)(0x1u));
  /* 1266265e push 0x12690468 */
  push32((uint32_t)(0x12690468u));
  /* 12662663 call dword ptr [0x12693454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693454))), 0x12662669u);
  /* 12662669 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266266c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266266e call 0x12663360 */
  push32(0x12662673u); f_12663360();
  /* 12662673 mov esi, esp */
  ESI = (ESP);
  /* 12662675 push 0x1268b2a4 */
  push32((uint32_t)(0x1268b2a4u));
  /* 1266267a call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662680u);
  /* 12662680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662685 call 0x12663360 */
  push32(0x1266268au); f_12663360();
  /* 1266268a mov esi, esp */
  ESI = (ESP);
  /* 1266268c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1266268e call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12662694u);
  /* 12662694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662699 call 0x12663360 */
  push32(0x1266269eu); f_12663360();
  /* 1266269e mov esi, esp */
  ESI = (ESP);
  /* 126626a0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 126626a2 call dword ptr [0x12693458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693458))), 0x126626a8u);
  /* 126626a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126626ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126626ad call 0x12663360 */
  push32(0x126626b2u); f_12663360();
L_126626b2:;
  /* 126626b2 mov esi, esp */
  ESI = (ESP);
  /* 126626b4 push 0x68 */
  push32((uint32_t)(0x68u));
  /* 126626b6 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126626bcu);
  /* 126626bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126626bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126626c1 call 0x12663360 */
  push32(0x126626c6u); f_12663360();
  /* 126626c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126626cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126626cd je 0x12662746 */
  if (C.zf) goto L_12662746;
  /* 126626cf push 0x126904d0 */
  push32((uint32_t)(0x126904d0u));
  /* 126626d4 call 0x12661005 */
  push32(0x126626d9u); f_12661005();
  /* 126626d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126626dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126626de jne 0x12662746 */
  if (!C.zf) goto L_12662746;
  /* 126626e0 mov esi, esp */
  ESI = (ESP);
  /* 126626e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126626e4 push 0x68 */
  push32((uint32_t)(0x68u));
  /* 126626e6 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126626ecu);
  /* 126626ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126626ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126626f1 call 0x12663360 */
  push32(0x126626f6u); f_12663360();
  /* 126626f6 mov esi, esp */
  ESI = (ESP);
  /* 126626f8 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 126626fa call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12662700u);
  /* 12662700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662705 call 0x12663360 */
  push32(0x1266270au); f_12663360();
  /* 1266270a mov esi, esp */
  ESI = (ESP);
  /* 1266270c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1266270e call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12662714u);
  /* 12662714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662719 call 0x12663360 */
  push32(0x1266271eu); f_12663360();
  /* 1266271e mov esi, esp */
  ESI = (ESP);
  /* 12662720 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12662722 call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x12662728u);
  /* 12662728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266272b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266272d call 0x12663360 */
  push32(0x12662732u); f_12663360();
  /* 12662732 mov esi, esp */
  ESI = (ESP);
  /* 12662734 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12662736 call dword ptr [0x12693438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693438))), 0x1266273cu);
  /* 1266273c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266273f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662741 call 0x12663360 */
  push32(0x12662746u); f_12663360();
L_12662746:;
  /* 12662746 mov esi, esp */
  ESI = (ESP);
  /* 12662748 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1266274a call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662750u);
  /* 12662750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662753 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662755 call 0x12663360 */
  push32(0x1266275au); f_12663360();
  /* 1266275a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266275f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662761 je 0x126627d8 */
  if (C.zf) goto L_126627d8;
  /* 12662763 mov esi, esp */
  ESI = (ESP);
  /* 12662765 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12662767 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x1266276du);
  /* 1266276d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662772 call 0x12663360 */
  push32(0x12662777u); f_12663360();
  /* 12662777 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266277c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266277e jne 0x126627d8 */
  if (!C.zf) goto L_126627d8;
  /* 12662780 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662782 push 0x12690488 */
  push32((uint32_t)(0x12690488u));
  /* 12662787 call 0x1266100f */
  push32(0x1266278cu); f_1266100f();
  /* 1266278c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266278f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662791 jne 0x126627d8 */
  if (!C.zf) goto L_126627d8;
  /* 12662793 mov esi, esp */
  ESI = (ESP);
  /* 12662795 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662797 call dword ptr [0x12693478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693478))), 0x1266279du);
  /* 1266279d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126627a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126627a2 call 0x12663360 */
  push32(0x126627a7u); f_12663360();
  /* 126627a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126627a9 jne 0x126627d8 */
  if (!C.zf) goto L_126627d8;
  /* 126627ab mov esi, esp */
  ESI = (ESP);
  /* 126627ad push 0 */
  push32((uint32_t)(0x0u));
  /* 126627af push 0x55 */
  push32((uint32_t)(0x55u));
  /* 126627b1 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x126627b7u);
  /* 126627b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126627ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126627bc call 0x12663360 */
  push32(0x126627c1u); f_12663360();
  /* 126627c1 mov esi, esp */
  ESI = (ESP);
  /* 126627c3 push 0x1268b298 */
  push32((uint32_t)(0x1268b298u));
  /* 126627c8 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x126627ceu);
  /* 126627ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126627d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126627d3 call 0x12663360 */
  push32(0x126627d8u); f_12663360();
L_126627d8:;
  /* 126627d8 mov esi, esp */
  ESI = (ESP);
  /* 126627da push 0x54 */
  push32((uint32_t)(0x54u));
  /* 126627dc call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126627e2u);
  /* 126627e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126627e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126627e7 call 0x12663360 */
  push32(0x126627ecu); f_12663360();
  /* 126627ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126627f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126627f3 je 0x126628ae */
  if (C.zf) goto L_126628ae;
  /* 126627f9 mov esi, esp */
  ESI = (ESP);
  /* 126627fb push 0x55 */
  push32((uint32_t)(0x55u));
  /* 126627fd call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662803u);
  /* 12662803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662808 call 0x12663360 */
  push32(0x1266280du); f_12663360();
  /* 1266280d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662814 jne 0x126628ae */
  if (!C.zf) goto L_126628ae;
  /* 1266281a mov esi, esp */
  ESI = (ESP);
  /* 1266281c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266281e push 0x12690450 */
  push32((uint32_t)(0x12690450u));
  /* 12662823 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662829u);
  /* 12662829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266282c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266282e call 0x12663360 */
  push32(0x12662833u); f_12663360();
  /* 12662833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662835 jle 0x126628ae */
  if ((C.zf||C.sf!=C.of)) goto L_126628ae;
  /* 12662837 mov esi, esp */
  ESI = (ESP);
  /* 12662839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266283b push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1266283d call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662843u);
  /* 12662843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662848 call 0x12663360 */
  push32(0x1266284du); f_12663360();
  /* 1266284d mov esi, esp */
  ESI = (ESP);
  /* 1266284f push 0x1268b28c */
  push32((uint32_t)(0x1268b28cu));
  /* 12662854 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x1266285au);
  /* 1266285a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266285d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266285f call 0x12663360 */
  push32(0x12662864u); f_12663360();
  /* 12662864 mov esi, esp */
  ESI = (ESP);
  /* 12662866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662868 push 0x126903f8 */
  push32((uint32_t)(0x126903f8u));
  /* 1266286d push 5 */
  push32((uint32_t)(0x5u));
  /* 1266286f call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662875u);
  /* 12662875 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266287a call 0x12663360 */
  push32(0x1266287fu); f_12663360();
  /* 1266287f mov esi, esp */
  ESI = (ESP);
  /* 12662881 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662883 push 0x126904c0 */
  push32((uint32_t)(0x126904c0u));
  /* 12662888 push 5 */
  push32((uint32_t)(0x5u));
  /* 1266288a call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662890u);
  /* 12662890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662895 call 0x12663360 */
  push32(0x1266289au); f_12663360();
  /* 1266289a mov esi, esp */
  ESI = (ESP);
  /* 1266289c push 5 */
  push32((uint32_t)(0x5u));
  /* 1266289e call dword ptr [0x1269347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269347c))), 0x126628a4u);
  /* 126628a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126628a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126628a9 call 0x12663360 */
  push32(0x126628aeu); f_12663360();
L_126628ae:;
  /* 126628ae mov esi, esp */
  ESI = (ESP);
  /* 126628b0 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 126628b2 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126628b8u);
  /* 126628b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126628bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126628bd call 0x12663360 */
  push32(0x126628c2u); f_12663360();
  /* 126628c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126628c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126628c9 je 0x126629a1 */
  if (C.zf) goto L_126629a1;
  /* 126628cf mov esi, esp */
  ESI = (ESP);
  /* 126628d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126628d3 push 0x12690430 */
  push32((uint32_t)(0x12690430u));
  /* 126628d8 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126628deu);
  /* 126628de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126628e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126628e3 call 0x12663360 */
  push32(0x126628e8u); f_12663360();
  /* 126628e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126628ea jne 0x126629a1 */
  if (!C.zf) goto L_126629a1;
  /* 126628f0 mov esi, esp */
  ESI = (ESP);
  /* 126628f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 126628f4 push 0x12690430 */
  push32((uint32_t)(0x12690430u));
  /* 126628f9 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126628ffu);
  /* 126628ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662902 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662904 call 0x12663360 */
  push32(0x12662909u); f_12663360();
  /* 12662909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266290b jg 0x1266292a */
  if ((!C.zf&&C.sf==C.of)) goto L_1266292a;
  /* 1266290d mov esi, esp */
  ESI = (ESP);
  /* 1266290f push 4 */
  push32((uint32_t)(0x4u));
  /* 12662911 push 0x12690430 */
  push32((uint32_t)(0x12690430u));
  /* 12662916 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x1266291cu);
  /* 1266291c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266291f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662921 call 0x12663360 */
  push32(0x12662926u); f_12663360();
  /* 12662926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662928 jle 0x126629a1 */
  if ((C.zf||C.sf!=C.of)) goto L_126629a1;
L_1266292a:;
  /* 1266292a mov esi, esp */
  ESI = (ESP);
  /* 1266292c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266292e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12662930 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662936u);
  /* 12662936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266293b call 0x12663360 */
  push32(0x12662940u); f_12663360();
  /* 12662940 mov esi, esp */
  ESI = (ESP);
  /* 12662942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662944 push 0x126903e0 */
  push32((uint32_t)(0x126903e0u));
  /* 12662949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266294b call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662951u);
  /* 12662951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662954 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662956 call 0x12663360 */
  push32(0x1266295bu); f_12663360();
  /* 1266295b mov esi, esp */
  ESI = (ESP);
  /* 1266295d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266295f push 0 */
  push32((uint32_t)(0x0u));
  /* 12662961 call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x12662967u);
  /* 12662967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266296a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266296c call 0x12663360 */
  push32(0x12662971u); f_12663360();
  /* 12662971 mov esi, esp */
  ESI = (ESP);
  /* 12662973 push 0x1268b280 */
  push32((uint32_t)(0x1268b280u));
  /* 12662978 call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x1266297eu);
  /* 1266297e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662981 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662983 call 0x12663360 */
  push32(0x12662988u); f_12663360();
  /* 12662988 mov esi, esp */
  ESI = (ESP);
  /* 1266298a push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 1266298f push 1 */
  push32((uint32_t)(0x1u));
  /* 12662991 call dword ptr [0x12693460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693460))), 0x12662997u);
  /* 12662997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266299a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266299c call 0x12663360 */
  push32(0x126629a1u); f_12663360();
L_126629a1:;
  /* 126629a1 mov esi, esp */
  ESI = (ESP);
  /* 126629a3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 126629a5 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x126629abu);
  /* 126629ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126629ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126629b0 call 0x12663360 */
  push32(0x126629b5u); f_12663360();
  /* 126629b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126629ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126629bc je 0x12662a94 */
  if (C.zf) goto L_12662a94;
  /* 126629c2 mov esi, esp */
  ESI = (ESP);
  /* 126629c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126629c6 push 0x12690438 */
  push32((uint32_t)(0x12690438u));
  /* 126629cb call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126629d1u);
  /* 126629d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126629d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126629d6 call 0x12663360 */
  push32(0x126629dbu); f_12663360();
  /* 126629db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126629dd jne 0x12662a94 */
  if (!C.zf) goto L_12662a94;
  /* 126629e3 mov esi, esp */
  ESI = (ESP);
  /* 126629e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 126629e7 push 0x12690438 */
  push32((uint32_t)(0x12690438u));
  /* 126629ec call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x126629f2u);
  /* 126629f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126629f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126629f7 call 0x12663360 */
  push32(0x126629fcu); f_12663360();
  /* 126629fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126629fe jg 0x12662a1d */
  if ((!C.zf&&C.sf==C.of)) goto L_12662a1d;
  /* 12662a00 mov esi, esp */
  ESI = (ESP);
  /* 12662a02 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662a04 push 0x12690438 */
  push32((uint32_t)(0x12690438u));
  /* 12662a09 call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662a0fu);
  /* 12662a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a14 call 0x12663360 */
  push32(0x12662a19u); f_12663360();
  /* 12662a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662a1b jle 0x12662a94 */
  if ((C.zf||C.sf!=C.of)) goto L_12662a94;
L_12662a1d:;
  /* 12662a1d mov esi, esp */
  ESI = (ESP);
  /* 12662a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12662a21 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12662a23 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662a29u);
  /* 12662a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a2e call 0x12663360 */
  push32(0x12662a33u); f_12663360();
  /* 12662a33 mov esi, esp */
  ESI = (ESP);
  /* 12662a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662a37 push 0x126903f0 */
  push32((uint32_t)(0x126903f0u));
  /* 12662a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12662a3e call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662a44u);
  /* 12662a44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a49 call 0x12663360 */
  push32(0x12662a4eu); f_12663360();
  /* 12662a4e mov esi, esp */
  ESI = (ESP);
  /* 12662a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662a54 call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x12662a5au);
  /* 12662a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a5f call 0x12663360 */
  push32(0x12662a64u); f_12663360();
  /* 12662a64 mov esi, esp */
  ESI = (ESP);
  /* 12662a66 push 0x1268b280 */
  push32((uint32_t)(0x1268b280u));
  /* 12662a6b call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662a71u);
  /* 12662a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a76 call 0x12663360 */
  push32(0x12662a7bu); f_12663360();
  /* 12662a7b mov esi, esp */
  ESI = (ESP);
  /* 12662a7d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12662a82 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662a84 call dword ptr [0x12693460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693460))), 0x12662a8au);
  /* 12662a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662a8f call 0x12663360 */
  push32(0x12662a94u); f_12663360();
L_12662a94:;
  /* 12662a94 mov esi, esp */
  ESI = (ESP);
  /* 12662a96 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12662a98 call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662a9eu);
  /* 12662a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662aa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662aa3 call 0x12663360 */
  push32(0x12662aa8u); f_12663360();
  /* 12662aa8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662aaf je 0x12662b87 */
  if (C.zf) goto L_12662b87;
  /* 12662ab5 mov esi, esp */
  ESI = (ESP);
  /* 12662ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662ab9 push 0x12690440 */
  push32((uint32_t)(0x12690440u));
  /* 12662abe call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662ac4u);
  /* 12662ac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662ac7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662ac9 call 0x12663360 */
  push32(0x12662aceu); f_12663360();
  /* 12662ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662ad0 jne 0x12662b87 */
  if (!C.zf) goto L_12662b87;
  /* 12662ad6 mov esi, esp */
  ESI = (ESP);
  /* 12662ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662ada push 0x12690440 */
  push32((uint32_t)(0x12690440u));
  /* 12662adf call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662ae5u);
  /* 12662ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662ae8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662aea call 0x12663360 */
  push32(0x12662aefu); f_12663360();
  /* 12662aef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662af1 jg 0x12662b10 */
  if ((!C.zf&&C.sf==C.of)) goto L_12662b10;
  /* 12662af3 mov esi, esp */
  ESI = (ESP);
  /* 12662af5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662af7 push 0x12690440 */
  push32((uint32_t)(0x12690440u));
  /* 12662afc call dword ptr [0x12693444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693444))), 0x12662b02u);
  /* 12662b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b07 call 0x12663360 */
  push32(0x12662b0cu); f_12663360();
  /* 12662b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662b0e jle 0x12662b87 */
  if ((C.zf||C.sf!=C.of)) goto L_12662b87;
L_12662b10:;
  /* 12662b10 mov esi, esp */
  ESI = (ESP);
  /* 12662b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662b14 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12662b16 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662b1cu);
  /* 12662b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b21 call 0x12663360 */
  push32(0x12662b26u); f_12663360();
  /* 12662b26 mov esi, esp */
  ESI = (ESP);
  /* 12662b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662b2a push 0x126903e8 */
  push32((uint32_t)(0x126903e8u));
  /* 12662b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12662b31 call dword ptr [0x12693434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693434))), 0x12662b37u);
  /* 12662b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b3c call 0x12663360 */
  push32(0x12662b41u); f_12663360();
  /* 12662b41 mov esi, esp */
  ESI = (ESP);
  /* 12662b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662b47 call dword ptr [0x1269342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269342c))), 0x12662b4du);
  /* 12662b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b52 call 0x12663360 */
  push32(0x12662b57u); f_12663360();
  /* 12662b57 mov esi, esp */
  ESI = (ESP);
  /* 12662b59 push 0x1268b280 */
  push32((uint32_t)(0x1268b280u));
  /* 12662b5e call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662b64u);
  /* 12662b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b69 call 0x12663360 */
  push32(0x12662b6eu); f_12663360();
  /* 12662b6e mov esi, esp */
  ESI = (ESP);
  /* 12662b70 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12662b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662b77 call dword ptr [0x12693460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693460))), 0x12662b7du);
  /* 12662b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b82 call 0x12663360 */
  push32(0x12662b87u); f_12663360();
L_12662b87:;
  /* 12662b87 mov esi, esp */
  ESI = (ESP);
  /* 12662b89 push 0x65 */
  push32((uint32_t)(0x65u));
  /* 12662b8b call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662b91u);
  /* 12662b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662b94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662b96 call 0x12663360 */
  push32(0x12662b9bu); f_12663360();
  /* 12662b9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662ba2 je 0x12662be6 */
  if (C.zf) goto L_12662be6;
  /* 12662ba4 mov esi, esp */
  ESI = (ESP);
  /* 12662ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662ba8 call dword ptr [0x12693464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693464))), 0x12662baeu);
  /* 12662bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662bb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662bb3 call 0x12663360 */
  push32(0x12662bb8u); f_12663360();
  /* 12662bb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662bbf je 0x12662be6 */
  if (C.zf) goto L_12662be6;
  /* 12662bc1 mov esi, esp */
  ESI = (ESP);
  /* 12662bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662bc5 push 0x65 */
  push32((uint32_t)(0x65u));
  /* 12662bc7 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662bcdu);
  /* 12662bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662bd2 call 0x12663360 */
  push32(0x12662bd7u); f_12663360();
  /* 12662bd7 mov esi, esp */
  ESI = (ESP);
  /* 12662bd9 call dword ptr [0x12693474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693474))), 0x12662bdfu);
  /* 12662bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662be1 call 0x12663360 */
  push32(0x12662be6u); f_12663360();
L_12662be6:;
  /* 12662be6 mov esi, esp */
  ESI = (ESP);
  /* 12662be8 push 0x66 */
  push32((uint32_t)(0x66u));
  /* 12662bea call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662bf0u);
  /* 12662bf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662bf5 call 0x12663360 */
  push32(0x12662bfau); f_12663360();
  /* 12662bfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662c01 je 0x12662c6a */
  if (C.zf) goto L_12662c6a;
  /* 12662c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662c05 push 0x12690470 */
  push32((uint32_t)(0x12690470u));
  /* 12662c0a call 0x1266100f */
  push32(0x12662c0fu); f_1266100f();
  /* 12662c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662c14 jne 0x12662c6a */
  if (!C.zf) goto L_12662c6a;
  /* 12662c16 mov esi, esp */
  ESI = (ESP);
  /* 12662c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662c1a call dword ptr [0x12693478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693478))), 0x12662c20u);
  /* 12662c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662c25 call 0x12663360 */
  push32(0x12662c2au); f_12663360();
  /* 12662c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662c2c jne 0x12662c6a */
  if (!C.zf) goto L_12662c6a;
  /* 12662c2e mov esi, esp */
  ESI = (ESP);
  /* 12662c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662c32 push 0x66 */
  push32((uint32_t)(0x66u));
  /* 12662c34 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662c3au);
  /* 12662c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662c3f call 0x12663360 */
  push32(0x12662c44u); f_12663360();
  /* 12662c44 mov esi, esp */
  ESI = (ESP);
  /* 12662c46 push 0x1268b274 */
  push32((uint32_t)(0x1268b274u));
  /* 12662c4b call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662c51u);
  /* 12662c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662c56 call 0x12663360 */
  push32(0x12662c5bu); f_12663360();
  /* 12662c5b mov esi, esp */
  ESI = (ESP);
  /* 12662c5d call dword ptr [0x12693474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693474))), 0x12662c63u);
  /* 12662c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662c65 call 0x12663360 */
  push32(0x12662c6au); f_12663360();
L_12662c6a:;
  /* 12662c6a mov esi, esp */
  ESI = (ESP);
  /* 12662c6c push 0x67 */
  push32((uint32_t)(0x67u));
  /* 12662c6e call dword ptr [0x12693424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693424))), 0x12662c74u);
  /* 12662c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662c79 call 0x12663360 */
  push32(0x12662c7eu); f_12663360();
  /* 12662c7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12662c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662c85 je 0x12662d1d */
  if (C.zf) goto L_12662d1d;
  /* 12662c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12662c8d push 0x12690470 */
  push32((uint32_t)(0x12690470u));
  /* 12662c92 call 0x1266100f */
  push32(0x12662c97u); f_1266100f();
  /* 12662c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662c9c jne 0x12662d1d */
  if (!C.zf) goto L_12662d1d;
  /* 12662c9e mov esi, esp */
  ESI = (ESP);
  /* 12662ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12662ca2 call dword ptr [0x12693478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693478))), 0x12662ca8u);
  /* 12662ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662cab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662cad call 0x12663360 */
  push32(0x12662cb2u); f_12663360();
  /* 12662cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662cb4 jne 0x12662d1d */
  if (!C.zf) goto L_12662d1d;
  /* 12662cb6 push 4 */
  push32((uint32_t)(0x4u));
  /* 12662cb8 push 0x12690470 */
  push32((uint32_t)(0x12690470u));
  /* 12662cbd call 0x1266100f */
  push32(0x12662cc2u); f_1266100f();
  /* 12662cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662cc7 jne 0x12662d1d */
  if (!C.zf) goto L_12662d1d;
  /* 12662cc9 mov esi, esp */
  ESI = (ESP);
  /* 12662ccb push 4 */
  push32((uint32_t)(0x4u));
  /* 12662ccd call dword ptr [0x12693478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693478))), 0x12662cd3u);
  /* 12662cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662cd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662cd8 call 0x12663360 */
  push32(0x12662cddu); f_12663360();
  /* 12662cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12662cdf jne 0x12662d1d */
  if (!C.zf) goto L_12662d1d;
  /* 12662ce1 mov esi, esp */
  ESI = (ESP);
  /* 12662ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12662ce5 push 0x67 */
  push32((uint32_t)(0x67u));
  /* 12662ce7 call dword ptr [0x12693428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693428))), 0x12662cedu);
  /* 12662ced add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662cf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662cf2 call 0x12663360 */
  push32(0x12662cf7u); f_12663360();
  /* 12662cf7 mov esi, esp */
  ESI = (ESP);
  /* 12662cf9 push 0x1268b268 */
  push32((uint32_t)(0x1268b268u));
  /* 12662cfe call dword ptr [0x12693448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693448))), 0x12662d04u);
  /* 12662d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662d09 call 0x12663360 */
  push32(0x12662d0eu); f_12663360();
  /* 12662d0e mov esi, esp */
  ESI = (ESP);
  /* 12662d10 call dword ptr [0x12693484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693484))), 0x12662d16u);
  /* 12662d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662d18 call 0x12663360 */
  push32(0x12662d1du); f_12663360();
L_12662d1d:;
  /* 12662d1d pop edi */
  EDI = (pop32());
  /* 12662d1e pop esi */
  ESI = (pop32());
  /* 12662d1f pop ebx */
  EBX = (pop32());
  /* 12662d20 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12662d23 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12662d25 call 0x12663360 */
  push32(0x12662d2au); f_12663360();
  /* 12662d2a mov esp, ebp */
  ESP = (EBP);
  /* 12662d2c pop ebp */
  EBP = (pop32());
  /* 12662d2d ret  */
  ESPCHK(0x12661a90u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x126631e0 (63 bytes, 26 insns) */
void f_126631e0(void) {
  FTRACE(0x126631e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126631e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126631e1 mov ebp, esp */
  EBP = (ESP);
  /* 126631e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126631e6 push ebx */
  push32((uint32_t)(EBX));
  /* 126631e7 push esi */
  push32((uint32_t)(ESI));
  /* 126631e8 push edi */
  push32((uint32_t)(EDI));
  /* 126631e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 126631ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 126631f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 126631f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126631f8 mov esi, esp */
  ESI = (ESP);
  /* 126631fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126631fd push eax */
  push32((uint32_t)(EAX));
  /* 126631fe call dword ptr [0x12693418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693418))), 0x12663204u);
  /* 12663204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663207 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663209 call 0x12663360 */
  push32(0x1266320eu); f_12663360();
  /* 1266320e pop edi */
  EDI = (pop32());
  /* 1266320f pop esi */
  ESI = (pop32());
  /* 12663210 pop ebx */
  EBX = (pop32());
  /* 12663211 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663214 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663216 call 0x12663360 */
  push32(0x1266321bu); f_12663360();
  /* 1266321b mov esp, ebp */
  ESP = (EBP);
  /* 1266321d pop ebp */
  EBP = (pop32());
  /* 1266321e ret  */
  ESPCHK(0x126631e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x12663230 (67 bytes, 28 insns) */
void f_12663230(void) {
  FTRACE(0x12663230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663230 push ebp */
  push32((uint32_t)(EBP));
  /* 12663231 mov ebp, esp */
  EBP = (ESP);
  /* 12663233 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12663236 push ebx */
  push32((uint32_t)(EBX));
  /* 12663237 push esi */
  push32((uint32_t)(ESI));
  /* 12663238 push edi */
  push32((uint32_t)(EDI));
  /* 12663239 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1266323c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12663241 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12663246 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12663248 mov esi, esp */
  ESI = (ESP);
  /* 1266324a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1266324d push eax */
  push32((uint32_t)(EAX));
  /* 1266324e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663251 push ecx */
  push32((uint32_t)(ECX));
  /* 12663252 call dword ptr [0x1269341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269341c))), 0x12663258u);
  /* 12663258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266325b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266325d call 0x12663360 */
  push32(0x12663262u); f_12663360();
  /* 12663262 pop edi */
  EDI = (pop32());
  /* 12663263 pop esi */
  ESI = (pop32());
  /* 12663264 pop ebx */
  EBX = (pop32());
  /* 12663265 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663268 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266326a call 0x12663360 */
  push32(0x1266326fu); f_12663360();
  /* 1266326f mov esp, ebp */
  ESP = (EBP);
  /* 12663271 pop ebp */
  EBP = (pop32());
  /* 12663272 ret  */
  ESPCHK(0x12663230u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12663360 (56 bytes, 28 insns) */
void f_12663360(void) {
  FTRACE(0x12663360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663360 jne 0x12663363 */
  if (!C.zf) goto L_12663363;
  /* 12663362 ret  */
  ESPCHK(0x12663360u, _esp0);
  ESP += 4; return;
L_12663363:;
  /* 12663363 push ebp */
  push32((uint32_t)(EBP));
  /* 12663364 mov ebp, esp */
  EBP = (ESP);
  /* 12663366 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12663369 push eax */
  push32((uint32_t)(EAX));
  /* 1266336a push edx */
  push32((uint32_t)(EDX));
  /* 1266336b push ebx */
  push32((uint32_t)(EBX));
  /* 1266336c push esi */
  push32((uint32_t)(ESI));
  /* 1266336d push edi */
  push32((uint32_t)(EDI));
  /* 1266336e push 0x1268b2f4 */
  push32((uint32_t)(0x1268b2f4u));
  /* 12663373 push 0x1268b2f0 */
  push32((uint32_t)(0x1268b2f0u));
  /* 12663378 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1266337a push 0x1268b2e0 */
  push32((uint32_t)(0x1268b2e0u));
  /* 1266337f push 1 */
  push32((uint32_t)(0x1u));
  /* 12663381 call 0x12663730 */
  push32(0x12663386u); f_12663730();
  /* 12663386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663389 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266338c jne 0x1266338f */
  if (!C.zf) goto L_1266338f;
  /* 1266338e int3  */
  x86_unimpl("int3 @ 0x1266338e");
L_1266338f:;
  /* 1266338f pop edi */
  EDI = (pop32());
  /* 12663390 pop esi */
  ESI = (pop32());
  /* 12663391 pop ebx */
  EBX = (pop32());
  /* 12663392 pop edx */
  EDX = (pop32());
  /* 12663393 pop eax */
  EAX = (pop32());
  /* 12663394 mov esp, ebp */
  ESP = (EBP);
  /* 12663396 pop ebp */
  EBP = (pop32());
  /* 12663397 ret  */
  ESPCHK(0x12663360u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x126633a0 (313 bytes, 78 insns) */
void f_126633a0(void) {
  FTRACE(0x126633a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126633a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126633a1 mov ebp, esp */
  EBP = (ESP);
  /* 126633a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126633a7 jne 0x12663467 */
  if (!C.zf) goto L_12663467;
  /* 126633ad call dword ptr [0x12693324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693324))), 0x126633b3u);
  /* 126633b3 mov dword ptr [0x126905a8], eax */
  w32((uint32_t)(0x126905a8), (EAX));
  /* 126633b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 126633ba call 0x12666e60 */
  push32(0x126633bfu); f_12666e60();
  /* 126633bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126633c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126633c4 jne 0x126633cd */
  if (!C.zf) goto L_126633cd;
  /* 126633c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126633c8 jmp 0x126634d5 */
  goto L_126634d5;
L_126633cd:;
  /* 126633cd mov eax, dword ptr [0x126905a8] */
  EAX = (r32((uint32_t)(0x126905a8)));
  /* 126633d2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 126633d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126633da mov dword ptr [0x126905b4], eax */
  w32((uint32_t)(0x126905b4), (EAX));
  /* 126633df mov ecx, dword ptr [0x126905a8] */
  ECX = (r32((uint32_t)(0x126905a8)));
  /* 126633e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126633eb mov dword ptr [0x126905b0], ecx */
  w32((uint32_t)(0x126905b0), (ECX));
  /* 126633f1 mov edx, dword ptr [0x126905b0] */
  EDX = (r32((uint32_t)(0x126905b0)));
  /* 126633f7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 126633fa add edx, dword ptr [0x126905b4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x126905b4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12663400 mov dword ptr [0x126905ac], edx */
  w32((uint32_t)(0x126905ac), (EDX));
  /* 12663406 mov eax, dword ptr [0x126905a8] */
  EAX = (r32((uint32_t)(0x126905a8)));
  /* 1266340b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1266340e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12663413 mov dword ptr [0x126905a8], eax */
  w32((uint32_t)(0x126905a8), (EAX));
  /* 12663418 call 0x12663fd0 */
  push32(0x1266341du); f_12663fd0();
  /* 1266341d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266341f jne 0x1266342d */
  if (!C.zf) goto L_1266342d;
  /* 12663421 call 0x12666eb0 */
  push32(0x12663426u); f_12666eb0();
  /* 12663426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12663428 jmp 0x126634d5 */
  goto L_126634d5;
L_1266342d:;
  /* 1266342d call dword ptr [0x12693320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693320))), 0x12663433u);
  /* 12663433 mov dword ptr [0x126920ec], eax */
  w32((uint32_t)(0x126920ec), (EAX));
  /* 12663438 call 0x12666c40 */
  push32(0x1266343du); f_12666c40();
  /* 1266343d mov dword ptr [0x12690590], eax */
  w32((uint32_t)(0x12690590), (EAX));
  /* 12663442 call 0x12664280 */
  push32(0x12663447u); f_12664280();
  /* 12663447 call 0x12666730 */
  push32(0x1266344cu); f_12666730();
  /* 1266344c call 0x126665e0 */
  push32(0x12663451u); f_126665e0();
  /* 12663451 call 0x12663dd0 */
  push32(0x12663456u); f_12663dd0();
  /* 12663456 mov ecx, dword ptr [0x1269058c] */
  ECX = (r32((uint32_t)(0x1269058c)));
  /* 1266345c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266345f mov dword ptr [0x1269058c], ecx */
  w32((uint32_t)(0x1269058c), (ECX));
  /* 12663465 jmp 0x126634d0 */
  goto L_126634d0;
L_12663467:;
  /* 12663467 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266346b jne 0x126634c0 */
  if (!C.zf) goto L_126634c0;
  /* 1266346d cmp dword ptr [0x1269058c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269058c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663474 jle 0x126634ba */
  if ((C.zf||C.sf!=C.of)) goto L_126634ba;
  /* 12663476 mov edx, dword ptr [0x1269058c] */
  EDX = (r32((uint32_t)(0x1269058c)));
  /* 1266347c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266347f mov dword ptr [0x1269058c], edx */
  w32((uint32_t)(0x1269058c), (EDX));
  /* 12663485 cmp dword ptr [0x126905e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266348c jne 0x12663493 */
  if (!C.zf) goto L_12663493;
  /* 1266348e call 0x12663e50 */
  push32(0x12663493u); f_12663e50();
L_12663493:;
  /* 12663493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12663495 call 0x12665b80 */
  push32(0x1266349au); f_12665b80();
  /* 1266349a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266349d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 126634a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126634a2 je 0x126634a9 */
  if (C.zf) goto L_126634a9;
  /* 126634a4 call 0x12666490 */
  push32(0x126634a9u); f_12666490();
L_126634a9:;
  /* 126634a9 call 0x126645b0 */
  push32(0x126634aeu); f_126645b0();
  /* 126634ae call 0x12664060 */
  push32(0x126634b3u); f_12664060();
  /* 126634b3 call 0x12666eb0 */
  push32(0x126634b8u); f_12666eb0();
  /* 126634b8 jmp 0x126634be */
  goto L_126634be;
L_126634ba:;
  /* 126634ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126634bc jmp 0x126634d5 */
  goto L_126634d5;
L_126634be:;
  /* 126634be jmp 0x126634d0 */
  goto L_126634d0;
L_126634c0:;
  /* 126634c0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126634c4 jne 0x126634d0 */
  if (!C.zf) goto L_126634d0;
  /* 126634c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126634c8 call 0x12664150 */
  push32(0x126634cdu); f_12664150();
  /* 126634cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126634d0:;
  /* 126634d0 mov eax, 1 */
  EAX = (0x1u);
L_126634d5:;
  /* 126634d5 pop ebp */
  EBP = (pop32());
  /* 126634d6 ret 0xc */
  ESPCHK(0x126633a0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x126634e0 (243 bytes, 86 insns) */
void f_126634e0(void) {
  FTRACE(0x126634e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126634e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126634e1 mov ebp, esp */
  EBP = (ESP);
  /* 126634e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126634e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 126634eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126634ef jne 0x12663501 */
  if (!C.zf) goto L_12663501;
  /* 126634f1 cmp dword ptr [0x1269058c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269058c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126634f8 jne 0x12663501 */
  if (!C.zf) goto L_12663501;
  /* 126634fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126634fc jmp 0x126635cd */
  goto L_126635cd;
L_12663501:;
  /* 12663501 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663505 je 0x1266350d */
  if (C.zf) goto L_1266350d;
  /* 12663507 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266350b jne 0x1266354f */
  if (!C.zf) goto L_1266354f;
L_1266350d:;
  /* 1266350d cmp dword ptr [0x126920fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663514 je 0x1266352b */
  if (C.zf) goto L_1266352b;
  /* 12663516 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663519 push eax */
  push32((uint32_t)(EAX));
  /* 1266351a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266351d push ecx */
  push32((uint32_t)(ECX));
  /* 1266351e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663521 push edx */
  push32((uint32_t)(EDX));
  /* 12663522 call dword ptr [0x126920fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126920fc))), 0x12663528u);
  /* 12663528 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266352b:;
  /* 1266352b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266352f je 0x12663545 */
  if (C.zf) goto L_12663545;
  /* 12663531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663534 push eax */
  push32((uint32_t)(EAX));
  /* 12663535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663538 push ecx */
  push32((uint32_t)(ECX));
  /* 12663539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266353c push edx */
  push32((uint32_t)(EDX));
  /* 1266353d call 0x126633a0 */
  push32(0x12663542u); f_126633a0();
  /* 12663542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12663545:;
  /* 12663545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663549 jne 0x1266354f */
  if (!C.zf) goto L_1266354f;
  /* 1266354b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266354d jmp 0x126635cd */
  goto L_126635cd;
L_1266354f:;
  /* 1266354f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663552 push eax */
  push32((uint32_t)(EAX));
  /* 12663553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663556 push ecx */
  push32((uint32_t)(ECX));
  /* 12663557 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266355a push edx */
  push32((uint32_t)(EDX));
  /* 1266355b call 0x12661014 */
  push32(0x12663560u); f_12661014();
  /* 12663560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12663563 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663567 jne 0x1266357e */
  if (!C.zf) goto L_1266357e;
  /* 12663569 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266356d jne 0x1266357e */
  if (!C.zf) goto L_1266357e;
  /* 1266356f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663572 push eax */
  push32((uint32_t)(EAX));
  /* 12663573 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663575 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663578 push ecx */
  push32((uint32_t)(ECX));
  /* 12663579 call 0x126633a0 */
  push32(0x1266357eu); f_126633a0();
L_1266357e:;
  /* 1266357e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663582 je 0x1266358a */
  if (C.zf) goto L_1266358a;
  /* 12663584 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663588 jne 0x126635ca */
  if (!C.zf) goto L_126635ca;
L_1266358a:;
  /* 1266358a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266358d push edx */
  push32((uint32_t)(EDX));
  /* 1266358e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663591 push eax */
  push32((uint32_t)(EAX));
  /* 12663592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663595 push ecx */
  push32((uint32_t)(ECX));
  /* 12663596 call 0x126633a0 */
  push32(0x1266359bu); f_126633a0();
  /* 1266359b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266359d jne 0x126635a6 */
  if (!C.zf) goto L_126635a6;
  /* 1266359f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_126635a6:;
  /* 126635a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126635aa je 0x126635ca */
  if (C.zf) goto L_126635ca;
  /* 126635ac cmp dword ptr [0x126920fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126635b3 je 0x126635ca */
  if (C.zf) goto L_126635ca;
  /* 126635b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126635b8 push edx */
  push32((uint32_t)(EDX));
  /* 126635b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126635bc push eax */
  push32((uint32_t)(EAX));
  /* 126635bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126635c0 push ecx */
  push32((uint32_t)(ECX));
  /* 126635c1 call dword ptr [0x126920fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126920fc))), 0x126635c7u);
  /* 126635c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126635ca:;
  /* 126635ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_126635cd:;
  /* 126635cd mov esp, ebp */
  ESP = (EBP);
  /* 126635cf pop ebp */
  EBP = (pop32());
  /* 126635d0 ret 0xc */
  ESPCHK(0x126634e0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x126635e0 (58 bytes, 18 insns) */
void f_126635e0(void) {
  FTRACE(0x126635e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126635e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126635e1 mov ebp, esp */
  EBP = (ESP);
  /* 126635e3 cmp dword ptr [0x12690598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126635ea je 0x126635fe */
  if (C.zf) goto L_126635fe;
  /* 126635ec cmp dword ptr [0x12690598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126635f3 jne 0x12663603 */
  if (!C.zf) goto L_12663603;
  /* 126635f5 cmp dword ptr [0x1269059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126635fc jne 0x12663603 */
  if (!C.zf) goto L_12663603;
L_126635fe:;
  /* 126635fe call 0x12666f50 */
  push32(0x12663603u); f_12666f50();
L_12663603:;
  /* 12663603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663606 push eax */
  push32((uint32_t)(EAX));
  /* 12663607 call 0x12666fa0 */
  push32(0x1266360cu); f_12666fa0();
  /* 1266360c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266360f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12663614 call dword ptr [0x1268ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268ea30))), 0x1266361au);
  /* 1266361a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266361d pop ebp */
  EBP = (pop32());
  /* 1266361e ret  */
  ESPCHK(0x126635e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003620 @ 0x12663620 (11 bytes, 5 insns) */
void f_12663620(void) {
  FTRACE(0x12663620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663620 push ebp */
  push32((uint32_t)(EBP));
  /* 12663621 mov ebp, esp */
  EBP = (ESP);
  /* 12663623 call dword ptr [0x12693328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693328))), 0x12663629u);
  /* 12663629 pop ebp */
  EBP = (pop32());
  /* 1266362a ret  */
  ESPCHK(0x12663620u, _esp0);
  ESP += 4; return;
}

/* FUN_10003630 @ 0x12663630 (87 bytes, 30 insns) */
void f_12663630(void) {
  FTRACE(0x12663630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663630 push ebp */
  push32((uint32_t)(EBP));
  /* 12663631 mov ebp, esp */
  EBP = (ESP);
  /* 12663633 push ecx */
  push32((uint32_t)(ECX));
  /* 12663634 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663638 jl 0x12663640 */
  if ((C.sf!=C.of)) goto L_12663640;
  /* 1266363a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266363e jl 0x12663645 */
  if ((C.sf!=C.of)) goto L_12663645;
L_12663640:;
  /* 12663640 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12663643 jmp 0x12663683 */
  goto L_12663683;
L_12663645:;
  /* 12663645 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663649 jne 0x12663657 */
  if (!C.zf) goto L_12663657;
  /* 1266364b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266364e mov eax, dword ptr [eax*4 + 0x1268ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1268ea38)));
  /* 12663655 jmp 0x12663683 */
  goto L_12663683;
L_12663657:;
  /* 12663657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266365a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1266365d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266365f je 0x12663666 */
  if (C.zf) goto L_12663666;
  /* 12663661 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12663664 jmp 0x12663683 */
  goto L_12663683;
L_12663666:;
  /* 12663666 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663669 mov eax, dword ptr [edx*4 + 0x1268ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1268ea38)));
  /* 12663670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12663673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663676 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663679 mov dword ptr [ecx*4 + 0x1268ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1268ea38), (EDX));
  /* 12663680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12663683:;
  /* 12663683 mov esp, ebp */
  ESP = (EBP);
  /* 12663685 pop ebp */
  EBP = (pop32());
  /* 12663686 ret  */
  ESPCHK(0x12663630u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12663690 (126 bytes, 38 insns) */
void f_12663690(void) {
  FTRACE(0x12663690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663690 push ebp */
  push32((uint32_t)(EBP));
  /* 12663691 mov ebp, esp */
  EBP = (ESP);
  /* 12663693 push ecx */
  push32((uint32_t)(ECX));
  /* 12663694 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663698 jl 0x126636a0 */
  if ((C.sf!=C.of)) goto L_126636a0;
  /* 1266369a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266369e jl 0x126636a7 */
  if ((C.sf!=C.of)) goto L_126636a7;
L_126636a0:;
  /* 126636a0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 126636a5 jmp 0x1266370a */
  goto L_1266370a;
L_126636a7:;
  /* 126636a7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126636ab jne 0x126636b9 */
  if (!C.zf) goto L_126636b9;
  /* 126636ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126636b0 mov eax, dword ptr [eax*4 + 0x1268ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1268ea44)));
  /* 126636b7 jmp 0x1266370a */
  goto L_1266370a;
L_126636b9:;
  /* 126636b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126636bc mov edx, dword ptr [ecx*4 + 0x1268ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea44)));
  /* 126636c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126636c6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126636ca jne 0x126636e0 */
  if (!C.zf) goto L_126636e0;
  /* 126636cc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 126636ce call dword ptr [0x1269332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269332c))), 0x126636d4u);
  /* 126636d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126636d7 mov dword ptr [ecx*4 + 0x1268ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1268ea44), (EAX));
  /* 126636de jmp 0x12663707 */
  goto L_12663707;
L_126636e0:;
  /* 126636e0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126636e4 jne 0x126636fa */
  if (!C.zf) goto L_126636fa;
  /* 126636e6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 126636e8 call dword ptr [0x1269332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269332c))), 0x126636eeu);
  /* 126636ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126636f1 mov dword ptr [edx*4 + 0x1268ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1268ea44), (EAX));
  /* 126636f8 jmp 0x12663707 */
  goto L_12663707;
L_126636fa:;
  /* 126636fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126636fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663700 mov dword ptr [eax*4 + 0x1268ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1268ea44), (ECX));
L_12663707:;
  /* 12663707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266370a:;
  /* 1266370a mov esp, ebp */
  ESP = (EBP);
  /* 1266370c pop ebp */
  EBP = (pop32());
  /* 1266370d ret  */
  ESPCHK(0x12663690u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x12663710 (28 bytes, 11 insns) */
void f_12663710(void) {
  FTRACE(0x12663710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663710 push ebp */
  push32((uint32_t)(EBP));
  /* 12663711 mov ebp, esp */
  EBP = (ESP);
  /* 12663713 push ecx */
  push32((uint32_t)(ECX));
  /* 12663714 mov eax, dword ptr [0x126920e0] */
  EAX = (r32((uint32_t)(0x126920e0)));
  /* 12663719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266371c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266371f mov dword ptr [0x126920e0], ecx */
  w32((uint32_t)(0x126920e0), (ECX));
  /* 12663725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663728 mov esp, ebp */
  ESP = (EBP);
  /* 1266372a pop ebp */
  EBP = (pop32());
  /* 1266372b ret  */
  ESPCHK(0x12663710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x12663730 (912 bytes, 248 insns) */
void f_12663730(void) {
  FTRACE(0x12663730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663730 push ebp */
  push32((uint32_t)(EBP));
  /* 12663731 mov ebp, esp */
  EBP = (ESP);
  /* 12663733 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12663738 call 0x12667810 */
  push32(0x1266373du); f_12667810();
  /* 1266373d push edi */
  push32((uint32_t)(EDI));
  /* 1266373e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12663745 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1266374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266374c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12663752 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12663754 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12663756 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12663757 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1266375e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12663763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12663765 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1266376b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1266376d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1266376f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12663770 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12663777 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1266377c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266377e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12663784 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12663786 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12663788 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12663789 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1266378c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12663792 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663796 jl 0x1266379e */
  if ((C.sf!=C.of)) goto L_1266379e;
  /* 12663798 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266379c jl 0x126637a6 */
  if ((C.sf!=C.of)) goto L_126637a6;
L_1266379e:;
  /* 1266379e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126637a1 jmp 0x12663abb */
  goto L_12663abb;
L_126637a6:;
  /* 126637a6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126637aa jne 0x12663850 */
  if (!C.zf) goto L_12663850;
  /* 126637b0 push 0x1268ea34 */
  push32((uint32_t)(0x1268ea34u));
  /* 126637b5 call dword ptr [0x12693344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693344))), 0x126637bbu);
  /* 126637bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126637bd jle 0x12663850 */
  if ((C.zf||C.sf!=C.of)) goto L_12663850;
  /* 126637c3 cmp dword ptr [0x126905a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126637ca jne 0x1266380e */
  if (!C.zf) goto L_1266380e;
  /* 126637cc push 0x1268b49c */
  push32((uint32_t)(0x1268b49cu));
  /* 126637d1 call dword ptr [0x12693340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693340))), 0x126637d7u);
  /* 126637d7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 126637dd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126637e4 je 0x12663806 */
  if (C.zf) goto L_12663806;
  /* 126637e6 push 0x1268b490 */
  push32((uint32_t)(0x1268b490u));
  /* 126637eb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 126637f1 push ecx */
  push32((uint32_t)(ECX));
  /* 126637f2 call dword ptr [0x1269333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269333c))), 0x126637f8u);
  /* 126637f8 mov dword ptr [0x126905a0], eax */
  w32((uint32_t)(0x126905a0), (EAX));
  /* 126637fd cmp dword ptr [0x126905a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663804 jne 0x1266380e */
  if (!C.zf) goto L_1266380e;
L_12663806:;
  /* 12663806 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12663809 jmp 0x12663abb */
  goto L_12663abb;
L_1266380e:;
  /* 1266380e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663811 push edx */
  push32((uint32_t)(EDX));
  /* 12663812 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663815 push eax */
  push32((uint32_t)(EAX));
  /* 12663816 push 0x1268b45c */
  push32((uint32_t)(0x1268b45cu));
  /* 1266381b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12663821 push ecx */
  push32((uint32_t)(ECX));
  /* 12663822 call dword ptr [0x126905a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126905a0))), 0x12663828u);
  /* 12663828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266382b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12663831 push edx */
  push32((uint32_t)(EDX));
  /* 12663832 call dword ptr [0x12693338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693338))), 0x12663838u);
  /* 12663838 push 0x1268ea34 */
  push32((uint32_t)(0x1268ea34u));
  /* 1266383d call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12663843u);
  /* 12663843 call 0x12663620 */
  push32(0x12663848u); f_12663620();
  /* 12663848 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266384b jmp 0x12663abb */
  goto L_12663abb;
L_12663850:;
  /* 12663850 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663854 je 0x1266388d */
  if (C.zf) goto L_1266388d;
  /* 12663856 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1266385c push eax */
  push32((uint32_t)(EAX));
  /* 1266385d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12663860 push ecx */
  push32((uint32_t)(ECX));
  /* 12663861 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12663866 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1266386c push edx */
  push32((uint32_t)(EDX));
  /* 1266386d call 0x12667710 */
  push32(0x12663872u); f_12667710();
  /* 12663872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12663877 jge 0x1266388d */
  if ((C.sf==C.of)) goto L_1266388d;
  /* 12663879 push 0x1268b430 */
  push32((uint32_t)(0x1268b430u));
  /* 1266387e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12663884 push eax */
  push32((uint32_t)(EAX));
  /* 12663885 call 0x12667620 */
  push32(0x1266388au); f_12667620();
  /* 1266388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266388d:;
  /* 1266388d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663891 jne 0x126638c5 */
  if (!C.zf) goto L_126638c5;
  /* 12663893 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663897 je 0x126638a5 */
  if (C.zf) goto L_126638a5;
  /* 12663899 mov dword ptr [ebp - 0x3028], 0x1268b41c */
  w32((uint32_t)(EBP + -0x3028), (0x1268b41cu));
  /* 126638a3 jmp 0x126638af */
  goto L_126638af;
L_126638a5:;
  /* 126638a5 mov dword ptr [ebp - 0x3028], 0x1268b408 */
  w32((uint32_t)(EBP + -0x3028), (0x1268b408u));
L_126638af:;
  /* 126638af mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 126638b5 push ecx */
  push32((uint32_t)(ECX));
  /* 126638b6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 126638bc push edx */
  push32((uint32_t)(EDX));
  /* 126638bd call 0x12667620 */
  push32(0x126638c2u); f_12667620();
  /* 126638c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126638c5:;
  /* 126638c5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 126638cb push eax */
  push32((uint32_t)(EAX));
  /* 126638cc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 126638d2 push ecx */
  push32((uint32_t)(ECX));
  /* 126638d3 call 0x12667630 */
  push32(0x126638d8u); f_12667630();
  /* 126638d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126638db cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126638df jne 0x1266391a */
  if (!C.zf) goto L_1266391a;
  /* 126638e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126638e4 mov eax, dword ptr [edx*4 + 0x1268ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1268ea38)));
  /* 126638eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 126638ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126638f0 je 0x12663906 */
  if (C.zf) goto L_12663906;
  /* 126638f2 push 0x1268b404 */
  push32((uint32_t)(0x1268b404u));
  /* 126638f7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 126638fd push ecx */
  push32((uint32_t)(ECX));
  /* 126638fe call 0x12667630 */
  push32(0x12663903u); f_12667630();
  /* 12663903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663906:;
  /* 12663906 push 0x1268b400 */
  push32((uint32_t)(0x1268b400u));
  /* 1266390b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12663911 push edx */
  push32((uint32_t)(EDX));
  /* 12663912 call 0x12667630 */
  push32(0x12663917u); f_12667630();
  /* 12663917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266391a:;
  /* 1266391a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266391e je 0x12663962 */
  if (C.zf) goto L_12663962;
  /* 12663920 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12663926 push eax */
  push32((uint32_t)(EAX));
  /* 12663927 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266392a push ecx */
  push32((uint32_t)(ECX));
  /* 1266392b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266392e push edx */
  push32((uint32_t)(EDX));
  /* 1266392f push 0x1268b3f4 */
  push32((uint32_t)(0x1268b3f4u));
  /* 12663934 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12663939 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1266393f push eax */
  push32((uint32_t)(EAX));
  /* 12663940 call 0x12667520 */
  push32(0x12663945u); f_12667520();
  /* 12663945 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266394a jge 0x12663960 */
  if ((C.sf==C.of)) goto L_12663960;
  /* 1266394c push 0x1268b430 */
  push32((uint32_t)(0x1268b430u));
  /* 12663951 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12663957 push ecx */
  push32((uint32_t)(ECX));
  /* 12663958 call 0x12667620 */
  push32(0x1266395du); f_12667620();
  /* 1266395d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663960:;
  /* 12663960 jmp 0x12663978 */
  goto L_12663978;
L_12663962:;
  /* 12663962 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12663968 push edx */
  push32((uint32_t)(EDX));
  /* 12663969 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1266396f push eax */
  push32((uint32_t)(EAX));
  /* 12663970 call 0x12667620 */
  push32(0x12663975u); f_12667620();
  /* 12663975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663978:;
  /* 12663978 cmp dword ptr [0x126920e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266397f je 0x126639bc */
  if (C.zf) goto L_126639bc;
  /* 12663981 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12663987 push ecx */
  push32((uint32_t)(ECX));
  /* 12663988 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1266398e push edx */
  push32((uint32_t)(EDX));
  /* 1266398f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663992 push eax */
  push32((uint32_t)(EAX));
  /* 12663993 call dword ptr [0x126920e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126920e0))), 0x12663999u);
  /* 12663999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266399c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266399e je 0x126639bc */
  if (C.zf) goto L_126639bc;
  /* 126639a0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126639a4 jne 0x126639b1 */
  if (!C.zf) goto L_126639b1;
  /* 126639a6 push 0x1268ea34 */
  push32((uint32_t)(0x1268ea34u));
  /* 126639ab call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x126639b1u);
L_126639b1:;
  /* 126639b1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 126639b7 jmp 0x12663abb */
  goto L_12663abb;
L_126639bc:;
  /* 126639bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126639bf mov edx, dword ptr [ecx*4 + 0x1268ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea38)));
  /* 126639c6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 126639c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126639cb je 0x12663a0b */
  if (C.zf) goto L_12663a0b;
  /* 126639cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126639d0 cmp dword ptr [eax*4 + 0x1268ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1268ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126639d8 je 0x12663a0b */
  if (C.zf) goto L_12663a0b;
  /* 126639da push 0 */
  push32((uint32_t)(0x0u));
  /* 126639dc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 126639e2 push ecx */
  push32((uint32_t)(ECX));
  /* 126639e3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 126639e9 push edx */
  push32((uint32_t)(EDX));
  /* 126639ea call 0x126674a0 */
  push32(0x126639efu); f_126674a0();
  /* 126639ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126639f2 push eax */
  push32((uint32_t)(EAX));
  /* 126639f3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 126639f9 push eax */
  push32((uint32_t)(EAX));
  /* 126639fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126639fd mov edx, dword ptr [ecx*4 + 0x1268ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea44)));
  /* 12663a04 push edx */
  push32((uint32_t)(EDX));
  /* 12663a05 call dword ptr [0x12693330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693330))), 0x12663a0bu);
L_12663a0b:;
  /* 12663a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663a0e mov ecx, dword ptr [eax*4 + 0x1268ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268ea38)));
  /* 12663a15 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12663a18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12663a1a je 0x12663a29 */
  if (C.zf) goto L_12663a29;
  /* 12663a1c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12663a22 push edx */
  push32((uint32_t)(EDX));
  /* 12663a23 call dword ptr [0x12693338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693338))), 0x12663a29u);
L_12663a29:;
  /* 12663a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663a2c mov ecx, dword ptr [eax*4 + 0x1268ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268ea38)));
  /* 12663a33 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12663a36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12663a38 je 0x12663aa8 */
  if (C.zf) goto L_12663aa8;
  /* 12663a3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663a3e je 0x12663a5d */
  if (C.zf) goto L_12663a5d;
  /* 12663a40 push 0xa */
  push32((uint32_t)(0xau));
  /* 12663a42 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12663a48 push edx */
  push32((uint32_t)(EDX));
  /* 12663a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663a4c push eax */
  push32((uint32_t)(EAX));
  /* 12663a4d call 0x126671b0 */
  push32(0x12663a52u); f_126671b0();
  /* 12663a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663a55 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12663a5b jmp 0x12663a67 */
  goto L_12663a67;
L_12663a5d:;
  /* 12663a5d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12663a67:;
  /* 12663a67 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12663a6d push ecx */
  push32((uint32_t)(ECX));
  /* 12663a6e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12663a71 push edx */
  push32((uint32_t)(EDX));
  /* 12663a72 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12663a78 push eax */
  push32((uint32_t)(EAX));
  /* 12663a79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663a7c push ecx */
  push32((uint32_t)(ECX));
  /* 12663a7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663a80 push edx */
  push32((uint32_t)(EDX));
  /* 12663a81 call 0x12663ac0 */
  push32(0x12663a86u); f_12663ac0();
  /* 12663a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663a89 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12663a8f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663a93 jne 0x12663aa0 */
  if (!C.zf) goto L_12663aa0;
  /* 12663a95 push 0x1268ea34 */
  push32((uint32_t)(0x1268ea34u));
  /* 12663a9a call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12663aa0u);
L_12663aa0:;
  /* 12663aa0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12663aa6 jmp 0x12663abb */
  goto L_12663abb;
L_12663aa8:;
  /* 12663aa8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663aac jne 0x12663ab9 */
  if (!C.zf) goto L_12663ab9;
  /* 12663aae push 0x1268ea34 */
  push32((uint32_t)(0x1268ea34u));
  /* 12663ab3 call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x12663ab9u);
L_12663ab9:;
  /* 12663ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12663abb:;
  /* 12663abb pop edi */
  EDI = (pop32());
  /* 12663abc mov esp, ebp */
  ESP = (EBP);
  /* 12663abe pop ebp */
  EBP = (pop32());
  /* 12663abf ret  */
  ESPCHK(0x12663730u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x12663ac0 (780 bytes, 197 insns) */
void f_12663ac0(void) {
  FTRACE(0x12663ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12663ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12663ac3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12663ac8 call 0x12667810 */
  push32(0x12663acdu); f_12667810();
L_12663acd:;
  /* 12663acd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663ad1 jne 0x12663af8 */
  if (!C.zf) goto L_12663af8;
  /* 12663ad3 push 0x1268b5ec */
  push32((uint32_t)(0x1268b5ecu));
  /* 12663ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663ada push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12663adf push 0x1268b5e0 */
  push32((uint32_t)(0x1268b5e0u));
  /* 12663ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12663ae6 call 0x12663730 */
  push32(0x12663aebu); f_12663730();
  /* 12663aeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663aee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663af1 jne 0x12663af8 */
  if (!C.zf) goto L_12663af8;
  /* 12663af3 call 0x12663620 */
  push32(0x12663af8u); f_12663620();
L_12663af8:;
  /* 12663af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12663afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12663afc jne 0x12663acd */
  if (!C.zf) goto L_12663acd;
  /* 12663afe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12663b03 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12663b09 push ecx */
  push32((uint32_t)(ECX));
  /* 12663b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12663b0c call dword ptr [0x12693348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693348))), 0x12663b12u);
  /* 12663b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12663b14 jne 0x12663b2a */
  if (!C.zf) goto L_12663b2a;
  /* 12663b16 push 0x1268b5c8 */
  push32((uint32_t)(0x1268b5c8u));
  /* 12663b1b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12663b21 push edx */
  push32((uint32_t)(EDX));
  /* 12663b22 call 0x12667620 */
  push32(0x12663b27u); f_12667620();
  /* 12663b27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663b2a:;
  /* 12663b2a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12663b30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12663b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663b36 push ecx */
  push32((uint32_t)(ECX));
  /* 12663b37 call 0x126674a0 */
  push32(0x12663b3cu); f_126674a0();
  /* 12663b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663b3f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663b42 jbe 0x12663b6d */
  if ((C.cf||C.zf)) goto L_12663b6d;
  /* 12663b44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663b47 push edx */
  push32((uint32_t)(EDX));
  /* 12663b48 call 0x126674a0 */
  push32(0x12663b4du); f_126674a0();
  /* 12663b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663b53 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12663b57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12663b5a push 3 */
  push32((uint32_t)(0x3u));
  /* 12663b5c push 0x1268b5c4 */
  push32((uint32_t)(0x1268b5c4u));
  /* 12663b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663b64 push eax */
  push32((uint32_t)(EAX));
  /* 12663b65 call 0x12667e90 */
  push32(0x12663b6au); f_12667e90();
  /* 12663b6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663b6d:;
  /* 12663b6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12663b70 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12663b76 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663b7d je 0x12663bc8 */
  if (C.zf) goto L_12663bc8;
  /* 12663b7f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12663b85 push edx */
  push32((uint32_t)(EDX));
  /* 12663b86 call 0x126674a0 */
  push32(0x12663b8bu); f_126674a0();
  /* 12663b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663b8e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663b91 jbe 0x12663bc8 */
  if ((C.cf||C.zf)) goto L_12663bc8;
  /* 12663b93 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12663b99 push eax */
  push32((uint32_t)(EAX));
  /* 12663b9a call 0x126674a0 */
  push32(0x12663b9fu); f_126674a0();
  /* 12663b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663ba2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12663ba8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12663bac mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12663bb2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12663bb4 push 0x1268b5c4 */
  push32((uint32_t)(0x1268b5c4u));
  /* 12663bb9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12663bbf push eax */
  push32((uint32_t)(EAX));
  /* 12663bc0 call 0x12667e90 */
  push32(0x12663bc5u); f_12667e90();
  /* 12663bc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663bc8:;
  /* 12663bc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663bcc jne 0x12663bda */
  if (!C.zf) goto L_12663bda;
  /* 12663bce mov dword ptr [ebp - 0x1114], 0x1268b550 */
  w32((uint32_t)(EBP + -0x1114), (0x1268b550u));
  /* 12663bd8 jmp 0x12663be4 */
  goto L_12663be4;
L_12663bda:;
  /* 12663bda mov dword ptr [ebp - 0x1114], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1114), (0x1268b2f0u));
L_12663be4:;
  /* 12663be4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12663be7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12663bea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12663bec je 0x12663bf9 */
  if (C.zf) goto L_12663bf9;
  /* 12663bee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12663bf1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12663bf7 jmp 0x12663c03 */
  goto L_12663c03;
L_12663bf9:;
  /* 12663bf9 mov dword ptr [ebp - 0x1118], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1118), (0x1268b2f0u));
L_12663c03:;
  /* 12663c03 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12663c06 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12663c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12663c0b je 0x12663c1f */
  if (C.zf) goto L_12663c1f;
  /* 12663c0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663c11 jne 0x12663c1f */
  if (!C.zf) goto L_12663c1f;
  /* 12663c13 mov dword ptr [ebp - 0x111c], 0x1268b540 */
  w32((uint32_t)(EBP + -0x111c), (0x1268b540u));
  /* 12663c1d jmp 0x12663c29 */
  goto L_12663c29;
L_12663c1f:;
  /* 12663c1f mov dword ptr [ebp - 0x111c], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x111c), (0x1268b2f0u));
L_12663c29:;
  /* 12663c29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12663c2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12663c2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12663c31 je 0x12663c3f */
  if (C.zf) goto L_12663c3f;
  /* 12663c33 mov dword ptr [ebp - 0x1120], 0x1268b53c */
  w32((uint32_t)(EBP + -0x1120), (0x1268b53cu));
  /* 12663c3d jmp 0x12663c49 */
  goto L_12663c49;
L_12663c3f:;
  /* 12663c3f mov dword ptr [ebp - 0x1120], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1120), (0x1268b2f0u));
L_12663c49:;
  /* 12663c49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663c4d je 0x12663c5a */
  if (C.zf) goto L_12663c5a;
  /* 12663c4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12663c52 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12663c58 jmp 0x12663c64 */
  goto L_12663c64;
L_12663c5a:;
  /* 12663c5a mov dword ptr [ebp - 0x1124], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1124), (0x1268b2f0u));
L_12663c64:;
  /* 12663c64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663c68 je 0x12663c76 */
  if (C.zf) goto L_12663c76;
  /* 12663c6a mov dword ptr [ebp - 0x1128], 0x1268b534 */
  w32((uint32_t)(EBP + -0x1128), (0x1268b534u));
  /* 12663c74 jmp 0x12663c80 */
  goto L_12663c80;
L_12663c76:;
  /* 12663c76 mov dword ptr [ebp - 0x1128], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1128), (0x1268b2f0u));
L_12663c80:;
  /* 12663c80 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663c84 je 0x12663c91 */
  if (C.zf) goto L_12663c91;
  /* 12663c86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12663c89 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12663c8f jmp 0x12663c9b */
  goto L_12663c9b;
L_12663c91:;
  /* 12663c91 mov dword ptr [ebp - 0x112c], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x112c), (0x1268b2f0u));
L_12663c9b:;
  /* 12663c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663c9f je 0x12663cad */
  if (C.zf) goto L_12663cad;
  /* 12663ca1 mov dword ptr [ebp - 0x1130], 0x1268b52c */
  w32((uint32_t)(EBP + -0x1130), (0x1268b52cu));
  /* 12663cab jmp 0x12663cb7 */
  goto L_12663cb7;
L_12663cad:;
  /* 12663cad mov dword ptr [ebp - 0x1130], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1130), (0x1268b2f0u));
L_12663cb7:;
  /* 12663cb7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663cbe je 0x12663cce */
  if (C.zf) goto L_12663cce;
  /* 12663cc0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12663cc6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12663ccc jmp 0x12663cd8 */
  goto L_12663cd8;
L_12663cce:;
  /* 12663cce mov dword ptr [ebp - 0x1134], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1134), (0x1268b2f0u));
L_12663cd8:;
  /* 12663cd8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663cdf je 0x12663ced */
  if (C.zf) goto L_12663ced;
  /* 12663ce1 mov dword ptr [ebp - 0x1138], 0x1268b520 */
  w32((uint32_t)(EBP + -0x1138), (0x1268b520u));
  /* 12663ceb jmp 0x12663cf7 */
  goto L_12663cf7;
L_12663ced:;
  /* 12663ced mov dword ptr [ebp - 0x1138], 0x1268b2f0 */
  w32((uint32_t)(EBP + -0x1138), (0x1268b2f0u));
L_12663cf7:;
  /* 12663cf7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12663cfd push edx */
  push32((uint32_t)(EDX));
  /* 12663cfe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12663d04 push eax */
  push32((uint32_t)(EAX));
  /* 12663d05 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12663d0b push ecx */
  push32((uint32_t)(ECX));
  /* 12663d0c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12663d12 push edx */
  push32((uint32_t)(EDX));
  /* 12663d13 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12663d19 push eax */
  push32((uint32_t)(EAX));
  /* 12663d1a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12663d20 push ecx */
  push32((uint32_t)(ECX));
  /* 12663d21 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12663d27 push edx */
  push32((uint32_t)(EDX));
  /* 12663d28 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12663d2e push eax */
  push32((uint32_t)(EAX));
  /* 12663d2f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12663d35 push ecx */
  push32((uint32_t)(ECX));
  /* 12663d36 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12663d3c push edx */
  push32((uint32_t)(EDX));
  /* 12663d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663d40 push eax */
  push32((uint32_t)(EAX));
  /* 12663d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663d44 mov edx, dword ptr [ecx*4 + 0x1268ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea50)));
  /* 12663d4b push edx */
  push32((uint32_t)(EDX));
  /* 12663d4c push 0x1268b4cc */
  push32((uint32_t)(0x1268b4ccu));
  /* 12663d51 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12663d56 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12663d5c push eax */
  push32((uint32_t)(EAX));
  /* 12663d5d call 0x12667520 */
  push32(0x12663d62u); f_12667520();
  /* 12663d62 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663d65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12663d67 jge 0x12663d7d */
  if ((C.sf==C.of)) goto L_12663d7d;
  /* 12663d69 push 0x1268b430 */
  push32((uint32_t)(0x1268b430u));
  /* 12663d6e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12663d74 push ecx */
  push32((uint32_t)(ECX));
  /* 12663d75 call 0x12667620 */
  push32(0x12663d7au); f_12667620();
  /* 12663d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663d7d:;
  /* 12663d7d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12663d82 push 0x1268b4a8 */
  push32((uint32_t)(0x1268b4a8u));
  /* 12663d87 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12663d8d push edx */
  push32((uint32_t)(EDX));
  /* 12663d8e call 0x12667dd0 */
  push32(0x12663d93u); f_12667dd0();
  /* 12663d93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663d96 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12663d9c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663da3 jne 0x12663db6 */
  if (!C.zf) goto L_12663db6;
  /* 12663da5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12663da7 call 0x12667b10 */
  push32(0x12663dacu); f_12667b10();
  /* 12663dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663daf push 3 */
  push32((uint32_t)(0x3u));
  /* 12663db1 call 0x12663e30 */
  push32(0x12663db6u); f_12663e30();
L_12663db6:;
  /* 12663db6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663dbd jne 0x12663dc6 */
  if (!C.zf) goto L_12663dc6;
  /* 12663dbf mov eax, 1 */
  EAX = (0x1u);
  /* 12663dc4 jmp 0x12663dc8 */
  goto L_12663dc8;
L_12663dc6:;
  /* 12663dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12663dc8:;
  /* 12663dc8 mov esp, ebp */
  ESP = (EBP);
  /* 12663dca pop ebp */
  EBP = (pop32());
  /* 12663dcb ret  */
  ESPCHK(0x12663ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x12663dd0 (56 bytes, 15 insns) */
void f_12663dd0(void) {
  FTRACE(0x12663dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12663dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12663dd3 cmp dword ptr [0x126920dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663dda je 0x12663de2 */
  if (C.zf) goto L_12663de2;
  /* 12663ddc call dword ptr [0x126920dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126920dc))), 0x12663de2u);
L_12663de2:;
  /* 12663de2 push 0x1268e418 */
  push32((uint32_t)(0x1268e418u));
  /* 12663de7 push 0x1268e208 */
  push32((uint32_t)(0x1268e208u));
  /* 12663dec call 0x12663fa0 */
  push32(0x12663df1u); f_12663fa0();
  /* 12663df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663df4 push 0x1268e104 */
  push32((uint32_t)(0x1268e104u));
  /* 12663df9 push 0x1268e000 */
  push32((uint32_t)(0x1268e000u));
  /* 12663dfe call 0x12663fa0 */
  push32(0x12663e03u); f_12663fa0();
  /* 12663e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663e06 pop ebp */
  EBP = (pop32());
  /* 12663e07 ret  */
  ESPCHK(0x12663dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e10 @ 0x12663e10 (21 bytes, 10 insns) */
void f_12663e10(void) {
  FTRACE(0x12663e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12663e11 mov ebp, esp */
  EBP = (ESP);
  /* 12663e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663e1a push eax */
  push32((uint32_t)(EAX));
  /* 12663e1b call 0x12663e90 */
  push32(0x12663e20u); f_12663e90();
  /* 12663e20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663e23 pop ebp */
  EBP = (pop32());
  /* 12663e24 ret  */
  ESPCHK(0x12663e10u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12663e30 (21 bytes, 10 insns) */
void f_12663e30(void) {
  FTRACE(0x12663e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12663e31 mov ebp, esp */
  EBP = (ESP);
  /* 12663e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 12663e37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663e3a push eax */
  push32((uint32_t)(EAX));
  /* 12663e3b call 0x12663e90 */
  push32(0x12663e40u); f_12663e90();
  /* 12663e40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663e43 pop ebp */
  EBP = (pop32());
  /* 12663e44 ret  */
  ESPCHK(0x12663e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x12663e50 (19 bytes, 9 insns) */
void f_12663e50(void) {
  FTRACE(0x12663e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12663e51 mov ebp, esp */
  EBP = (ESP);
  /* 12663e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12663e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e59 call 0x12663e90 */
  push32(0x12663e5eu); f_12663e90();
  /* 12663e5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663e61 pop ebp */
  EBP = (pop32());
  /* 12663e62 ret  */
  ESPCHK(0x12663e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x12663e70 (19 bytes, 9 insns) */
void f_12663e70(void) {
  FTRACE(0x12663e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12663e71 mov ebp, esp */
  EBP = (ESP);
  /* 12663e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12663e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12663e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12663e79 call 0x12663e90 */
  push32(0x12663e7eu); f_12663e90();
  /* 12663e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663e81 pop ebp */
  EBP = (pop32());
  /* 12663e82 ret  */
  ESPCHK(0x12663e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x12663e90 (227 bytes, 61 insns) */
void f_12663e90(void) {
  FTRACE(0x12663e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12663e91 mov ebp, esp */
  EBP = (ESP);
  /* 12663e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12663e94 call 0x12663f80 */
  push32(0x12663e99u); f_12663f80();
  /* 12663e99 cmp dword ptr [0x126905e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x126905e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663ea0 jne 0x12663eb3 */
  if (!C.zf) goto L_12663eb3;
  /* 12663ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12663ea6 call dword ptr [0x12693354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693354))), 0x12663eacu);
  /* 12663eac push eax */
  push32((uint32_t)(EAX));
  /* 12663ead call dword ptr [0x12693350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693350))), 0x12663eb3u);
L_12663eb3:;
  /* 12663eb3 mov dword ptr [0x126905e0], 1 */
  w32((uint32_t)(0x126905e0), (0x1u));
  /* 12663ebd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12663ec0 mov byte ptr [0x126905dc], cl */
  w8((uint32_t)(0x126905dc), (CL));
  /* 12663ec6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663eca jne 0x12663f13 */
  if (!C.zf) goto L_12663f13;
  /* 12663ecc cmp dword ptr [0x126920d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663ed3 je 0x12663f01 */
  if (C.zf) goto L_12663f01;
  /* 12663ed5 mov edx, dword ptr [0x126920d4] */
  EDX = (r32((uint32_t)(0x126920d4)));
  /* 12663edb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12663ede:;
  /* 12663ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663ee1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12663ee4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12663ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663eea cmp ecx, dword ptr [0x126920d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x126920d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663ef0 jb 0x12663f01 */
  if (C.cf) goto L_12663f01;
  /* 12663ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663ef5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663ef8 je 0x12663eff */
  if (C.zf) goto L_12663eff;
  /* 12663efa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12663efd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12663effu);
L_12663eff:;
  /* 12663eff jmp 0x12663ede */
  goto L_12663ede;
L_12663f01:;
  /* 12663f01 push 0x1268e724 */
  push32((uint32_t)(0x1268e724u));
  /* 12663f06 push 0x1268e51c */
  push32((uint32_t)(0x1268e51cu));
  /* 12663f0b call 0x12663fa0 */
  push32(0x12663f10u); f_12663fa0();
  /* 12663f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12663f13:;
  /* 12663f13 push 0x1268e92c */
  push32((uint32_t)(0x1268e92cu));
  /* 12663f18 push 0x1268e828 */
  push32((uint32_t)(0x1268e828u));
  /* 12663f1d call 0x12663fa0 */
  push32(0x12663f22u); f_12663fa0();
  /* 12663f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663f25 cmp dword ptr [0x126905e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663f2c jne 0x12663f4e */
  if (!C.zf) goto L_12663f4e;
  /* 12663f2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12663f30 call 0x12665b80 */
  push32(0x12663f35u); f_12665b80();
  /* 12663f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663f38 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12663f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12663f3d je 0x12663f4e */
  if (C.zf) goto L_12663f4e;
  /* 12663f3f mov dword ptr [0x126905e8], 1 */
  w32((uint32_t)(0x126905e8), (0x1u));
  /* 12663f49 call 0x12666490 */
  push32(0x12663f4eu); f_12666490();
L_12663f4e:;
  /* 12663f4e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663f52 je 0x12663f5b */
  if (C.zf) goto L_12663f5b;
  /* 12663f54 call 0x12663f90 */
  push32(0x12663f59u); f_12663f90();
  /* 12663f59 jmp 0x12663f6f */
  goto L_12663f6f;
L_12663f5b:;
  /* 12663f5b mov dword ptr [0x126905e4], 1 */
  w32((uint32_t)(0x126905e4), (0x1u));
  /* 12663f65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663f68 push ecx */
  push32((uint32_t)(ECX));
  /* 12663f69 call dword ptr [0x1269334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269334c))), 0x12663f6fu);
L_12663f6f:;
  /* 12663f6f mov esp, ebp */
  ESP = (EBP);
  /* 12663f71 pop ebp */
  EBP = (pop32());
  /* 12663f72 ret  */
  ESPCHK(0x12663e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x12663f80 (15 bytes, 7 insns) */
void f_12663f80(void) {
  FTRACE(0x12663f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12663f81 mov ebp, esp */
  EBP = (ESP);
  /* 12663f83 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12663f85 call 0x12668070 */
  push32(0x12663f8au); f_12668070();
  /* 12663f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663f8d pop ebp */
  EBP = (pop32());
  /* 12663f8e ret  */
  ESPCHK(0x12663f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x12663f90 (15 bytes, 7 insns) */
void f_12663f90(void) {
  FTRACE(0x12663f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12663f91 mov ebp, esp */
  EBP = (ESP);
  /* 12663f93 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12663f95 call 0x12668110 */
  push32(0x12663f9au); f_12668110();
  /* 12663f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12663f9d pop ebp */
  EBP = (pop32());
  /* 12663f9e ret  */
  ESPCHK(0x12663f90u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12663fa0 (37 bytes, 16 insns) */
void f_12663fa0(void) {
  FTRACE(0x12663fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12663fa1 mov ebp, esp */
  EBP = (ESP);
L_12663fa3:;
  /* 12663fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663fa6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663fa9 jae 0x12663fc3 */
  if (!C.cf) goto L_12663fc3;
  /* 12663fab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663fae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663fb1 je 0x12663fb8 */
  if (C.zf) goto L_12663fb8;
  /* 12663fb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663fb6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12663fb8u);
L_12663fb8:;
  /* 12663fb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12663fbb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12663fbe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12663fc1 jmp 0x12663fa3 */
  goto L_12663fa3;
L_12663fc3:;
  /* 12663fc3 pop ebp */
  EBP = (pop32());
  /* 12663fc4 ret  */
  ESPCHK(0x12663fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x12663fd0 (130 bytes, 42 insns) */
void f_12663fd0(void) {
  FTRACE(0x12663fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12663fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12663fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12663fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12663fd4 call 0x12667f90 */
  push32(0x12663fd9u); f_12667f90();
  /* 12663fd9 call dword ptr [0x12693360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693360))), 0x12663fdfu);
  /* 12663fdf mov dword ptr [0x1268ea5c], eax */
  w32((uint32_t)(0x1268ea5c), (EAX));
  /* 12663fe4 cmp dword ptr [0x1268ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1268ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12663feb jne 0x12663ff1 */
  if (!C.zf) goto L_12663ff1;
  /* 12663fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12663fef jmp 0x1266404e */
  goto L_1266404e;
L_12663ff1:;
  /* 12663ff1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12663ff3 push 0x1268b604 */
  push32((uint32_t)(0x1268b604u));
  /* 12663ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12663ffa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12663ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 12663ffe call 0x12664a80 */
  push32(0x12664003u); f_12664a80();
  /* 12664003 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664006 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12664009 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266400d je 0x12664024 */
  if (C.zf) goto L_12664024;
  /* 1266400f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664012 push eax */
  push32((uint32_t)(EAX));
  /* 12664013 mov ecx, dword ptr [0x1268ea5c] */
  ECX = (r32((uint32_t)(0x1268ea5c)));
  /* 12664019 push ecx */
  push32((uint32_t)(ECX));
  /* 1266401a call dword ptr [0x1269335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269335c))), 0x12664020u);
  /* 12664020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664022 jne 0x12664028 */
  if (!C.zf) goto L_12664028;
L_12664024:;
  /* 12664024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664026 jmp 0x1266404e */
  goto L_1266404e;
L_12664028:;
  /* 12664028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266402b push edx */
  push32((uint32_t)(EDX));
  /* 1266402c call 0x12664090 */
  push32(0x12664031u); f_12664090();
  /* 12664031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664034 call dword ptr [0x12693358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693358))), 0x1266403au);
  /* 1266403a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266403d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266403f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664042 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12664049 mov eax, 1 */
  EAX = (0x1u);
L_1266404e:;
  /* 1266404e mov esp, ebp */
  ESP = (EBP);
  /* 12664050 pop ebp */
  EBP = (pop32());
  /* 12664051 ret  */
  ESPCHK(0x12663fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x12664060 (41 bytes, 11 insns) */
void f_12664060(void) {
  FTRACE(0x12664060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664060 push ebp */
  push32((uint32_t)(EBP));
  /* 12664061 mov ebp, esp */
  EBP = (ESP);
  /* 12664063 call 0x12667fd0 */
  push32(0x12664068u); f_12667fd0();
  /* 12664068 cmp dword ptr [0x1268ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1268ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266406f je 0x12664087 */
  if (C.zf) goto L_12664087;
  /* 12664071 mov eax, dword ptr [0x1268ea5c] */
  EAX = (r32((uint32_t)(0x1268ea5c)));
  /* 12664076 push eax */
  push32((uint32_t)(EAX));
  /* 12664077 call dword ptr [0x12693364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693364))), 0x1266407du);
  /* 1266407d mov dword ptr [0x1268ea5c], 0xffffffff */
  w32((uint32_t)(0x1268ea5c), (0xffffffffu));
L_12664087:;
  /* 12664087 pop ebp */
  EBP = (pop32());
  /* 12664088 ret  */
  ESPCHK(0x12664060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x12664090 (25 bytes, 8 insns) */
void f_12664090(void) {
  FTRACE(0x12664090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664090 push ebp */
  push32((uint32_t)(EBP));
  /* 12664091 mov ebp, esp */
  EBP = (ESP);
  /* 12664093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664096 mov dword ptr [eax + 0x50], 0x1268ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1268ec00u));
  /* 1266409d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126640a0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 126640a7 pop ebp */
  EBP = (pop32());
  /* 126640a8 ret  */
  ESPCHK(0x12664090u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x126640b0 (152 bytes, 48 insns) */
void f_126640b0(void) {
  FTRACE(0x126640b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126640b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126640b1 mov ebp, esp */
  EBP = (ESP);
  /* 126640b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126640b6 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x126640bcu);
  /* 126640bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126640bf mov eax, dword ptr [0x1268ea5c] */
  EAX = (r32((uint32_t)(0x1268ea5c)));
  /* 126640c4 push eax */
  push32((uint32_t)(EAX));
  /* 126640c5 call dword ptr [0x12693298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693298))), 0x126640cbu);
  /* 126640cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126640ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126640d2 jne 0x12664137 */
  if (!C.zf) goto L_12664137;
  /* 126640d4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 126640d9 push 0x1268b604 */
  push32((uint32_t)(0x1268b604u));
  /* 126640de push 2 */
  push32((uint32_t)(0x2u));
  /* 126640e0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 126640e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 126640e4 call 0x12664a80 */
  push32(0x126640e9u); f_12664a80();
  /* 126640e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126640ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126640ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126640f3 je 0x1266412d */
  if (C.zf) goto L_1266412d;
  /* 126640f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126640f8 push ecx */
  push32((uint32_t)(ECX));
  /* 126640f9 mov edx, dword ptr [0x1268ea5c] */
  EDX = (r32((uint32_t)(0x1268ea5c)));
  /* 126640ff push edx */
  push32((uint32_t)(EDX));
  /* 12664100 call dword ptr [0x1269335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269335c))), 0x12664106u);
  /* 12664106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664108 je 0x1266412d */
  if (C.zf) goto L_1266412d;
  /* 1266410a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266410d push eax */
  push32((uint32_t)(EAX));
  /* 1266410e call 0x12664090 */
  push32(0x12664113u); f_12664090();
  /* 12664113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664116 call dword ptr [0x12693358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693358))), 0x1266411cu);
  /* 1266411c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266411f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12664121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664124 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1266412b jmp 0x12664137 */
  goto L_12664137;
L_1266412d:;
  /* 1266412d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1266412f call 0x126635e0 */
  push32(0x12664134u); f_126635e0();
  /* 12664134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664137:;
  /* 12664137 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266413a push eax */
  push32((uint32_t)(EAX));
  /* 1266413b call dword ptr [0x12693294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693294))), 0x12664141u);
  /* 12664141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664144 mov esp, ebp */
  ESP = (EBP);
  /* 12664146 pop ebp */
  EBP = (pop32());
  /* 12664147 ret  */
  ESPCHK(0x126640b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x12664150 (263 bytes, 86 insns) */
void f_12664150(void) {
  FTRACE(0x12664150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664150 push ebp */
  push32((uint32_t)(EBP));
  /* 12664151 mov ebp, esp */
  EBP = (ESP);
  /* 12664153 cmp dword ptr [0x1268ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1268ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266415a je 0x12664255 */
  if (C.zf) goto L_12664255;
  /* 12664160 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664164 jne 0x12664175 */
  if (!C.zf) goto L_12664175;
  /* 12664166 mov eax, dword ptr [0x1268ea5c] */
  EAX = (r32((uint32_t)(0x1268ea5c)));
  /* 1266416b push eax */
  push32((uint32_t)(EAX));
  /* 1266416c call dword ptr [0x12693298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693298))), 0x12664172u);
  /* 12664172 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12664175:;
  /* 12664175 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664179 je 0x12664246 */
  if (C.zf) goto L_12664246;
  /* 1266417f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664182 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664186 je 0x12664199 */
  if (C.zf) goto L_12664199;
  /* 12664188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266418a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266418d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12664190 push eax */
  push32((uint32_t)(EAX));
  /* 12664191 call 0x12665100 */
  push32(0x12664196u); f_12665100();
  /* 12664196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664199:;
  /* 12664199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266419c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126641a0 je 0x126641b3 */
  if (C.zf) goto L_126641b3;
  /* 126641a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 126641a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641a7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 126641aa push eax */
  push32((uint32_t)(EAX));
  /* 126641ab call 0x12665100 */
  push32(0x126641b0u); f_12665100();
  /* 126641b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126641b3:;
  /* 126641b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641b6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126641ba je 0x126641cd */
  if (C.zf) goto L_126641cd;
  /* 126641bc push 2 */
  push32((uint32_t)(0x2u));
  /* 126641be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641c1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 126641c4 push eax */
  push32((uint32_t)(EAX));
  /* 126641c5 call 0x12665100 */
  push32(0x126641cau); f_12665100();
  /* 126641ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126641cd:;
  /* 126641cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641d0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126641d4 je 0x126641e7 */
  if (C.zf) goto L_126641e7;
  /* 126641d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 126641d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641db mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 126641de push eax */
  push32((uint32_t)(EAX));
  /* 126641df call 0x12665100 */
  push32(0x126641e4u); f_12665100();
  /* 126641e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126641e7:;
  /* 126641e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641ea cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126641ee je 0x12664201 */
  if (C.zf) goto L_12664201;
  /* 126641f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 126641f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126641f5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 126641f8 push eax */
  push32((uint32_t)(EAX));
  /* 126641f9 call 0x12665100 */
  push32(0x126641feu); f_12665100();
  /* 126641fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664201:;
  /* 12664201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664204 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664208 je 0x1266421b */
  if (C.zf) goto L_1266421b;
  /* 1266420a push 2 */
  push32((uint32_t)(0x2u));
  /* 1266420c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266420f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12664212 push eax */
  push32((uint32_t)(EAX));
  /* 12664213 call 0x12665100 */
  push32(0x12664218u); f_12665100();
  /* 12664218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266421b:;
  /* 1266421b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266421e cmp dword ptr [ecx + 0x50], 0x1268ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1268ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664225 je 0x12664238 */
  if (C.zf) goto L_12664238;
  /* 12664227 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266422c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1266422f push eax */
  push32((uint32_t)(EAX));
  /* 12664230 call 0x12665100 */
  push32(0x12664235u); f_12665100();
  /* 12664235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664238:;
  /* 12664238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266423a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266423d push ecx */
  push32((uint32_t)(ECX));
  /* 1266423e call 0x12665100 */
  push32(0x12664243u); f_12665100();
  /* 12664243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664246:;
  /* 12664246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664248 mov edx, dword ptr [0x1268ea5c] */
  EDX = (r32((uint32_t)(0x1268ea5c)));
  /* 1266424e push edx */
  push32((uint32_t)(EDX));
  /* 1266424f call dword ptr [0x1269335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269335c))), 0x12664255u);
L_12664255:;
  /* 12664255 pop ebp */
  EBP = (pop32());
  /* 12664256 ret  */
  ESPCHK(0x12664150u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x12664260 (11 bytes, 5 insns) */
void f_12664260(void) {
  FTRACE(0x12664260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664260 push ebp */
  push32((uint32_t)(EBP));
  /* 12664261 mov ebp, esp */
  EBP = (ESP);
  /* 12664263 call dword ptr [0x12693358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693358))), 0x12664269u);
  /* 12664269 pop ebp */
  EBP = (pop32());
  /* 1266426a ret  */
  ESPCHK(0x12664260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x12664270 (11 bytes, 5 insns) */
void f_12664270(void) {
  FTRACE(0x12664270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664270 push ebp */
  push32((uint32_t)(EBP));
  /* 12664271 mov ebp, esp */
  EBP = (ESP);
  /* 12664273 call dword ptr [0x12693374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693374))), 0x12664279u);
  /* 12664279 pop ebp */
  EBP = (pop32());
  /* 1266427a ret  */
  ESPCHK(0x12664270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004280 @ 0x12664280 (804 bytes, 236 insns) */
void f_12664280(void) {
  FTRACE(0x12664280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664280 push ebp */
  push32((uint32_t)(EBP));
  /* 12664281 mov ebp, esp */
  EBP = (ESP);
  /* 12664283 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664286 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1266428b push 0x1268b610 */
  push32((uint32_t)(0x1268b610u));
  /* 12664290 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664292 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12664297 call 0x12664670 */
  push32(0x1266429cu); f_12664670();
  /* 1266429c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266429f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 126642a2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126642a6 jne 0x126642b2 */
  if (!C.zf) goto L_126642b2;
  /* 126642a8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 126642aa call 0x126635e0 */
  push32(0x126642afu); f_126635e0();
  /* 126642af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126642b2:;
  /* 126642b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642b5 mov dword ptr [0x12691f80], eax */
  w32((uint32_t)(0x12691f80), (EAX));
  /* 126642ba mov dword ptr [0x126920bc], 0x20 */
  w32((uint32_t)(0x126920bc), (0x20u));
  /* 126642c4 jmp 0x126642cf */
  goto L_126642cf;
L_126642c6:;
  /* 126642c6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642c9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126642cc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_126642cf:;
  /* 126642cf mov edx, dword ptr [0x12691f80] */
  EDX = (r32((uint32_t)(0x12691f80)));
  /* 126642d5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126642db cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126642de jae 0x12664303 */
  if (!C.cf) goto L_12664303;
  /* 126642e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642e3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 126642e7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642ea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 126642f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642f3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 126642f7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126642fa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12664301 jmp 0x126642c6 */
  goto L_126642c6;
L_12664303:;
  /* 12664303 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12664306 push ecx */
  push32((uint32_t)(ECX));
  /* 12664307 call dword ptr [0x12693380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693380))), 0x1266430du);
  /* 1266430d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12664310 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12664316 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12664318 je 0x126644a5 */
  if (C.zf) goto L_126644a5;
  /* 1266431e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664322 je 0x126644a5 */
  if (C.zf) goto L_126644a5;
  /* 12664328 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266432b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266432d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12664330 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12664333 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664336 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12664339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266433c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266433f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12664342 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664349 jge 0x12664353 */
  if ((C.sf==C.of)) goto L_12664353;
  /* 1266434b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1266434e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12664351 jmp 0x1266435a */
  goto L_1266435a;
L_12664353:;
  /* 12664353 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1266435a:;
  /* 1266435a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1266435d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12664360 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12664367 jmp 0x12664372 */
  goto L_12664372;
L_12664369:;
  /* 12664369 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1266436c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266436f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12664372:;
  /* 12664372 mov ecx, dword ptr [0x126920bc] */
  ECX = (r32((uint32_t)(0x126920bc)));
  /* 12664378 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266437b jge 0x12664412 */
  if ((C.sf==C.of)) goto L_12664412;
  /* 12664381 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12664386 push 0x1268b610 */
  push32((uint32_t)(0x1268b610u));
  /* 1266438b push 2 */
  push32((uint32_t)(0x2u));
  /* 1266438d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12664392 call 0x12664670 */
  push32(0x12664397u); f_12664670();
  /* 12664397 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266439a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1266439d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126643a1 jne 0x126643ae */
  if (!C.zf) goto L_126643ae;
  /* 126643a3 mov edx, dword ptr [0x126920bc] */
  EDX = (r32((uint32_t)(0x126920bc)));
  /* 126643a9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 126643ac jmp 0x12664412 */
  goto L_12664412;
L_126643ae:;
  /* 126643ae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 126643b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126643b4 mov dword ptr [eax*4 + 0x12691f80], ecx */
  w32((uint32_t)(EAX*4 + 0x12691f80), (ECX));
  /* 126643bb mov edx, dword ptr [0x126920bc] */
  EDX = (r32((uint32_t)(0x126920bc)));
  /* 126643c1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126643c4 mov dword ptr [0x126920bc], edx */
  w32((uint32_t)(0x126920bc), (EDX));
  /* 126643ca jmp 0x126643d5 */
  goto L_126643d5;
L_126643cc:;
  /* 126643cc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126643cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126643d2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_126643d5:;
  /* 126643d5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 126643d8 mov edx, dword ptr [ecx*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 126643df add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126643e5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126643e8 jae 0x1266440d */
  if (!C.cf) goto L_1266440d;
  /* 126643ea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126643ed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 126643f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126643f4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 126643fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126643fd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12664401 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664404 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1266440b jmp 0x126643cc */
  goto L_126643cc;
L_1266440d:;
  /* 1266440d jmp 0x12664369 */
  goto L_12664369;
L_12664412:;
  /* 12664412 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12664419 jmp 0x12664436 */
  goto L_12664436;
L_1266441b:;
  /* 1266441b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1266441e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664421 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12664424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266442a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266442d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12664430 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664433 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12664436:;
  /* 12664436 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12664439 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266443c jge 0x126644a5 */
  if ((C.sf==C.of)) goto L_126644a5;
  /* 1266443e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12664441 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664444 je 0x126644a0 */
  if (C.zf) goto L_126644a0;
  /* 12664446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664449 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266444c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266444f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664451 je 0x126644a0 */
  if (C.zf) goto L_126644a0;
  /* 12664453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664456 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12664459 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1266445c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266445e jne 0x12664470 */
  if (!C.zf) goto L_12664470;
  /* 12664460 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12664463 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12664465 push edx */
  push32((uint32_t)(EDX));
  /* 12664466 call dword ptr [0x1269337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269337c))), 0x1266446cu);
  /* 1266446c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266446e je 0x126644a0 */
  if (C.zf) goto L_126644a0;
L_12664470:;
  /* 12664470 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12664473 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12664476 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12664479 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266447c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266447f mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 12664486 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664488 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1266448b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266448e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12664491 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12664493 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12664495 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266449b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266449d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_126644a0:;
  /* 126644a0 jmp 0x1266441b */
  goto L_1266441b;
L_126644a5:;
  /* 126644a5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 126644ac jmp 0x126644b7 */
  goto L_126644b7;
L_126644ae:;
  /* 126644ae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 126644b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126644b4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_126644b7:;
  /* 126644b7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126644bb jge 0x12664594 */
  if ((C.sf==C.of)) goto L_12664594;
  /* 126644c1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 126644c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126644c7 mov edx, dword ptr [0x12691f80] */
  EDX = (r32((uint32_t)(0x12691f80)));
  /* 126644cd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126644cf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 126644d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126644d5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126644d8 jne 0x12664580 */
  if (!C.zf) goto L_12664580;
  /* 126644de mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126644e1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 126644e5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126644e9 jne 0x126644f4 */
  if (!C.zf) goto L_126644f4;
  /* 126644eb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 126644f2 jmp 0x12664504 */
  goto L_12664504;
L_126644f4:;
  /* 126644f4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 126644f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126644fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 126644fc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126644fe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664501 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12664504:;
  /* 12664504 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12664507 push eax */
  push32((uint32_t)(EAX));
  /* 12664508 call dword ptr [0x1269332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269332c))), 0x1266450eu);
  /* 1266450e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12664511 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664515 je 0x1266456f */
  if (C.zf) goto L_1266456f;
  /* 12664517 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1266451a push ecx */
  push32((uint32_t)(ECX));
  /* 1266451b call dword ptr [0x1269337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269337c))), 0x12664521u);
  /* 12664521 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12664524 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664528 je 0x1266456f */
  if (C.zf) goto L_1266456f;
  /* 1266452a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266452d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12664530 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12664532 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12664535 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266453b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266453e jne 0x12664550 */
  if (!C.zf) goto L_12664550;
  /* 12664540 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664543 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12664546 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12664548 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266454b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1266454e jmp 0x1266456d */
  goto L_1266456d;
L_12664550:;
  /* 12664550 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12664553 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12664559 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266455c jne 0x1266456d */
  if (!C.zf) goto L_1266456d;
  /* 1266455e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664561 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12664564 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12664567 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266456a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1266456d:;
  /* 1266456d jmp 0x1266457e */
  goto L_1266457e;
L_1266456f:;
  /* 1266456f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664572 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12664575 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12664578 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266457b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1266457e:;
  /* 1266457e jmp 0x1266458f */
  goto L_1266458f;
L_12664580:;
  /* 12664580 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12664583 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12664586 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12664589 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1266458c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1266458f:;
  /* 1266458f jmp 0x126644ae */
  goto L_126644ae;
L_12664594:;
  /* 12664594 mov eax, dword ptr [0x126920bc] */
  EAX = (r32((uint32_t)(0x126920bc)));
  /* 12664599 push eax */
  push32((uint32_t)(EAX));
  /* 1266459a call dword ptr [0x12693378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693378))), 0x126645a0u);
  /* 126645a0 mov esp, ebp */
  ESP = (EBP);
  /* 126645a2 pop ebp */
  EBP = (pop32());
  /* 126645a3 ret  */
  ESPCHK(0x12664280u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x126645b0 (155 bytes, 45 insns) */
void f_126645b0(void) {
  FTRACE(0x126645b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126645b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126645b1 mov ebp, esp */
  EBP = (ESP);
  /* 126645b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126645b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126645bd jmp 0x126645c8 */
  goto L_126645c8;
L_126645bf:;
  /* 126645bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126645c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126645c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_126645c8:;
  /* 126645c8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126645cc jge 0x12664647 */
  if ((C.sf==C.of)) goto L_12664647;
  /* 126645ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126645d1 cmp dword ptr [ecx*4 + 0x12691f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12691f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126645d9 je 0x12664642 */
  if (C.zf) goto L_12664642;
  /* 126645db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126645de mov eax, dword ptr [edx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 126645e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126645e8 jmp 0x126645f3 */
  goto L_126645f3;
L_126645ea:;
  /* 126645ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126645ed add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126645f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126645f3:;
  /* 126645f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126645f6 mov eax, dword ptr [edx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 126645fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664602 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664605 jae 0x1266461f */
  if (!C.cf) goto L_1266461f;
  /* 12664607 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266460a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266460e je 0x1266461d */
  if (C.zf) goto L_1266461d;
  /* 12664610 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664613 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664616 push edx */
  push32((uint32_t)(EDX));
  /* 12664617 call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x1266461du);
L_1266461d:;
  /* 1266461d jmp 0x126645ea */
  goto L_126645ea;
L_1266461f:;
  /* 1266461f push 2 */
  push32((uint32_t)(0x2u));
  /* 12664621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664624 mov ecx, dword ptr [eax*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266462b push ecx */
  push32((uint32_t)(ECX));
  /* 1266462c call 0x12665100 */
  push32(0x12664631u); f_12665100();
  /* 12664631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664637 mov dword ptr [edx*4 + 0x12691f80], 0 */
  w32((uint32_t)(EDX*4 + 0x12691f80), (0x0u));
L_12664642:;
  /* 12664642 jmp 0x126645bf */
  goto L_126645bf;
L_12664647:;
  /* 12664647 mov esp, ebp */
  ESP = (EBP);
  /* 12664649 pop ebp */
  EBP = (pop32());
  /* 1266464a ret  */
  ESPCHK(0x126645b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x12664650 (29 bytes, 13 insns) */
void f_12664650(void) {
  FTRACE(0x12664650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664650 push ebp */
  push32((uint32_t)(EBP));
  /* 12664651 mov ebp, esp */
  EBP = (ESP);
  /* 12664653 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664655 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664657 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664659 mov eax, dword ptr [0x12690790] */
  EAX = (r32((uint32_t)(0x12690790)));
  /* 1266465e push eax */
  push32((uint32_t)(EAX));
  /* 1266465f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664662 push ecx */
  push32((uint32_t)(ECX));
  /* 12664663 call 0x126646c0 */
  push32(0x12664668u); f_126646c0();
  /* 12664668 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266466b pop ebp */
  EBP = (pop32());
  /* 1266466c ret  */
  ESPCHK(0x12664650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x12664670 (35 bytes, 16 insns) */
void f_12664670(void) {
  FTRACE(0x12664670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664670 push ebp */
  push32((uint32_t)(EBP));
  /* 12664671 mov ebp, esp */
  EBP = (ESP);
  /* 12664673 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664676 push eax */
  push32((uint32_t)(EAX));
  /* 12664677 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266467a push ecx */
  push32((uint32_t)(ECX));
  /* 1266467b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266467e push edx */
  push32((uint32_t)(EDX));
  /* 1266467f mov eax, dword ptr [0x12690790] */
  EAX = (r32((uint32_t)(0x12690790)));
  /* 12664684 push eax */
  push32((uint32_t)(EAX));
  /* 12664685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664688 push ecx */
  push32((uint32_t)(ECX));
  /* 12664689 call 0x126646c0 */
  push32(0x1266468eu); f_126646c0();
  /* 1266468e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664691 pop ebp */
  EBP = (pop32());
  /* 12664692 ret  */
  ESPCHK(0x12664670u, _esp0);
  ESP += 4; return;
}

/* FUN_100046a0 @ 0x126646a0 (27 bytes, 13 insns) */
void f_126646a0(void) {
  FTRACE(0x126646a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126646a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126646a1 mov ebp, esp */
  EBP = (ESP);
  /* 126646a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126646a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126646a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126646a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126646ac push eax */
  push32((uint32_t)(EAX));
  /* 126646ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126646b0 push ecx */
  push32((uint32_t)(ECX));
  /* 126646b1 call 0x126646c0 */
  push32(0x126646b6u); f_126646c0();
  /* 126646b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126646b9 pop ebp */
  EBP = (pop32());
  /* 126646ba ret  */
  ESPCHK(0x126646a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x126646c0 (94 bytes, 38 insns) */
void f_126646c0(void) {
  FTRACE(0x126646c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126646c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126646c1 mov ebp, esp */
  EBP = (ESP);
  /* 126646c3 push ecx */
  push32((uint32_t)(ECX));
L_126646c4:;
  /* 126646c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 126646c6 call 0x12668070 */
  push32(0x126646cbu); f_12668070();
  /* 126646cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126646ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126646d1 push eax */
  push32((uint32_t)(EAX));
  /* 126646d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126646d5 push ecx */
  push32((uint32_t)(ECX));
  /* 126646d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126646d9 push edx */
  push32((uint32_t)(EDX));
  /* 126646da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126646dd push eax */
  push32((uint32_t)(EAX));
  /* 126646de call 0x12664740 */
  push32(0x126646e3u); f_12664740();
  /* 126646e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126646e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126646e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 126646eb call 0x12668110 */
  push32(0x126646f0u); f_12668110();
  /* 126646f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126646f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126646f7 jne 0x126646ff */
  if (!C.zf) goto L_126646ff;
  /* 126646f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126646fd jne 0x12664704 */
  if (!C.zf) goto L_12664704;
L_126646ff:;
  /* 126646ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664702 jmp 0x1266471a */
  goto L_1266471a;
L_12664704:;
  /* 12664704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664707 push ecx */
  push32((uint32_t)(ECX));
  /* 12664708 call 0x126683b0 */
  push32(0x1266470du); f_126683b0();
  /* 1266470d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664712 jne 0x12664718 */
  if (!C.zf) goto L_12664718;
  /* 12664714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664716 jmp 0x1266471a */
  goto L_1266471a;
L_12664718:;
  /* 12664718 jmp 0x126646c4 */
  goto L_126646c4;
L_1266471a:;
  /* 1266471a mov esp, ebp */
  ESP = (EBP);
  /* 1266471c pop ebp */
  EBP = (pop32());
  /* 1266471d ret  */
  ESPCHK(0x126646c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x12664720 (23 bytes, 11 insns) */
void f_12664720(void) {
  FTRACE(0x12664720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664720 push ebp */
  push32((uint32_t)(EBP));
  /* 12664721 mov ebp, esp */
  EBP = (ESP);
  /* 12664723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664725 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664727 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266472c push eax */
  push32((uint32_t)(EAX));
  /* 1266472d call 0x12664740 */
  push32(0x12664732u); f_12664740();
  /* 12664732 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664735 pop ebp */
  EBP = (pop32());
  /* 12664736 ret  */
  ESPCHK(0x12664720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x12664740 (787 bytes, 254 insns) */
void f_12664740(void) {
  FTRACE(0x12664740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664740 push ebp */
  push32((uint32_t)(EBP));
  /* 12664741 mov ebp, esp */
  EBP = (ESP);
  /* 12664743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664746 push ebx */
  push32((uint32_t)(EBX));
  /* 12664747 push esi */
  push32((uint32_t)(ESI));
  /* 12664748 push edi */
  push32((uint32_t)(EDI));
  /* 12664749 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12664750 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12664755 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12664758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266475a je 0x1266478c */
  if (C.zf) goto L_1266478c;
L_1266475c:;
  /* 1266475c call 0x12665810 */
  push32(0x12664761u); f_12665810();
  /* 12664761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664763 jne 0x12664786 */
  if (!C.zf) goto L_12664786;
  /* 12664765 push 0x1268b704 */
  push32((uint32_t)(0x1268b704u));
  /* 1266476a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266476c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12664771 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664776 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664778 call 0x12663730 */
  push32(0x1266477du); f_12663730();
  /* 1266477d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664780 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664783 jne 0x12664786 */
  if (!C.zf) goto L_12664786;
  /* 12664785 int3  */
  x86_unimpl("int3 @ 0x12664785");
L_12664786:;
  /* 12664786 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664788 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266478a jne 0x1266475c */
  if (!C.zf) goto L_1266475c;
L_1266478c:;
  /* 1266478c mov edx, dword ptr [0x1268ea88] */
  EDX = (r32((uint32_t)(0x1268ea88)));
  /* 12664792 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12664795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664798 cmp eax, dword ptr [0x1268ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266479e jne 0x126647a1 */
  if (!C.zf) goto L_126647a1;
  /* 126647a0 int3  */
  x86_unimpl("int3 @ 0x126647a0");
L_126647a1:;
  /* 126647a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126647a4 push ecx */
  push32((uint32_t)(ECX));
  /* 126647a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126647a8 push edx */
  push32((uint32_t)(EDX));
  /* 126647a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126647ac push eax */
  push32((uint32_t)(EAX));
  /* 126647ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126647b0 push ecx */
  push32((uint32_t)(ECX));
  /* 126647b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126647b4 push edx */
  push32((uint32_t)(EDX));
  /* 126647b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126647b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126647b9 call dword ptr [0x1268ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268ec90))), 0x126647bfu);
  /* 126647bf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126647c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126647c4 jne 0x12664824 */
  if (!C.zf) goto L_12664824;
  /* 126647c6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126647ca je 0x126647f7 */
  if (C.zf) goto L_126647f7;
L_126647cc:;
  /* 126647cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126647cf push eax */
  push32((uint32_t)(EAX));
  /* 126647d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126647d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126647d4 push 0x1268b6c0 */
  push32((uint32_t)(0x1268b6c0u));
  /* 126647d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126647db push 0 */
  push32((uint32_t)(0x0u));
  /* 126647dd push 0 */
  push32((uint32_t)(0x0u));
  /* 126647df push 0 */
  push32((uint32_t)(0x0u));
  /* 126647e1 call 0x12663730 */
  push32(0x126647e6u); f_12663730();
  /* 126647e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126647e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126647ec jne 0x126647ef */
  if (!C.zf) goto L_126647ef;
  /* 126647ee int3  */
  x86_unimpl("int3 @ 0x126647ee");
L_126647ef:;
  /* 126647ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126647f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126647f3 jne 0x126647cc */
  if (!C.zf) goto L_126647cc;
  /* 126647f5 jmp 0x1266481d */
  goto L_1266481d;
L_126647f7:;
  /* 126647f7 push 0x1268b69c */
  push32((uint32_t)(0x1268b69cu));
  /* 126647fc push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12664801 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664803 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664805 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664807 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664809 call 0x12663730 */
  push32(0x1266480eu); f_12663730();
  /* 1266480e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664811 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664814 jne 0x12664817 */
  if (!C.zf) goto L_12664817;
  /* 12664816 int3  */
  x86_unimpl("int3 @ 0x12664816");
L_12664817:;
  /* 12664817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266481b jne 0x126647f7 */
  if (!C.zf) goto L_126647f7;
L_1266481d:;
  /* 1266481d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266481f jmp 0x12664a4c */
  goto L_12664a4c;
L_12664824:;
  /* 12664824 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664827 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266482d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664830 je 0x12664846 */
  if (C.zf) goto L_12664846;
  /* 12664832 mov edx, dword ptr [0x1268ea84] */
  EDX = (r32((uint32_t)(0x1268ea84)));
  /* 12664838 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266483b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266483d jne 0x12664846 */
  if (!C.zf) goto L_12664846;
  /* 1266483f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12664846:;
  /* 12664846 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266484a ja 0x12664857 */
  if ((!C.cf&&!C.zf)) goto L_12664857;
  /* 1266484c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266484f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664852 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664855 jbe 0x12664883 */
  if ((C.cf||C.zf)) goto L_12664883;
L_12664857:;
  /* 12664857 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266485a push ecx */
  push32((uint32_t)(ECX));
  /* 1266485b push 0x1268b674 */
  push32((uint32_t)(0x1268b674u));
  /* 12664860 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664862 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664864 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664866 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664868 call 0x12663730 */
  push32(0x1266486du); f_12663730();
  /* 1266486d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664870 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664873 jne 0x12664876 */
  if (!C.zf) goto L_12664876;
  /* 12664875 int3  */
  x86_unimpl("int3 @ 0x12664875");
L_12664876:;
  /* 12664876 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12664878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266487a jne 0x12664857 */
  if (!C.zf) goto L_12664857;
  /* 1266487c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266487e jmp 0x12664a4c */
  goto L_12664a4c;
L_12664883:;
  /* 12664883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664886 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266488b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266488e je 0x126648d0 */
  if (C.zf) goto L_126648d0;
  /* 12664890 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664894 je 0x126648d0 */
  if (C.zf) goto L_126648d0;
  /* 12664896 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664899 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266489f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126648a2 je 0x126648d0 */
  if (C.zf) goto L_126648d0;
  /* 126648a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126648a8 je 0x126648d0 */
  if (C.zf) goto L_126648d0;
L_126648aa:;
  /* 126648aa push 0x1268b640 */
  push32((uint32_t)(0x1268b640u));
  /* 126648af push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126648b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126648b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126648b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126648ba push 1 */
  push32((uint32_t)(0x1u));
  /* 126648bc call 0x12663730 */
  push32(0x126648c1u); f_12663730();
  /* 126648c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126648c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126648c7 jne 0x126648ca */
  if (!C.zf) goto L_126648ca;
  /* 126648c9 int3  */
  x86_unimpl("int3 @ 0x126648c9");
L_126648ca:;
  /* 126648ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126648cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126648ce jne 0x126648aa */
  if (!C.zf) goto L_126648aa;
L_126648d0:;
  /* 126648d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126648d3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126648d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126648d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126648dc push ecx */
  push32((uint32_t)(ECX));
  /* 126648dd call 0x126684c0 */
  push32(0x126648e2u); f_126684c0();
  /* 126648e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126648e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126648e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126648ec jne 0x126648f5 */
  if (!C.zf) goto L_126648f5;
  /* 126648ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126648f0 jmp 0x12664a4c */
  goto L_12664a4c;
L_126648f5:;
  /* 126648f5 mov edx, dword ptr [0x1268ea88] */
  EDX = (r32((uint32_t)(0x1268ea88)));
  /* 126648fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126648fe mov dword ptr [0x1268ea88], edx */
  w32((uint32_t)(0x1268ea88), (EDX));
  /* 12664904 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664908 je 0x12664953 */
  if (C.zf) goto L_12664953;
  /* 1266490a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266490d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12664913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664916 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1266491d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664920 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12664927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266492a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12664931 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664937 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1266493a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266493d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12664944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664947 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1266494e jmp 0x126649f3 */
  goto L_126649f3;
L_12664953:;
  /* 12664953 mov edx, dword ptr [0x126905f0] */
  EDX = (r32((uint32_t)(0x126905f0)));
  /* 12664959 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266495c mov dword ptr [0x126905f0], edx */
  w32((uint32_t)(0x126905f0), (EDX));
  /* 12664962 mov eax, dword ptr [0x126905f8] */
  EAX = (r32((uint32_t)(0x126905f8)));
  /* 12664967 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266496a mov dword ptr [0x126905f8], eax */
  w32((uint32_t)(0x126905f8), (EAX));
  /* 1266496f mov ecx, dword ptr [0x126905f8] */
  ECX = (r32((uint32_t)(0x126905f8)));
  /* 12664975 cmp ecx, dword ptr [0x126905fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x126905fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266497b jbe 0x12664989 */
  if ((C.cf||C.zf)) goto L_12664989;
  /* 1266497d mov edx, dword ptr [0x126905f8] */
  EDX = (r32((uint32_t)(0x126905f8)));
  /* 12664983 mov dword ptr [0x126905fc], edx */
  w32((uint32_t)(0x126905fc), (EDX));
L_12664989:;
  /* 12664989 cmp dword ptr [0x126905f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664990 je 0x1266499f */
  if (C.zf) goto L_1266499f;
  /* 12664992 mov eax, dword ptr [0x126905f4] */
  EAX = (r32((uint32_t)(0x126905f4)));
  /* 12664997 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266499a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1266499d jmp 0x126649a8 */
  goto L_126649a8;
L_1266499f:;
  /* 1266499f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649a2 mov dword ptr [0x126905ec], edx */
  w32((uint32_t)(0x126905ec), (EDX));
L_126649a8:;
  /* 126649a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649ab mov ecx, dword ptr [0x126905f4] */
  ECX = (r32((uint32_t)(0x126905f4)));
  /* 126649b1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 126649b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649b6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 126649bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126649c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 126649c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126649cc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 126649cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126649d5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 126649d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126649de mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 126649e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126649e7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 126649ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126649ed mov dword ptr [0x126905f4], ecx */
  w32((uint32_t)(0x126905f4), (ECX));
L_126649f3:;
  /* 126649f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 126649f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126649f7 mov dl, byte ptr [0x1268ea90] */
  DL = (r8((uint32_t)(0x1268ea90)));
  /* 126649fd push edx */
  push32((uint32_t)(EDX));
  /* 126649fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664a01 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a04 push eax */
  push32((uint32_t)(EAX));
  /* 12664a05 call 0x126683e0 */
  push32(0x12664a0au); f_126683e0();
  /* 12664a0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a0d push 4 */
  push32((uint32_t)(0x4u));
  /* 12664a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664a11 mov cl, byte ptr [0x1268ea90] */
  CL = (r8((uint32_t)(0x1268ea90)));
  /* 12664a17 push ecx */
  push32((uint32_t)(ECX));
  /* 12664a18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664a1e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12664a22 push ecx */
  push32((uint32_t)(ECX));
  /* 12664a23 call 0x126683e0 */
  push32(0x12664a28u); f_126683e0();
  /* 12664a28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664a2e push edx */
  push32((uint32_t)(EDX));
  /* 12664a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664a31 mov al, byte ptr [0x1268ea92] */
  AL = (r8((uint32_t)(0x1268ea92)));
  /* 12664a36 push eax */
  push32((uint32_t)(EAX));
  /* 12664a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664a3a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a3d push ecx */
  push32((uint32_t)(ECX));
  /* 12664a3e call 0x126683e0 */
  push32(0x12664a43u); f_126683e0();
  /* 12664a43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664a49 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12664a4c:;
  /* 12664a4c pop edi */
  EDI = (pop32());
  /* 12664a4d pop esi */
  ESI = (pop32());
  /* 12664a4e pop ebx */
  EBX = (pop32());
  /* 12664a4f mov esp, ebp */
  ESP = (EBP);
  /* 12664a51 pop ebp */
  EBP = (pop32());
  /* 12664a52 ret  */
  ESPCHK(0x12664740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x12664a60 (27 bytes, 13 insns) */
void f_12664a60(void) {
  FTRACE(0x12664a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12664a61 mov ebp, esp */
  EBP = (ESP);
  /* 12664a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664a69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664a6c push eax */
  push32((uint32_t)(EAX));
  /* 12664a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664a70 push ecx */
  push32((uint32_t)(ECX));
  /* 12664a71 call 0x12664a80 */
  push32(0x12664a76u); f_12664a80();
  /* 12664a76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664a79 pop ebp */
  EBP = (pop32());
  /* 12664a7a ret  */
  ESPCHK(0x12664a60u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12664a80 (96 bytes, 37 insns) */
void f_12664a80(void) {
  FTRACE(0x12664a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12664a81 mov ebp, esp */
  EBP = (ESP);
  /* 12664a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664a89 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12664a8d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12664a90 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12664a94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664a97 push edx */
  push32((uint32_t)(EDX));
  /* 12664a98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664a9b push eax */
  push32((uint32_t)(EAX));
  /* 12664a9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664a9f push ecx */
  push32((uint32_t)(ECX));
  /* 12664aa0 call 0x12664670 */
  push32(0x12664aa5u); f_12664670();
  /* 12664aa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664aa8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12664aab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664aaf je 0x12664ad9 */
  if (C.zf) goto L_12664ad9;
  /* 12664ab1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664ab4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12664ab7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664aba add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664abd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12664ac0:;
  /* 12664ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664ac3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664ac6 jae 0x12664ad9 */
  if (!C.cf) goto L_12664ad9;
  /* 12664ac8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664acb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12664ace mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664ad4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12664ad7 jmp 0x12664ac0 */
  goto L_12664ac0;
L_12664ad9:;
  /* 12664ad9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664adc mov esp, ebp */
  ESP = (EBP);
  /* 12664ade pop ebp */
  EBP = (pop32());
  /* 12664adf ret  */
  ESPCHK(0x12664a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x12664ae0 (27 bytes, 13 insns) */
void f_12664ae0(void) {
  FTRACE(0x12664ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12664ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12664ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664ae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664aec push eax */
  push32((uint32_t)(EAX));
  /* 12664aed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664af0 push ecx */
  push32((uint32_t)(ECX));
  /* 12664af1 call 0x12664b00 */
  push32(0x12664af6u); f_12664b00();
  /* 12664af6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664af9 pop ebp */
  EBP = (pop32());
  /* 12664afa ret  */
  ESPCHK(0x12664ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b00 @ 0x12664b00 (64 bytes, 27 insns) */
void f_12664b00(void) {
  FTRACE(0x12664b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12664b01 mov ebp, esp */
  EBP = (ESP);
  /* 12664b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12664b04 push 9 */
  push32((uint32_t)(0x9u));
  /* 12664b06 call 0x12668070 */
  push32(0x12664b0bu); f_12668070();
  /* 12664b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12664b10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664b13 push eax */
  push32((uint32_t)(EAX));
  /* 12664b14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664b17 push ecx */
  push32((uint32_t)(ECX));
  /* 12664b18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664b1b push edx */
  push32((uint32_t)(EDX));
  /* 12664b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664b1f push eax */
  push32((uint32_t)(EAX));
  /* 12664b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12664b24 call 0x12664b40 */
  push32(0x12664b29u); f_12664b40();
  /* 12664b29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664b2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12664b2f push 9 */
  push32((uint32_t)(0x9u));
  /* 12664b31 call 0x12668110 */
  push32(0x12664b36u); f_12668110();
  /* 12664b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664b39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664b3c mov esp, ebp */
  ESP = (EBP);
  /* 12664b3e pop ebp */
  EBP = (pop32());
  /* 12664b3f ret  */
  ESPCHK(0x12664b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b40 @ 0x12664b40 (1297 bytes, 431 insns) */
void f_12664b40(void) {
  FTRACE(0x12664b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12664b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12664b41 mov ebp, esp */
  EBP = (ESP);
  /* 12664b43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664b46 push ebx */
  push32((uint32_t)(EBX));
  /* 12664b47 push esi */
  push32((uint32_t)(ESI));
  /* 12664b48 push edi */
  push32((uint32_t)(EDI));
  /* 12664b49 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12664b50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664b54 jne 0x12664b73 */
  if (!C.zf) goto L_12664b73;
  /* 12664b56 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664b59 push eax */
  push32((uint32_t)(EAX));
  /* 12664b5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664b5d push ecx */
  push32((uint32_t)(ECX));
  /* 12664b5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664b61 push edx */
  push32((uint32_t)(EDX));
  /* 12664b62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664b65 push eax */
  push32((uint32_t)(EAX));
  /* 12664b66 call 0x12664670 */
  push32(0x12664b6bu); f_12664670();
  /* 12664b6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664b6e jmp 0x1266504a */
  goto L_1266504a;
L_12664b73:;
  /* 12664b73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664b77 je 0x12664b96 */
  if (C.zf) goto L_12664b96;
  /* 12664b79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664b7d jne 0x12664b96 */
  if (!C.zf) goto L_12664b96;
  /* 12664b7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12664b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664b86 push edx */
  push32((uint32_t)(EDX));
  /* 12664b87 call 0x12665100 */
  push32(0x12664b8cu); f_12665100();
  /* 12664b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664b91 jmp 0x1266504a */
  goto L_1266504a;
L_12664b96:;
  /* 12664b96 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12664b9b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12664b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664ba0 je 0x12664bd2 */
  if (C.zf) goto L_12664bd2;
L_12664ba2:;
  /* 12664ba2 call 0x12665810 */
  push32(0x12664ba7u); f_12665810();
  /* 12664ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664ba9 jne 0x12664bcc */
  if (!C.zf) goto L_12664bcc;
  /* 12664bab push 0x1268b704 */
  push32((uint32_t)(0x1268b704u));
  /* 12664bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664bb2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12664bb7 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664bbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12664bbe call 0x12663730 */
  push32(0x12664bc3u); f_12663730();
  /* 12664bc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664bc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664bc9 jne 0x12664bcc */
  if (!C.zf) goto L_12664bcc;
  /* 12664bcb int3  */
  x86_unimpl("int3 @ 0x12664bcb");
L_12664bcc:;
  /* 12664bcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664bce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664bd0 jne 0x12664ba2 */
  if (!C.zf) goto L_12664ba2;
L_12664bd2:;
  /* 12664bd2 mov edx, dword ptr [0x1268ea88] */
  EDX = (r32((uint32_t)(0x1268ea88)));
  /* 12664bd8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12664bdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12664bde cmp eax, dword ptr [0x1268ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664be4 jne 0x12664be7 */
  if (!C.zf) goto L_12664be7;
  /* 12664be6 int3  */
  x86_unimpl("int3 @ 0x12664be6");
L_12664be7:;
  /* 12664be7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664bea push ecx */
  push32((uint32_t)(ECX));
  /* 12664beb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664bee push edx */
  push32((uint32_t)(EDX));
  /* 12664bef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12664bf2 push eax */
  push32((uint32_t)(EAX));
  /* 12664bf3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12664bf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664bfa push edx */
  push32((uint32_t)(EDX));
  /* 12664bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664bfe push eax */
  push32((uint32_t)(EAX));
  /* 12664bff push 2 */
  push32((uint32_t)(0x2u));
  /* 12664c01 call dword ptr [0x1268ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268ec90))), 0x12664c07u);
  /* 12664c07 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664c0c jne 0x12664c6c */
  if (!C.zf) goto L_12664c6c;
  /* 12664c0e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664c12 je 0x12664c3f */
  if (C.zf) goto L_12664c3f;
L_12664c14:;
  /* 12664c14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664c17 push ecx */
  push32((uint32_t)(ECX));
  /* 12664c18 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664c1b push edx */
  push32((uint32_t)(EDX));
  /* 12664c1c push 0x1268b880 */
  push32((uint32_t)(0x1268b880u));
  /* 12664c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c29 call 0x12663730 */
  push32(0x12664c2eu); f_12663730();
  /* 12664c2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664c34 jne 0x12664c37 */
  if (!C.zf) goto L_12664c37;
  /* 12664c36 int3  */
  x86_unimpl("int3 @ 0x12664c36");
L_12664c37:;
  /* 12664c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664c3b jne 0x12664c14 */
  if (!C.zf) goto L_12664c14;
  /* 12664c3d jmp 0x12664c65 */
  goto L_12664c65;
L_12664c3f:;
  /* 12664c3f push 0x1268b85c */
  push32((uint32_t)(0x1268b85cu));
  /* 12664c44 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12664c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c51 call 0x12663730 */
  push32(0x12664c56u); f_12663730();
  /* 12664c56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664c59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664c5c jne 0x12664c5f */
  if (!C.zf) goto L_12664c5f;
  /* 12664c5e int3  */
  x86_unimpl("int3 @ 0x12664c5e");
L_12664c5f:;
  /* 12664c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664c61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664c63 jne 0x12664c3f */
  if (!C.zf) goto L_12664c3f;
L_12664c65:;
  /* 12664c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664c67 jmp 0x1266504a */
  goto L_1266504a;
L_12664c6c:;
  /* 12664c6c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664c70 jbe 0x12664c9e */
  if ((C.cf||C.zf)) goto L_12664c9e;
L_12664c72:;
  /* 12664c72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664c75 push edx */
  push32((uint32_t)(EDX));
  /* 12664c76 push 0x1268b82c */
  push32((uint32_t)(0x1268b82cu));
  /* 12664c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12664c81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664c83 call 0x12663730 */
  push32(0x12664c88u); f_12663730();
  /* 12664c88 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664c8b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664c8e jne 0x12664c91 */
  if (!C.zf) goto L_12664c91;
  /* 12664c90 int3  */
  x86_unimpl("int3 @ 0x12664c90");
L_12664c91:;
  /* 12664c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664c95 jne 0x12664c72 */
  if (!C.zf) goto L_12664c72;
  /* 12664c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664c99 jmp 0x1266504a */
  goto L_1266504a;
L_12664c9e:;
  /* 12664c9e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664ca2 je 0x12664ce6 */
  if (C.zf) goto L_12664ce6;
  /* 12664ca4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664ca7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12664cad cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664cb0 je 0x12664ce6 */
  if (C.zf) goto L_12664ce6;
  /* 12664cb2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664cb5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12664cbb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664cbe je 0x12664ce6 */
  if (C.zf) goto L_12664ce6;
L_12664cc0:;
  /* 12664cc0 push 0x1268b640 */
  push32((uint32_t)(0x1268b640u));
  /* 12664cc5 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12664cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12664ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12664cce push 0 */
  push32((uint32_t)(0x0u));
  /* 12664cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12664cd2 call 0x12663730 */
  push32(0x12664cd7u); f_12663730();
  /* 12664cd7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664cda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664cdd jne 0x12664ce0 */
  if (!C.zf) goto L_12664ce0;
  /* 12664cdf int3  */
  x86_unimpl("int3 @ 0x12664cdf");
L_12664ce0:;
  /* 12664ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664ce4 jne 0x12664cc0 */
  if (!C.zf) goto L_12664cc0;
L_12664ce6:;
  /* 12664ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 12664cea call 0x12665c70 */
  push32(0x12664cefu); f_12665c70();
  /* 12664cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12664cf4 jne 0x12664d17 */
  if (!C.zf) goto L_12664d17;
  /* 12664cf6 push 0x1268b808 */
  push32((uint32_t)(0x1268b808u));
  /* 12664cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12664cfd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12664d02 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664d09 call 0x12663730 */
  push32(0x12664d0eu); f_12663730();
  /* 12664d0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664d11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d14 jne 0x12664d17 */
  if (!C.zf) goto L_12664d17;
  /* 12664d16 int3  */
  x86_unimpl("int3 @ 0x12664d16");
L_12664d17:;
  /* 12664d17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12664d19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12664d1b jne 0x12664ce6 */
  if (!C.zf) goto L_12664ce6;
  /* 12664d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12664d20 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12664d26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664d29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d2d jne 0x12664d36 */
  if (!C.zf) goto L_12664d36;
  /* 12664d2f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12664d36:;
  /* 12664d36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d3a je 0x12664d7a */
  if (C.zf) goto L_12664d7a;
L_12664d3c:;
  /* 12664d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664d3f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d46 jne 0x12664d51 */
  if (!C.zf) goto L_12664d51;
  /* 12664d48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664d4b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d4f je 0x12664d72 */
  if (C.zf) goto L_12664d72;
L_12664d51:;
  /* 12664d51 push 0x1268b7c0 */
  push32((uint32_t)(0x1268b7c0u));
  /* 12664d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12664d58 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12664d5d push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664d64 call 0x12663730 */
  push32(0x12664d69u); f_12663730();
  /* 12664d69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664d6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d6f jne 0x12664d72 */
  if (!C.zf) goto L_12664d72;
  /* 12664d71 int3  */
  x86_unimpl("int3 @ 0x12664d71");
L_12664d72:;
  /* 12664d72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664d74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664d76 jne 0x12664d3c */
  if (!C.zf) goto L_12664d3c;
  /* 12664d78 jmp 0x12664dde */
  goto L_12664dde;
L_12664d7a:;
  /* 12664d7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664d7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12664d80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12664d85 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d88 jne 0x12664d9f */
  if (!C.zf) goto L_12664d9f;
  /* 12664d8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664d8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12664d93 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664d96 jne 0x12664d9f */
  if (!C.zf) goto L_12664d9f;
  /* 12664d98 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12664d9f:;
  /* 12664d9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664da2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12664da5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12664daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12664dad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12664db3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664db5 je 0x12664dd8 */
  if (C.zf) goto L_12664dd8;
  /* 12664db7 push 0x1268b784 */
  push32((uint32_t)(0x1268b784u));
  /* 12664dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12664dbe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12664dc3 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664dca call 0x12663730 */
  push32(0x12664dcfu); f_12663730();
  /* 12664dcf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664dd2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664dd5 jne 0x12664dd8 */
  if (!C.zf) goto L_12664dd8;
  /* 12664dd7 int3  */
  x86_unimpl("int3 @ 0x12664dd7");
L_12664dd8:;
  /* 12664dd8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12664dda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12664ddc jne 0x12664d9f */
  if (!C.zf) goto L_12664d9f;
L_12664dde:;
  /* 12664dde cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664de2 je 0x12664e09 */
  if (C.zf) goto L_12664e09;
  /* 12664de4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664de7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664dea push eax */
  push32((uint32_t)(EAX));
  /* 12664deb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664dee push ecx */
  push32((uint32_t)(ECX));
  /* 12664def call 0x126685f0 */
  push32(0x12664df4u); f_126685f0();
  /* 12664df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664df7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12664dfa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664dfe jne 0x12664e07 */
  if (!C.zf) goto L_12664e07;
  /* 12664e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664e02 jmp 0x1266504a */
  goto L_1266504a;
L_12664e07:;
  /* 12664e07 jmp 0x12664e2c */
  goto L_12664e2c;
L_12664e09:;
  /* 12664e09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664e0c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e0f push edx */
  push32((uint32_t)(EDX));
  /* 12664e10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12664e13 push eax */
  push32((uint32_t)(EAX));
  /* 12664e14 call 0x12668540 */
  push32(0x12664e19u); f_12668540();
  /* 12664e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12664e1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664e23 jne 0x12664e2c */
  if (!C.zf) goto L_12664e2c;
  /* 12664e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664e27 jmp 0x1266504a */
  goto L_1266504a;
L_12664e2c:;
  /* 12664e2c mov ecx, dword ptr [0x1268ea88] */
  ECX = (r32((uint32_t)(0x1268ea88)));
  /* 12664e32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e35 mov dword ptr [0x1268ea88], ecx */
  w32((uint32_t)(0x1268ea88), (ECX));
  /* 12664e3b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664e3f jne 0x12664e97 */
  if (!C.zf) goto L_12664e97;
  /* 12664e41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664e44 mov eax, dword ptr [0x126905f0] */
  EAX = (r32((uint32_t)(0x126905f0)));
  /* 12664e49 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664e4c mov dword ptr [0x126905f0], eax */
  w32((uint32_t)(0x126905f0), (EAX));
  /* 12664e51 mov ecx, dword ptr [0x126905f0] */
  ECX = (r32((uint32_t)(0x126905f0)));
  /* 12664e57 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e5a mov dword ptr [0x126905f0], ecx */
  w32((uint32_t)(0x126905f0), (ECX));
  /* 12664e60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664e63 mov eax, dword ptr [0x126905f8] */
  EAX = (r32((uint32_t)(0x126905f8)));
  /* 12664e68 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664e6b mov dword ptr [0x126905f8], eax */
  w32((uint32_t)(0x126905f8), (EAX));
  /* 12664e70 mov ecx, dword ptr [0x126905f8] */
  ECX = (r32((uint32_t)(0x126905f8)));
  /* 12664e76 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e79 mov dword ptr [0x126905f8], ecx */
  w32((uint32_t)(0x126905f8), (ECX));
  /* 12664e7f mov edx, dword ptr [0x126905f8] */
  EDX = (r32((uint32_t)(0x126905f8)));
  /* 12664e85 cmp edx, dword ptr [0x126905fc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x126905fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664e8b jbe 0x12664e97 */
  if ((C.cf||C.zf)) goto L_12664e97;
  /* 12664e8d mov eax, dword ptr [0x126905f8] */
  EAX = (r32((uint32_t)(0x126905f8)));
  /* 12664e92 mov dword ptr [0x126905fc], eax */
  w32((uint32_t)(0x126905fc), (EAX));
L_12664e97:;
  /* 12664e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664e9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664e9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12664ea0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664ea3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664ea6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664ea9 jbe 0x12664ecf */
  if ((C.cf||C.zf)) goto L_12664ecf;
  /* 12664eab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664eae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664eb1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12664eb4 push edx */
  push32((uint32_t)(EDX));
  /* 12664eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664eb7 mov al, byte ptr [0x1268ea92] */
  AL = (r8((uint32_t)(0x1268ea92)));
  /* 12664ebc push eax */
  push32((uint32_t)(EAX));
  /* 12664ebd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664ec0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664ec3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664ec6 push edx */
  push32((uint32_t)(EDX));
  /* 12664ec7 call 0x126683e0 */
  push32(0x12664eccu); f_126683e0();
  /* 12664ecc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12664ecf:;
  /* 12664ecf push 4 */
  push32((uint32_t)(0x4u));
  /* 12664ed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12664ed3 mov al, byte ptr [0x1268ea90] */
  AL = (r8((uint32_t)(0x1268ea90)));
  /* 12664ed8 push eax */
  push32((uint32_t)(EAX));
  /* 12664ed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664edc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12664edf push ecx */
  push32((uint32_t)(ECX));
  /* 12664ee0 call 0x126683e0 */
  push32(0x12664ee5u); f_126683e0();
  /* 12664ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664eec jne 0x12664f09 */
  if (!C.zf) goto L_12664f09;
  /* 12664eee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664ef1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12664ef4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12664ef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664efa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12664efd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12664f00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12664f06 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12664f09:;
  /* 12664f09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12664f0f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12664f12:;
  /* 12664f12 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f16 jne 0x12664f47 */
  if (!C.zf) goto L_12664f47;
  /* 12664f18 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f1c jne 0x12664f26 */
  if (!C.zf) goto L_12664f26;
  /* 12664f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f21 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f24 je 0x12664f47 */
  if (C.zf) goto L_12664f47;
L_12664f26:;
  /* 12664f26 push 0x1268b750 */
  push32((uint32_t)(0x1268b750u));
  /* 12664f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12664f2d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12664f32 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664f39 call 0x12663730 */
  push32(0x12664f3eu); f_12663730();
  /* 12664f3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664f41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f44 jne 0x12664f47 */
  if (!C.zf) goto L_12664f47;
  /* 12664f46 int3  */
  x86_unimpl("int3 @ 0x12664f46");
L_12664f47:;
  /* 12664f47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12664f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12664f4b jne 0x12664f12 */
  if (!C.zf) goto L_12664f12;
  /* 12664f4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f50 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f53 je 0x12664f5b */
  if (C.zf) goto L_12664f5b;
  /* 12664f55 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f59 je 0x12664f63 */
  if (C.zf) goto L_12664f63;
L_12664f5b:;
  /* 12664f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12664f5e jmp 0x1266504a */
  goto L_1266504a;
L_12664f63:;
  /* 12664f63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f69 je 0x12664f7b */
  if (C.zf) goto L_12664f7b;
  /* 12664f6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12664f70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664f73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12664f76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12664f79 jmp 0x12664fb7 */
  goto L_12664fb7;
L_12664f7b:;
  /* 12664f7b mov eax, dword ptr [0x126905ec] */
  EAX = (r32((uint32_t)(0x126905ec)));
  /* 12664f80 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664f83 je 0x12664fa6 */
  if (C.zf) goto L_12664fa6;
  /* 12664f85 push 0x1268b734 */
  push32((uint32_t)(0x1268b734u));
  /* 12664f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12664f8c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12664f91 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 12664f98 call 0x12663730 */
  push32(0x12664f9du); f_12663730();
  /* 12664f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664fa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664fa3 jne 0x12664fa6 */
  if (!C.zf) goto L_12664fa6;
  /* 12664fa5 int3  */
  x86_unimpl("int3 @ 0x12664fa5");
L_12664fa6:;
  /* 12664fa6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664fa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664faa jne 0x12664f7b */
  if (!C.zf) goto L_12664f7b;
  /* 12664fac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664faf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12664fb2 mov dword ptr [0x126905ec], eax */
  w32((uint32_t)(0x126905ec), (EAX));
L_12664fb7:;
  /* 12664fb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664fba cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664fbe je 0x12664fcf */
  if (C.zf) goto L_12664fcf;
  /* 12664fc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664fc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12664fc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12664fc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12664fcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12664fcd jmp 0x1266500a */
  goto L_1266500a;
L_12664fcf:;
  /* 12664fcf mov eax, dword ptr [0x126905f4] */
  EAX = (r32((uint32_t)(0x126905f4)));
  /* 12664fd4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664fd7 je 0x12664ffa */
  if (C.zf) goto L_12664ffa;
  /* 12664fd9 push 0x1268b718 */
  push32((uint32_t)(0x1268b718u));
  /* 12664fde push 0 */
  push32((uint32_t)(0x0u));
  /* 12664fe0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12664fe5 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12664fea push 2 */
  push32((uint32_t)(0x2u));
  /* 12664fec call 0x12663730 */
  push32(0x12664ff1u); f_12663730();
  /* 12664ff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12664ff4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12664ff7 jne 0x12664ffa */
  if (!C.zf) goto L_12664ffa;
  /* 12664ff9 int3  */
  x86_unimpl("int3 @ 0x12664ff9");
L_12664ffa:;
  /* 12664ffa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12664ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12664ffe jne 0x12664fcf */
  if (!C.zf) goto L_12664fcf;
  /* 12665000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12665003 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12665005 mov dword ptr [0x126905f4], eax */
  w32((uint32_t)(0x126905f4), (EAX));
L_1266500a:;
  /* 1266500a cmp dword ptr [0x126905f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665011 je 0x12665021 */
  if (C.zf) goto L_12665021;
  /* 12665013 mov ecx, dword ptr [0x126905f4] */
  ECX = (r32((uint32_t)(0x126905f4)));
  /* 12665019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266501c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1266501f jmp 0x12665029 */
  goto L_12665029;
L_12665021:;
  /* 12665021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12665024 mov dword ptr [0x126905ec], eax */
  w32((uint32_t)(0x126905ec), (EAX));
L_12665029:;
  /* 12665029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266502c mov edx, dword ptr [0x126905f4] */
  EDX = (r32((uint32_t)(0x126905f4)));
  /* 12665032 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12665034 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12665037 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1266503e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12665041 mov dword ptr [0x126905f4], ecx */
  w32((uint32_t)(0x126905f4), (ECX));
  /* 12665047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266504a:;
  /* 1266504a pop edi */
  EDI = (pop32());
  /* 1266504b pop esi */
  ESI = (pop32());
  /* 1266504c pop ebx */
  EBX = (pop32());
  /* 1266504d mov esp, ebp */
  ESP = (EBP);
  /* 1266504f pop ebp */
  EBP = (pop32());
  /* 12665050 ret  */
  ESPCHK(0x12664b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x12665060 (27 bytes, 13 insns) */
void f_12665060(void) {
  FTRACE(0x12665060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665060 push ebp */
  push32((uint32_t)(EBP));
  /* 12665061 mov ebp, esp */
  EBP = (ESP);
  /* 12665063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665065 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665067 push 1 */
  push32((uint32_t)(0x1u));
  /* 12665069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266506c push eax */
  push32((uint32_t)(EAX));
  /* 1266506d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665070 push ecx */
  push32((uint32_t)(ECX));
  /* 12665071 call 0x12665080 */
  push32(0x12665076u); f_12665080();
  /* 12665076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665079 pop ebp */
  EBP = (pop32());
  /* 1266507a ret  */
  ESPCHK(0x12665060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x12665080 (64 bytes, 27 insns) */
void f_12665080(void) {
  FTRACE(0x12665080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665080 push ebp */
  push32((uint32_t)(EBP));
  /* 12665081 mov ebp, esp */
  EBP = (ESP);
  /* 12665083 push ecx */
  push32((uint32_t)(ECX));
  /* 12665084 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665086 call 0x12668070 */
  push32(0x1266508bu); f_12668070();
  /* 1266508b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266508e push 0 */
  push32((uint32_t)(0x0u));
  /* 12665090 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12665093 push eax */
  push32((uint32_t)(EAX));
  /* 12665094 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12665097 push ecx */
  push32((uint32_t)(ECX));
  /* 12665098 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266509b push edx */
  push32((uint32_t)(EDX));
  /* 1266509c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266509f push eax */
  push32((uint32_t)(EAX));
  /* 126650a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126650a3 push ecx */
  push32((uint32_t)(ECX));
  /* 126650a4 call 0x12664b40 */
  push32(0x126650a9u); f_12664b40();
  /* 126650a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126650ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126650af push 9 */
  push32((uint32_t)(0x9u));
  /* 126650b1 call 0x12668110 */
  push32(0x126650b6u); f_12668110();
  /* 126650b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126650b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126650bc mov esp, ebp */
  ESP = (EBP);
  /* 126650be pop ebp */
  EBP = (pop32());
  /* 126650bf ret  */
  ESPCHK(0x12665080u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x126650c0 (19 bytes, 9 insns) */
void f_126650c0(void) {
  FTRACE(0x126650c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126650c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126650c1 mov ebp, esp */
  EBP = (ESP);
  /* 126650c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126650c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126650c8 push eax */
  push32((uint32_t)(EAX));
  /* 126650c9 call 0x12665100 */
  push32(0x126650ceu); f_12665100();
  /* 126650ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126650d1 pop ebp */
  EBP = (pop32());
  /* 126650d2 ret  */
  ESPCHK(0x126650c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e0 @ 0x126650e0 (19 bytes, 9 insns) */
void f_126650e0(void) {
  FTRACE(0x126650e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126650e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126650e1 mov ebp, esp */
  EBP = (ESP);
  /* 126650e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126650e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126650e8 push eax */
  push32((uint32_t)(EAX));
  /* 126650e9 call 0x12665130 */
  push32(0x126650eeu); f_12665130();
  /* 126650ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126650f1 pop ebp */
  EBP = (pop32());
  /* 126650f2 ret  */
  ESPCHK(0x126650e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005100 @ 0x12665100 (41 bytes, 16 insns) */
void f_12665100(void) {
  FTRACE(0x12665100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665100 push ebp */
  push32((uint32_t)(EBP));
  /* 12665101 mov ebp, esp */
  EBP = (ESP);
  /* 12665103 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665105 call 0x12668070 */
  push32(0x1266510au); f_12668070();
  /* 1266510a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266510d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665110 push eax */
  push32((uint32_t)(EAX));
  /* 12665111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665114 push ecx */
  push32((uint32_t)(ECX));
  /* 12665115 call 0x12665130 */
  push32(0x1266511au); f_12665130();
  /* 1266511a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266511d push 9 */
  push32((uint32_t)(0x9u));
  /* 1266511f call 0x12668110 */
  push32(0x12665124u); f_12668110();
  /* 12665124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665127 pop ebp */
  EBP = (pop32());
  /* 12665128 ret  */
  ESPCHK(0x12665100u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x12665130 (1004 bytes, 342 insns) */
void f_12665130(void) {
  FTRACE(0x12665130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665130 push ebp */
  push32((uint32_t)(EBP));
  /* 12665131 mov ebp, esp */
  EBP = (ESP);
  /* 12665133 push ecx */
  push32((uint32_t)(ECX));
  /* 12665134 push ebx */
  push32((uint32_t)(EBX));
  /* 12665135 push esi */
  push32((uint32_t)(ESI));
  /* 12665136 push edi */
  push32((uint32_t)(EDI));
  /* 12665137 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 1266513c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1266513f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665141 je 0x12665173 */
  if (C.zf) goto L_12665173;
L_12665143:;
  /* 12665143 call 0x12665810 */
  push32(0x12665148u); f_12665810();
  /* 12665148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266514a jne 0x1266516d */
  if (!C.zf) goto L_1266516d;
  /* 1266514c push 0x1268b704 */
  push32((uint32_t)(0x1268b704u));
  /* 12665151 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665153 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12665158 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 1266515d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266515f call 0x12663730 */
  push32(0x12665164u); f_12663730();
  /* 12665164 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266516a jne 0x1266516d */
  if (!C.zf) goto L_1266516d;
  /* 1266516c int3  */
  x86_unimpl("int3 @ 0x1266516c");
L_1266516d:;
  /* 1266516d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266516f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665171 jne 0x12665143 */
  if (!C.zf) goto L_12665143;
L_12665173:;
  /* 12665173 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665177 jne 0x1266517e */
  if (!C.zf) goto L_1266517e;
  /* 12665179 jmp 0x12665515 */
  goto L_12665515;
L_1266517e:;
  /* 1266517e push 0 */
  push32((uint32_t)(0x0u));
  /* 12665180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665182 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665184 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665187 push edx */
  push32((uint32_t)(EDX));
  /* 12665188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266518a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266518d push eax */
  push32((uint32_t)(EAX));
  /* 1266518e push 3 */
  push32((uint32_t)(0x3u));
  /* 12665190 call dword ptr [0x1268ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268ec90))), 0x12665196u);
  /* 12665196 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266519b jne 0x126651c8 */
  if (!C.zf) goto L_126651c8;
L_1266519d:;
  /* 1266519d push 0x1268b9c8 */
  push32((uint32_t)(0x1268b9c8u));
  /* 126651a2 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126651a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126651a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126651ab push 0 */
  push32((uint32_t)(0x0u));
  /* 126651ad push 0 */
  push32((uint32_t)(0x0u));
  /* 126651af call 0x12663730 */
  push32(0x126651b4u); f_12663730();
  /* 126651b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126651b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126651ba jne 0x126651bd */
  if (!C.zf) goto L_126651bd;
  /* 126651bc int3  */
  x86_unimpl("int3 @ 0x126651bc");
L_126651bd:;
  /* 126651bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126651bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126651c1 jne 0x1266519d */
  if (!C.zf) goto L_1266519d;
  /* 126651c3 jmp 0x12665515 */
  goto L_12665515;
L_126651c8:;
  /* 126651c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126651cb push edx */
  push32((uint32_t)(EDX));
  /* 126651cc call 0x12665c70 */
  push32(0x126651d1u); f_12665c70();
  /* 126651d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126651d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126651d6 jne 0x126651f9 */
  if (!C.zf) goto L_126651f9;
  /* 126651d8 push 0x1268b808 */
  push32((uint32_t)(0x1268b808u));
  /* 126651dd push 0 */
  push32((uint32_t)(0x0u));
  /* 126651df push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 126651e4 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 126651e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 126651eb call 0x12663730 */
  push32(0x126651f0u); f_12663730();
  /* 126651f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126651f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126651f6 jne 0x126651f9 */
  if (!C.zf) goto L_126651f9;
  /* 126651f8 int3  */
  x86_unimpl("int3 @ 0x126651f8");
L_126651f9:;
  /* 126651f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126651fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126651fd jne 0x126651c8 */
  if (!C.zf) goto L_126651c8;
  /* 126651ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665202 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665205 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12665208:;
  /* 12665208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266520b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1266520e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665213 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665216 je 0x1266525b */
  if (C.zf) goto L_1266525b;
  /* 12665218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266521b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266521f je 0x1266525b */
  if (C.zf) goto L_1266525b;
  /* 12665221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665224 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665227 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266522c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266522f je 0x1266525b */
  if (C.zf) goto L_1266525b;
  /* 12665231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665234 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665238 je 0x1266525b */
  if (C.zf) goto L_1266525b;
  /* 1266523a push 0x1268b9a0 */
  push32((uint32_t)(0x1268b9a0u));
  /* 1266523f push 0 */
  push32((uint32_t)(0x0u));
  /* 12665241 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12665246 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 1266524b push 2 */
  push32((uint32_t)(0x2u));
  /* 1266524d call 0x12663730 */
  push32(0x12665252u); f_12663730();
  /* 12665252 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665255 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665258 jne 0x1266525b */
  if (!C.zf) goto L_1266525b;
  /* 1266525a int3  */
  x86_unimpl("int3 @ 0x1266525a");
L_1266525b:;
  /* 1266525b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266525d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266525f jne 0x12665208 */
  if (!C.zf) goto L_12665208;
  /* 12665261 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12665266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12665269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266526b jne 0x12665336 */
  if (!C.zf) goto L_12665336;
  /* 12665271 push 4 */
  push32((uint32_t)(0x4u));
  /* 12665273 mov cl, byte ptr [0x1268ea90] */
  CL = (r8((uint32_t)(0x1268ea90)));
  /* 12665279 push ecx */
  push32((uint32_t)(ECX));
  /* 1266527a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266527d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665280 push edx */
  push32((uint32_t)(EDX));
  /* 12665281 call 0x12665780 */
  push32(0x12665286u); f_12665780();
  /* 12665286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266528b jne 0x126652d0 */
  if (!C.zf) goto L_126652d0;
L_1266528d:;
  /* 1266528d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665290 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665293 push eax */
  push32((uint32_t)(EAX));
  /* 12665294 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665297 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1266529a push edx */
  push32((uint32_t)(EDX));
  /* 1266529b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266529e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126652a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126652a7 mov edx, dword ptr [ecx*4 + 0x1268ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea94)));
  /* 126652ae push edx */
  push32((uint32_t)(EDX));
  /* 126652af push 0x1268b974 */
  push32((uint32_t)(0x1268b974u));
  /* 126652b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126652b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126652b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126652ba push 1 */
  push32((uint32_t)(0x1u));
  /* 126652bc call 0x12663730 */
  push32(0x126652c1u); f_12663730();
  /* 126652c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126652c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126652c7 jne 0x126652ca */
  if (!C.zf) goto L_126652ca;
  /* 126652c9 int3  */
  x86_unimpl("int3 @ 0x126652c9");
L_126652ca:;
  /* 126652ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126652cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126652ce jne 0x1266528d */
  if (!C.zf) goto L_1266528d;
L_126652d0:;
  /* 126652d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 126652d2 mov cl, byte ptr [0x1268ea90] */
  CL = (r8((uint32_t)(0x1268ea90)));
  /* 126652d8 push ecx */
  push32((uint32_t)(ECX));
  /* 126652d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126652dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126652df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126652e2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 126652e6 push edx */
  push32((uint32_t)(EDX));
  /* 126652e7 call 0x12665780 */
  push32(0x126652ecu); f_12665780();
  /* 126652ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126652ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126652f1 jne 0x12665336 */
  if (!C.zf) goto L_12665336;
L_126652f3:;
  /* 126652f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126652f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126652f9 push eax */
  push32((uint32_t)(EAX));
  /* 126652fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126652fd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12665300 push edx */
  push32((uint32_t)(EDX));
  /* 12665301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665304 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12665307 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266530d mov edx, dword ptr [ecx*4 + 0x1268ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea94)));
  /* 12665314 push edx */
  push32((uint32_t)(EDX));
  /* 12665315 push 0x1268b948 */
  push32((uint32_t)(0x1268b948u));
  /* 1266531a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266531c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266531e push 0 */
  push32((uint32_t)(0x0u));
  /* 12665320 push 1 */
  push32((uint32_t)(0x1u));
  /* 12665322 call 0x12663730 */
  push32(0x12665327u); f_12663730();
  /* 12665327 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266532a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266532d jne 0x12665330 */
  if (!C.zf) goto L_12665330;
  /* 1266532f int3  */
  x86_unimpl("int3 @ 0x1266532f");
L_12665330:;
  /* 12665330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665334 jne 0x126652f3 */
  if (!C.zf) goto L_126652f3;
L_12665336:;
  /* 12665336 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665339 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266533d jne 0x126653ab */
  if (!C.zf) goto L_126653ab;
L_1266533f:;
  /* 1266533f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665342 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665349 jne 0x12665354 */
  if (!C.zf) goto L_12665354;
  /* 1266534b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266534e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665352 je 0x12665375 */
  if (C.zf) goto L_12665375;
L_12665354:;
  /* 12665354 push 0x1268b908 */
  push32((uint32_t)(0x1268b908u));
  /* 12665359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266535b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12665360 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12665365 push 2 */
  push32((uint32_t)(0x2u));
  /* 12665367 call 0x12663730 */
  push32(0x1266536cu); f_12663730();
  /* 1266536c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266536f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665372 jne 0x12665375 */
  if (!C.zf) goto L_12665375;
  /* 12665374 int3  */
  x86_unimpl("int3 @ 0x12665374");
L_12665375:;
  /* 12665375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12665377 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665379 jne 0x1266533f */
  if (!C.zf) goto L_1266533f;
  /* 1266537b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266537e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12665381 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665384 push eax */
  push32((uint32_t)(EAX));
  /* 12665385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12665387 mov cl, byte ptr [0x1268ea91] */
  CL = (r8((uint32_t)(0x1268ea91)));
  /* 1266538d push ecx */
  push32((uint32_t)(ECX));
  /* 1266538e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665391 push edx */
  push32((uint32_t)(EDX));
  /* 12665392 call 0x126683e0 */
  push32(0x12665397u); f_126683e0();
  /* 12665397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266539a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266539d push eax */
  push32((uint32_t)(EAX));
  /* 1266539e call 0x126687e0 */
  push32(0x126653a3u); f_126687e0();
  /* 126653a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126653a6 jmp 0x12665515 */
  goto L_12665515;
L_126653ab:;
  /* 126653ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126653ae cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126653b2 jne 0x126653c1 */
  if (!C.zf) goto L_126653c1;
  /* 126653b4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126653b8 jne 0x126653c1 */
  if (!C.zf) goto L_126653c1;
  /* 126653ba mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_126653c1:;
  /* 126653c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126653c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126653c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126653ca je 0x126653ed */
  if (C.zf) goto L_126653ed;
  /* 126653cc push 0x1268b8e8 */
  push32((uint32_t)(0x1268b8e8u));
  /* 126653d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126653d3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 126653d8 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 126653dd push 2 */
  push32((uint32_t)(0x2u));
  /* 126653df call 0x12663730 */
  push32(0x126653e4u); f_12663730();
  /* 126653e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126653e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126653ea jne 0x126653ed */
  if (!C.zf) goto L_126653ed;
  /* 126653ec int3  */
  x86_unimpl("int3 @ 0x126653ec");
L_126653ed:;
  /* 126653ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126653ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126653f1 jne 0x126653c1 */
  if (!C.zf) goto L_126653c1;
  /* 126653f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126653f6 mov eax, dword ptr [0x126905f8] */
  EAX = (r32((uint32_t)(0x126905f8)));
  /* 126653fb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126653fe mov dword ptr [0x126905f8], eax */
  w32((uint32_t)(0x126905f8), (EAX));
  /* 12665403 mov ecx, dword ptr [0x1268ea84] */
  ECX = (r32((uint32_t)(0x1268ea84)));
  /* 12665409 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1266540c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266540e jne 0x126654ec */
  if (!C.zf) goto L_126654ec;
  /* 12665414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665417 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266541a je 0x1266542c */
  if (C.zf) goto L_1266542c;
  /* 1266541c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266541f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12665421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665424 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12665427 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1266542a jmp 0x1266546a */
  goto L_1266546a;
L_1266542c:;
  /* 1266542c mov ecx, dword ptr [0x126905ec] */
  ECX = (r32((uint32_t)(0x126905ec)));
  /* 12665432 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665435 je 0x12665458 */
  if (C.zf) goto L_12665458;
  /* 12665437 push 0x1268b8d0 */
  push32((uint32_t)(0x1268b8d0u));
  /* 1266543c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266543e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12665443 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12665448 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266544a call 0x12663730 */
  push32(0x1266544fu); f_12663730();
  /* 1266544f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665452 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665455 jne 0x12665458 */
  if (!C.zf) goto L_12665458;
  /* 12665457 int3  */
  x86_unimpl("int3 @ 0x12665457");
L_12665458:;
  /* 12665458 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266545a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266545c jne 0x1266542c */
  if (!C.zf) goto L_1266542c;
  /* 1266545e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665461 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12665464 mov dword ptr [0x126905ec], ecx */
  w32((uint32_t)(0x126905ec), (ECX));
L_1266546a:;
  /* 1266546a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266546d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665471 je 0x12665482 */
  if (C.zf) goto L_12665482;
  /* 12665473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665476 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12665479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266547c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266547e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12665480 jmp 0x126654bf */
  goto L_126654bf;
L_12665482:;
  /* 12665482 mov ecx, dword ptr [0x126905f4] */
  ECX = (r32((uint32_t)(0x126905f4)));
  /* 12665488 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266548b je 0x126654ae */
  if (C.zf) goto L_126654ae;
  /* 1266548d push 0x1268b8b8 */
  push32((uint32_t)(0x1268b8b8u));
  /* 12665492 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665494 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12665499 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 1266549e push 2 */
  push32((uint32_t)(0x2u));
  /* 126654a0 call 0x12663730 */
  push32(0x126654a5u); f_12663730();
  /* 126654a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126654a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126654ab jne 0x126654ae */
  if (!C.zf) goto L_126654ae;
  /* 126654ad int3  */
  x86_unimpl("int3 @ 0x126654ad");
L_126654ae:;
  /* 126654ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126654b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126654b2 jne 0x12665482 */
  if (!C.zf) goto L_12665482;
  /* 126654b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126654b9 mov dword ptr [0x126905f4], ecx */
  w32((uint32_t)(0x126905f4), (ECX));
L_126654bf:;
  /* 126654bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654c2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126654c5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126654c8 push eax */
  push32((uint32_t)(EAX));
  /* 126654c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126654cb mov cl, byte ptr [0x1268ea91] */
  CL = (r8((uint32_t)(0x1268ea91)));
  /* 126654d1 push ecx */
  push32((uint32_t)(ECX));
  /* 126654d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654d5 push edx */
  push32((uint32_t)(EDX));
  /* 126654d6 call 0x126683e0 */
  push32(0x126654dbu); f_126683e0();
  /* 126654db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126654de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654e1 push eax */
  push32((uint32_t)(EAX));
  /* 126654e2 call 0x126687e0 */
  push32(0x126654e7u); f_126687e0();
  /* 126654e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126654ea jmp 0x12665515 */
  goto L_12665515;
L_126654ec:;
  /* 126654ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654ef mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 126654f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126654f9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126654fc push eax */
  push32((uint32_t)(EAX));
  /* 126654fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126654ff mov cl, byte ptr [0x1268ea91] */
  CL = (r8((uint32_t)(0x1268ea91)));
  /* 12665505 push ecx */
  push32((uint32_t)(ECX));
  /* 12665506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665509 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266550c push edx */
  push32((uint32_t)(EDX));
  /* 1266550d call 0x126683e0 */
  push32(0x12665512u); f_126683e0();
  /* 12665512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12665515:;
  /* 12665515 pop edi */
  EDI = (pop32());
  /* 12665516 pop esi */
  ESI = (pop32());
  /* 12665517 pop ebx */
  EBX = (pop32());
  /* 12665518 mov esp, ebp */
  ESP = (EBP);
  /* 1266551a pop ebp */
  EBP = (pop32());
  /* 1266551b ret  */
  ESPCHK(0x12665130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x12665520 (19 bytes, 9 insns) */
void f_12665520(void) {
  FTRACE(0x12665520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665520 push ebp */
  push32((uint32_t)(EBP));
  /* 12665521 mov ebp, esp */
  EBP = (ESP);
  /* 12665523 push 1 */
  push32((uint32_t)(0x1u));
  /* 12665525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665528 push eax */
  push32((uint32_t)(EAX));
  /* 12665529 call 0x12665540 */
  push32(0x1266552eu); f_12665540();
  /* 1266552e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665531 pop ebp */
  EBP = (pop32());
  /* 12665532 ret  */
  ESPCHK(0x12665520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x12665540 (342 bytes, 119 insns) */
void f_12665540(void) {
  FTRACE(0x12665540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665540 push ebp */
  push32((uint32_t)(EBP));
  /* 12665541 mov ebp, esp */
  EBP = (ESP);
  /* 12665543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665546 push ebx */
  push32((uint32_t)(EBX));
  /* 12665547 push esi */
  push32((uint32_t)(ESI));
  /* 12665548 push edi */
  push32((uint32_t)(EDI));
  /* 12665549 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 1266554e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12665551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665553 je 0x12665585 */
  if (C.zf) goto L_12665585;
L_12665555:;
  /* 12665555 call 0x12665810 */
  push32(0x1266555au); f_12665810();
  /* 1266555a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266555c jne 0x1266557f */
  if (!C.zf) goto L_1266557f;
  /* 1266555e push 0x1268b704 */
  push32((uint32_t)(0x1268b704u));
  /* 12665563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665565 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1266556a push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 1266556f push 2 */
  push32((uint32_t)(0x2u));
  /* 12665571 call 0x12663730 */
  push32(0x12665576u); f_12663730();
  /* 12665576 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665579 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266557c jne 0x1266557f */
  if (!C.zf) goto L_1266557f;
  /* 1266557e int3  */
  x86_unimpl("int3 @ 0x1266557e");
L_1266557f:;
  /* 1266557f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12665581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665583 jne 0x12665555 */
  if (!C.zf) goto L_12665555;
L_12665585:;
  /* 12665585 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665587 call 0x12668070 */
  push32(0x1266558cu); f_12668070();
  /* 1266558c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266558f:;
  /* 1266558f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665592 push edx */
  push32((uint32_t)(EDX));
  /* 12665593 call 0x12665c70 */
  push32(0x12665598u); f_12665c70();
  /* 12665598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266559b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266559d jne 0x126655c0 */
  if (!C.zf) goto L_126655c0;
  /* 1266559f push 0x1268b808 */
  push32((uint32_t)(0x1268b808u));
  /* 126655a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126655a6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 126655ab push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 126655b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 126655b2 call 0x12663730 */
  push32(0x126655b7u); f_12663730();
  /* 126655b7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126655ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126655bd jne 0x126655c0 */
  if (!C.zf) goto L_126655c0;
  /* 126655bf int3  */
  x86_unimpl("int3 @ 0x126655bf");
L_126655c0:;
  /* 126655c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126655c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126655c4 jne 0x1266558f */
  if (!C.zf) goto L_1266558f;
  /* 126655c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126655c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126655cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_126655cf:;
  /* 126655cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126655d2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126655d5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126655da cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126655dd je 0x12665622 */
  if (C.zf) goto L_12665622;
  /* 126655df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126655e2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126655e6 je 0x12665622 */
  if (C.zf) goto L_12665622;
  /* 126655e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126655eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126655ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126655f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126655f6 je 0x12665622 */
  if (C.zf) goto L_12665622;
  /* 126655f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126655fb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126655ff je 0x12665622 */
  if (C.zf) goto L_12665622;
  /* 12665601 push 0x1268b9a0 */
  push32((uint32_t)(0x1268b9a0u));
  /* 12665606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665608 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1266560d push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12665612 push 2 */
  push32((uint32_t)(0x2u));
  /* 12665614 call 0x12663730 */
  push32(0x12665619u); f_12663730();
  /* 12665619 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266561c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266561f jne 0x12665622 */
  if (!C.zf) goto L_12665622;
  /* 12665621 int3  */
  x86_unimpl("int3 @ 0x12665621");
L_12665622:;
  /* 12665622 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12665624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12665626 jne 0x126655cf */
  if (!C.zf) goto L_126655cf;
  /* 12665628 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266562b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266562f jne 0x1266563e */
  if (!C.zf) goto L_1266563e;
  /* 12665631 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665635 jne 0x1266563e */
  if (!C.zf) goto L_1266563e;
  /* 12665637 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1266563e:;
  /* 1266563e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665641 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665645 je 0x12665679 */
  if (C.zf) goto L_12665679;
L_12665647:;
  /* 12665647 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266564a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1266564d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665650 je 0x12665673 */
  if (C.zf) goto L_12665673;
  /* 12665652 push 0x1268b8e8 */
  push32((uint32_t)(0x1268b8e8u));
  /* 12665657 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665659 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1266565e push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 12665663 push 2 */
  push32((uint32_t)(0x2u));
  /* 12665665 call 0x12663730 */
  push32(0x1266566au); f_12663730();
  /* 1266566a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266566d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665670 jne 0x12665673 */
  if (!C.zf) goto L_12665673;
  /* 12665672 int3  */
  x86_unimpl("int3 @ 0x12665672");
L_12665673:;
  /* 12665673 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12665675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665677 jne 0x12665647 */
  if (!C.zf) goto L_12665647;
L_12665679:;
  /* 12665679 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266567c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1266567f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12665682 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665684 call 0x12668110 */
  push32(0x12665689u); f_12668110();
  /* 12665689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266568c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266568f pop edi */
  EDI = (pop32());
  /* 12665690 pop esi */
  ESI = (pop32());
  /* 12665691 pop ebx */
  EBX = (pop32());
  /* 12665692 mov esp, ebp */
  ESP = (EBP);
  /* 12665694 pop ebp */
  EBP = (pop32());
  /* 12665695 ret  */
  ESPCHK(0x12665540u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x126656a0 (28 bytes, 11 insns) */
void f_126656a0(void) {
  FTRACE(0x126656a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126656a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126656a1 mov ebp, esp */
  EBP = (ESP);
  /* 126656a3 push ecx */
  push32((uint32_t)(ECX));
  /* 126656a4 mov eax, dword ptr [0x1268ea8c] */
  EAX = (r32((uint32_t)(0x1268ea8c)));
  /* 126656a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126656ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126656af mov dword ptr [0x1268ea8c], ecx */
  w32((uint32_t)(0x1268ea8c), (ECX));
  /* 126656b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126656b8 mov esp, ebp */
  ESP = (EBP);
  /* 126656ba pop ebp */
  EBP = (pop32());
  /* 126656bb ret  */
  ESPCHK(0x126656a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x126656c0 (157 bytes, 59 insns) */
void f_126656c0(void) {
  FTRACE(0x126656c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126656c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126656c1 mov ebp, esp */
  EBP = (ESP);
  /* 126656c3 push ecx */
  push32((uint32_t)(ECX));
  /* 126656c4 push ebx */
  push32((uint32_t)(EBX));
  /* 126656c5 push esi */
  push32((uint32_t)(ESI));
  /* 126656c6 push edi */
  push32((uint32_t)(EDI));
  /* 126656c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 126656c9 call 0x12668070 */
  push32(0x126656ceu); f_12668070();
  /* 126656ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126656d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126656d4 push eax */
  push32((uint32_t)(EAX));
  /* 126656d5 call 0x12665c70 */
  push32(0x126656dau); f_12665c70();
  /* 126656da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126656dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126656df je 0x1266574c */
  if (C.zf) goto L_1266574c;
  /* 126656e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126656e4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126656e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126656ea:;
  /* 126656ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126656ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126656f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126656f5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126656f8 je 0x1266573d */
  if (C.zf) goto L_1266573d;
  /* 126656fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126656fd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665701 je 0x1266573d */
  if (C.zf) goto L_1266573d;
  /* 12665703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665706 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665709 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266570e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665711 je 0x1266573d */
  if (C.zf) goto L_1266573d;
  /* 12665713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665716 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266571a je 0x1266573d */
  if (C.zf) goto L_1266573d;
  /* 1266571c push 0x1268b9a0 */
  push32((uint32_t)(0x1268b9a0u));
  /* 12665721 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665723 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12665728 push 0x1268b6f8 */
  push32((uint32_t)(0x1268b6f8u));
  /* 1266572d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266572f call 0x12663730 */
  push32(0x12665734u); f_12663730();
  /* 12665734 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665737 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266573a jne 0x1266573d */
  if (!C.zf) goto L_1266573d;
  /* 1266573c int3  */
  x86_unimpl("int3 @ 0x1266573c");
L_1266573d:;
  /* 1266573d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266573f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12665741 jne 0x126656ea */
  if (!C.zf) goto L_126656ea;
  /* 12665743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665746 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665749 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1266574c:;
  /* 1266574c push 9 */
  push32((uint32_t)(0x9u));
  /* 1266574e call 0x12668110 */
  push32(0x12665753u); f_12668110();
  /* 12665753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665756 pop edi */
  EDI = (pop32());
  /* 12665757 pop esi */
  ESI = (pop32());
  /* 12665758 pop ebx */
  EBX = (pop32());
  /* 12665759 mov esp, ebp */
  ESP = (EBP);
  /* 1266575b pop ebp */
  EBP = (pop32());
  /* 1266575c ret  */
  ESPCHK(0x126656c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005760 @ 0x12665760 (28 bytes, 11 insns) */
void f_12665760(void) {
  FTRACE(0x12665760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665760 push ebp */
  push32((uint32_t)(EBP));
  /* 12665761 mov ebp, esp */
  EBP = (ESP);
  /* 12665763 push ecx */
  push32((uint32_t)(ECX));
  /* 12665764 mov eax, dword ptr [0x1268ec90] */
  EAX = (r32((uint32_t)(0x1268ec90)));
  /* 12665769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266576c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266576f mov dword ptr [0x1268ec90], ecx */
  w32((uint32_t)(0x1268ec90), (ECX));
  /* 12665775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665778 mov esp, ebp */
  ESP = (EBP);
  /* 1266577a pop ebp */
  EBP = (pop32());
  /* 1266577b ret  */
  ESPCHK(0x12665760u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x12665780 (136 bytes, 55 insns) */
void f_12665780(void) {
  FTRACE(0x12665780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665780 push ebp */
  push32((uint32_t)(EBP));
  /* 12665781 mov ebp, esp */
  EBP = (ESP);
  /* 12665783 push ecx */
  push32((uint32_t)(ECX));
  /* 12665784 push ebx */
  push32((uint32_t)(EBX));
  /* 12665785 push esi */
  push32((uint32_t)(ESI));
  /* 12665786 push edi */
  push32((uint32_t)(EDI));
  /* 12665787 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1266578e:;
  /* 1266578e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12665791 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12665794 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665797 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1266579a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266579c je 0x126657fe */
  if (C.zf) goto L_126657fe;
  /* 1266579e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126657a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126657a3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126657a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126657a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126657ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126657b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126657b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 126657b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126657b9 je 0x126657fc */
  if (C.zf) goto L_126657fc;
L_126657bb:;
  /* 126657bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126657be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126657c3 push eax */
  push32((uint32_t)(EAX));
  /* 126657c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126657c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126657c9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 126657cc push edx */
  push32((uint32_t)(EDX));
  /* 126657cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126657d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126657d3 push eax */
  push32((uint32_t)(EAX));
  /* 126657d4 push 0x1268b9e4 */
  push32((uint32_t)(0x1268b9e4u));
  /* 126657d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126657db push 0 */
  push32((uint32_t)(0x0u));
  /* 126657dd push 0 */
  push32((uint32_t)(0x0u));
  /* 126657df push 0 */
  push32((uint32_t)(0x0u));
  /* 126657e1 call 0x12663730 */
  push32(0x126657e6u); f_12663730();
  /* 126657e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126657e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126657ec jne 0x126657ef */
  if (!C.zf) goto L_126657ef;
  /* 126657ee int3  */
  x86_unimpl("int3 @ 0x126657ee");
L_126657ef:;
  /* 126657ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126657f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126657f3 jne 0x126657bb */
  if (!C.zf) goto L_126657bb;
  /* 126657f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_126657fc:;
  /* 126657fc jmp 0x1266578e */
  goto L_1266578e;
L_126657fe:;
  /* 126657fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665801 pop edi */
  EDI = (pop32());
  /* 12665802 pop esi */
  ESI = (pop32());
  /* 12665803 pop ebx */
  EBX = (pop32());
  /* 12665804 mov esp, ebp */
  ESP = (EBP);
  /* 12665806 pop ebp */
  EBP = (pop32());
  /* 12665807 ret  */
  ESPCHK(0x12665780u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x12665810 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12665810(void) {
  FTRACE(0x12665810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665810 push ebp */
  push32((uint32_t)(EBP));
  /* 12665811 mov ebp, esp */
  EBP = (ESP);
  /* 12665813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665816 push ebx */
  push32((uint32_t)(EBX));
  /* 12665817 push esi */
  push32((uint32_t)(ESI));
  /* 12665818 push edi */
  push32((uint32_t)(EDI));
  /* 12665819 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12665820 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12665825 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12665828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266582a jne 0x12665836 */
  if (!C.zf) goto L_12665836;
  /* 1266582c mov eax, 1 */
  EAX = (0x1u);
  /* 12665831 jmp 0x12665b68 */
  goto L_12665b68;
L_12665836:;
  /* 12665836 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665838 call 0x12668070 */
  push32(0x1266583du); f_12668070();
  /* 1266583d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665840 call 0x12668850 */
  push32(0x12665845u); f_12668850();
  /* 12665845 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12665848 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266584c je 0x12665959 */
  if (C.zf) goto L_12665959;
  /* 12665852 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665856 je 0x12665959 */
  if (C.zf) goto L_12665959;
  /* 1266585c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266585f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12665862 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12665865 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665868 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1266586b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266586f ja 0x12665922 */
  if ((!C.cf&&!C.zf)) goto L_12665922;
  /* 12665875 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12665878 jmp dword ptr [eax*4 + 0x12665b6f] */
  switch (EAX) {
    case 0: goto L_126658fa;
    case 1: goto L_126658d2;
    case 2: goto L_126658aa;
    case 3: goto L_1266587f;
    default: x86_unimpl("switch@0x12665878 out of table"); return;
  }
L_1266587f:;
  /* 1266587f push 0x1268bb38 */
  push32((uint32_t)(0x1268bb38u));
  /* 12665884 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12665889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266588b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266588d push 0 */
  push32((uint32_t)(0x0u));
  /* 1266588f push 0 */
  push32((uint32_t)(0x0u));
  /* 12665891 call 0x12663730 */
  push32(0x12665896u); f_12663730();
  /* 12665896 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665899 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266589c jne 0x1266589f */
  if (!C.zf) goto L_1266589f;
  /* 1266589e int3  */
  x86_unimpl("int3 @ 0x1266589e");
L_1266589f:;
  /* 1266589f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126658a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126658a3 jne 0x1266587f */
  if (!C.zf) goto L_1266587f;
  /* 126658a5 jmp 0x12665948 */
  goto L_12665948;
L_126658aa:;
  /* 126658aa push 0x1268bb14 */
  push32((uint32_t)(0x1268bb14u));
  /* 126658af push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126658b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126658b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126658b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126658ba push 0 */
  push32((uint32_t)(0x0u));
  /* 126658bc call 0x12663730 */
  push32(0x126658c1u); f_12663730();
  /* 126658c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126658c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126658c7 jne 0x126658ca */
  if (!C.zf) goto L_126658ca;
  /* 126658c9 int3  */
  x86_unimpl("int3 @ 0x126658c9");
L_126658ca:;
  /* 126658ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126658cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126658ce jne 0x126658aa */
  if (!C.zf) goto L_126658aa;
  /* 126658d0 jmp 0x12665948 */
  goto L_12665948;
L_126658d2:;
  /* 126658d2 push 0x1268baf0 */
  push32((uint32_t)(0x1268baf0u));
  /* 126658d7 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126658dc push 0 */
  push32((uint32_t)(0x0u));
  /* 126658de push 0 */
  push32((uint32_t)(0x0u));
  /* 126658e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126658e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126658e4 call 0x12663730 */
  push32(0x126658e9u); f_12663730();
  /* 126658e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126658ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126658ef jne 0x126658f2 */
  if (!C.zf) goto L_126658f2;
  /* 126658f1 int3  */
  x86_unimpl("int3 @ 0x126658f1");
L_126658f2:;
  /* 126658f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126658f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126658f6 jne 0x126658d2 */
  if (!C.zf) goto L_126658d2;
  /* 126658f8 jmp 0x12665948 */
  goto L_12665948;
L_126658fa:;
  /* 126658fa push 0x1268bacc */
  push32((uint32_t)(0x1268baccu));
  /* 126658ff push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12665904 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665906 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266590a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266590c call 0x12663730 */
  push32(0x12665911u); f_12663730();
  /* 12665911 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665917 jne 0x1266591a */
  if (!C.zf) goto L_1266591a;
  /* 12665919 int3  */
  x86_unimpl("int3 @ 0x12665919");
L_1266591a:;
  /* 1266591a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266591c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266591e jne 0x126658fa */
  if (!C.zf) goto L_126658fa;
  /* 12665920 jmp 0x12665948 */
  goto L_12665948;
L_12665922:;
  /* 12665922 push 0x1268baa0 */
  push32((uint32_t)(0x1268baa0u));
  /* 12665927 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 1266592c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266592e push 0 */
  push32((uint32_t)(0x0u));
  /* 12665930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665934 call 0x12663730 */
  push32(0x12665939u); f_12663730();
  /* 12665939 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266593c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266593f jne 0x12665942 */
  if (!C.zf) goto L_12665942;
  /* 12665941 int3  */
  x86_unimpl("int3 @ 0x12665941");
L_12665942:;
  /* 12665942 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12665944 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12665946 jne 0x12665922 */
  if (!C.zf) goto L_12665922;
L_12665948:;
  /* 12665948 push 9 */
  push32((uint32_t)(0x9u));
  /* 1266594a call 0x12668110 */
  push32(0x1266594fu); f_12668110();
  /* 1266594f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665954 jmp 0x12665b68 */
  goto L_12665b68;
L_12665959:;
  /* 12665959 mov eax, dword ptr [0x126905f4] */
  EAX = (r32((uint32_t)(0x126905f4)));
  /* 1266595e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12665961 jmp 0x1266596b */
  goto L_1266596b;
L_12665963:;
  /* 12665963 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665966 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12665968 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1266596b:;
  /* 1266596b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266596f je 0x12665b5b */
  if (C.zf) goto L_12665b5b;
  /* 12665975 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1266597c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266597f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12665982 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12665988 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266598b je 0x126659b0 */
  if (C.zf) goto L_126659b0;
  /* 1266598d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665990 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665994 je 0x126659b0 */
  if (C.zf) goto L_126659b0;
  /* 12665996 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665999 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1266599c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126659a2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126659a5 je 0x126659b0 */
  if (C.zf) goto L_126659b0;
  /* 126659a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126659aa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126659ae jne 0x126659c8 */
  if (!C.zf) goto L_126659c8;
L_126659b0:;
  /* 126659b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126659b3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126659b6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126659bc mov edx, dword ptr [ecx*4 + 0x1268ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea94)));
  /* 126659c3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126659c6 jmp 0x126659cf */
  goto L_126659cf;
L_126659c8:;
  /* 126659c8 mov dword ptr [ebp - 0x14], 0x1268ba98 */
  w32((uint32_t)(EBP + -0x14), (0x1268ba98u));
L_126659cf:;
  /* 126659cf push 4 */
  push32((uint32_t)(0x4u));
  /* 126659d1 mov al, byte ptr [0x1268ea90] */
  AL = (r8((uint32_t)(0x1268ea90)));
  /* 126659d6 push eax */
  push32((uint32_t)(EAX));
  /* 126659d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126659da add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126659dd push ecx */
  push32((uint32_t)(ECX));
  /* 126659de call 0x12665780 */
  push32(0x126659e3u); f_12665780();
  /* 126659e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126659e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126659e8 jne 0x12665a24 */
  if (!C.zf) goto L_12665a24;
L_126659ea:;
  /* 126659ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126659ed add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126659f0 push edx */
  push32((uint32_t)(EDX));
  /* 126659f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126659f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 126659f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126659f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126659fb push edx */
  push32((uint32_t)(EDX));
  /* 126659fc push 0x1268b974 */
  push32((uint32_t)(0x1268b974u));
  /* 12665a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a09 call 0x12663730 */
  push32(0x12665a0eu); f_12663730();
  /* 12665a0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665a11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665a14 jne 0x12665a17 */
  if (!C.zf) goto L_12665a17;
  /* 12665a16 int3  */
  x86_unimpl("int3 @ 0x12665a16");
L_12665a17:;
  /* 12665a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665a1b jne 0x126659ea */
  if (!C.zf) goto L_126659ea;
  /* 12665a1d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12665a24:;
  /* 12665a24 push 4 */
  push32((uint32_t)(0x4u));
  /* 12665a26 mov cl, byte ptr [0x1268ea90] */
  CL = (r8((uint32_t)(0x1268ea90)));
  /* 12665a2c push ecx */
  push32((uint32_t)(ECX));
  /* 12665a2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a30 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12665a33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a36 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12665a3a push edx */
  push32((uint32_t)(EDX));
  /* 12665a3b call 0x12665780 */
  push32(0x12665a40u); f_12665780();
  /* 12665a40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665a45 jne 0x12665a81 */
  if (!C.zf) goto L_12665a81;
L_12665a47:;
  /* 12665a47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a4a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665a4d push eax */
  push32((uint32_t)(EAX));
  /* 12665a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a51 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12665a54 push edx */
  push32((uint32_t)(EDX));
  /* 12665a55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12665a58 push eax */
  push32((uint32_t)(EAX));
  /* 12665a59 push 0x1268b948 */
  push32((uint32_t)(0x1268b948u));
  /* 12665a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665a66 call 0x12663730 */
  push32(0x12665a6bu); f_12663730();
  /* 12665a6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665a71 jne 0x12665a74 */
  if (!C.zf) goto L_12665a74;
  /* 12665a73 int3  */
  x86_unimpl("int3 @ 0x12665a73");
L_12665a74:;
  /* 12665a74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12665a76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665a78 jne 0x12665a47 */
  if (!C.zf) goto L_12665a47;
  /* 12665a7a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12665a81:;
  /* 12665a81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a84 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665a88 jne 0x12665ada */
  if (!C.zf) goto L_12665ada;
  /* 12665a8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12665a90 push ecx */
  push32((uint32_t)(ECX));
  /* 12665a91 mov dl, byte ptr [0x1268ea91] */
  DL = (r8((uint32_t)(0x1268ea91)));
  /* 12665a97 push edx */
  push32((uint32_t)(EDX));
  /* 12665a98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665a9b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665a9e push eax */
  push32((uint32_t)(EAX));
  /* 12665a9f call 0x12665780 */
  push32(0x12665aa4u); f_12665780();
  /* 12665aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665aa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665aa9 jne 0x12665ada */
  if (!C.zf) goto L_12665ada;
L_12665aab:;
  /* 12665aab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665aae add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 12665ab2 push 0x1268ba6c */
  push32((uint32_t)(0x1268ba6cu));
  /* 12665ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665abb push 0 */
  push32((uint32_t)(0x0u));
  /* 12665abd push 0 */
  push32((uint32_t)(0x0u));
  /* 12665abf call 0x12663730 */
  push32(0x12665ac4u); f_12663730();
  /* 12665ac4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665ac7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665aca jne 0x12665acd */
  if (!C.zf) goto L_12665acd;
  /* 12665acc int3  */
  x86_unimpl("int3 @ 0x12665acc");
L_12665acd:;
  /* 12665acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12665acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12665ad1 jne 0x12665aab */
  if (!C.zf) goto L_12665aab;
  /* 12665ad3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12665ada:;
  /* 12665ada cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665ade jne 0x12665b56 */
  if (!C.zf) goto L_12665b56;
  /* 12665ae0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665ae3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665ae7 je 0x12665b1c */
  if (C.zf) goto L_12665b1c;
L_12665ae9:;
  /* 12665ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665aec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12665aef push edx */
  push32((uint32_t)(EDX));
  /* 12665af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665af3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12665af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12665af7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12665afa push edx */
  push32((uint32_t)(EDX));
  /* 12665afb push 0x1268ba4c */
  push32((uint32_t)(0x1268ba4cu));
  /* 12665b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b08 call 0x12663730 */
  push32(0x12665b0du); f_12663730();
  /* 12665b0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665b10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665b13 jne 0x12665b16 */
  if (!C.zf) goto L_12665b16;
  /* 12665b15 int3  */
  x86_unimpl("int3 @ 0x12665b15");
L_12665b16:;
  /* 12665b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665b1a jne 0x12665ae9 */
  if (!C.zf) goto L_12665ae9;
L_12665b1c:;
  /* 12665b1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665b1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12665b22 push edx */
  push32((uint32_t)(EDX));
  /* 12665b23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665b26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665b29 push eax */
  push32((uint32_t)(EAX));
  /* 12665b2a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12665b2d push ecx */
  push32((uint32_t)(ECX));
  /* 12665b2e push 0x1268ba20 */
  push32((uint32_t)(0x1268ba20u));
  /* 12665b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665b3b call 0x12663730 */
  push32(0x12665b40u); f_12663730();
  /* 12665b40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665b43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665b46 jne 0x12665b49 */
  if (!C.zf) goto L_12665b49;
  /* 12665b48 int3  */
  x86_unimpl("int3 @ 0x12665b48");
L_12665b49:;
  /* 12665b49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12665b4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12665b4d jne 0x12665b1c */
  if (!C.zf) goto L_12665b1c;
  /* 12665b4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12665b56:;
  /* 12665b56 jmp 0x12665963 */
  goto L_12665963;
L_12665b5b:;
  /* 12665b5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12665b5d call 0x12668110 */
  push32(0x12665b62u); f_12668110();
  /* 12665b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12665b68:;
  /* 12665b68 pop edi */
  EDI = (pop32());
  /* 12665b69 pop esi */
  ESI = (pop32());
  /* 12665b6a pop ebx */
  EBX = (pop32());
  /* 12665b6b mov esp, ebp */
  ESP = (EBP);
  /* 12665b6d pop ebp */
  EBP = (pop32());
  /* 12665b6e ret  */
  ESPCHK(0x12665810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x12665b80 (34 bytes, 13 insns) */
void f_12665b80(void) {
  FTRACE(0x12665b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12665b81 mov ebp, esp */
  EBP = (ESP);
  /* 12665b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12665b84 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12665b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12665b8c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665b90 je 0x12665b9b */
  if (C.zf) goto L_12665b9b;
  /* 12665b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665b95 mov dword ptr [0x1268ea84], ecx */
  w32((uint32_t)(0x1268ea84), (ECX));
L_12665b9b:;
  /* 12665b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665b9e mov esp, ebp */
  ESP = (EBP);
  /* 12665ba0 pop ebp */
  EBP = (pop32());
  /* 12665ba1 ret  */
  ESPCHK(0x12665b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x12665bb0 (103 bytes, 38 insns) */
void f_12665bb0(void) {
  FTRACE(0x12665bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12665bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12665bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12665bb4 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12665bb9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12665bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665bbe jne 0x12665bc2 */
  if (!C.zf) goto L_12665bc2;
  /* 12665bc0 jmp 0x12665c13 */
  goto L_12665c13;
L_12665bc2:;
  /* 12665bc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665bc4 call 0x12668070 */
  push32(0x12665bc9u); f_12668070();
  /* 12665bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665bcc mov ecx, dword ptr [0x126905f4] */
  ECX = (r32((uint32_t)(0x126905f4)));
  /* 12665bd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12665bd5 jmp 0x12665bdf */
  goto L_12665bdf;
L_12665bd7:;
  /* 12665bd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665bda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12665bdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12665bdf:;
  /* 12665bdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665be3 je 0x12665c09 */
  if (C.zf) goto L_12665c09;
  /* 12665be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665be8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12665beb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12665bf1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665bf4 jne 0x12665c07 */
  if (!C.zf) goto L_12665c07;
  /* 12665bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665bf9 push eax */
  push32((uint32_t)(EAX));
  /* 12665bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665bfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665c00 push ecx */
  push32((uint32_t)(ECX));
  /* 12665c01 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12665c04u);
  /* 12665c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12665c07:;
  /* 12665c07 jmp 0x12665bd7 */
  goto L_12665bd7;
L_12665c09:;
  /* 12665c09 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665c0b call 0x12668110 */
  push32(0x12665c10u); f_12668110();
  /* 12665c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12665c13:;
  /* 12665c13 mov esp, ebp */
  ESP = (EBP);
  /* 12665c15 pop ebp */
  EBP = (pop32());
  /* 12665c16 ret  */
  ESPCHK(0x12665bb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12665c20 (75 bytes, 28 insns) */
void f_12665c20(void) {
  FTRACE(0x12665c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12665c21 mov ebp, esp */
  EBP = (ESP);
  /* 12665c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12665c24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665c28 je 0x12665c5d */
  if (C.zf) goto L_12665c5d;
  /* 12665c2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665c2d push eax */
  push32((uint32_t)(EAX));
  /* 12665c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665c31 push ecx */
  push32((uint32_t)(ECX));
  /* 12665c32 call dword ptr [0x1269338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269338c))), 0x12665c38u);
  /* 12665c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665c3a jne 0x12665c5d */
  if (!C.zf) goto L_12665c5d;
  /* 12665c3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665c40 je 0x12665c54 */
  if (C.zf) goto L_12665c54;
  /* 12665c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665c45 push edx */
  push32((uint32_t)(EDX));
  /* 12665c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665c49 push eax */
  push32((uint32_t)(EAX));
  /* 12665c4a call dword ptr [0x12693388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693388))), 0x12665c50u);
  /* 12665c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665c52 jne 0x12665c5d */
  if (!C.zf) goto L_12665c5d;
L_12665c54:;
  /* 12665c54 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12665c5b jmp 0x12665c64 */
  goto L_12665c64;
L_12665c5d:;
  /* 12665c5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12665c64:;
  /* 12665c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665c67 mov esp, ebp */
  ESP = (EBP);
  /* 12665c69 pop ebp */
  EBP = (pop32());
  /* 12665c6a ret  */
  ESPCHK(0x12665c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c70 @ 0x12665c70 (134 bytes, 50 insns) */
void f_12665c70(void) {
  FTRACE(0x12665c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12665c71 mov ebp, esp */
  EBP = (ESP);
  /* 12665c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12665c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665c78 jne 0x12665c7e */
  if (!C.zf) goto L_12665c7e;
  /* 12665c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665c7c jmp 0x12665cf2 */
  goto L_12665cf2;
L_12665c7e:;
  /* 12665c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12665c80 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12665c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665c85 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665c88 push eax */
  push32((uint32_t)(EAX));
  /* 12665c89 call 0x12665c20 */
  push32(0x12665c8eu); f_12665c20();
  /* 12665c8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665c91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665c93 jne 0x12665c99 */
  if (!C.zf) goto L_12665c99;
  /* 12665c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665c97 jmp 0x12665cf2 */
  goto L_12665cf2;
L_12665c99:;
  /* 12665c99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665c9c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665c9f push ecx */
  push32((uint32_t)(ECX));
  /* 12665ca0 call 0x12668970 */
  push32(0x12665ca5u); f_12668970();
  /* 12665ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665ca8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12665cab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665caf je 0x12665cc6 */
  if (C.zf) goto L_12665cc6;
  /* 12665cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665cb4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665cb7 push edx */
  push32((uint32_t)(EDX));
  /* 12665cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665cbb push eax */
  push32((uint32_t)(EAX));
  /* 12665cbc call 0x126689d0 */
  push32(0x12665cc1u); f_126689d0();
  /* 12665cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665cc4 jmp 0x12665cf2 */
  goto L_12665cf2;
L_12665cc6:;
  /* 12665cc6 mov ecx, dword ptr [0x126905a8] */
  ECX = (r32((uint32_t)(0x126905a8)));
  /* 12665ccc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12665cd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12665cd4 je 0x12665cdd */
  if (C.zf) goto L_12665cdd;
  /* 12665cd6 mov eax, 1 */
  EAX = (0x1u);
  /* 12665cdb jmp 0x12665cf2 */
  goto L_12665cf2;
L_12665cdd:;
  /* 12665cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665ce0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665ce3 push edx */
  push32((uint32_t)(EDX));
  /* 12665ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665ce6 mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 12665ceb push eax */
  push32((uint32_t)(EAX));
  /* 12665cec call dword ptr [0x12693390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693390))), 0x12665cf2u);
L_12665cf2:;
  /* 12665cf2 mov esp, ebp */
  ESP = (EBP);
  /* 12665cf4 pop ebp */
  EBP = (pop32());
  /* 12665cf5 ret  */
  ESPCHK(0x12665c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x12665d00 (227 bytes, 80 insns) */
void f_12665d00(void) {
  FTRACE(0x12665d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12665d01 mov ebp, esp */
  EBP = (ESP);
  /* 12665d03 push ecx */
  push32((uint32_t)(ECX));
  /* 12665d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665d07 push eax */
  push32((uint32_t)(EAX));
  /* 12665d08 call 0x12665c70 */
  push32(0x12665d0du); f_12665c70();
  /* 12665d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665d12 jne 0x12665d1b */
  if (!C.zf) goto L_12665d1b;
  /* 12665d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665d16 jmp 0x12665ddf */
  goto L_12665ddf;
L_12665d1b:;
  /* 12665d1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12665d1d call 0x12668070 */
  push32(0x12665d22u); f_12668070();
  /* 12665d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665d28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12665d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665d34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665d39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d3c je 0x12665d60 */
  if (C.zf) goto L_12665d60;
  /* 12665d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d41 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d45 je 0x12665d60 */
  if (C.zf) goto L_12665d60;
  /* 12665d47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665d4d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665d52 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d55 je 0x12665d60 */
  if (C.zf) goto L_12665d60;
  /* 12665d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d5a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d5e jne 0x12665dd3 */
  if (!C.zf) goto L_12665dd3;
L_12665d60:;
  /* 12665d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12665d62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12665d65 push edx */
  push32((uint32_t)(EDX));
  /* 12665d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665d69 push eax */
  push32((uint32_t)(EAX));
  /* 12665d6a call 0x12665c20 */
  push32(0x12665d6fu); f_12665c20();
  /* 12665d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665d74 je 0x12665dd3 */
  if (C.zf) goto L_12665dd3;
  /* 12665d76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12665d7c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d7f jne 0x12665dd3 */
  if (!C.zf) goto L_12665dd3;
  /* 12665d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12665d87 cmp ecx, dword ptr [0x1268ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d8d jg 0x12665dd3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12665dd3;
  /* 12665d8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665d93 je 0x12665da0 */
  if (C.zf) goto L_12665da0;
  /* 12665d95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12665d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665d9b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12665d9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12665da0:;
  /* 12665da0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665da4 je 0x12665db1 */
  if (C.zf) goto L_12665db1;
  /* 12665da6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12665da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665dac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12665daf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12665db1:;
  /* 12665db1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665db5 je 0x12665dc2 */
  if (C.zf) goto L_12665dc2;
  /* 12665db7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12665dba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665dbd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12665dc0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12665dc2:;
  /* 12665dc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665dc4 call 0x12668110 */
  push32(0x12665dc9u); f_12668110();
  /* 12665dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665dcc mov eax, 1 */
  EAX = (0x1u);
  /* 12665dd1 jmp 0x12665ddf */
  goto L_12665ddf;
L_12665dd3:;
  /* 12665dd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665dd5 call 0x12668110 */
  push32(0x12665ddau); f_12668110();
  /* 12665dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12665ddf:;
  /* 12665ddf mov esp, ebp */
  ESP = (EBP);
  /* 12665de1 pop ebp */
  EBP = (pop32());
  /* 12665de2 ret  */
  ESPCHK(0x12665d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x12665df0 (28 bytes, 11 insns) */
void f_12665df0(void) {
  FTRACE(0x12665df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12665df1 mov ebp, esp */
  EBP = (ESP);
  /* 12665df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12665df4 mov eax, dword ptr [0x12691f58] */
  EAX = (r32((uint32_t)(0x12691f58)));
  /* 12665df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12665dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665dff mov dword ptr [0x12691f58], ecx */
  w32((uint32_t)(0x12691f58), (ECX));
  /* 12665e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665e08 mov esp, ebp */
  ESP = (EBP);
  /* 12665e0a pop ebp */
  EBP = (pop32());
  /* 12665e0b ret  */
  ESPCHK(0x12665df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x12665e10 (362 bytes, 116 insns) */
void f_12665e10(void) {
  FTRACE(0x12665e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12665e11 mov ebp, esp */
  EBP = (ESP);
  /* 12665e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665e16 push ebx */
  push32((uint32_t)(EBX));
  /* 12665e17 push esi */
  push32((uint32_t)(ESI));
  /* 12665e18 push edi */
  push32((uint32_t)(EDI));
  /* 12665e19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665e1d jne 0x12665e4a */
  if (!C.zf) goto L_12665e4a;
L_12665e1f:;
  /* 12665e1f push 0x1268bb80 */
  push32((uint32_t)(0x1268bb80u));
  /* 12665e24 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12665e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12665e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12665e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12665e31 call 0x12663730 */
  push32(0x12665e36u); f_12663730();
  /* 12665e36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665e39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665e3c jne 0x12665e3f */
  if (!C.zf) goto L_12665e3f;
  /* 12665e3e int3  */
  x86_unimpl("int3 @ 0x12665e3e");
L_12665e3f:;
  /* 12665e3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665e43 jne 0x12665e1f */
  if (!C.zf) goto L_12665e1f;
  /* 12665e45 jmp 0x12665f73 */
  goto L_12665f73;
L_12665e4a:;
  /* 12665e4a push 9 */
  push32((uint32_t)(0x9u));
  /* 12665e4c call 0x12668070 */
  push32(0x12665e51u); f_12668070();
  /* 12665e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665e54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665e57 mov edx, dword ptr [0x126905f4] */
  EDX = (r32((uint32_t)(0x126905f4)));
  /* 12665e5d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12665e5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12665e66 jmp 0x12665e71 */
  goto L_12665e71;
L_12665e68:;
  /* 12665e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665e6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665e6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12665e71:;
  /* 12665e71 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665e75 jge 0x12665e95 */
  if ((C.sf==C.of)) goto L_12665e95;
  /* 12665e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665e7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665e7d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12665e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665e88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665e8b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12665e93 jmp 0x12665e68 */
  goto L_12665e68;
L_12665e95:;
  /* 12665e95 mov edx, dword ptr [0x126905f4] */
  EDX = (r32((uint32_t)(0x126905f4)));
  /* 12665e9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12665e9e jmp 0x12665ea8 */
  goto L_12665ea8;
L_12665ea0:;
  /* 12665ea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665ea3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12665ea5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12665ea8:;
  /* 12665ea8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665eac je 0x12665f51 */
  if (C.zf) goto L_12665f51;
  /* 12665eb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665eb5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665eb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665ebf jl 0x12665f27 */
  if ((C.sf!=C.of)) goto L_12665f27;
  /* 12665ec1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665ec4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12665ec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12665ecd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665ed0 jge 0x12665f27 */
  if ((C.sf==C.of)) goto L_12665f27;
  /* 12665ed2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665ed5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12665ed8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12665ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665ee1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12665ee5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665ee8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665eeb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12665eee and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12665ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665ef7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12665efb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665efe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12665f01 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665f09 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12665f0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665f10 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665f13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665f16 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12665f19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12665f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665f21 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12665f25 jmp 0x12665f4c */
  goto L_12665f4c;
L_12665f27:;
  /* 12665f27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665f2a push edx */
  push32((uint32_t)(EDX));
  /* 12665f2b push 0x1268bb5c */
  push32((uint32_t)(0x1268bb5cu));
  /* 12665f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665f38 call 0x12663730 */
  push32(0x12665f3du); f_12663730();
  /* 12665f3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665f40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665f43 jne 0x12665f46 */
  if (!C.zf) goto L_12665f46;
  /* 12665f45 int3  */
  x86_unimpl("int3 @ 0x12665f45");
L_12665f46:;
  /* 12665f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665f4a jne 0x12665f27 */
  if (!C.zf) goto L_12665f27;
L_12665f4c:;
  /* 12665f4c jmp 0x12665ea0 */
  goto L_12665ea0;
L_12665f51:;
  /* 12665f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665f54 mov edx, dword ptr [0x126905fc] */
  EDX = (r32((uint32_t)(0x126905fc)));
  /* 12665f5a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12665f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12665f60 mov ecx, dword ptr [0x126905f0] */
  ECX = (r32((uint32_t)(0x126905f0)));
  /* 12665f66 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12665f69 push 9 */
  push32((uint32_t)(0x9u));
  /* 12665f6b call 0x12668110 */
  push32(0x12665f70u); f_12668110();
  /* 12665f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12665f73:;
  /* 12665f73 pop edi */
  EDI = (pop32());
  /* 12665f74 pop esi */
  ESI = (pop32());
  /* 12665f75 pop ebx */
  EBX = (pop32());
  /* 12665f76 mov esp, ebp */
  ESP = (EBP);
  /* 12665f78 pop ebp */
  EBP = (pop32());
  /* 12665f79 ret  */
  ESPCHK(0x12665e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x12665f80 (291 bytes, 95 insns) */
void f_12665f80(void) {
  FTRACE(0x12665f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12665f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12665f81 mov ebp, esp */
  EBP = (ESP);
  /* 12665f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12665f86 push ebx */
  push32((uint32_t)(EBX));
  /* 12665f87 push esi */
  push32((uint32_t)(ESI));
  /* 12665f88 push edi */
  push32((uint32_t)(EDI));
  /* 12665f89 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12665f90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665f94 je 0x12665fa2 */
  if (C.zf) goto L_12665fa2;
  /* 12665f96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665f9a je 0x12665fa2 */
  if (C.zf) goto L_12665fa2;
  /* 12665f9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665fa0 jne 0x12665fd0 */
  if (!C.zf) goto L_12665fd0;
L_12665fa2:;
  /* 12665fa2 push 0x1268bba8 */
  push32((uint32_t)(0x1268bba8u));
  /* 12665fa7 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12665fac push 0 */
  push32((uint32_t)(0x0u));
  /* 12665fae push 0 */
  push32((uint32_t)(0x0u));
  /* 12665fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12665fb4 call 0x12663730 */
  push32(0x12665fb9u); f_12663730();
  /* 12665fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12665fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665fbf jne 0x12665fc2 */
  if (!C.zf) goto L_12665fc2;
  /* 12665fc1 int3  */
  x86_unimpl("int3 @ 0x12665fc1");
L_12665fc2:;
  /* 12665fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12665fc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12665fc6 jne 0x12665fa2 */
  if (!C.zf) goto L_12665fa2;
  /* 12665fc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12665fcb jmp 0x1266609c */
  goto L_1266609c;
L_12665fd0:;
  /* 12665fd0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12665fd7 jmp 0x12665fe2 */
  goto L_12665fe2;
L_12665fd9:;
  /* 12665fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665fdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12665fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12665fe2:;
  /* 12665fe2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12665fe6 jge 0x1266606c */
  if ((C.sf==C.of)) goto L_1266606c;
  /* 12665fec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665fef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12665ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12665ff5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12665ff8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12665ffc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666006 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1266600a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266600d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666013 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12666016 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1266601a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266601e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666024 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12666028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266602b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266602e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666033 jne 0x12666042 */
  if (!C.zf) goto L_12666042;
  /* 12666035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266603b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666040 je 0x12666067 */
  if (C.zf) goto L_12666067;
L_12666042:;
  /* 12666042 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666046 je 0x12666067 */
  if (C.zf) goto L_12666067;
  /* 12666048 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266604c jne 0x12666060 */
  if (!C.zf) goto L_12666060;
  /* 1266604e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666052 jne 0x12666067 */
  if (!C.zf) goto L_12666067;
  /* 12666054 mov eax, dword ptr [0x1268ea84] */
  EAX = (r32((uint32_t)(0x1268ea84)));
  /* 12666059 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1266605c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266605e je 0x12666067 */
  if (C.zf) goto L_12666067;
L_12666060:;
  /* 12666060 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12666067:;
  /* 12666067 jmp 0x12665fd9 */
  goto L_12665fd9;
L_1266606c:;
  /* 1266606c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266606f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666072 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12666075 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266607b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1266607e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666081 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666084 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12666087 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266608a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266608d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12666090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666093 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12666099 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266609c:;
  /* 1266609c pop edi */
  EDI = (pop32());
  /* 1266609d pop esi */
  ESI = (pop32());
  /* 1266609e pop ebx */
  EBX = (pop32());
  /* 1266609f mov esp, ebp */
  ESP = (EBP);
  /* 126660a1 pop ebp */
  EBP = (pop32());
  /* 126660a2 ret  */
  ESPCHK(0x12665f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x126660b0 (697 bytes, 253 insns) */
void f_126660b0(void) {
  FTRACE(0x126660b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126660b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126660b1 mov ebp, esp */
  EBP = (ESP);
  /* 126660b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126660b6 push ebx */
  push32((uint32_t)(EBX));
  /* 126660b7 push esi */
  push32((uint32_t)(ESI));
  /* 126660b8 push edi */
  push32((uint32_t)(EDI));
  /* 126660b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126660c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 126660c2 call 0x12668070 */
  push32(0x126660c7u); f_12668070();
  /* 126660c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126660ca:;
  /* 126660ca push 0x1268bca0 */
  push32((uint32_t)(0x1268bca0u));
  /* 126660cf push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126660d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126660d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126660d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126660da push 0 */
  push32((uint32_t)(0x0u));
  /* 126660dc call 0x12663730 */
  push32(0x126660e1u); f_12663730();
  /* 126660e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126660e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126660e7 jne 0x126660ea */
  if (!C.zf) goto L_126660ea;
  /* 126660e9 int3  */
  x86_unimpl("int3 @ 0x126660e9");
L_126660ea:;
  /* 126660ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126660ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126660ee jne 0x126660ca */
  if (!C.zf) goto L_126660ca;
  /* 126660f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126660f4 je 0x126660fe */
  if (C.zf) goto L_126660fe;
  /* 126660f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126660f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126660fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_126660fe:;
  /* 126660fe mov eax, dword ptr [0x126905f4] */
  EAX = (r32((uint32_t)(0x126905f4)));
  /* 12666103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12666106 jmp 0x12666110 */
  goto L_12666110;
L_12666108:;
  /* 12666108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266610b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266610d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12666110:;
  /* 12666110 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666114 je 0x12666332 */
  if (C.zf) goto L_12666332;
  /* 1266611a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266611d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666120 je 0x12666332 */
  if (C.zf) goto L_12666332;
  /* 12666126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666129 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1266612c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12666132 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666135 je 0x12666164 */
  if (C.zf) goto L_12666164;
  /* 12666137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266613a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1266613d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12666143 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666145 je 0x12666164 */
  if (C.zf) goto L_12666164;
  /* 12666147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266614a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1266614d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12666152 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666155 jne 0x12666169 */
  if (!C.zf) goto L_12666169;
  /* 12666157 mov ecx, dword ptr [0x1268ea84] */
  ECX = (r32((uint32_t)(0x1268ea84)));
  /* 1266615d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12666160 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666162 jne 0x12666169 */
  if (!C.zf) goto L_12666169;
L_12666164:;
  /* 12666164 jmp 0x1266632d */
  goto L_1266632d;
L_12666169:;
  /* 12666169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266616c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666170 je 0x126661e2 */
  if (C.zf) goto L_126661e2;
  /* 12666172 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666174 push 1 */
  push32((uint32_t)(0x1u));
  /* 12666176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666179 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266617c push ecx */
  push32((uint32_t)(ECX));
  /* 1266617d call 0x12665c20 */
  push32(0x12666182u); f_12665c20();
  /* 12666182 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666187 jne 0x126661b3 */
  if (!C.zf) goto L_126661b3;
L_12666189:;
  /* 12666189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266618c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266618f push eax */
  push32((uint32_t)(EAX));
  /* 12666190 push 0x1268bc8c */
  push32((uint32_t)(0x1268bc8cu));
  /* 12666195 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666197 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266619b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266619d call 0x12663730 */
  push32(0x126661a2u); f_12663730();
  /* 126661a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126661a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126661a8 jne 0x126661ab */
  if (!C.zf) goto L_126661ab;
  /* 126661aa int3  */
  x86_unimpl("int3 @ 0x126661aa");
L_126661ab:;
  /* 126661ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126661ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126661af jne 0x12666189 */
  if (!C.zf) goto L_12666189;
  /* 126661b1 jmp 0x126661e2 */
  goto L_126661e2;
L_126661b3:;
  /* 126661b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126661b6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 126661b9 push eax */
  push32((uint32_t)(EAX));
  /* 126661ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126661bd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 126661c0 push edx */
  push32((uint32_t)(EDX));
  /* 126661c1 push 0x1268bc80 */
  push32((uint32_t)(0x1268bc80u));
  /* 126661c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126661c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126661ca push 0 */
  push32((uint32_t)(0x0u));
  /* 126661cc push 0 */
  push32((uint32_t)(0x0u));
  /* 126661ce call 0x12663730 */
  push32(0x126661d3u); f_12663730();
  /* 126661d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126661d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126661d9 jne 0x126661dc */
  if (!C.zf) goto L_126661dc;
  /* 126661db int3  */
  x86_unimpl("int3 @ 0x126661db");
L_126661dc:;
  /* 126661dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126661de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126661e0 jne 0x126661b3 */
  if (!C.zf) goto L_126661b3;
L_126661e2:;
  /* 126661e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126661e5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 126661e8 push edx */
  push32((uint32_t)(EDX));
  /* 126661e9 push 0x1268bc78 */
  push32((uint32_t)(0x1268bc78u));
  /* 126661ee push 0 */
  push32((uint32_t)(0x0u));
  /* 126661f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126661f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126661f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126661f6 call 0x12663730 */
  push32(0x126661fbu); f_12663730();
  /* 126661fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126661fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666201 jne 0x12666204 */
  if (!C.zf) goto L_12666204;
  /* 12666203 int3  */
  x86_unimpl("int3 @ 0x12666203");
L_12666204:;
  /* 12666204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666208 jne 0x126661e2 */
  if (!C.zf) goto L_126661e2;
  /* 1266620a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266620d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12666210 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12666216 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666219 jne 0x1266628c */
  if (!C.zf) goto L_1266628c;
L_1266621b:;
  /* 1266621b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266621e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12666221 push ecx */
  push32((uint32_t)(ECX));
  /* 12666222 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666225 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12666228 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1266622b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12666230 push eax */
  push32((uint32_t)(EAX));
  /* 12666231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666234 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666237 push ecx */
  push32((uint32_t)(ECX));
  /* 12666238 push 0x1268bc44 */
  push32((uint32_t)(0x1268bc44u));
  /* 1266623d push 0 */
  push32((uint32_t)(0x0u));
  /* 1266623f push 0 */
  push32((uint32_t)(0x0u));
  /* 12666241 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666243 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666245 call 0x12663730 */
  push32(0x1266624au); f_12663730();
  /* 1266624a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266624d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666250 jne 0x12666253 */
  if (!C.zf) goto L_12666253;
  /* 12666252 int3  */
  x86_unimpl("int3 @ 0x12666252");
L_12666253:;
  /* 12666253 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666255 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666257 jne 0x1266621b */
  if (!C.zf) goto L_1266621b;
  /* 12666259 cmp dword ptr [0x12691f58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691f58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666260 je 0x1266627b */
  if (C.zf) goto L_1266627b;
  /* 12666262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666265 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12666268 push ecx */
  push32((uint32_t)(ECX));
  /* 12666269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266626c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266626f push edx */
  push32((uint32_t)(EDX));
  /* 12666270 call dword ptr [0x12691f58] */
  call_ind((uint32_t)(r32((uint32_t)(0x12691f58))), 0x12666276u);
  /* 12666276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666279 jmp 0x12666287 */
  goto L_12666287;
L_1266627b:;
  /* 1266627b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266627e push eax */
  push32((uint32_t)(EAX));
  /* 1266627f call 0x12666370 */
  push32(0x12666284u); f_12666370();
  /* 12666284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12666287:;
  /* 12666287 jmp 0x1266632d */
  goto L_1266632d;
L_1266628c:;
  /* 1266628c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266628f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666293 jne 0x126662d2 */
  if (!C.zf) goto L_126662d2;
L_12666295:;
  /* 12666295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666298 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1266629b push eax */
  push32((uint32_t)(EAX));
  /* 1266629c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266629f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126662a2 push ecx */
  push32((uint32_t)(ECX));
  /* 126662a3 push 0x1268bc1c */
  push32((uint32_t)(0x1268bc1cu));
  /* 126662a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126662aa push 0 */
  push32((uint32_t)(0x0u));
  /* 126662ac push 0 */
  push32((uint32_t)(0x0u));
  /* 126662ae push 0 */
  push32((uint32_t)(0x0u));
  /* 126662b0 call 0x12663730 */
  push32(0x126662b5u); f_12663730();
  /* 126662b5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126662b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126662bb jne 0x126662be */
  if (!C.zf) goto L_126662be;
  /* 126662bd int3  */
  x86_unimpl("int3 @ 0x126662bd");
L_126662be:;
  /* 126662be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126662c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126662c2 jne 0x12666295 */
  if (!C.zf) goto L_12666295;
  /* 126662c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126662c7 push eax */
  push32((uint32_t)(EAX));
  /* 126662c8 call 0x12666370 */
  push32(0x126662cdu); f_12666370();
  /* 126662cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126662d0 jmp 0x1266632d */
  goto L_1266632d;
L_126662d2:;
  /* 126662d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126662d5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 126662d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 126662de cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126662e1 jne 0x1266632d */
  if (!C.zf) goto L_1266632d;
L_126662e3:;
  /* 126662e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126662e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126662e9 push ecx */
  push32((uint32_t)(ECX));
  /* 126662ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126662ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126662f0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 126662f3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126662f8 push eax */
  push32((uint32_t)(EAX));
  /* 126662f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126662fc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126662ff push ecx */
  push32((uint32_t)(ECX));
  /* 12666300 push 0x1268bbe8 */
  push32((uint32_t)(0x1268bbe8u));
  /* 12666305 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666307 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266630b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266630d call 0x12663730 */
  push32(0x12666312u); f_12663730();
  /* 12666312 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666318 jne 0x1266631b */
  if (!C.zf) goto L_1266631b;
  /* 1266631a int3  */
  x86_unimpl("int3 @ 0x1266631a");
L_1266631b:;
  /* 1266631b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266631d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266631f jne 0x126662e3 */
  if (!C.zf) goto L_126662e3;
  /* 12666321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666324 push eax */
  push32((uint32_t)(EAX));
  /* 12666325 call 0x12666370 */
  push32(0x1266632au); f_12666370();
  /* 1266632a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266632d:;
  /* 1266632d jmp 0x12666108 */
  goto L_12666108;
L_12666332:;
  /* 12666332 push 9 */
  push32((uint32_t)(0x9u));
  /* 12666334 call 0x12668110 */
  push32(0x12666339u); f_12668110();
  /* 12666339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266633c:;
  /* 1266633c push 0x1268bbd0 */
  push32((uint32_t)(0x1268bbd0u));
  /* 12666341 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 12666346 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266634a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266634c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266634e call 0x12663730 */
  push32(0x12666353u); f_12663730();
  /* 12666353 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666356 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666359 jne 0x1266635c */
  if (!C.zf) goto L_1266635c;
  /* 1266635b int3  */
  x86_unimpl("int3 @ 0x1266635b");
L_1266635c:;
  /* 1266635c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266635e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666360 jne 0x1266633c */
  if (!C.zf) goto L_1266633c;
  /* 12666362 pop edi */
  EDI = (pop32());
  /* 12666363 pop esi */
  ESI = (pop32());
  /* 12666364 pop ebx */
  EBX = (pop32());
  /* 12666365 mov esp, ebp */
  ESP = (EBP);
  /* 12666367 pop ebp */
  EBP = (pop32());
  /* 12666368 ret  */
  ESPCHK(0x126660b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x12666370 (276 bytes, 89 insns) */
void f_12666370(void) {
  FTRACE(0x12666370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666370 push ebp */
  push32((uint32_t)(EBP));
  /* 12666371 mov ebp, esp */
  EBP = (ESP);
  /* 12666373 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666376 push ebx */
  push32((uint32_t)(EBX));
  /* 12666377 push esi */
  push32((uint32_t)(ESI));
  /* 12666378 push edi */
  push32((uint32_t)(EDI));
  /* 12666379 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12666380 jmp 0x1266638b */
  goto L_1266638b;
L_12666382:;
  /* 12666382 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12666385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666388 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1266638b:;
  /* 1266638b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266638e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666392 jge 0x1266639f */
  if ((C.sf==C.of)) goto L_1266639f;
  /* 12666394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666397 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1266639a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1266639d jmp 0x126663a6 */
  goto L_126663a6;
L_1266639f:;
  /* 1266639f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_126663a6:;
  /* 126663a6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 126663a9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126663ac jge 0x1266644c */
  if ((C.sf==C.of)) goto L_1266644c;
  /* 126663b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126663b5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126663b8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 126663bb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 126663be cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126663c5 jle 0x126663e3 */
  if ((C.zf||C.sf!=C.of)) goto L_126663e3;
  /* 126663c7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 126663cc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126663cf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126663d5 push ecx */
  push32((uint32_t)(ECX));
  /* 126663d6 call 0x1266a680 */
  push32(0x126663dbu); f_1266a680();
  /* 126663db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126663de mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 126663e1 jmp 0x12666400 */
  goto L_12666400;
L_126663e3:;
  /* 126663e3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126663e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 126663ec mov eax, dword ptr [0x1268ec98] */
  EAX = (r32((uint32_t)(0x1268ec98)));
  /* 126663f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126663f3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 126663f7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 126663fd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12666400:;
  /* 12666400 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666404 je 0x12666414 */
  if (C.zf) goto L_12666414;
  /* 12666406 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12666409 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1266640f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12666412 jmp 0x1266641b */
  goto L_1266641b;
L_12666414:;
  /* 12666414 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1266641b:;
  /* 1266641b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1266641e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12666421 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12666425 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12666428 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1266642e push edx */
  push32((uint32_t)(EDX));
  /* 1266642f push 0x1268bcc4 */
  push32((uint32_t)(0x1268bcc4u));
  /* 12666434 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12666437 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266643a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1266643e push ecx */
  push32((uint32_t)(ECX));
  /* 1266643f call 0x1266a580 */
  push32(0x12666444u); f_1266a580();
  /* 12666444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666447 jmp 0x12666382 */
  goto L_12666382;
L_1266644c:;
  /* 1266644c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1266644f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12666454:;
  /* 12666454 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12666457 push eax */
  push32((uint32_t)(EAX));
  /* 12666458 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1266645b push ecx */
  push32((uint32_t)(ECX));
  /* 1266645c push 0x1268bcb4 */
  push32((uint32_t)(0x1268bcb4u));
  /* 12666461 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666463 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666465 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666467 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666469 call 0x12663730 */
  push32(0x1266646eu); f_12663730();
  /* 1266646e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666474 jne 0x12666477 */
  if (!C.zf) goto L_12666477;
  /* 12666476 int3  */
  x86_unimpl("int3 @ 0x12666476");
L_12666477:;
  /* 12666477 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666479 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266647b jne 0x12666454 */
  if (!C.zf) goto L_12666454;
  /* 1266647d pop edi */
  EDI = (pop32());
  /* 1266647e pop esi */
  ESI = (pop32());
  /* 1266647f pop ebx */
  EBX = (pop32());
  /* 12666480 mov esp, ebp */
  ESP = (EBP);
  /* 12666482 pop ebp */
  EBP = (pop32());
  /* 12666483 ret  */
  ESPCHK(0x12666370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006490 @ 0x12666490 (116 bytes, 46 insns) */
void f_12666490(void) {
  FTRACE(0x12666490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666490 push ebp */
  push32((uint32_t)(EBP));
  /* 12666491 mov ebp, esp */
  EBP = (ESP);
  /* 12666493 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666496 push ebx */
  push32((uint32_t)(EBX));
  /* 12666497 push esi */
  push32((uint32_t)(ESI));
  /* 12666498 push edi */
  push32((uint32_t)(EDI));
  /* 12666499 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1266649c push eax */
  push32((uint32_t)(EAX));
  /* 1266649d call 0x12665e10 */
  push32(0x126664a2u); f_12665e10();
  /* 126664a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126664a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126664a9 jne 0x126664c4 */
  if (!C.zf) goto L_126664c4;
  /* 126664ab cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126664af jne 0x126664c4 */
  if (!C.zf) goto L_126664c4;
  /* 126664b1 mov ecx, dword ptr [0x1268ea84] */
  ECX = (r32((uint32_t)(0x1268ea84)));
  /* 126664b7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 126664ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126664bc je 0x126664fb */
  if (C.zf) goto L_126664fb;
  /* 126664be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126664c2 je 0x126664fb */
  if (C.zf) goto L_126664fb;
L_126664c4:;
  /* 126664c4 push 0x1268bccc */
  push32((uint32_t)(0x1268bcccu));
  /* 126664c9 push 0x1268b698 */
  push32((uint32_t)(0x1268b698u));
  /* 126664ce push 0 */
  push32((uint32_t)(0x0u));
  /* 126664d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126664d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126664d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126664d6 call 0x12663730 */
  push32(0x126664dbu); f_12663730();
  /* 126664db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126664de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126664e1 jne 0x126664e4 */
  if (!C.zf) goto L_126664e4;
  /* 126664e3 int3  */
  x86_unimpl("int3 @ 0x126664e3");
L_126664e4:;
  /* 126664e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126664e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126664e8 jne 0x126664c4 */
  if (!C.zf) goto L_126664c4;
  /* 126664ea push 0 */
  push32((uint32_t)(0x0u));
  /* 126664ec call 0x126660b0 */
  push32(0x126664f1u); f_126660b0();
  /* 126664f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126664f4 mov eax, 1 */
  EAX = (0x1u);
  /* 126664f9 jmp 0x126664fd */
  goto L_126664fd;
L_126664fb:;
  /* 126664fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126664fd:;
  /* 126664fd pop edi */
  EDI = (pop32());
  /* 126664fe pop esi */
  ESI = (pop32());
  /* 126664ff pop ebx */
  EBX = (pop32());
  /* 12666500 mov esp, ebp */
  ESP = (EBP);
  /* 12666502 pop ebp */
  EBP = (pop32());
  /* 12666503 ret  */
  ESPCHK(0x12666490u, _esp0);
  ESP += 4; return;
}

/* FUN_10006510 @ 0x12666510 (197 bytes, 79 insns) */
void f_12666510(void) {
  FTRACE(0x12666510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666510 push ebp */
  push32((uint32_t)(EBP));
  /* 12666511 mov ebp, esp */
  EBP = (ESP);
  /* 12666513 push ecx */
  push32((uint32_t)(ECX));
  /* 12666514 push ebx */
  push32((uint32_t)(EBX));
  /* 12666515 push esi */
  push32((uint32_t)(ESI));
  /* 12666516 push edi */
  push32((uint32_t)(EDI));
  /* 12666517 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266651b jne 0x12666522 */
  if (!C.zf) goto L_12666522;
  /* 1266651d jmp 0x126665ce */
  goto L_126665ce;
L_12666522:;
  /* 12666522 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12666529 jmp 0x12666534 */
  goto L_12666534;
L_1266652b:;
  /* 1266652b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266652e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666531 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12666534:;
  /* 12666534 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666538 jge 0x1266657e */
  if ((C.sf==C.of)) goto L_1266657e;
L_1266653a:;
  /* 1266653a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266653d mov edx, dword ptr [ecx*4 + 0x1268ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268ea94)));
  /* 12666544 push edx */
  push32((uint32_t)(EDX));
  /* 12666545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266654b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1266654f push edx */
  push32((uint32_t)(EDX));
  /* 12666550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666556 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1266655a push edx */
  push32((uint32_t)(EDX));
  /* 1266655b push 0x1268bd28 */
  push32((uint32_t)(0x1268bd28u));
  /* 12666560 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666562 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666564 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666566 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666568 call 0x12663730 */
  push32(0x1266656du); f_12663730();
  /* 1266656d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666570 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666573 jne 0x12666576 */
  if (!C.zf) goto L_12666576;
  /* 12666575 int3  */
  x86_unimpl("int3 @ 0x12666575");
L_12666576:;
  /* 12666576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266657a jne 0x1266653a */
  if (!C.zf) goto L_1266653a;
  /* 1266657c jmp 0x1266652b */
  goto L_1266652b;
L_1266657e:;
  /* 1266657e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666581 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12666584 push edx */
  push32((uint32_t)(EDX));
  /* 12666585 push 0x1268bd04 */
  push32((uint32_t)(0x1268bd04u));
  /* 1266658a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266658c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266658e push 0 */
  push32((uint32_t)(0x0u));
  /* 12666590 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666592 call 0x12663730 */
  push32(0x12666597u); f_12663730();
  /* 12666597 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266659a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266659d jne 0x126665a0 */
  if (!C.zf) goto L_126665a0;
  /* 1266659f int3  */
  x86_unimpl("int3 @ 0x1266659f");
L_126665a0:;
  /* 126665a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126665a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126665a4 jne 0x1266657e */
  if (!C.zf) goto L_1266657e;
L_126665a6:;
  /* 126665a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126665a9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 126665ac push edx */
  push32((uint32_t)(EDX));
  /* 126665ad push 0x1268bce4 */
  push32((uint32_t)(0x1268bce4u));
  /* 126665b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126665b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126665b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126665b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126665ba call 0x12663730 */
  push32(0x126665bfu); f_12663730();
  /* 126665bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126665c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126665c5 jne 0x126665c8 */
  if (!C.zf) goto L_126665c8;
  /* 126665c7 int3  */
  x86_unimpl("int3 @ 0x126665c7");
L_126665c8:;
  /* 126665c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126665ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126665cc jne 0x126665a6 */
  if (!C.zf) goto L_126665a6;
L_126665ce:;
  /* 126665ce pop edi */
  EDI = (pop32());
  /* 126665cf pop esi */
  ESI = (pop32());
  /* 126665d0 pop ebx */
  EBX = (pop32());
  /* 126665d1 mov esp, ebp */
  ESP = (EBP);
  /* 126665d3 pop ebp */
  EBP = (pop32());
  /* 126665d4 ret  */
  ESPCHK(0x12666510u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x126665e0 (329 bytes, 102 insns) */
void f_126665e0(void) {
  FTRACE(0x126665e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126665e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126665e1 mov ebp, esp */
  EBP = (ESP);
  /* 126665e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126665e6 cmp dword ptr [0x126920d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126665ed jne 0x126665f4 */
  if (!C.zf) goto L_126665f4;
  /* 126665ef call 0x1266af20 */
  push32(0x126665f4u); f_1266af20();
L_126665f4:;
  /* 126665f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 126665fb mov eax, dword ptr [0x12690590] */
  EAX = (r32((uint32_t)(0x12690590)));
  /* 12666600 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12666603:;
  /* 12666603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666606 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12666609 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266660b je 0x12666639 */
  if (C.zf) goto L_12666639;
  /* 1266660d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666610 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666613 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666616 je 0x12666621 */
  if (C.zf) goto L_12666621;
  /* 12666618 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266661b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266661e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12666621:;
  /* 12666621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666624 push eax */
  push32((uint32_t)(EAX));
  /* 12666625 call 0x126674a0 */
  push32(0x1266662au); f_126674a0();
  /* 1266662a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266662d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666630 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12666634 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12666637 jmp 0x12666603 */
  goto L_12666603;
L_12666639:;
  /* 12666639 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1266663b push 0x1268bd48 */
  push32((uint32_t)(0x1268bd48u));
  /* 12666640 push 2 */
  push32((uint32_t)(0x2u));
  /* 12666642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666645 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1266664c push ecx */
  push32((uint32_t)(ECX));
  /* 1266664d call 0x12664670 */
  push32(0x12666652u); f_12664670();
  /* 12666652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666655 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12666658 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266665b mov dword ptr [0x126905c4], edx */
  w32((uint32_t)(0x126905c4), (EDX));
  /* 12666661 cmp dword ptr [0x126905c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126905c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666668 jne 0x12666674 */
  if (!C.zf) goto L_12666674;
  /* 1266666a push 9 */
  push32((uint32_t)(0x9u));
  /* 1266666c call 0x126635e0 */
  push32(0x12666671u); f_126635e0();
  /* 12666671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12666674:;
  /* 12666674 mov eax, dword ptr [0x12690590] */
  EAX = (r32((uint32_t)(0x12690590)));
  /* 12666679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266667c jmp 0x12666687 */
  goto L_12666687;
L_1266667e:;
  /* 1266667e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666681 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666684 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12666687:;
  /* 12666687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266668a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266668d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266668f je 0x126666f7 */
  if (C.zf) goto L_126666f7;
  /* 12666691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666694 push ecx */
  push32((uint32_t)(ECX));
  /* 12666695 call 0x126674a0 */
  push32(0x1266669au); f_126674a0();
  /* 1266669a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266669d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126666a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126666a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126666a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126666a9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126666ac je 0x126666f5 */
  if (C.zf) goto L_126666f5;
  /* 126666ae push 0x79 */
  push32((uint32_t)(0x79u));
  /* 126666b0 push 0x1268bd48 */
  push32((uint32_t)(0x1268bd48u));
  /* 126666b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 126666b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126666ba push ecx */
  push32((uint32_t)(ECX));
  /* 126666bb call 0x12664670 */
  push32(0x126666c0u); f_12664670();
  /* 126666c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126666c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126666c6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126666c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126666cb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126666ce jne 0x126666da */
  if (!C.zf) goto L_126666da;
  /* 126666d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 126666d2 call 0x126635e0 */
  push32(0x126666d7u); f_126635e0();
  /* 126666d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126666da:;
  /* 126666da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126666dd push ecx */
  push32((uint32_t)(ECX));
  /* 126666de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126666e1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126666e3 push eax */
  push32((uint32_t)(EAX));
  /* 126666e4 call 0x12667620 */
  push32(0x126666e9u); f_12667620();
  /* 126666e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126666ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126666ef add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126666f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_126666f5:;
  /* 126666f5 jmp 0x1266667e */
  goto L_1266667e;
L_126666f7:;
  /* 126666f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 126666f9 mov edx, dword ptr [0x12690590] */
  EDX = (r32((uint32_t)(0x12690590)));
  /* 126666ff push edx */
  push32((uint32_t)(EDX));
  /* 12666700 call 0x12665100 */
  push32(0x12666705u); f_12665100();
  /* 12666705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666708 mov dword ptr [0x12690590], 0 */
  w32((uint32_t)(0x12690590), (0x0u));
  /* 12666712 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666715 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266671b mov dword ptr [0x126920c0], 1 */
  w32((uint32_t)(0x126920c0), (0x1u));
  /* 12666725 mov esp, ebp */
  ESP = (EBP);
  /* 12666727 pop ebp */
  EBP = (pop32());
  /* 12666728 ret  */
  ESPCHK(0x126665e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x12666730 (216 bytes, 69 insns) */
void f_12666730(void) {
  FTRACE(0x12666730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666730 push ebp */
  push32((uint32_t)(EBP));
  /* 12666731 mov ebp, esp */
  EBP = (ESP);
  /* 12666733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666736 cmp dword ptr [0x126920d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266673d jne 0x12666744 */
  if (!C.zf) goto L_12666744;
  /* 1266673f call 0x1266af20 */
  push32(0x12666744u); f_1266af20();
L_12666744:;
  /* 12666744 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12666749 push 0x12690600 */
  push32((uint32_t)(0x12690600u));
  /* 1266674e push 0 */
  push32((uint32_t)(0x0u));
  /* 12666750 call dword ptr [0x12693348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693348))), 0x12666756u);
  /* 12666756 mov dword ptr [0x126905d4], 0x12690600 */
  w32((uint32_t)(0x126905d4), (0x12690600u));
  /* 12666760 mov eax, dword ptr [0x126920ec] */
  EAX = (r32((uint32_t)(0x126920ec)));
  /* 12666765 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666768 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266676a jne 0x12666777 */
  if (!C.zf) goto L_12666777;
  /* 1266676c mov edx, dword ptr [0x126905d4] */
  EDX = (r32((uint32_t)(0x126905d4)));
  /* 12666772 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12666775 jmp 0x1266677f */
  goto L_1266677f;
L_12666777:;
  /* 12666777 mov eax, dword ptr [0x126920ec] */
  EAX = (r32((uint32_t)(0x126920ec)));
  /* 1266677c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1266677f:;
  /* 1266677f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666782 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12666785 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12666788 push edx */
  push32((uint32_t)(EDX));
  /* 12666789 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1266678c push eax */
  push32((uint32_t)(EAX));
  /* 1266678d push 0 */
  push32((uint32_t)(0x0u));
  /* 1266678f push 0 */
  push32((uint32_t)(0x0u));
  /* 12666791 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666794 push ecx */
  push32((uint32_t)(ECX));
  /* 12666795 call 0x12666810 */
  push32(0x1266679au); f_12666810();
  /* 1266679a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266679d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 126667a2 push 0x1268bd54 */
  push32((uint32_t)(0x1268bd54u));
  /* 126667a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 126667a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126667ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126667af lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 126667b2 push ecx */
  push32((uint32_t)(ECX));
  /* 126667b3 call 0x12664670 */
  push32(0x126667b8u); f_12664670();
  /* 126667b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126667bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126667be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126667c2 jne 0x126667ce */
  if (!C.zf) goto L_126667ce;
  /* 126667c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 126667c6 call 0x126635e0 */
  push32(0x126667cbu); f_126635e0();
  /* 126667cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126667ce:;
  /* 126667ce lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 126667d1 push edx */
  push32((uint32_t)(EDX));
  /* 126667d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 126667d5 push eax */
  push32((uint32_t)(EAX));
  /* 126667d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126667d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126667dc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 126667df push eax */
  push32((uint32_t)(EAX));
  /* 126667e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126667e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126667e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126667e7 push edx */
  push32((uint32_t)(EDX));
  /* 126667e8 call 0x12666810 */
  push32(0x126667edu); f_12666810();
  /* 126667ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126667f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126667f3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126667f6 mov dword ptr [0x126905b8], eax */
  w32((uint32_t)(0x126905b8), (EAX));
  /* 126667fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126667fe mov dword ptr [0x126905bc], ecx */
  w32((uint32_t)(0x126905bc), (ECX));
  /* 12666804 mov esp, ebp */
  ESP = (EBP);
  /* 12666806 pop ebp */
  EBP = (pop32());
  /* 12666807 ret  */
  ESPCHK(0x12666730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006810 @ 0x12666810 (1060 bytes, 360 insns) */
void f_12666810(void) {
  FTRACE(0x12666810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666810 push ebp */
  push32((uint32_t)(EBP));
  /* 12666811 mov ebp, esp */
  EBP = (ESP);
  /* 12666813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666816 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666819 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266681f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12666822 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12666828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266682b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266682e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666832 je 0x12666845 */
  if (C.zf) goto L_12666845;
  /* 12666834 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666837 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266683a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1266683c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266683f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666842 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12666845:;
  /* 12666845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666848 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266684b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266684e jne 0x1266691d */
  if (!C.zf) goto L_1266691d;
L_12666854:;
  /* 12666854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266685a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266685d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666860 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666863 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666866 je 0x126668e2 */
  if (C.zf) goto L_126668e2;
  /* 12666868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266686b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266686e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666870 je 0x126668e2 */
  if (C.zf) goto L_126668e2;
  /* 12666872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666875 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666877 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12666879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266687b mov al, byte ptr [edx + 0x12691e21] */
  AL = (r8((uint32_t)(EDX + 0x12691e21)));
  /* 12666881 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12666884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666886 je 0x126668b7 */
  if (C.zf) goto L_126668b7;
  /* 12666888 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266688b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266688d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666890 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666893 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12666895 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666899 je 0x126668b7 */
  if (C.zf) goto L_126668b7;
  /* 1266689b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266689e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126668a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126668a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 126668a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126668a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126668ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 126668ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126668b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126668b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_126668b7:;
  /* 126668b7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126668ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126668bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126668bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126668c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126668c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126668c8 je 0x126668dd */
  if (C.zf) goto L_126668dd;
  /* 126668ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126668cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126668d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126668d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126668d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126668d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126668da mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_126668dd:;
  /* 126668dd jmp 0x12666854 */
  goto L_12666854;
L_126668e2:;
  /* 126668e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 126668e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126668e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126668ea mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126668ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126668ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126668f3 je 0x12666904 */
  if (C.zf) goto L_12666904;
  /* 126668f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126668f8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 126668fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126668fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666901 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12666904:;
  /* 12666904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666907 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266690a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266690d jne 0x12666918 */
  if (!C.zf) goto L_12666918;
  /* 1266690f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666912 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666915 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12666918:;
  /* 12666918 jmp 0x126669ec */
  goto L_126669ec;
L_1266691d:;
  /* 1266691d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666920 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12666922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666925 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666928 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1266692a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266692e je 0x12666943 */
  if (C.zf) goto L_12666943;
  /* 12666930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666936 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12666938 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1266693a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266693d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666940 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12666943:;
  /* 12666943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666946 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12666948 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1266694b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266694e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12666954 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666957 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266695d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266695f mov dl, byte ptr [ecx + 0x12691e21] */
  DL = (r8((uint32_t)(ECX + 0x12691e21)));
  /* 12666965 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12666968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266696a je 0x1266699b */
  if (C.zf) goto L_1266699b;
  /* 1266696c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266696f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12666971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666974 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666977 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12666979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266697d je 0x12666992 */
  if (C.zf) goto L_12666992;
  /* 1266697f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666985 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12666987 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12666989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266698c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266698f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12666992:;
  /* 12666992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666998 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266699b:;
  /* 1266699b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266699e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 126669a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126669a7 je 0x126669c7 */
  if (C.zf) goto L_126669c7;
  /* 126669a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126669ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 126669b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126669b3 je 0x126669c7 */
  if (C.zf) goto L_126669c7;
  /* 126669b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126669b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126669be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126669c1 jne 0x1266691d */
  if (!C.zf) goto L_1266691d;
L_126669c7:;
  /* 126669c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126669ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 126669d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126669d2 jne 0x126669df */
  if (!C.zf) goto L_126669df;
  /* 126669d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126669d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126669da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126669dd jmp 0x126669ec */
  goto L_126669ec;
L_126669df:;
  /* 126669df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126669e3 je 0x126669ec */
  if (C.zf) goto L_126669ec;
  /* 126669e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126669e8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_126669ec:;
  /* 126669ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_126669f3:;
  /* 126669f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126669f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126669f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126669fb je 0x12666a1e */
  if (C.zf) goto L_12666a1e;
L_126669fd:;
  /* 126669fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12666a03 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a06 je 0x12666a13 */
  if (C.zf) goto L_12666a13;
  /* 12666a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666a0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a11 jne 0x12666a1e */
  if (!C.zf) goto L_12666a1e;
L_12666a13:;
  /* 12666a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666a19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12666a1c jmp 0x126669fd */
  goto L_126669fd;
L_12666a1e:;
  /* 12666a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666a24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666a26 jne 0x12666a2d */
  if (!C.zf) goto L_12666a2d;
  /* 12666a28 jmp 0x12666c0b */
  goto L_12666c0b;
L_12666a2d:;
  /* 12666a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a31 je 0x12666a44 */
  if (C.zf) goto L_12666a44;
  /* 12666a33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666a36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666a39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12666a3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666a3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666a41 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12666a44:;
  /* 12666a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12666a47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12666a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666a4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12666a4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12666a51:;
  /* 12666a51 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12666a58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12666a5f:;
  /* 12666a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a62 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12666a65 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a68 jne 0x12666a7e */
  if (!C.zf) goto L_12666a7e;
  /* 12666a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666a70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12666a73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666a76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666a79 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12666a7c jmp 0x12666a5f */
  goto L_12666a5f;
L_12666a7e:;
  /* 12666a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666a81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666a84 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a87 jne 0x12666ada */
  if (!C.zf) goto L_12666ada;
  /* 12666a89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666a8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666a8e mov ecx, 2 */
  ECX = (0x2u);
  /* 12666a93 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12666a95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666a97 jne 0x12666ad2 */
  if (!C.zf) goto L_12666ad2;
  /* 12666a99 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666a9d je 0x12666abf */
  if (C.zf) goto L_12666abf;
  /* 12666a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666aa2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12666aa6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666aa9 jne 0x12666ab6 */
  if (!C.zf) goto L_12666ab6;
  /* 12666aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666ab1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12666ab4 jmp 0x12666abd */
  goto L_12666abd;
L_12666ab6:;
  /* 12666ab6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12666abd:;
  /* 12666abd jmp 0x12666ac6 */
  goto L_12666ac6;
L_12666abf:;
  /* 12666abf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12666ac6:;
  /* 12666ac6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666ac8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666acc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12666acf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12666ad2:;
  /* 12666ad2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666ad5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12666ad7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12666ada:;
  /* 12666ada mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666add mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666ae0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666ae3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12666ae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666ae8 je 0x12666b0e */
  if (C.zf) goto L_12666b0e;
  /* 12666aea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666aee je 0x12666aff */
  if (C.zf) goto L_12666aff;
  /* 12666af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666af3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12666af6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666af9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666afc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12666aff:;
  /* 12666aff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666b02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12666b04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666b07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666b0a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12666b0c jmp 0x12666ada */
  goto L_12666ada;
L_12666b0e:;
  /* 12666b0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12666b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666b16 je 0x12666b34 */
  if (C.zf) goto L_12666b34;
  /* 12666b18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666b1c jne 0x12666b39 */
  if (!C.zf) goto L_12666b39;
  /* 12666b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12666b24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666b27 je 0x12666b34 */
  if (C.zf) goto L_12666b34;
  /* 12666b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12666b2f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666b32 jne 0x12666b39 */
  if (!C.zf) goto L_12666b39;
L_12666b34:;
  /* 12666b34 jmp 0x12666be4 */
  goto L_12666be4;
L_12666b39:;
  /* 12666b39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666b3d je 0x12666bd6 */
  if (C.zf) goto L_12666bd6;
  /* 12666b43 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666b47 je 0x12666b9d */
  if (C.zf) goto L_12666b9d;
  /* 12666b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666b4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12666b50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12666b52 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 12666b58 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12666b5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666b5d je 0x12666b88 */
  if (C.zf) goto L_12666b88;
  /* 12666b5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666b62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b65 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12666b67 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12666b69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666b6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666b6f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12666b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12666b7b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666b7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12666b80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666b83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666b86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12666b88:;
  /* 12666b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666b8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12666b90 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12666b92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666b98 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12666b9b jmp 0x12666bc9 */
  goto L_12666bc9;
L_12666b9d:;
  /* 12666b9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666ba2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12666ba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12666ba6 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 12666bac and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12666baf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12666bb1 je 0x12666bc9 */
  if (C.zf) goto L_12666bc9;
  /* 12666bb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666bb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666bb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12666bbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666bbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12666bc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666bc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12666bc9:;
  /* 12666bc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666bcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12666bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666bd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12666bd6:;
  /* 12666bd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666bd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666bdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12666bdf jmp 0x12666a51 */
  goto L_12666a51;
L_12666be4:;
  /* 12666be4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666be8 je 0x12666bf9 */
  if (C.zf) goto L_12666bf9;
  /* 12666bea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666bed mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12666bf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12666bf3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666bf6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12666bf9:;
  /* 12666bf9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666bfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12666bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666c01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12666c04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12666c06 jmp 0x126669f3 */
  goto L_126669f3;
L_12666c0b:;
  /* 12666c0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666c0f je 0x12666c23 */
  if (C.zf) goto L_12666c23;
  /* 12666c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666c14 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12666c1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12666c1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666c20 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12666c23:;
  /* 12666c23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12666c26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12666c28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666c2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12666c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12666c30 mov esp, ebp */
  ESP = (EBP);
  /* 12666c32 pop ebp */
  EBP = (pop32());
  /* 12666c33 ret  */
  ESPCHK(0x12666810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x12666c40 (537 bytes, 173 insns) */
void f_12666c40(void) {
  FTRACE(0x12666c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12666c41 mov ebp, esp */
  EBP = (ESP);
  /* 12666c43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666c46 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12666c4d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12666c54 cmp dword ptr [0x12690704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666c5b jne 0x12666c9a */
  if (!C.zf) goto L_12666c9a;
  /* 12666c5d call dword ptr [0x126933a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a4))), 0x12666c63u);
  /* 12666c63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12666c66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666c6a je 0x12666c78 */
  if (C.zf) goto L_12666c78;
  /* 12666c6c mov dword ptr [0x12690704], 1 */
  w32((uint32_t)(0x12690704), (0x1u));
  /* 12666c76 jmp 0x12666c9a */
  goto L_12666c9a;
L_12666c78:;
  /* 12666c78 call dword ptr [0x126933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a0))), 0x12666c7eu);
  /* 12666c7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12666c81 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666c85 je 0x12666c93 */
  if (C.zf) goto L_12666c93;
  /* 12666c87 mov dword ptr [0x12690704], 2 */
  w32((uint32_t)(0x12690704), (0x2u));
  /* 12666c91 jmp 0x12666c9a */
  goto L_12666c9a;
L_12666c93:;
  /* 12666c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666c95 jmp 0x12666e55 */
  goto L_12666e55;
L_12666c9a:;
  /* 12666c9a cmp dword ptr [0x12690704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666ca1 jne 0x12666d9e */
  if (!C.zf) goto L_12666d9e;
  /* 12666ca7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666cab jne 0x12666cc3 */
  if (!C.zf) goto L_12666cc3;
  /* 12666cad call dword ptr [0x126933a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a4))), 0x12666cb3u);
  /* 12666cb3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12666cb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666cba jne 0x12666cc3 */
  if (!C.zf) goto L_12666cc3;
  /* 12666cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666cbe jmp 0x12666e55 */
  goto L_12666e55;
L_12666cc3:;
  /* 12666cc3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666cc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12666cc9:;
  /* 12666cc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666ccc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666cce mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12666cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666cd3 je 0x12666cf5 */
  if (C.zf) goto L_12666cf5;
  /* 12666cd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666cd8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666cdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12666cde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666ce1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12666ce3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12666ce6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666ce8 jne 0x12666cf3 */
  if (!C.zf) goto L_12666cf3;
  /* 12666cea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666ced add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666cf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12666cf3:;
  /* 12666cf3 jmp 0x12666cc9 */
  goto L_12666cc9;
L_12666cf5:;
  /* 12666cf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666cf8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666cfb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12666cfd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666d00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12666d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666d0e push edx */
  push32((uint32_t)(EDX));
  /* 12666d0f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666d12 push eax */
  push32((uint32_t)(EAX));
  /* 12666d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d17 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12666d1du);
  /* 12666d1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12666d20 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666d24 je 0x12666d44 */
  if (C.zf) goto L_12666d44;
  /* 12666d26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12666d28 push 0x1268bd60 */
  push32((uint32_t)(0x1268bd60u));
  /* 12666d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12666d2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666d32 push ecx */
  push32((uint32_t)(ECX));
  /* 12666d33 call 0x12664670 */
  push32(0x12666d38u); f_12664670();
  /* 12666d38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666d3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12666d3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666d42 jne 0x12666d55 */
  if (!C.zf) goto L_12666d55;
L_12666d44:;
  /* 12666d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666d47 push edx */
  push32((uint32_t)(EDX));
  /* 12666d48 call dword ptr [0x12693398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693398))), 0x12666d4eu);
  /* 12666d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666d50 jmp 0x12666e55 */
  goto L_12666e55;
L_12666d55:;
  /* 12666d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666d5c push eax */
  push32((uint32_t)(EAX));
  /* 12666d5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666d60 push ecx */
  push32((uint32_t)(ECX));
  /* 12666d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666d64 push edx */
  push32((uint32_t)(EDX));
  /* 12666d65 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666d68 push eax */
  push32((uint32_t)(EAX));
  /* 12666d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12666d6d call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x12666d73u);
  /* 12666d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666d75 jne 0x12666d8c */
  if (!C.zf) goto L_12666d8c;
  /* 12666d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12666d79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666d7c push ecx */
  push32((uint32_t)(ECX));
  /* 12666d7d call 0x12665100 */
  push32(0x12666d82u); f_12665100();
  /* 12666d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666d85 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12666d8c:;
  /* 12666d8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12666d8f push edx */
  push32((uint32_t)(EDX));
  /* 12666d90 call dword ptr [0x12693398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693398))), 0x12666d96u);
  /* 12666d96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666d99 jmp 0x12666e55 */
  goto L_12666e55;
L_12666d9e:;
  /* 12666d9e cmp dword ptr [0x12690704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12690704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666da5 jne 0x12666e53 */
  if (!C.zf) goto L_12666e53;
  /* 12666dab cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666daf jne 0x12666dc7 */
  if (!C.zf) goto L_12666dc7;
  /* 12666db1 call dword ptr [0x126933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a0))), 0x12666db7u);
  /* 12666db7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12666dba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666dbe jne 0x12666dc7 */
  if (!C.zf) goto L_12666dc7;
  /* 12666dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666dc2 jmp 0x12666e55 */
  goto L_12666e55;
L_12666dc7:;
  /* 12666dc7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666dca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12666dcd:;
  /* 12666dcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666dd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12666dd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666dd5 je 0x12666df5 */
  if (C.zf) goto L_12666df5;
  /* 12666dd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666dda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666ddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12666de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666de3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12666de6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12666de8 jne 0x12666df3 */
  if (!C.zf) goto L_12666df3;
  /* 12666dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666ded add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666df0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12666df3:;
  /* 12666df3 jmp 0x12666dcd */
  goto L_12666dcd;
L_12666df5:;
  /* 12666df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666df8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666dfb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666dfe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12666e01 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12666e06 push 0x1268bd60 */
  push32((uint32_t)(0x1268bd60u));
  /* 12666e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12666e0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666e10 push edx */
  push32((uint32_t)(EDX));
  /* 12666e11 call 0x12664670 */
  push32(0x12666e16u); f_12664670();
  /* 12666e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666e19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12666e1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666e20 jne 0x12666e30 */
  if (!C.zf) goto L_12666e30;
  /* 12666e22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666e25 push eax */
  push32((uint32_t)(EAX));
  /* 12666e26 call dword ptr [0x12693394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693394))), 0x12666e2cu);
  /* 12666e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666e2e jmp 0x12666e55 */
  goto L_12666e55;
L_12666e30:;
  /* 12666e30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12666e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12666e34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666e37 push edx */
  push32((uint32_t)(EDX));
  /* 12666e38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666e3b push eax */
  push32((uint32_t)(EAX));
  /* 12666e3c call 0x1266af50 */
  push32(0x12666e41u); f_1266af50();
  /* 12666e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666e44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12666e47 push ecx */
  push32((uint32_t)(ECX));
  /* 12666e48 call dword ptr [0x12693394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693394))), 0x12666e4eu);
  /* 12666e4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12666e51 jmp 0x12666e55 */
  goto L_12666e55;
L_12666e53:;
  /* 12666e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12666e55:;
  /* 12666e55 mov esp, ebp */
  ESP = (EBP);
  /* 12666e57 pop ebp */
  EBP = (pop32());
  /* 12666e58 ret  */
  ESPCHK(0x12666c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x12666e60 (77 bytes, 25 insns) */
void f_12666e60(void) {
  FTRACE(0x12666e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12666e61 mov ebp, esp */
  EBP = (ESP);
  /* 12666e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666e65 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12666e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666e6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666e70 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12666e73 push eax */
  push32((uint32_t)(EAX));
  /* 12666e74 call dword ptr [0x126933ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933ac))), 0x12666e7au);
  /* 12666e7a mov dword ptr [0x12691f4c], eax */
  w32((uint32_t)(0x12691f4c), (EAX));
  /* 12666e7f cmp dword ptr [0x12691f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666e86 jne 0x12666e8c */
  if (!C.zf) goto L_12666e8c;
  /* 12666e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666e8a jmp 0x12666eab */
  goto L_12666eab;
L_12666e8c:;
  /* 12666e8c call 0x12668910 */
  push32(0x12666e91u); f_12668910();
  /* 12666e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12666e93 jne 0x12666ea6 */
  if (!C.zf) goto L_12666ea6;
  /* 12666e95 mov ecx, dword ptr [0x12691f4c] */
  ECX = (r32((uint32_t)(0x12691f4c)));
  /* 12666e9b push ecx */
  push32((uint32_t)(ECX));
  /* 12666e9c call dword ptr [0x126933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a8))), 0x12666ea2u);
  /* 12666ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12666ea4 jmp 0x12666eab */
  goto L_12666eab;
L_12666ea6:;
  /* 12666ea6 mov eax, 1 */
  EAX = (0x1u);
L_12666eab:;
  /* 12666eab pop ebp */
  EBP = (pop32());
  /* 12666eac ret  */
  ESPCHK(0x12666e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x12666eb0 (156 bytes, 48 insns) */
void f_12666eb0(void) {
  FTRACE(0x12666eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12666eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12666eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666eb6 mov eax, dword ptr [0x12691f48] */
  EAX = (r32((uint32_t)(0x12691f48)));
  /* 12666ebb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12666ebe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12666ec5 jmp 0x12666ed0 */
  goto L_12666ed0;
L_12666ec7:;
  /* 12666ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666eca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666ecd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12666ed0:;
  /* 12666ed0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12666ed3 cmp edx, dword ptr [0x12691f44] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12691f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666ed9 jge 0x12666f26 */
  if ((C.sf==C.of)) goto L_12666f26;
  /* 12666edb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12666ee0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12666ee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666ee8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12666eeb push ecx */
  push32((uint32_t)(ECX));
  /* 12666eec call dword ptr [0x12693368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693368))), 0x12666ef2u);
  /* 12666ef2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12666ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12666ef9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666efc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12666eff push eax */
  push32((uint32_t)(EAX));
  /* 12666f00 call dword ptr [0x12693368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693368))), 0x12666f06u);
  /* 12666f06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666f09 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12666f0c push edx */
  push32((uint32_t)(EDX));
  /* 12666f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12666f0f mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 12666f14 push eax */
  push32((uint32_t)(EAX));
  /* 12666f15 call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x12666f1bu);
  /* 12666f1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666f1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666f21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12666f24 jmp 0x12666ec7 */
  goto L_12666ec7;
L_12666f26:;
  /* 12666f26 mov edx, dword ptr [0x12691f48] */
  EDX = (r32((uint32_t)(0x12691f48)));
  /* 12666f2c push edx */
  push32((uint32_t)(EDX));
  /* 12666f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12666f2f mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 12666f34 push eax */
  push32((uint32_t)(EAX));
  /* 12666f35 call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x12666f3bu);
  /* 12666f3b mov ecx, dword ptr [0x12691f4c] */
  ECX = (r32((uint32_t)(0x12691f4c)));
  /* 12666f41 push ecx */
  push32((uint32_t)(ECX));
  /* 12666f42 call dword ptr [0x126933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933a8))), 0x12666f48u);
  /* 12666f48 mov esp, ebp */
  ESP = (EBP);
  /* 12666f4a pop ebp */
  EBP = (pop32());
  /* 12666f4b ret  */
  ESPCHK(0x12666eb0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12666f50 (73 bytes, 19 insns) */
void f_12666f50(void) {
  FTRACE(0x12666f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12666f51 mov ebp, esp */
  EBP = (ESP);
  /* 12666f53 cmp dword ptr [0x12690598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666f5a je 0x12666f6e */
  if (C.zf) goto L_12666f6e;
  /* 12666f5c cmp dword ptr [0x12690598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666f63 jne 0x12666f97 */
  if (!C.zf) goto L_12666f97;
  /* 12666f65 cmp dword ptr [0x1269059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666f6c jne 0x12666f97 */
  if (!C.zf) goto L_12666f97;
L_12666f6e:;
  /* 12666f6e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12666f73 call 0x12666fa0 */
  push32(0x12666f78u); f_12666fa0();
  /* 12666f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12666f7b cmp dword ptr [0x12690708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666f82 je 0x12666f8a */
  if (C.zf) goto L_12666f8a;
  /* 12666f84 call dword ptr [0x12690708] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690708))), 0x12666f8au);
L_12666f8a:;
  /* 12666f8a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12666f8f call 0x12666fa0 */
  push32(0x12666f94u); f_12666fa0();
  /* 12666f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12666f97:;
  /* 12666f97 pop ebp */
  EBP = (pop32());
  /* 12666f98 ret  */
  ESPCHK(0x12666f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x12666fa0 (447 bytes, 131 insns) */
void f_12666fa0(void) {
  FTRACE(0x12666fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12666fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12666fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12666fa3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12666fa9 push ebx */
  push32((uint32_t)(EBX));
  /* 12666faa push esi */
  push32((uint32_t)(ESI));
  /* 12666fab push edi */
  push32((uint32_t)(EDI));
  /* 12666fac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12666fb3 jmp 0x12666fbe */
  goto L_12666fbe;
L_12666fb5:;
  /* 12666fb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666fb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12666fbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12666fbe:;
  /* 12666fbe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666fc2 jae 0x12666fd7 */
  if (!C.cf) goto L_12666fd7;
  /* 12666fc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666fca cmp edx, dword ptr [ecx*8 + 0x1268eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1268eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666fd1 jne 0x12666fd5 */
  if (!C.zf) goto L_12666fd5;
  /* 12666fd3 jmp 0x12666fd7 */
  goto L_12666fd7;
L_12666fd5:;
  /* 12666fd5 jmp 0x12666fb5 */
  goto L_12666fb5;
L_12666fd7:;
  /* 12666fd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666fda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12666fdd cmp ecx, dword ptr [eax*8 + 0x1268eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1268eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666fe4 jne 0x12667158 */
  if (!C.zf) goto L_12667158;
  /* 12666fea cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12666ff1 je 0x12667014 */
  if (C.zf) goto L_12667014;
  /* 12666ff3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12666ff6 mov eax, dword ptr [edx*8 + 0x1268eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1268eab4)));
  /* 12666ffd push eax */
  push32((uint32_t)(EAX));
  /* 12666ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 12667000 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667002 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667004 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667006 call 0x12663730 */
  push32(0x1266700bu); f_12663730();
  /* 1266700b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266700e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667011 jne 0x12667014 */
  if (!C.zf) goto L_12667014;
  /* 12667013 int3  */
  x86_unimpl("int3 @ 0x12667013");
L_12667014:;
  /* 12667014 cmp dword ptr [0x12690598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266701b je 0x1266702f */
  if (C.zf) goto L_1266702f;
  /* 1266701d cmp dword ptr [0x12690598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667024 jne 0x12667068 */
  if (!C.zf) goto L_12667068;
  /* 12667026 cmp dword ptr [0x1269059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266702d jne 0x12667068 */
  if (!C.zf) goto L_12667068;
L_1266702f:;
  /* 1266702f push 0 */
  push32((uint32_t)(0x0u));
  /* 12667031 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12667034 push ecx */
  push32((uint32_t)(ECX));
  /* 12667035 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667038 mov eax, dword ptr [edx*8 + 0x1268eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1268eab4)));
  /* 1266703f push eax */
  push32((uint32_t)(EAX));
  /* 12667040 call 0x126674a0 */
  push32(0x12667045u); f_126674a0();
  /* 12667045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667048 push eax */
  push32((uint32_t)(EAX));
  /* 12667049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266704c mov edx, dword ptr [ecx*8 + 0x1268eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1268eab4)));
  /* 12667053 push edx */
  push32((uint32_t)(EDX));
  /* 12667054 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12667056 call dword ptr [0x1269332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269332c))), 0x1266705cu);
  /* 1266705c push eax */
  push32((uint32_t)(EAX));
  /* 1266705d call dword ptr [0x12693330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693330))), 0x12667063u);
  /* 12667063 jmp 0x12667158 */
  goto L_12667158;
L_12667068:;
  /* 12667068 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266706f je 0x12667158 */
  if (C.zf) goto L_12667158;
  /* 12667075 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1266707a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12667080 push eax */
  push32((uint32_t)(EAX));
  /* 12667081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667083 call dword ptr [0x12693348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693348))), 0x12667089u);
  /* 12667089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266708b jne 0x126670a1 */
  if (!C.zf) goto L_126670a1;
  /* 1266708d push 0x1268b5c8 */
  push32((uint32_t)(0x1268b5c8u));
  /* 12667092 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12667098 push ecx */
  push32((uint32_t)(ECX));
  /* 12667099 call 0x12667620 */
  push32(0x1266709eu); f_12667620();
  /* 1266709e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126670a1:;
  /* 126670a1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 126670a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 126670aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126670ad push eax */
  push32((uint32_t)(EAX));
  /* 126670ae call 0x126674a0 */
  push32(0x126670b3u); f_126674a0();
  /* 126670b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126670b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126670b9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126670bc jbe 0x126670ea */
  if ((C.cf||C.zf)) goto L_126670ea;
  /* 126670be lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 126670c4 push ecx */
  push32((uint32_t)(ECX));
  /* 126670c5 call 0x126674a0 */
  push32(0x126670cau); f_126674a0();
  /* 126670ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126670cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126670d0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 126670d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126670d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 126670d9 push 0x1268b5c4 */
  push32((uint32_t)(0x1268b5c4u));
  /* 126670de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126670e1 push ecx */
  push32((uint32_t)(ECX));
  /* 126670e2 call 0x12667e90 */
  push32(0x126670e7u); f_12667e90();
  /* 126670e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126670ea:;
  /* 126670ea push 0x1268c01c */
  push32((uint32_t)(0x1268c01cu));
  /* 126670ef lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 126670f5 push edx */
  push32((uint32_t)(EDX));
  /* 126670f6 call 0x12667620 */
  push32(0x126670fbu); f_12667620();
  /* 126670fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126670fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667101 push eax */
  push32((uint32_t)(EAX));
  /* 12667102 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12667108 push ecx */
  push32((uint32_t)(ECX));
  /* 12667109 call 0x12667630 */
  push32(0x1266710eu); f_12667630();
  /* 1266710e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667111 push 0x1268b53c */
  push32((uint32_t)(0x1268b53cu));
  /* 12667116 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1266711c push edx */
  push32((uint32_t)(EDX));
  /* 1266711d call 0x12667630 */
  push32(0x12667122u); f_12667630();
  /* 12667122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667128 mov ecx, dword ptr [eax*8 + 0x1268eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1268eab4)));
  /* 1266712f push ecx */
  push32((uint32_t)(ECX));
  /* 12667130 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12667136 push edx */
  push32((uint32_t)(EDX));
  /* 12667137 call 0x12667630 */
  push32(0x1266713cu); f_12667630();
  /* 1266713c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266713f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12667144 push 0x1268bff4 */
  push32((uint32_t)(0x1268bff4u));
  /* 12667149 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1266714f push eax */
  push32((uint32_t)(EAX));
  /* 12667150 call 0x12667dd0 */
  push32(0x12667155u); f_12667dd0();
  /* 12667155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667158:;
  /* 12667158 pop edi */
  EDI = (pop32());
  /* 12667159 pop esi */
  ESI = (pop32());
  /* 1266715a pop ebx */
  EBX = (pop32());
  /* 1266715b mov esp, ebp */
  ESP = (EBP);
  /* 1266715d pop ebp */
  EBP = (pop32());
  /* 1266715e ret  */
  ESPCHK(0x12666fa0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12667160 (80 bytes, 27 insns) */
void f_12667160(void) {
  FTRACE(0x12667160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667160 push ebp */
  push32((uint32_t)(EBP));
  /* 12667161 mov ebp, esp */
  EBP = (ESP);
  /* 12667163 push ecx */
  push32((uint32_t)(ECX));
  /* 12667164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266716b jmp 0x12667176 */
  goto L_12667176;
L_1266716d:;
  /* 1266716d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667170 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667173 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667176:;
  /* 12667176 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266717a jae 0x1266718f */
  if (!C.cf) goto L_1266718f;
  /* 1266717c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266717f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667182 cmp edx, dword ptr [ecx*8 + 0x1268eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1268eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667189 jne 0x1266718d */
  if (!C.zf) goto L_1266718d;
  /* 1266718b jmp 0x1266718f */
  goto L_1266718f;
L_1266718d:;
  /* 1266718d jmp 0x1266716d */
  goto L_1266716d;
L_1266718f:;
  /* 1266718f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667195 cmp ecx, dword ptr [eax*8 + 0x1268eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1268eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266719c jne 0x126671aa */
  if (!C.zf) goto L_126671aa;
  /* 1266719e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126671a1 mov eax, dword ptr [edx*8 + 0x1268eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1268eab4)));
  /* 126671a8 jmp 0x126671ac */
  goto L_126671ac;
L_126671aa:;
  /* 126671aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126671ac:;
  /* 126671ac mov esp, ebp */
  ESP = (EBP);
  /* 126671ae pop ebp */
  EBP = (pop32());
  /* 126671af ret  */
  ESPCHK(0x12667160u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x126671b0 (66 bytes, 28 insns) */
void f_126671b0(void) {
  FTRACE(0x126671b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126671b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126671b1 mov ebp, esp */
  EBP = (ESP);
  /* 126671b3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126671b7 jne 0x126671d7 */
  if (!C.zf) goto L_126671d7;
  /* 126671b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126671bd jge 0x126671d7 */
  if ((C.sf==C.of)) goto L_126671d7;
  /* 126671bf push 1 */
  push32((uint32_t)(0x1u));
  /* 126671c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126671c4 push eax */
  push32((uint32_t)(EAX));
  /* 126671c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126671c8 push ecx */
  push32((uint32_t)(ECX));
  /* 126671c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126671cc push edx */
  push32((uint32_t)(EDX));
  /* 126671cd call 0x12667200 */
  push32(0x126671d2u); f_12667200();
  /* 126671d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126671d5 jmp 0x126671ed */
  goto L_126671ed;
L_126671d7:;
  /* 126671d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126671d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126671dc push eax */
  push32((uint32_t)(EAX));
  /* 126671dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126671e0 push ecx */
  push32((uint32_t)(ECX));
  /* 126671e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126671e4 push edx */
  push32((uint32_t)(EDX));
  /* 126671e5 call 0x12667200 */
  push32(0x126671eau); f_12667200();
  /* 126671ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126671ed:;
  /* 126671ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126671f0 pop ebp */
  EBP = (pop32());
  /* 126671f1 ret  */
  ESPCHK(0x126671b0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12667200 (194 bytes, 71 insns) */
void f_12667200(void) {
  FTRACE(0x12667200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667200 push ebp */
  push32((uint32_t)(EBP));
  /* 12667201 mov ebp, esp */
  EBP = (ESP);
  /* 12667203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266720c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667210 je 0x12667229 */
  if (C.zf) goto L_12667229;
  /* 12667212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667215 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12667218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266721b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266721e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12667221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667224 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12667226 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12667229:;
  /* 12667229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266722c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1266722f:;
  /* 1266722f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12667234 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12667237 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1266723a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266723d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266723f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12667242 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12667245 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667249 jbe 0x12667261 */
  if ((C.cf||C.zf)) goto L_12667261;
  /* 1266724b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266724e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667254 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12667256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667259 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266725c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266725f jmp 0x12667275 */
  goto L_12667275;
L_12667261:;
  /* 12667261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667264 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266726a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1266726c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266726f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667272 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12667275:;
  /* 12667275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667279 ja 0x1266722f */
  if ((!C.cf&&!C.zf)) goto L_1266722f;
  /* 1266727b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266727e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12667281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667284 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266728a:;
  /* 1266728a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266728d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266728f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12667292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667295 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667298 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266729a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1266729c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266729f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 126672a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 126672a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126672a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126672aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126672ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126672b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126672b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126672b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126672b9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126672bc jb 0x1266728a */
  if (C.cf) goto L_1266728a;
  /* 126672be mov esp, ebp */
  ESP = (EBP);
  /* 126672c0 pop ebp */
  EBP = (pop32());
  /* 126672c1 ret  */
  ESPCHK(0x12667200u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x126672d0 (63 bytes, 24 insns) */
void f_126672d0(void) {
  FTRACE(0x126672d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126672d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126672d1 mov ebp, esp */
  EBP = (ESP);
  /* 126672d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126672d4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126672d8 jne 0x126672e9 */
  if (!C.zf) goto L_126672e9;
  /* 126672da cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126672de jge 0x126672e9 */
  if ((C.sf==C.of)) goto L_126672e9;
  /* 126672e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 126672e7 jmp 0x126672f0 */
  goto L_126672f0;
L_126672e9:;
  /* 126672e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_126672f0:;
  /* 126672f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126672f3 push eax */
  push32((uint32_t)(EAX));
  /* 126672f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126672f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126672f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126672fb push edx */
  push32((uint32_t)(EDX));
  /* 126672fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126672ff push eax */
  push32((uint32_t)(EAX));
  /* 12667300 call 0x12667200 */
  push32(0x12667305u); f_12667200();
  /* 12667305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266730b mov esp, ebp */
  ESP = (EBP);
  /* 1266730d pop ebp */
  EBP = (pop32());
  /* 1266730e ret  */
  ESPCHK(0x126672d0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12667310 (30 bytes, 14 insns) */
void f_12667310(void) {
  FTRACE(0x12667310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667310 push ebp */
  push32((uint32_t)(EBP));
  /* 12667311 mov ebp, esp */
  EBP = (ESP);
  /* 12667313 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667315 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12667318 push eax */
  push32((uint32_t)(EAX));
  /* 12667319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266731c push ecx */
  push32((uint32_t)(ECX));
  /* 1266731d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667320 push edx */
  push32((uint32_t)(EDX));
  /* 12667321 call 0x12667200 */
  push32(0x12667326u); f_12667200();
  /* 12667326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266732c pop ebp */
  EBP = (pop32());
  /* 1266732d ret  */
  ESPCHK(0x12667310u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12667330 (72 bytes, 28 insns) */
void f_12667330(void) {
  FTRACE(0x12667330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667330 push ebp */
  push32((uint32_t)(EBP));
  /* 12667331 mov ebp, esp */
  EBP = (ESP);
  /* 12667333 push ecx */
  push32((uint32_t)(ECX));
  /* 12667334 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667338 jne 0x12667351 */
  if (!C.zf) goto L_12667351;
  /* 1266733a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266733e jg 0x12667351 */
  if ((!C.zf&&C.sf==C.of)) goto L_12667351;
  /* 12667340 jl 0x12667348 */
  if ((C.sf!=C.of)) goto L_12667348;
  /* 12667342 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667346 jae 0x12667351 */
  if (!C.cf) goto L_12667351;
L_12667348:;
  /* 12667348 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266734f jmp 0x12667358 */
  goto L_12667358;
L_12667351:;
  /* 12667351 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12667358:;
  /* 12667358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266735b push eax */
  push32((uint32_t)(EAX));
  /* 1266735c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266735f push ecx */
  push32((uint32_t)(ECX));
  /* 12667360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12667363 push edx */
  push32((uint32_t)(EDX));
  /* 12667364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667367 push eax */
  push32((uint32_t)(EAX));
  /* 12667368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266736b push ecx */
  push32((uint32_t)(ECX));
  /* 1266736c call 0x12667380 */
  push32(0x12667371u); f_12667380();
  /* 12667371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12667374 mov esp, ebp */
  ESP = (EBP);
  /* 12667376 pop ebp */
  EBP = (pop32());
  /* 12667377 ret  */
  ESPCHK(0x12667330u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12667380 (242 bytes, 91 insns) */
void f_12667380(void) {
  FTRACE(0x12667380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667380 push ebp */
  push32((uint32_t)(EBP));
  /* 12667381 mov ebp, esp */
  EBP = (ESP);
  /* 12667383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12667389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266738c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667390 je 0x126673b4 */
  if (C.zf) goto L_126673b4;
  /* 12667392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667395 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12667398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266739b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266739e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126673a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126673a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 126673a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126673a9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126673ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 126673ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126673b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_126673b4:;
  /* 126673b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126673b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_126673ba:;
  /* 126673ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126673bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126673bf push ecx */
  push32((uint32_t)(ECX));
  /* 126673c0 push eax */
  push32((uint32_t)(EAX));
  /* 126673c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126673c4 push edx */
  push32((uint32_t)(EDX));
  /* 126673c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126673c8 push eax */
  push32((uint32_t)(EAX));
  /* 126673c9 call 0x1266b300 */
  push32(0x126673ceu); f_1266b300();
  /* 126673ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126673d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126673d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126673d6 push edx */
  push32((uint32_t)(EDX));
  /* 126673d7 push ecx */
  push32((uint32_t)(ECX));
  /* 126673d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126673db push eax */
  push32((uint32_t)(EAX));
  /* 126673dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126673df push ecx */
  push32((uint32_t)(ECX));
  /* 126673e0 call 0x1266b290 */
  push32(0x126673e5u); f_1266b290();
  /* 126673e5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126673e8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 126673eb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126673ef jbe 0x12667407 */
  if ((C.cf||C.zf)) goto L_12667407;
  /* 126673f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126673f4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126673f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126673fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126673fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126673ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667402 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12667405 jmp 0x1266741b */
  goto L_1266741b;
L_12667407:;
  /* 12667407 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266740a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266740d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667410 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12667412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667418 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266741b:;
  /* 1266741b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266741f ja 0x126673ba */
  if ((!C.cf&&!C.zf)) goto L_126673ba;
  /* 12667421 jb 0x12667429 */
  if (C.cf) goto L_12667429;
  /* 12667423 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667427 ja 0x126673ba */
  if ((!C.cf&&!C.zf)) goto L_126673ba;
L_12667429:;
  /* 12667429 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266742c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1266742f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667432 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667435 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667438:;
  /* 12667438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266743b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266743d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12667440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12667448 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1266744a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266744d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12667450 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12667452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667455 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667458 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266745b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266745e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667461 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12667464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667467 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266746a jb 0x12667438 */
  if (C.cf) goto L_12667438;
  /* 1266746c mov esp, ebp */
  ESP = (EBP);
  /* 1266746e pop ebp */
  EBP = (pop32());
  /* 1266746f ret 0x14 */
  ESPCHK(0x12667380u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12667480 (31 bytes, 15 insns) */
void f_12667480(void) {
  FTRACE(0x12667480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667480 push ebp */
  push32((uint32_t)(EBP));
  /* 12667481 mov ebp, esp */
  EBP = (ESP);
  /* 12667483 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667485 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12667488 push eax */
  push32((uint32_t)(EAX));
  /* 12667489 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266748c push ecx */
  push32((uint32_t)(ECX));
  /* 1266748d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667490 push edx */
  push32((uint32_t)(EDX));
  /* 12667491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667494 push eax */
  push32((uint32_t)(EAX));
  /* 12667495 call 0x12667380 */
  push32(0x1266749au); f_12667380();
  /* 1266749a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266749d pop ebp */
  EBP = (pop32());
  /* 1266749e ret  */
  ESPCHK(0x12667480u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x126674a0 (123 bytes, 44 insns) */
void f_126674a0(void) {
  FTRACE(0x126674a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126674a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 126674a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 126674aa je 0x126674c0 */
  if (C.zf) goto L_126674c0;
L_126674ac:;
  /* 126674ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 126674ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 126674af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 126674b1 je 0x126674f3 */
  if (C.zf) goto L_126674f3;
  /* 126674b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 126674b9 jne 0x126674ac */
  if (!C.zf) goto L_126674ac;
  /* 126674bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_126674c0:;
  /* 126674c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 126674c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 126674c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126674c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126674cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126674ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126674d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 126674d6 je 0x126674c0 */
  if (C.zf) goto L_126674c0;
  /* 126674d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 126674db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 126674dd je 0x12667511 */
  if (C.zf) goto L_12667511;
  /* 126674df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 126674e1 je 0x12667507 */
  if (C.zf) goto L_12667507;
  /* 126674e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 126674e8 je 0x126674fd */
  if (C.zf) goto L_126674fd;
  /* 126674ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 126674ef je 0x126674f3 */
  if (C.zf) goto L_126674f3;
  /* 126674f1 jmp 0x126674c0 */
  goto L_126674c0;
L_126674f3:;
  /* 126674f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 126674f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 126674fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126674fc ret  */
  ESPCHK(0x126674a0u, _esp0);
  ESP += 4; return;
L_126674fd:;
  /* 126674fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12667500 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12667504 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667506 ret  */
  ESPCHK(0x126674a0u, _esp0);
  ESP += 4; return;
L_12667507:;
  /* 12667507 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1266750a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1266750e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667510 ret  */
  ESPCHK(0x126674a0u, _esp0);
  ESP += 4; return;
L_12667511:;
  /* 12667511 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12667514 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12667518 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266751a ret  */
  ESPCHK(0x126674a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x12667520 (249 bytes, 93 insns) */
void f_12667520(void) {
  FTRACE(0x12667520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667520 push ebp */
  push32((uint32_t)(EBP));
  /* 12667521 mov ebp, esp */
  EBP = (ESP);
  /* 12667523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667526 push ebx */
  push32((uint32_t)(EBX));
  /* 12667527 push esi */
  push32((uint32_t)(ESI));
  /* 12667528 push edi */
  push32((uint32_t)(EDI));
  /* 12667529 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1266752c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1266752f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12667532 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12667535:;
  /* 12667535 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667539 jne 0x12667559 */
  if (!C.zf) goto L_12667559;
  /* 1266753b push 0x1268c054 */
  push32((uint32_t)(0x1268c054u));
  /* 12667540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667542 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12667544 push 0x1268c048 */
  push32((uint32_t)(0x1268c048u));
  /* 12667549 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266754b call 0x12663730 */
  push32(0x12667550u); f_12663730();
  /* 12667550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667553 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667556 jne 0x12667559 */
  if (!C.zf) goto L_12667559;
  /* 12667558 int3  */
  x86_unimpl("int3 @ 0x12667558");
L_12667559:;
  /* 12667559 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266755b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266755d jne 0x12667535 */
  if (!C.zf) goto L_12667535;
L_1266755f:;
  /* 1266755f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667563 jne 0x12667583 */
  if (!C.zf) goto L_12667583;
  /* 12667565 push 0x1268c038 */
  push32((uint32_t)(0x1268c038u));
  /* 1266756a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266756c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1266756e push 0x1268c048 */
  push32((uint32_t)(0x1268c048u));
  /* 12667573 push 2 */
  push32((uint32_t)(0x2u));
  /* 12667575 call 0x12663730 */
  push32(0x1266757au); f_12663730();
  /* 1266757a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266757d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667580 jne 0x12667583 */
  if (!C.zf) goto L_12667583;
  /* 12667582 int3  */
  x86_unimpl("int3 @ 0x12667582");
L_12667583:;
  /* 12667583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12667585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12667587 jne 0x1266755f */
  if (!C.zf) goto L_1266755f;
  /* 12667589 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266758c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12667593 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667599 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1266759c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266759f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126675a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 126675a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126675aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 126675ad mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126675b0 push edx */
  push32((uint32_t)(EDX));
  /* 126675b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126675b4 push eax */
  push32((uint32_t)(EAX));
  /* 126675b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675b8 push ecx */
  push32((uint32_t)(ECX));
  /* 126675b9 call 0x1266b600 */
  push32(0x126675beu); f_1266b600();
  /* 126675be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126675c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 126675c4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675c7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 126675ca sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126675cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 126675d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675d6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126675da jl 0x126675fe */
  if ((C.sf!=C.of)) goto L_126675fe;
  /* 126675dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126675e1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 126675e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126675e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 126675ec mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 126675ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675f2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126675f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126675f7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126675fa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126675fc jmp 0x1266760f */
  goto L_1266760f;
L_126675fe:;
  /* 126675fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667601 push eax */
  push32((uint32_t)(EAX));
  /* 12667602 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667604 call 0x1266b380 */
  push32(0x12667609u); f_1266b380();
  /* 12667609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266760c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1266760f:;
  /* 1266760f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12667612 pop edi */
  EDI = (pop32());
  /* 12667613 pop esi */
  ESI = (pop32());
  /* 12667614 pop ebx */
  EBX = (pop32());
  /* 12667615 mov esp, ebp */
  ESP = (EBP);
  /* 12667617 pop ebp */
  EBP = (pop32());
  /* 12667618 ret  */
  ESPCHK(0x12667520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007620 @ 0x12667620 (7 bytes, 3 insns) */
void f_12667620(void) {
  FTRACE(0x12667620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667620 push edi */
  push32((uint32_t)(EDI));
  /* 12667621 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12667625 jmp 0x12667691 */
  jmp_ind(0x12667691u); return;
}

/* FUN_10007630 @ 0x12667630 (224 bytes, 84 insns) */
void f_12667630(void) {
  FTRACE(0x12667630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667630 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12667634 push edi */
  push32((uint32_t)(EDI));
  /* 12667635 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1266763b je 0x1266764c */
  if (C.zf) goto L_1266764c;
L_1266763d:;
  /* 1266763d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1266763f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12667640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12667642 je 0x1266767f */
  if (C.zf) goto L_1266767f;
  /* 12667644 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1266764a jne 0x1266763d */
  if (!C.zf) goto L_1266763d;
L_1266764c:;
  /* 1266764c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1266764e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12667653 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667655 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12667658 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266765a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266765d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12667662 je 0x1266764c */
  if (C.zf) goto L_1266764c;
  /* 12667664 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12667667 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12667669 je 0x1266768e */
  if (C.zf) goto L_1266768e;
  /* 1266766b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1266766d je 0x12667689 */
  if (C.zf) goto L_12667689;
  /* 1266766f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12667674 je 0x12667684 */
  if (C.zf) goto L_12667684;
  /* 12667676 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1266767b je 0x1266767f */
  if (C.zf) goto L_1266767f;
  /* 1266767d jmp 0x1266764c */
  goto L_1266764c;
L_1266767f:;
  /* 1266767f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12667682 jmp 0x12667691 */
  goto L_12667691;
L_12667684:;
  /* 12667684 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12667687 jmp 0x12667691 */
  goto L_12667691;
L_12667689:;
  /* 12667689 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1266768c jmp 0x12667691 */
  goto L_12667691;
L_1266768e:;
  /* 1266768e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12667691:;
  /* 12667691 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12667695 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1266769b je 0x126676b6 */
  if (C.zf) goto L_126676b6;
L_1266769d:;
  /* 1266769d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266769f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 126676a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 126676a2 je 0x12667708 */
  if (C.zf) goto L_12667708;
  /* 126676a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 126676a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 126676a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 126676ad jne 0x1266769d */
  if (!C.zf) goto L_1266769d;
  /* 126676af jmp 0x126676b6 */
  goto L_126676b6;
L_126676b1:;
  /* 126676b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 126676b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_126676b6:;
  /* 126676b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 126676bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 126676bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126676bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126676c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126676c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126676c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126676c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 126676ce je 0x126676b1 */
  if (C.zf) goto L_126676b1;
  /* 126676d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 126676d2 je 0x12667708 */
  if (C.zf) goto L_12667708;
  /* 126676d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 126676d6 je 0x126676ff */
  if (C.zf) goto L_126676ff;
  /* 126676d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 126676de je 0x126676f2 */
  if (C.zf) goto L_126676f2;
  /* 126676e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 126676e6 je 0x126676ea */
  if (C.zf) goto L_126676ea;
  /* 126676e8 jmp 0x126676b1 */
  goto L_126676b1;
L_126676ea:;
  /* 126676ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 126676ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 126676f0 pop edi */
  EDI = (pop32());
  /* 126676f1 ret  */
  ESPCHK(0x12667630u, _esp0);
  ESP += 4; return;
L_126676f2:;
  /* 126676f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 126676f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 126676f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 126676fd pop edi */
  EDI = (pop32());
  /* 126676fe ret  */
  ESPCHK(0x12667630u, _esp0);
  ESP += 4; return;
L_126676ff:;
  /* 126676ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12667702 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12667706 pop edi */
  EDI = (pop32());
  /* 12667707 ret  */
  ESPCHK(0x12667630u, _esp0);
  ESP += 4; return;
L_12667708:;
  /* 12667708 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1266770a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1266770e pop edi */
  EDI = (pop32());
  /* 1266770f ret  */
  ESPCHK(0x12667630u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x12667710 (243 bytes, 91 insns) */
void f_12667710(void) {
  FTRACE(0x12667710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667710 push ebp */
  push32((uint32_t)(EBP));
  /* 12667711 mov ebp, esp */
  EBP = (ESP);
  /* 12667713 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667716 push ebx */
  push32((uint32_t)(EBX));
  /* 12667717 push esi */
  push32((uint32_t)(ESI));
  /* 12667718 push edi */
  push32((uint32_t)(EDI));
  /* 12667719 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1266771c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1266771f:;
  /* 1266771f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667723 jne 0x12667743 */
  if (!C.zf) goto L_12667743;
  /* 12667725 push 0x1268c054 */
  push32((uint32_t)(0x1268c054u));
  /* 1266772a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266772c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1266772e push 0x1268c064 */
  push32((uint32_t)(0x1268c064u));
  /* 12667733 push 2 */
  push32((uint32_t)(0x2u));
  /* 12667735 call 0x12663730 */
  push32(0x1266773au); f_12663730();
  /* 1266773a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266773d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667740 jne 0x12667743 */
  if (!C.zf) goto L_12667743;
  /* 12667742 int3  */
  x86_unimpl("int3 @ 0x12667742");
L_12667743:;
  /* 12667743 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12667745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12667747 jne 0x1266771f */
  if (!C.zf) goto L_1266771f;
L_12667749:;
  /* 12667749 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266774d jne 0x1266776d */
  if (!C.zf) goto L_1266776d;
  /* 1266774f push 0x1268c038 */
  push32((uint32_t)(0x1268c038u));
  /* 12667754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12667756 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12667758 push 0x1268c064 */
  push32((uint32_t)(0x1268c064u));
  /* 1266775d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266775f call 0x12663730 */
  push32(0x12667764u); f_12663730();
  /* 12667764 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667767 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266776a jne 0x1266776d */
  if (!C.zf) goto L_1266776d;
  /* 1266776c int3  */
  x86_unimpl("int3 @ 0x1266776c");
L_1266776d:;
  /* 1266776d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266776f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12667771 jne 0x12667749 */
  if (!C.zf) goto L_12667749;
  /* 12667773 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667776 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1266777d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667783 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12667786 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266778c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1266778e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12667791 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667794 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12667797 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266779a push ecx */
  push32((uint32_t)(ECX));
  /* 1266779b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266779e push edx */
  push32((uint32_t)(EDX));
  /* 1266779f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677a2 push eax */
  push32((uint32_t)(EAX));
  /* 126677a3 call 0x1266b600 */
  push32(0x126677a8u); f_1266b600();
  /* 126677a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126677ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 126677ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126677b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126677b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 126677bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677c0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126677c4 jl 0x126677e8 */
  if ((C.sf!=C.of)) goto L_126677e8;
  /* 126677c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126677cb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 126677ce xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126677d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126677d6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 126677d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126677de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126677e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126677e6 jmp 0x126677f9 */
  goto L_126677f9;
L_126677e8:;
  /* 126677e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126677eb push edx */
  push32((uint32_t)(EDX));
  /* 126677ec push 0 */
  push32((uint32_t)(0x0u));
  /* 126677ee call 0x1266b380 */
  push32(0x126677f3u); f_1266b380();
  /* 126677f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126677f6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_126677f9:;
  /* 126677f9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126677fc pop edi */
  EDI = (pop32());
  /* 126677fd pop esi */
  ESI = (pop32());
  /* 126677fe pop ebx */
  EBX = (pop32());
  /* 126677ff mov esp, ebp */
  ESP = (EBP);
  /* 12667801 pop ebp */
  EBP = (pop32());
  /* 12667802 ret  */
  ESPCHK(0x12667710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007810 @ 0x12667810 (47 bytes, 17 insns) */
void f_12667810(void) {
  FTRACE(0x12667810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667810 push ecx */
  push32((uint32_t)(ECX));
  /* 12667811 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667816 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1266781a jb 0x12667830 */
  if (C.cf) goto L_12667830;
L_1266781c:;
  /* 1266781c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667822 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667827 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12667829 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266782e jae 0x1266781c */
  if (!C.cf) goto L_1266781c;
L_12667830:;
  /* 12667830 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667832 mov eax, esp */
  EAX = (ESP);
  /* 12667834 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12667836 mov esp, ecx */
  ESP = (ECX);
  /* 12667838 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266783a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266783d push eax */
  push32((uint32_t)(EAX));
  /* 1266783e ret  */
  ESPCHK(0x12667810u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x12667840 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12667840(void) {
  FTRACE(0x12667840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667840 push ebp */
  push32((uint32_t)(EBP));
  /* 12667841 mov ebp, esp */
  EBP = (ESP);
  /* 12667843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667846 push esi */
  push32((uint32_t)(ESI));
  /* 12667847 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266784b je 0x12667853 */
  if (C.zf) goto L_12667853;
  /* 1266784d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667851 jne 0x12667858 */
  if (!C.zf) goto L_12667858;
L_12667853:;
  /* 12667853 jmp 0x12667a28 */
  goto L_12667a28;
L_12667858:;
  /* 12667858 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266785c je 0x12667874 */
  if (C.zf) goto L_12667874;
  /* 1266785e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667862 je 0x12667874 */
  if (C.zf) goto L_12667874;
  /* 12667864 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667868 je 0x12667874 */
  if (C.zf) goto L_12667874;
  /* 1266786a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266786e jne 0x12667951 */
  if (!C.zf) goto L_12667951;
L_12667874:;
  /* 12667874 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667876 call 0x12668070 */
  push32(0x1266787bu); f_12668070();
  /* 1266787b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266787e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667882 je 0x1266788a */
  if (C.zf) goto L_1266788a;
  /* 12667884 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667888 jne 0x126678cf */
  if (!C.zf) goto L_126678cf;
L_1266788a:;
  /* 1266788a cmp dword ptr [0x1269071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667891 jne 0x126678cf */
  if (!C.zf) goto L_126678cf;
  /* 12667893 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667895 push 0x12667a70 */
  push32((uint32_t)(0x12667a70u));
  /* 1266789a call dword ptr [0x1269331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269331c))), 0x126678a0u);
  /* 126678a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126678a3 jne 0x126678b1 */
  if (!C.zf) goto L_126678b1;
  /* 126678a5 mov dword ptr [0x1269071c], 1 */
  w32((uint32_t)(0x1269071c), (0x1u));
  /* 126678af jmp 0x126678cf */
  goto L_126678cf;
L_126678b1:;
  /* 126678b1 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x126678b7u);
  /* 126678b7 mov esi, eax */
  ESI = (EAX);
  /* 126678b9 call 0x1266c550 */
  push32(0x126678beu); f_1266c550();
  /* 126678be mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 126678c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 126678c2 call 0x12668110 */
  push32(0x126678c7u); f_12668110();
  /* 126678c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126678ca jmp 0x12667a28 */
  goto L_12667a28;
L_126678cf:;
  /* 126678cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126678d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126678d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126678d8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126678db mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126678de cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126678e2 ja 0x12667942 */
  if ((!C.cf&&!C.zf)) goto L_12667942;
  /* 126678e4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126678e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126678e9 mov dl, byte ptr [eax + 0x12667a4f] */
  DL = (r8((uint32_t)(EAX + 0x12667a4f)));
  /* 126678ef jmp dword ptr [edx*4 + 0x12667a3b] */
  switch (EDX) {
    case 0: goto L_126678f6;
    case 1: goto L_12667930;
    case 2: goto L_1266790a;
    case 3: goto L_1266791d;
    case 4: goto L_12667942;
    default: x86_unimpl("switch@0x126678ef out of table"); return;
  }
L_126678f6:;
  /* 126678f6 mov ecx, dword ptr [0x1269070c] */
  ECX = (r32((uint32_t)(0x1269070c)));
  /* 126678fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126678ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667902 mov dword ptr [0x1269070c], edx */
  w32((uint32_t)(0x1269070c), (EDX));
  /* 12667908 jmp 0x12667942 */
  goto L_12667942;
L_1266790a:;
  /* 1266790a mov eax, dword ptr [0x12690710] */
  EAX = (r32((uint32_t)(0x12690710)));
  /* 1266790f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667912 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667915 mov dword ptr [0x12690710], ecx */
  w32((uint32_t)(0x12690710), (ECX));
  /* 1266791b jmp 0x12667942 */
  goto L_12667942;
L_1266791d:;
  /* 1266791d mov edx, dword ptr [0x12690714] */
  EDX = (r32((uint32_t)(0x12690714)));
  /* 12667923 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12667926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667929 mov dword ptr [0x12690714], eax */
  w32((uint32_t)(0x12690714), (EAX));
  /* 1266792e jmp 0x12667942 */
  goto L_12667942;
L_12667930:;
  /* 12667930 mov ecx, dword ptr [0x12690718] */
  ECX = (r32((uint32_t)(0x12690718)));
  /* 12667936 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12667939 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266793c mov dword ptr [0x12690718], edx */
  w32((uint32_t)(0x12690718), (EDX));
L_12667942:;
  /* 12667942 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667944 call 0x12668110 */
  push32(0x12667949u); f_12668110();
  /* 12667949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266794c jmp 0x12667a23 */
  goto L_12667a23;
L_12667951:;
  /* 12667951 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667955 je 0x12667968 */
  if (C.zf) goto L_12667968;
  /* 12667957 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266795b je 0x12667968 */
  if (C.zf) goto L_12667968;
  /* 1266795d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667961 je 0x12667968 */
  if (C.zf) goto L_12667968;
  /* 12667963 jmp 0x12667a28 */
  goto L_12667a28;
L_12667968:;
  /* 12667968 call 0x126640b0 */
  push32(0x1266796du); f_126640b0();
  /* 1266796d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12667970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667973 cmp dword ptr [eax + 0x50], 0x1268ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1268ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266797a jne 0x126679c5 */
  if (!C.zf) goto L_126679c5;
  /* 1266797c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12667981 push 0x1268c070 */
  push32((uint32_t)(0x1268c070u));
  /* 12667986 push 2 */
  push32((uint32_t)(0x2u));
  /* 12667988 mov ecx, dword ptr [0x1268ec80] */
  ECX = (r32((uint32_t)(0x1268ec80)));
  /* 1266798e push ecx */
  push32((uint32_t)(ECX));
  /* 1266798f call 0x12664670 */
  push32(0x12667994u); f_12664670();
  /* 12667994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266799a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1266799d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126679a0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126679a4 je 0x126679c3 */
  if (C.zf) goto L_126679c3;
  /* 126679a6 mov ecx, dword ptr [0x1268ec80] */
  ECX = (r32((uint32_t)(0x1268ec80)));
  /* 126679ac push ecx */
  push32((uint32_t)(ECX));
  /* 126679ad push 0x1268ec00 */
  push32((uint32_t)(0x1268ec00u));
  /* 126679b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126679b5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 126679b8 push eax */
  push32((uint32_t)(EAX));
  /* 126679b9 call 0x1266af50 */
  push32(0x126679beu); f_1266af50();
  /* 126679be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126679c1 jmp 0x126679c5 */
  goto L_126679c5;
L_126679c3:;
  /* 126679c3 jmp 0x12667a28 */
  goto L_12667a28;
L_126679c5:;
  /* 126679c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126679c8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 126679cb push edx */
  push32((uint32_t)(EDX));
  /* 126679cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126679cf push eax */
  push32((uint32_t)(EAX));
  /* 126679d0 call 0x12667d50 */
  push32(0x126679d5u); f_12667d50();
  /* 126679d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126679d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126679db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126679df jne 0x126679e3 */
  if (!C.zf) goto L_126679e3;
  /* 126679e1 jmp 0x12667a28 */
  goto L_12667a28;
L_126679e3:;
  /* 126679e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126679e6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 126679e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_126679ec:;
  /* 126679ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126679ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126679f2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126679f5 jne 0x12667a23 */
  if (!C.zf) goto L_12667a23;
  /* 126679f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126679fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126679fd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12667a00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667a03 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667a06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12667a09 mov edx, dword ptr [0x1268ec84] */
  EDX = (r32((uint32_t)(0x1268ec84)));
  /* 12667a0f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12667a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667a15 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12667a18 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667a1a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667a1d jb 0x12667a21 */
  if (C.cf) goto L_12667a21;
  /* 12667a1f jmp 0x12667a23 */
  goto L_12667a23;
L_12667a21:;
  /* 12667a21 jmp 0x126679ec */
  goto L_126679ec;
L_12667a23:;
  /* 12667a23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667a26 jmp 0x12667a36 */
  goto L_12667a36;
L_12667a28:;
  /* 12667a28 call 0x1266c540 */
  push32(0x12667a2du); f_1266c540();
  /* 12667a2d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12667a33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12667a36:;
  /* 12667a36 pop esi */
  ESI = (pop32());
  /* 12667a37 mov esp, ebp */
  ESP = (EBP);
  /* 12667a39 pop ebp */
  EBP = (pop32());
  /* 12667a3a ret  */
  ESPCHK(0x12667840u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x12667a70 (146 bytes, 45 insns) */
void f_12667a70(void) {
  FTRACE(0x12667a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12667a71 mov ebp, esp */
  EBP = (ESP);
  /* 12667a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667a78 call 0x12668070 */
  push32(0x12667a7du); f_12668070();
  /* 12667a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667a80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667a84 jne 0x12667a9e */
  if (!C.zf) goto L_12667a9e;
  /* 12667a86 mov dword ptr [ebp - 8], 0x1269070c */
  w32((uint32_t)(EBP + -0x8), (0x1269070cu));
  /* 12667a8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667a90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12667a92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12667a95 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12667a9c jmp 0x12667ab4 */
  goto L_12667ab4;
L_12667a9e:;
  /* 12667a9e mov dword ptr [ebp - 8], 0x12690710 */
  w32((uint32_t)(EBP + -0x8), (0x12690710u));
  /* 12667aa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667aa8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12667aaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667aad mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12667ab4:;
  /* 12667ab4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667ab8 jne 0x12667ac8 */
  if (!C.zf) goto L_12667ac8;
  /* 12667aba push 1 */
  push32((uint32_t)(0x1u));
  /* 12667abc call 0x12668110 */
  push32(0x12667ac1u); f_12668110();
  /* 12667ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12667ac6 jmp 0x12667afc */
  goto L_12667afc;
L_12667ac8:;
  /* 12667ac8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667acc je 0x12667aed */
  if (C.zf) goto L_12667aed;
  /* 12667ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667ad1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12667ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667ad9 call 0x12668110 */
  push32(0x12667adeu); f_12668110();
  /* 12667ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667ae4 push edx */
  push32((uint32_t)(EDX));
  /* 12667ae5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12667ae8u);
  /* 12667ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667aeb jmp 0x12667af7 */
  goto L_12667af7;
L_12667aed:;
  /* 12667aed push 1 */
  push32((uint32_t)(0x1u));
  /* 12667aef call 0x12668110 */
  push32(0x12667af4u); f_12668110();
  /* 12667af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667af7:;
  /* 12667af7 mov eax, 1 */
  EAX = (0x1u);
L_12667afc:;
  /* 12667afc mov esp, ebp */
  ESP = (EBP);
  /* 12667afe pop ebp */
  EBP = (pop32());
  /* 12667aff ret 4 */
  ESPCHK(0x12667a70u, _esp0);
  ESP += 8; return;
}

/* FUN_10007b10 @ 0x12667b10 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12667b10(void) {
  FTRACE(0x12667b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12667b11 mov ebp, esp */
  EBP = (ESP);
  /* 12667b13 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667b16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12667b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667b20 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12667b23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12667b26 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667b29 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12667b2c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667b30 ja 0x12667bde */
  if ((!C.cf&&!C.zf)) goto L_12667bde;
  /* 12667b36 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12667b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12667b3b mov dl, byte ptr [eax + 0x12667d32] */
  DL = (r8((uint32_t)(EAX + 0x12667d32)));
  /* 12667b41 jmp dword ptr [edx*4 + 0x12667d1a] */
  switch (EDX) {
    case 0: goto L_12667b48;
    case 1: goto L_12667bb3;
    case 2: goto L_12667b99;
    case 3: goto L_12667b65;
    case 4: goto L_12667b7f;
    case 5: goto L_12667bde;
    default: x86_unimpl("switch@0x12667b41 out of table"); return;
  }
L_12667b48:;
  /* 12667b48 mov dword ptr [ebp - 0x18], 0x1269070c */
  w32((uint32_t)(EBP + -0x18), (0x1269070cu));
  /* 12667b4f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667b52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12667b54 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12667b57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667b5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667b5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667b60 jmp 0x12667be6 */
  goto L_12667be6;
L_12667b65:;
  /* 12667b65 mov dword ptr [ebp - 0x18], 0x12690710 */
  w32((uint32_t)(EBP + -0x18), (0x12690710u));
  /* 12667b6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667b6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12667b71 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12667b74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667b77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667b7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667b7d jmp 0x12667be6 */
  goto L_12667be6;
L_12667b7f:;
  /* 12667b7f mov dword ptr [ebp - 0x18], 0x12690714 */
  w32((uint32_t)(EBP + -0x18), (0x12690714u));
  /* 12667b86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667b89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12667b8b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12667b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667b91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667b97 jmp 0x12667be6 */
  goto L_12667be6;
L_12667b99:;
  /* 12667b99 mov dword ptr [ebp - 0x18], 0x12690718 */
  w32((uint32_t)(EBP + -0x18), (0x12690718u));
  /* 12667ba0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667ba3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12667ba5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12667ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12667bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667bae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12667bb1 jmp 0x12667be6 */
  goto L_12667be6;
L_12667bb3:;
  /* 12667bb3 call 0x126640b0 */
  push32(0x12667bb8u); f_126640b0();
  /* 12667bb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12667bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667bbe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12667bc1 push edx */
  push32((uint32_t)(EDX));
  /* 12667bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667bc5 push eax */
  push32((uint32_t)(EAX));
  /* 12667bc6 call 0x12667d50 */
  push32(0x12667bcbu); f_12667d50();
  /* 12667bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667bce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667bd1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12667bd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667bd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12667bd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12667bdc jmp 0x12667be6 */
  goto L_12667be6;
L_12667bde:;
  /* 12667bde or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12667be1 jmp 0x12667d16 */
  goto L_12667d16;
L_12667be6:;
  /* 12667be6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667bea je 0x12667bf6 */
  if (C.zf) goto L_12667bf6;
  /* 12667bec push 1 */
  push32((uint32_t)(0x1u));
  /* 12667bee call 0x12668070 */
  push32(0x12667bf3u); f_12668070();
  /* 12667bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667bf6:;
  /* 12667bf6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667bfa jne 0x12667c13 */
  if (!C.zf) goto L_12667c13;
  /* 12667bfc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c00 je 0x12667c0c */
  if (C.zf) goto L_12667c0c;
  /* 12667c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12667c04 call 0x12668110 */
  push32(0x12667c09u); f_12668110();
  /* 12667c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667c0c:;
  /* 12667c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12667c0e jmp 0x12667d16 */
  goto L_12667d16;
L_12667c13:;
  /* 12667c13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c17 jne 0x12667c30 */
  if (!C.zf) goto L_12667c30;
  /* 12667c19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c1d je 0x12667c29 */
  if (C.zf) goto L_12667c29;
  /* 12667c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12667c21 call 0x12668110 */
  push32(0x12667c26u); f_12668110();
  /* 12667c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667c29:;
  /* 12667c29 push 3 */
  push32((uint32_t)(0x3u));
  /* 12667c2b call 0x12663e30 */
  push32(0x12667c30u); f_12663e30();
L_12667c30:;
  /* 12667c30 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c34 je 0x12667c42 */
  if (C.zf) goto L_12667c42;
  /* 12667c36 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c3a je 0x12667c42 */
  if (C.zf) goto L_12667c42;
  /* 12667c3c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c40 jne 0x12667c6e */
  if (!C.zf) goto L_12667c6e;
L_12667c42:;
  /* 12667c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667c45 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12667c48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12667c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667c4e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12667c55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c59 jne 0x12667c6e */
  if (!C.zf) goto L_12667c6e;
  /* 12667c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667c5e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12667c61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12667c64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667c67 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12667c6e:;
  /* 12667c6e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c72 jne 0x12667cb0 */
  if (!C.zf) goto L_12667cb0;
  /* 12667c74 mov eax, dword ptr [0x1268ec78] */
  EAX = (r32((uint32_t)(0x1268ec78)));
  /* 12667c79 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12667c7c jmp 0x12667c87 */
  goto L_12667c87;
L_12667c7e:;
  /* 12667c7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12667c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667c84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12667c87:;
  /* 12667c87 mov edx, dword ptr [0x1268ec78] */
  EDX = (r32((uint32_t)(0x1268ec78)));
  /* 12667c8d add edx, dword ptr [0x1268ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667c93 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667c96 jge 0x12667cae */
  if ((C.sf==C.of)) goto L_12667cae;
  /* 12667c98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12667c9b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12667c9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667ca1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12667ca4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12667cac jmp 0x12667c7e */
  goto L_12667c7e;
L_12667cae:;
  /* 12667cae jmp 0x12667cb9 */
  goto L_12667cb9;
L_12667cb0:;
  /* 12667cb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12667cb3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12667cb9:;
  /* 12667cb9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667cbd je 0x12667cc9 */
  if (C.zf) goto L_12667cc9;
  /* 12667cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12667cc1 call 0x12668110 */
  push32(0x12667cc6u); f_12668110();
  /* 12667cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667cc9:;
  /* 12667cc9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667ccd jne 0x12667ce0 */
  if (!C.zf) goto L_12667ce0;
  /* 12667ccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667cd2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12667cd5 push edx */
  push32((uint32_t)(EDX));
  /* 12667cd6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12667cd8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12667cdbu);
  /* 12667cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12667cde jmp 0x12667cea */
  goto L_12667cea;
L_12667ce0:;
  /* 12667ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667ce3 push eax */
  push32((uint32_t)(EAX));
  /* 12667ce4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12667ce7u);
  /* 12667ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12667cea:;
  /* 12667cea cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667cee je 0x12667cfc */
  if (C.zf) goto L_12667cfc;
  /* 12667cf0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667cf4 je 0x12667cfc */
  if (C.zf) goto L_12667cfc;
  /* 12667cf6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667cfa jne 0x12667d14 */
  if (!C.zf) goto L_12667d14;
L_12667cfc:;
  /* 12667cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667cff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12667d02 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12667d05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667d09 jne 0x12667d14 */
  if (!C.zf) goto L_12667d14;
  /* 12667d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667d0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667d11 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12667d14:;
  /* 12667d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12667d16:;
  /* 12667d16 mov esp, ebp */
  ESP = (EBP);
  /* 12667d18 pop ebp */
  EBP = (pop32());
  /* 12667d19 ret  */
  ESPCHK(0x12667b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d50 @ 0x12667d50 (91 bytes, 35 insns) */
void f_12667d50(void) {
  FTRACE(0x12667d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12667d51 mov ebp, esp */
  EBP = (ESP);
  /* 12667d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12667d54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667d57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667d5a:;
  /* 12667d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667d5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12667d60 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667d63 je 0x12667d83 */
  if (C.zf) goto L_12667d83;
  /* 12667d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667d68 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12667d6e mov ecx, dword ptr [0x1268ec84] */
  ECX = (r32((uint32_t)(0x1268ec84)));
  /* 12667d74 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12667d77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667d7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667d7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667d7f jae 0x12667d83 */
  if (!C.cf) goto L_12667d83;
  /* 12667d81 jmp 0x12667d5a */
  goto L_12667d5a;
L_12667d83:;
  /* 12667d83 mov eax, dword ptr [0x1268ec84] */
  EAX = (r32((uint32_t)(0x1268ec84)));
  /* 12667d88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12667d8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667d8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667d90 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667d93 jae 0x12667da5 */
  if (!C.cf) goto L_12667da5;
  /* 12667d95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667d98 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12667d9b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667d9e jne 0x12667da5 */
  if (!C.zf) goto L_12667da5;
  /* 12667da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667da3 jmp 0x12667da7 */
  goto L_12667da7;
L_12667da5:;
  /* 12667da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12667da7:;
  /* 12667da7 mov esp, ebp */
  ESP = (EBP);
  /* 12667da9 pop ebp */
  EBP = (pop32());
  /* 12667daa ret  */
  ESPCHK(0x12667d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x12667db0 (13 bytes, 6 insns) */
void f_12667db0(void) {
  FTRACE(0x12667db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12667db1 mov ebp, esp */
  EBP = (ESP);
  /* 12667db3 call 0x126640b0 */
  push32(0x12667db8u); f_126640b0();
  /* 12667db8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667dbb pop ebp */
  EBP = (pop32());
  /* 12667dbc ret  */
  ESPCHK(0x12667db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dc0 @ 0x12667dc0 (13 bytes, 6 insns) */
void f_12667dc0(void) {
  FTRACE(0x12667dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12667dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12667dc3 call 0x126640b0 */
  push32(0x12667dc8u); f_126640b0();
  /* 12667dc8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667dcb pop ebp */
  EBP = (pop32());
  /* 12667dcc ret  */
  ESPCHK(0x12667dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dd0 @ 0x12667dd0 (187 bytes, 54 insns) */
void f_12667dd0(void) {
  FTRACE(0x12667dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12667dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12667dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12667dd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12667ddd cmp dword ptr [0x12690720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667de4 jne 0x12667e43 */
  if (!C.zf) goto L_12667e43;
  /* 12667de6 push 0x1268b49c */
  push32((uint32_t)(0x1268b49cu));
  /* 12667deb call dword ptr [0x12693340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693340))), 0x12667df1u);
  /* 12667df1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12667df4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667df8 je 0x12667e17 */
  if (C.zf) goto L_12667e17;
  /* 12667dfa push 0x1268c0a0 */
  push32((uint32_t)(0x1268c0a0u));
  /* 12667dff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667e02 push eax */
  push32((uint32_t)(EAX));
  /* 12667e03 call dword ptr [0x1269333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269333c))), 0x12667e09u);
  /* 12667e09 mov dword ptr [0x12690720], eax */
  w32((uint32_t)(0x12690720), (EAX));
  /* 12667e0e cmp dword ptr [0x12690720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667e15 jne 0x12667e1b */
  if (!C.zf) goto L_12667e1b;
L_12667e17:;
  /* 12667e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12667e19 jmp 0x12667e87 */
  goto L_12667e87;
L_12667e1b:;
  /* 12667e1b push 0x1268c090 */
  push32((uint32_t)(0x1268c090u));
  /* 12667e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12667e24 call dword ptr [0x1269333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269333c))), 0x12667e2au);
  /* 12667e2a mov dword ptr [0x12690724], eax */
  w32((uint32_t)(0x12690724), (EAX));
  /* 12667e2f push 0x1268c07c */
  push32((uint32_t)(0x1268c07cu));
  /* 12667e34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12667e37 push edx */
  push32((uint32_t)(EDX));
  /* 12667e38 call dword ptr [0x1269333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269333c))), 0x12667e3eu);
  /* 12667e3e mov dword ptr [0x12690728], eax */
  w32((uint32_t)(0x12690728), (EAX));
L_12667e43:;
  /* 12667e43 cmp dword ptr [0x12690724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667e4a je 0x12667e55 */
  if (C.zf) goto L_12667e55;
  /* 12667e4c call dword ptr [0x12690724] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690724))), 0x12667e52u);
  /* 12667e52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667e55:;
  /* 12667e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667e59 je 0x12667e71 */
  if (C.zf) goto L_12667e71;
  /* 12667e5b cmp dword ptr [0x12690728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667e62 je 0x12667e71 */
  if (C.zf) goto L_12667e71;
  /* 12667e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667e67 push eax */
  push32((uint32_t)(EAX));
  /* 12667e68 call dword ptr [0x12690728] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690728))), 0x12667e6eu);
  /* 12667e6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667e71:;
  /* 12667e71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12667e74 push ecx */
  push32((uint32_t)(ECX));
  /* 12667e75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12667e78 push edx */
  push32((uint32_t)(EDX));
  /* 12667e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12667e7c push eax */
  push32((uint32_t)(EAX));
  /* 12667e7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667e80 push ecx */
  push32((uint32_t)(ECX));
  /* 12667e81 call dword ptr [0x12690720] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690720))), 0x12667e87u);
L_12667e87:;
  /* 12667e87 mov esp, ebp */
  ESP = (EBP);
  /* 12667e89 pop ebp */
  EBP = (pop32());
  /* 12667e8a ret  */
  ESPCHK(0x12667dd0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12667e90 (254 bytes, 109 insns) */
void f_12667e90(void) {
  FTRACE(0x12667e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667e90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12667e94 push edi */
  push32((uint32_t)(EDI));
  /* 12667e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12667e97 je 0x12667f13 */
  if (C.zf) goto L_12667f13;
  /* 12667e99 push esi */
  push32((uint32_t)(ESI));
  /* 12667e9a push ebx */
  push32((uint32_t)(EBX));
  /* 12667e9b mov ebx, ecx */
  EBX = (ECX);
  /* 12667e9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12667ea1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12667ea7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12667eab jne 0x12667eb4 */
  if (!C.zf) goto L_12667eb4;
  /* 12667ead shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12667eb0 jne 0x12667f21 */
  if (!C.zf) goto L_12667f21;
  /* 12667eb2 jmp 0x12667ed5 */
  goto L_12667ed5;
L_12667eb4:;
  /* 12667eb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12667eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12667eb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12667eb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12667eba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12667ebb je 0x12667ee2 */
  if (C.zf) goto L_12667ee2;
  /* 12667ebd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12667ebf je 0x12667eea */
  if (C.zf) goto L_12667eea;
  /* 12667ec1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12667ec7 jne 0x12667eb4 */
  if (!C.zf) goto L_12667eb4;
  /* 12667ec9 mov ebx, ecx */
  EBX = (ECX);
  /* 12667ecb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12667ece jne 0x12667f21 */
  if (!C.zf) goto L_12667f21;
L_12667ed0:;
  /* 12667ed0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12667ed3 je 0x12667ee2 */
  if (C.zf) goto L_12667ee2;
L_12667ed5:;
  /* 12667ed5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12667ed7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12667ed8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12667eda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12667edb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12667edd je 0x12667f0e */
  if (C.zf) goto L_12667f0e;
  /* 12667edf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12667ee0 jne 0x12667ed5 */
  if (!C.zf) goto L_12667ed5;
L_12667ee2:;
  /* 12667ee2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12667ee6 pop ebx */
  EBX = (pop32());
  /* 12667ee7 pop esi */
  ESI = (pop32());
  /* 12667ee8 pop edi */
  EDI = (pop32());
  /* 12667ee9 ret  */
  ESPCHK(0x12667e90u, _esp0);
  ESP += 4; return;
L_12667eea:;
  /* 12667eea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12667ef0 je 0x12667f04 */
  if (C.zf) goto L_12667f04;
L_12667ef2:;
  /* 12667ef2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12667ef4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12667ef5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12667ef6 je 0x12667f86 */
  if (C.zf) goto L_12667f86;
  /* 12667efc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12667f02 jne 0x12667ef2 */
  if (!C.zf) goto L_12667ef2;
L_12667f04:;
  /* 12667f04 mov ebx, ecx */
  EBX = (ECX);
  /* 12667f06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12667f09 jne 0x12667f77 */
  if (!C.zf) goto L_12667f77;
L_12667f0b:;
  /* 12667f0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12667f0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12667f0e:;
  /* 12667f0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12667f0f jne 0x12667f0b */
  if (!C.zf) goto L_12667f0b;
  /* 12667f11 pop ebx */
  EBX = (pop32());
  /* 12667f12 pop esi */
  ESI = (pop32());
L_12667f13:;
  /* 12667f13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12667f17 pop edi */
  EDI = (pop32());
  /* 12667f18 ret  */
  ESPCHK(0x12667e90u, _esp0);
  ESP += 4; return;
L_12667f19:;
  /* 12667f19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12667f1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12667f1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12667f1f je 0x12667ed0 */
  if (C.zf) goto L_12667ed0;
L_12667f21:;
  /* 12667f21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12667f26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12667f28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667f2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12667f2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12667f2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12667f31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12667f34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12667f39 je 0x12667f19 */
  if (C.zf) goto L_12667f19;
  /* 12667f3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12667f3d je 0x12667f6b */
  if (C.zf) goto L_12667f6b;
  /* 12667f3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12667f41 je 0x12667f61 */
  if (C.zf) goto L_12667f61;
  /* 12667f43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12667f49 je 0x12667f57 */
  if (C.zf) goto L_12667f57;
  /* 12667f4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12667f51 jne 0x12667f19 */
  if (!C.zf) goto L_12667f19;
  /* 12667f53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12667f55 jmp 0x12667f6f */
  goto L_12667f6f;
L_12667f57:;
  /* 12667f57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12667f5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12667f5f jmp 0x12667f6f */
  goto L_12667f6f;
L_12667f61:;
  /* 12667f61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12667f67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12667f69 jmp 0x12667f6f */
  goto L_12667f6f;
L_12667f6b:;
  /* 12667f6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12667f6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12667f6f:;
  /* 12667f6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12667f72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12667f74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12667f75 je 0x12667f81 */
  if (C.zf) goto L_12667f81;
L_12667f77:;
  /* 12667f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12667f79:;
  /* 12667f79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12667f7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12667f7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12667f7f jne 0x12667f79 */
  if (!C.zf) goto L_12667f79;
L_12667f81:;
  /* 12667f81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12667f84 jne 0x12667f0b */
  if (!C.zf) goto L_12667f0b;
L_12667f86:;
  /* 12667f86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12667f8a pop ebx */
  EBX = (pop32());
  /* 12667f8b pop esi */
  ESI = (pop32());
  /* 12667f8c pop edi */
  EDI = (pop32());
  /* 12667f8d ret  */
  ESPCHK(0x12667e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x12667f90 (55 bytes, 16 insns) */
void f_12667f90(void) {
  FTRACE(0x12667f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12667f91 mov ebp, esp */
  EBP = (ESP);
  /* 12667f93 mov eax, dword ptr [0x1268eb84] */
  EAX = (r32((uint32_t)(0x1268eb84)));
  /* 12667f98 push eax */
  push32((uint32_t)(EAX));
  /* 12667f99 call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x12667f9fu);
  /* 12667f9f mov ecx, dword ptr [0x1268eb74] */
  ECX = (r32((uint32_t)(0x1268eb74)));
  /* 12667fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12667fa6 call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x12667facu);
  /* 12667fac mov edx, dword ptr [0x1268eb64] */
  EDX = (r32((uint32_t)(0x1268eb64)));
  /* 12667fb2 push edx */
  push32((uint32_t)(EDX));
  /* 12667fb3 call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x12667fb9u);
  /* 12667fb9 mov eax, dword ptr [0x1268eb44] */
  EAX = (r32((uint32_t)(0x1268eb44)));
  /* 12667fbe push eax */
  push32((uint32_t)(EAX));
  /* 12667fbf call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x12667fc5u);
  /* 12667fc5 pop ebp */
  EBP = (pop32());
  /* 12667fc6 ret  */
  ESPCHK(0x12667f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x12667fd0 (159 bytes, 47 insns) */
void f_12667fd0(void) {
  FTRACE(0x12667fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12667fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12667fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12667fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12667fd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12667fdb jmp 0x12667fe6 */
  goto L_12667fe6;
L_12667fdd:;
  /* 12667fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12667fe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12667fe6:;
  /* 12667fe6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667fea jge 0x12668039 */
  if ((C.sf==C.of)) goto L_12668039;
  /* 12667fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12667fef cmp dword ptr [ecx*4 + 0x1268eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1268eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667ff7 je 0x12668037 */
  if (C.zf) goto L_12668037;
  /* 12667ff9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12667ffd je 0x12668037 */
  if (C.zf) goto L_12668037;
  /* 12667fff cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668003 je 0x12668037 */
  if (C.zf) goto L_12668037;
  /* 12668005 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668009 je 0x12668037 */
  if (C.zf) goto L_12668037;
  /* 1266800b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266800f je 0x12668037 */
  if (C.zf) goto L_12668037;
  /* 12668011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668014 mov eax, dword ptr [edx*4 + 0x1268eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1268eb40)));
  /* 1266801b push eax */
  push32((uint32_t)(EAX));
  /* 1266801c call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x12668022u);
  /* 12668022 push 2 */
  push32((uint32_t)(0x2u));
  /* 12668024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668027 mov edx, dword ptr [ecx*4 + 0x1268eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1268eb40)));
  /* 1266802e push edx */
  push32((uint32_t)(EDX));
  /* 1266802f call 0x12665100 */
  push32(0x12668034u); f_12665100();
  /* 12668034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12668037:;
  /* 12668037 jmp 0x12667fdd */
  goto L_12667fdd;
L_12668039:;
  /* 12668039 mov eax, dword ptr [0x1268eb64] */
  EAX = (r32((uint32_t)(0x1268eb64)));
  /* 1266803e push eax */
  push32((uint32_t)(EAX));
  /* 1266803f call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x12668045u);
  /* 12668045 mov ecx, dword ptr [0x1268eb74] */
  ECX = (r32((uint32_t)(0x1268eb74)));
  /* 1266804b push ecx */
  push32((uint32_t)(ECX));
  /* 1266804c call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x12668052u);
  /* 12668052 mov edx, dword ptr [0x1268eb84] */
  EDX = (r32((uint32_t)(0x1268eb84)));
  /* 12668058 push edx */
  push32((uint32_t)(EDX));
  /* 12668059 call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x1266805fu);
  /* 1266805f mov eax, dword ptr [0x1268eb44] */
  EAX = (r32((uint32_t)(0x1268eb44)));
  /* 12668064 push eax */
  push32((uint32_t)(EAX));
  /* 12668065 call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x1266806bu);
  /* 1266806b mov esp, ebp */
  ESP = (EBP);
  /* 1266806d pop ebp */
  EBP = (pop32());
  /* 1266806e ret  */
  ESPCHK(0x12667fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x12668070 (151 bytes, 46 insns) */
void f_12668070(void) {
  FTRACE(0x12668070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668070 push ebp */
  push32((uint32_t)(EBP));
  /* 12668071 mov ebp, esp */
  EBP = (ESP);
  /* 12668073 push ecx */
  push32((uint32_t)(ECX));
  /* 12668074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668077 cmp dword ptr [eax*4 + 0x1268eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1268eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266807f jne 0x126680f2 */
  if (!C.zf) goto L_126680f2;
  /* 12668081 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12668086 push 0x1268c0ac */
  push32((uint32_t)(0x1268c0acu));
  /* 1266808b push 2 */
  push32((uint32_t)(0x2u));
  /* 1266808d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1266808f call 0x12664670 */
  push32(0x12668094u); f_12664670();
  /* 12668094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668097 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266809a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266809e jne 0x126680aa */
  if (!C.zf) goto L_126680aa;
  /* 126680a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 126680a2 call 0x126635e0 */
  push32(0x126680a7u); f_126635e0();
  /* 126680a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126680aa:;
  /* 126680aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 126680ac call 0x12668070 */
  push32(0x126680b1u); f_12668070();
  /* 126680b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126680b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126680b7 cmp dword ptr [ecx*4 + 0x1268eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1268eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126680bf jne 0x126680da */
  if (!C.zf) goto L_126680da;
  /* 126680c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126680c4 push edx */
  push32((uint32_t)(EDX));
  /* 126680c5 call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x126680cbu);
  /* 126680cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126680ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126680d1 mov dword ptr [eax*4 + 0x1268eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1268eb40), (ECX));
  /* 126680d8 jmp 0x126680e8 */
  goto L_126680e8;
L_126680da:;
  /* 126680da push 2 */
  push32((uint32_t)(0x2u));
  /* 126680dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126680df push edx */
  push32((uint32_t)(EDX));
  /* 126680e0 call 0x12665100 */
  push32(0x126680e5u); f_12665100();
  /* 126680e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126680e8:;
  /* 126680e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 126680ea call 0x12668110 */
  push32(0x126680efu); f_12668110();
  /* 126680ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126680f2:;
  /* 126680f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126680f5 mov ecx, dword ptr [eax*4 + 0x1268eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268eb40)));
  /* 126680fc push ecx */
  push32((uint32_t)(ECX));
  /* 126680fd call dword ptr [0x12693314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693314))), 0x12668103u);
  /* 12668103 mov esp, ebp */
  ESP = (EBP);
  /* 12668105 pop ebp */
  EBP = (pop32());
  /* 12668106 ret  */
  ESPCHK(0x12668070u, _esp0);
  ESP += 4; return;
}

/* FUN_10008110 @ 0x12668110 (22 bytes, 8 insns) */
void f_12668110(void) {
  FTRACE(0x12668110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668110 push ebp */
  push32((uint32_t)(EBP));
  /* 12668111 mov ebp, esp */
  EBP = (ESP);
  /* 12668113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668116 mov ecx, dword ptr [eax*4 + 0x1268eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1268eb40)));
  /* 1266811d push ecx */
  push32((uint32_t)(ECX));
  /* 1266811e call dword ptr [0x12693310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693310))), 0x12668124u);
  /* 12668124 pop ebp */
  EBP = (pop32());
  /* 12668125 ret  */
  ESPCHK(0x12668110u, _esp0);
  ESP += 4; return;
}

/* FUN_10008130 @ 0x12668130 (26 bytes, 10 insns) */
void f_12668130(void) {
  FTRACE(0x12668130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668130 push ebp */
  push32((uint32_t)(EBP));
  /* 12668131 mov ebp, esp */
  EBP = (ESP);
  /* 12668133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668136 push eax */
  push32((uint32_t)(EAX));
  /* 12668137 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668139 call dword ptr [0x12693318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693318))), 0x1266813fu);
  /* 1266813f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12668144 call dword ptr [0x1269334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269334c))), 0x1266814au);
  /* 1266814a pop ebp */
  EBP = (pop32());
  /* 1266814b ret  */
  ESPCHK(0x12668130u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12668150 (446 bytes, 130 insns) */
void f_12668150(void) {
  FTRACE(0x12668150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668150 push ebp */
  push32((uint32_t)(EBP));
  /* 12668151 mov ebp, esp */
  EBP = (ESP);
  /* 12668153 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668156 call 0x126640b0 */
  push32(0x1266815bu); f_126640b0();
  /* 1266815b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266815e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668161 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12668164 push ecx */
  push32((uint32_t)(ECX));
  /* 12668165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668168 push edx */
  push32((uint32_t)(EDX));
  /* 12668169 call 0x12668310 */
  push32(0x1266816eu); f_12668310();
  /* 1266816e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12668174 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668178 je 0x12668183 */
  if (C.zf) goto L_12668183;
  /* 1266817a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266817d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668181 jne 0x12668192 */
  if (!C.zf) goto L_12668192;
L_12668183:;
  /* 12668183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668186 push ecx */
  push32((uint32_t)(ECX));
  /* 12668187 call dword ptr [0x12693308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693308))), 0x1266818du);
  /* 1266818d jmp 0x1266830a */
  goto L_1266830a;
L_12668192:;
  /* 12668192 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12668195 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668199 jne 0x126681af */
  if (!C.zf) goto L_126681af;
  /* 1266819b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266819e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 126681a5 mov eax, 1 */
  EAX = (0x1u);
  /* 126681aa jmp 0x1266830a */
  goto L_1266830a;
L_126681af:;
  /* 126681af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126681b2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126681b6 jne 0x126681c0 */
  if (!C.zf) goto L_126681c0;
  /* 126681b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126681bb jmp 0x1266830a */
  goto L_1266830a;
L_126681c0:;
  /* 126681c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126681c3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 126681c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126681c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126681cc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 126681cf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 126681d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126681d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126681d8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 126681db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126681de cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126681e2 jne 0x126682e7 */
  if (!C.zf) goto L_126682e7;
  /* 126681e8 mov eax, dword ptr [0x1268ec78] */
  EAX = (r32((uint32_t)(0x1268ec78)));
  /* 126681ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 126681f0 jmp 0x126681fb */
  goto L_126681fb;
L_126681f2:;
  /* 126681f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126681f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126681f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_126681fb:;
  /* 126681fb mov edx, dword ptr [0x1268ec78] */
  EDX = (r32((uint32_t)(0x1268ec78)));
  /* 12668201 add edx, dword ptr [0x1268ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1268ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668207 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266820a jge 0x12668222 */
  if ((C.sf==C.of)) goto L_12668222;
  /* 1266820c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266820f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12668212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668215 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12668218 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12668220 jmp 0x126681f2 */
  goto L_126681f2;
L_12668222:;
  /* 12668222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668225 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12668228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266822b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266822e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668234 jne 0x12668245 */
  if (!C.zf) goto L_12668245;
  /* 12668236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668239 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12668240 jmp 0x126682cd */
  goto L_126682cd;
L_12668245:;
  /* 12668245 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12668248 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266824e jne 0x1266825c */
  if (!C.zf) goto L_1266825c;
  /* 12668250 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668253 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1266825a jmp 0x126682cd */
  goto L_126682cd;
L_1266825c:;
  /* 1266825c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266825f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668265 jne 0x12668273 */
  if (!C.zf) goto L_12668273;
  /* 12668267 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266826a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12668271 jmp 0x126682cd */
  goto L_126682cd;
L_12668273:;
  /* 12668273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12668276 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266827c jne 0x1266828a */
  if (!C.zf) goto L_1266828a;
  /* 1266827e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668281 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12668288 jmp 0x126682cd */
  goto L_126682cd;
L_1266828a:;
  /* 1266828a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266828d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668293 jne 0x126682a1 */
  if (!C.zf) goto L_126682a1;
  /* 12668295 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668298 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1266829f jmp 0x126682cd */
  goto L_126682cd;
L_126682a1:;
  /* 126682a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126682a4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126682aa jne 0x126682b8 */
  if (!C.zf) goto L_126682b8;
  /* 126682ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126682af mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 126682b6 jmp 0x126682cd */
  goto L_126682cd;
L_126682b8:;
  /* 126682b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126682bb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126682c1 jne 0x126682cd */
  if (!C.zf) goto L_126682cd;
  /* 126682c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126682c6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_126682cd:;
  /* 126682cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126682d0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 126682d3 push edx */
  push32((uint32_t)(EDX));
  /* 126682d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 126682d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x126682d9u);
  /* 126682d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126682dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126682df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126682e2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 126682e5 jmp 0x126682fe */
  goto L_126682fe;
L_126682e7:;
  /* 126682e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126682ea mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 126682f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126682f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126682f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126682f8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x126682fbu);
  /* 126682fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126682fe:;
  /* 126682fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668301 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12668304 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12668307 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1266830a:;
  /* 1266830a mov esp, ebp */
  ESP = (EBP);
  /* 1266830c pop ebp */
  EBP = (pop32());
  /* 1266830d ret  */
  ESPCHK(0x12668150u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x12668310 (89 bytes, 35 insns) */
void f_12668310(void) {
  FTRACE(0x12668310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668310 push ebp */
  push32((uint32_t)(EBP));
  /* 12668311 mov ebp, esp */
  EBP = (ESP);
  /* 12668313 push ecx */
  push32((uint32_t)(ECX));
  /* 12668314 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668317 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266831a:;
  /* 1266831a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266831d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266831f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668322 je 0x12668342 */
  if (C.zf) goto L_12668342;
  /* 12668324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668327 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266832a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266832d mov ecx, dword ptr [0x1268ec84] */
  ECX = (r32((uint32_t)(0x1268ec84)));
  /* 12668333 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12668336 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668339 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266833b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266833e jae 0x12668342 */
  if (!C.cf) goto L_12668342;
  /* 12668340 jmp 0x1266831a */
  goto L_1266831a;
L_12668342:;
  /* 12668342 mov eax, dword ptr [0x1268ec84] */
  EAX = (r32((uint32_t)(0x1268ec84)));
  /* 12668347 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266834a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266834d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266834f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668352 jae 0x1266835e */
  if (!C.cf) goto L_1266835e;
  /* 12668354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668357 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12668359 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266835c je 0x12668362 */
  if (C.zf) goto L_12668362;
L_1266835e:;
  /* 1266835e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12668360 jmp 0x12668365 */
  goto L_12668365;
L_12668362:;
  /* 12668362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12668365:;
  /* 12668365 mov esp, ebp */
  ESP = (EBP);
  /* 12668367 pop ebp */
  EBP = (pop32());
  /* 12668368 ret  */
  ESPCHK(0x12668310u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12668370 (48 bytes, 17 insns) */
void f_12668370(void) {
  FTRACE(0x12668370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668370 push ebp */
  push32((uint32_t)(EBP));
  /* 12668371 mov ebp, esp */
  EBP = (ESP);
  /* 12668373 push ecx */
  push32((uint32_t)(ECX));
  /* 12668374 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668376 call 0x12668070 */
  push32(0x1266837bu); f_12668070();
  /* 1266837b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266837e mov eax, dword ptr [0x12690794] */
  EAX = (r32((uint32_t)(0x12690794)));
  /* 12668383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12668386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668389 mov dword ptr [0x12690794], ecx */
  w32((uint32_t)(0x12690794), (ECX));
  /* 1266838f push 9 */
  push32((uint32_t)(0x9u));
  /* 12668391 call 0x12668110 */
  push32(0x12668396u); f_12668110();
  /* 12668396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266839c mov esp, ebp */
  ESP = (EBP);
  /* 1266839e pop ebp */
  EBP = (pop32());
  /* 1266839f ret  */
  ESPCHK(0x12668370u, _esp0);
  ESP += 4; return;
}

/* FUN_100083a0 @ 0x126683a0 (10 bytes, 5 insns) */
void f_126683a0(void) {
  FTRACE(0x126683a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126683a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126683a1 mov ebp, esp */
  EBP = (ESP);
  /* 126683a3 mov eax, dword ptr [0x12690794] */
  EAX = (r32((uint32_t)(0x12690794)));
  /* 126683a8 pop ebp */
  EBP = (pop32());
  /* 126683a9 ret  */
  ESPCHK(0x126683a0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x126683b0 (45 bytes, 19 insns) */
void f_126683b0(void) {
  FTRACE(0x126683b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126683b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126683b1 mov ebp, esp */
  EBP = (ESP);
  /* 126683b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126683b4 mov eax, dword ptr [0x12690794] */
  EAX = (r32((uint32_t)(0x12690794)));
  /* 126683b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126683bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126683c0 je 0x126683d0 */
  if (C.zf) goto L_126683d0;
  /* 126683c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126683c5 push ecx */
  push32((uint32_t)(ECX));
  /* 126683c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x126683c9u);
  /* 126683c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126683cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126683ce jne 0x126683d4 */
  if (!C.zf) goto L_126683d4;
L_126683d0:;
  /* 126683d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126683d2 jmp 0x126683d9 */
  goto L_126683d9;
L_126683d4:;
  /* 126683d4 mov eax, 1 */
  EAX = (0x1u);
L_126683d9:;
  /* 126683d9 mov esp, ebp */
  ESP = (EBP);
  /* 126683db pop ebp */
  EBP = (pop32());
  /* 126683dc ret  */
  ESPCHK(0x126683b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x126683e0 (88 bytes, 40 insns) */
void f_126683e0(void) {
  FTRACE(0x126683e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126683e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 126683e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 126683e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126683ea je 0x12668433 */
  if (C.zf) goto L_12668433;
  /* 126683ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126683ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 126683f2 push edi */
  push32((uint32_t)(EDI));
  /* 126683f3 mov edi, ecx */
  EDI = (ECX);
  /* 126683f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126683f8 jb 0x12668427 */
  if (C.cf) goto L_12668427;
  /* 126683fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 126683fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 126683ff je 0x12668409 */
  if (C.zf) goto L_12668409;
  /* 12668401 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12668403:;
  /* 12668403 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12668405 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12668406 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12668407 jne 0x12668403 */
  if (!C.zf) goto L_12668403;
L_12668409:;
  /* 12668409 mov ecx, eax */
  ECX = (EAX);
  /* 1266840b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1266840e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668410 mov ecx, eax */
  ECX = (EAX);
  /* 12668412 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12668415 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668417 mov ecx, edx */
  ECX = (EDX);
  /* 12668419 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266841c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266841f je 0x12668427 */
  if (C.zf) goto L_12668427;
  /* 12668421 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12668423 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12668425 je 0x1266842d */
  if (C.zf) goto L_1266842d;
L_12668427:;
  /* 12668427 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12668429 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1266842a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1266842b jne 0x12668427 */
  if (!C.zf) goto L_12668427;
L_1266842d:;
  /* 1266842d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12668431 pop edi */
  EDI = (pop32());
  /* 12668432 ret  */
  ESPCHK(0x126683e0u, _esp0);
  ESP += 4; return;
L_12668433:;
  /* 12668433 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12668437 ret  */
  ESPCHK(0x126683e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x12668440 (23 bytes, 10 insns) */
void f_12668440(void) {
  FTRACE(0x12668440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668440 push ebp */
  push32((uint32_t)(EBP));
  /* 12668441 mov ebp, esp */
  EBP = (ESP);
  /* 12668443 mov eax, dword ptr [0x12690790] */
  EAX = (r32((uint32_t)(0x12690790)));
  /* 12668448 push eax */
  push32((uint32_t)(EAX));
  /* 12668449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266844c push ecx */
  push32((uint32_t)(ECX));
  /* 1266844d call 0x12668460 */
  push32(0x12668452u); f_12668460();
  /* 12668452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668455 pop ebp */
  EBP = (pop32());
  /* 12668456 ret  */
  ESPCHK(0x12668440u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12668460 (87 bytes, 34 insns) */
void f_12668460(void) {
  FTRACE(0x12668460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668460 push ebp */
  push32((uint32_t)(EBP));
  /* 12668461 mov ebp, esp */
  EBP = (ESP);
  /* 12668463 push ecx */
  push32((uint32_t)(ECX));
  /* 12668464 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668468 jbe 0x1266846e */
  if ((C.cf||C.zf)) goto L_1266846e;
  /* 1266846a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266846c jmp 0x126684b3 */
  goto L_126684b3;
L_1266846e:;
  /* 1266846e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668472 ja 0x12668485 */
  if ((!C.cf&&!C.zf)) goto L_12668485;
  /* 12668474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668477 push eax */
  push32((uint32_t)(EAX));
  /* 12668478 call 0x126684c0 */
  push32(0x1266847du); f_126684c0();
  /* 1266847d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668480 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12668483 jmp 0x1266848c */
  goto L_1266848c;
L_12668485:;
  /* 12668485 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1266848c:;
  /* 1266848c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668490 jne 0x12668498 */
  if (!C.zf) goto L_12668498;
  /* 12668492 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668496 jne 0x1266849d */
  if (!C.zf) goto L_1266849d;
L_12668498:;
  /* 12668498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266849b jmp 0x126684b3 */
  goto L_126684b3;
L_1266849d:;
  /* 1266849d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126684a0 push ecx */
  push32((uint32_t)(ECX));
  /* 126684a1 call 0x126683b0 */
  push32(0x126684a6u); f_126683b0();
  /* 126684a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126684a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126684ab jne 0x126684b1 */
  if (!C.zf) goto L_126684b1;
  /* 126684ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126684af jmp 0x126684b3 */
  goto L_126684b3;
L_126684b1:;
  /* 126684b1 jmp 0x1266846e */
  goto L_1266846e;
L_126684b3:;
  /* 126684b3 mov esp, ebp */
  ESP = (EBP);
  /* 126684b5 pop ebp */
  EBP = (pop32());
  /* 126684b6 ret  */
  ESPCHK(0x12668460u, _esp0);
  ESP += 4; return;
}

/* FUN_100084c0 @ 0x126684c0 (109 bytes, 37 insns) */
void f_126684c0(void) {
  FTRACE(0x126684c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126684c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126684c1 mov ebp, esp */
  EBP = (ESP);
  /* 126684c3 push ecx */
  push32((uint32_t)(ECX));
  /* 126684c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126684c7 cmp eax, dword ptr [0x1268ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126684cd ja 0x126684fd */
  if ((!C.cf&&!C.zf)) goto L_126684fd;
  /* 126684cf push 9 */
  push32((uint32_t)(0x9u));
  /* 126684d1 call 0x12668070 */
  push32(0x126684d6u); f_12668070();
  /* 126684d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126684d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126684dc push ecx */
  push32((uint32_t)(ECX));
  /* 126684dd call 0x12669000 */
  push32(0x126684e2u); f_12669000();
  /* 126684e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126684e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126684e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 126684ea call 0x12668110 */
  push32(0x126684efu); f_12668110();
  /* 126684ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126684f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126684f6 je 0x126684fd */
  if (C.zf) goto L_126684fd;
  /* 126684f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126684fb jmp 0x12668529 */
  goto L_12668529;
L_126684fd:;
  /* 126684fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668501 jne 0x1266850a */
  if (!C.zf) goto L_1266850a;
  /* 12668503 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1266850a:;
  /* 1266850a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266850d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668510 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12668513 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12668516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668519 push eax */
  push32((uint32_t)(EAX));
  /* 1266851a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266851c mov ecx, dword ptr [0x12691f4c] */
  ECX = (r32((uint32_t)(0x12691f4c)));
  /* 12668522 push ecx */
  push32((uint32_t)(ECX));
  /* 12668523 call dword ptr [0x12693304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693304))), 0x12668529u);
L_12668529:;
  /* 12668529 mov esp, ebp */
  ESP = (EBP);
  /* 1266852b pop ebp */
  EBP = (pop32());
  /* 1266852c ret  */
  ESPCHK(0x126684c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x12668530 (10 bytes, 5 insns) */
void f_12668530(void) {
  FTRACE(0x12668530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668530 push ebp */
  push32((uint32_t)(EBP));
  /* 12668531 mov ebp, esp */
  EBP = (ESP);
  /* 12668533 mov eax, 1 */
  EAX = (0x1u);
  /* 12668538 pop ebp */
  EBP = (pop32());
  /* 12668539 ret  */
  ESPCHK(0x12668530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008540 @ 0x12668540 (173 bytes, 59 insns) */
void f_12668540(void) {
  FTRACE(0x12668540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668540 push ebp */
  push32((uint32_t)(EBP));
  /* 12668541 mov ebp, esp */
  EBP = (ESP);
  /* 12668543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668546 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266854a jbe 0x12668553 */
  if ((C.cf||C.zf)) goto L_12668553;
  /* 1266854c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266854e jmp 0x126685e9 */
  goto L_126685e9;
L_12668553:;
  /* 12668553 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668555 call 0x12668070 */
  push32(0x1266855au); f_12668070();
  /* 1266855a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266855d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668560 push eax */
  push32((uint32_t)(EAX));
  /* 12668561 call 0x12668970 */
  push32(0x12668566u); f_12668970();
  /* 12668566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668569 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266856c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668570 je 0x126685b1 */
  if (C.zf) goto L_126685b1;
  /* 12668572 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12668579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266857c cmp ecx, dword ptr [0x1268ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1268ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668582 ja 0x126685a2 */
  if ((!C.cf&&!C.zf)) goto L_126685a2;
  /* 12668584 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668587 push edx */
  push32((uint32_t)(EDX));
  /* 12668588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266858b push eax */
  push32((uint32_t)(EAX));
  /* 1266858c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266858f push ecx */
  push32((uint32_t)(ECX));
  /* 12668590 call 0x12669840 */
  push32(0x12668595u); f_12669840();
  /* 12668595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266859a je 0x126685a2 */
  if (C.zf) goto L_126685a2;
  /* 1266859c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266859f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_126685a2:;
  /* 126685a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 126685a4 call 0x12668110 */
  push32(0x126685a9u); f_12668110();
  /* 126685a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126685ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126685af jmp 0x126685e9 */
  goto L_126685e9;
L_126685b1:;
  /* 126685b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 126685b3 call 0x12668110 */
  push32(0x126685b8u); f_12668110();
  /* 126685b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126685bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126685bf jne 0x126685c8 */
  if (!C.zf) goto L_126685c8;
  /* 126685c1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_126685c8:;
  /* 126685c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126685cb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126685ce and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 126685d0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 126685d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126685d6 push ecx */
  push32((uint32_t)(ECX));
  /* 126685d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126685da push edx */
  push32((uint32_t)(EDX));
  /* 126685db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 126685dd mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 126685e2 push eax */
  push32((uint32_t)(EAX));
  /* 126685e3 call dword ptr [0x1269330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269330c))), 0x126685e9u);
L_126685e9:;
  /* 126685e9 mov esp, ebp */
  ESP = (EBP);
  /* 126685eb pop ebp */
  EBP = (pop32());
  /* 126685ec ret  */
  ESPCHK(0x12668540u, _esp0);
  ESP += 4; return;
}

