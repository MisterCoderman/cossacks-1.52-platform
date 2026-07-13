#include "recomp.h"

/* thunk_FUN_10002740 @ 0x10b01005 (5 bytes, 1 insns) */
void f_10b01005(void) {
  FTRACE(0x10b01005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b01005 jmp 0x10b02740 */
  f_10b02740(); return;
}

/* OnInit @ 0x10b0100a (5 bytes, 1 insns) */
void f_10b0100a(void) {
  FTRACE(0x10b0100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0100a jmp 0x10b010a0 */
  f_10b010a0(); return;
}

/* thunk_FUN_10002790 @ 0x10b0100f (5 bytes, 1 insns) */
void f_10b0100f(void) {
  FTRACE(0x10b0100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0100f jmp 0x10b02790 */
  f_10b02790(); return;
}

/* thunk_FUN_10001040 @ 0x10b01014 (5 bytes, 1 insns) */
void f_10b01014(void) {
  FTRACE(0x10b01014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b01014 jmp 0x10b01040 */
  f_10b01040(); return;
}

/* ProcessScenary @ 0x10b01019 (5 bytes, 1 insns) */
void f_10b01019(void) {
  FTRACE(0x10b01019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b01019 jmp 0x10b014b0 */
  f_10b014b0(); return;
}

/* FUN_10001040 @ 0x10b01040 (67 bytes, 26 insns) */
void f_10b01040(void) {
  FTRACE(0x10b01040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b01040 push ebp */
  push32((uint32_t)(EBP));
  /* 10b01041 mov ebp, esp */
  EBP = (ESP);
  /* 10b01043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b01046 push ebx */
  push32((uint32_t)(EBX));
  /* 10b01047 push esi */
  push32((uint32_t)(ESI));
  /* 10b01048 push edi */
  push32((uint32_t)(EDI));
  /* 10b01049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10b0104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10b01051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b01056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b01058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01062 je 0x10b01066 */
  if (C.zf) goto L_10b01066;
  /* 10b01064 jmp 0x10b0106b */
  goto L_10b0106b;
L_10b01066:;
  /* 10b01066 call 0x10b0100a */
  push32(0x10b0106bu); f_10b0100a();
L_10b0106b:;
  /* 10b0106b mov eax, 1 */
  EAX = (0x1u);
  /* 10b01070 pop edi */
  EDI = (pop32());
  /* 10b01071 pop esi */
  ESI = (pop32());
  /* 10b01072 pop ebx */
  EBX = (pop32());
  /* 10b01073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01078 call 0x10b028c0 */
  push32(0x10b0107du); f_10b028c0();
  /* 10b0107d mov esp, ebp */
  ESP = (EBP);
  /* 10b0107f pop ebp */
  EBP = (pop32());
  /* 10b01080 ret 0xc */
  ESPCHK(0x10b01040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x10b010a0 (829 bytes, 222 insns) */
void f_10b010a0(void) {
  FTRACE(0x10b010a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b010a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b010a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b010a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b010a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b010a7 push esi */
  push32((uint32_t)(ESI));
  /* 10b010a8 push edi */
  push32((uint32_t)(EDI));
  /* 10b010a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b010ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b010b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b010b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b010b8 mov esi, esp */
  ESI = (ESP);
  /* 10b010ba push 0x10b2a118 */
  push32((uint32_t)(0x10b2a118u));
  /* 10b010bf push 0x10b2f470 */
  push32((uint32_t)(0x10b2f470u));
  /* 10b010c4 call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b010cau);
  /* 10b010ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b010cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b010cf call 0x10b028c0 */
  push32(0x10b010d4u); f_10b028c0();
  /* 10b010d4 mov esi, esp */
  ESI = (ESP);
  /* 10b010d6 push 0x10b2a110 */
  push32((uint32_t)(0x10b2a110u));
  /* 10b010db push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b010e0 call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b010e6u);
  /* 10b010e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b010e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b010eb call 0x10b028c0 */
  push32(0x10b010f0u); f_10b028c0();
  /* 10b010f0 mov esi, esp */
  ESI = (ESP);
  /* 10b010f2 push 0x10b2a108 */
  push32((uint32_t)(0x10b2a108u));
  /* 10b010f7 push 0x10b2f458 */
  push32((uint32_t)(0x10b2f458u));
  /* 10b010fc call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b01102u);
  /* 10b01102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01107 call 0x10b028c0 */
  push32(0x10b0110cu); f_10b028c0();
  /* 10b0110c mov esi, esp */
  ESI = (ESP);
  /* 10b0110e push 0x10b2a100 */
  push32((uint32_t)(0x10b2a100u));
  /* 10b01113 push 0x10b2f468 */
  push32((uint32_t)(0x10b2f468u));
  /* 10b01118 call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b0111eu);
  /* 10b0111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01123 call 0x10b028c0 */
  push32(0x10b01128u); f_10b028c0();
  /* 10b01128 mov esi, esp */
  ESI = (ESP);
  /* 10b0112a push 0x10b2a0f8 */
  push32((uint32_t)(0x10b2a0f8u));
  /* 10b0112f push 0x10b2f460 */
  push32((uint32_t)(0x10b2f460u));
  /* 10b01134 call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b0113au);
  /* 10b0113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0113f call 0x10b028c0 */
  push32(0x10b01144u); f_10b028c0();
  /* 10b01144 mov esi, esp */
  ESI = (ESP);
  /* 10b01146 push 0x10b2a0f0 */
  push32((uint32_t)(0x10b2a0f0u));
  /* 10b0114b push 0x10b2f480 */
  push32((uint32_t)(0x10b2f480u));
  /* 10b01150 call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b01156u);
  /* 10b01156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0115b call 0x10b028c0 */
  push32(0x10b01160u); f_10b028c0();
  /* 10b01160 mov esi, esp */
  ESI = (ESP);
  /* 10b01162 push 0x10b2a0e8 */
  push32((uint32_t)(0x10b2a0e8u));
  /* 10b01167 push 0x10b2f488 */
  push32((uint32_t)(0x10b2f488u));
  /* 10b0116c call dword ptr [0x10b32480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32480))), 0x10b01172u);
  /* 10b01172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01177 call 0x10b028c0 */
  push32(0x10b0117cu); f_10b028c0();
  /* 10b0117c mov esi, esp */
  ESI = (ESP);
  /* 10b0117e push 0x10b2a0e0 */
  push32((uint32_t)(0x10b2a0e0u));
  /* 10b01183 push 0x10b2f400 */
  push32((uint32_t)(0x10b2f400u));
  /* 10b01188 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b0118eu);
  /* 10b0118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01193 call 0x10b028c0 */
  push32(0x10b01198u); f_10b028c0();
  /* 10b01198 mov esi, esp */
  ESI = (ESP);
  /* 10b0119a push 0x10b2a0d8 */
  push32((uint32_t)(0x10b2a0d8u));
  /* 10b0119f push 0x10b2f410 */
  push32((uint32_t)(0x10b2f410u));
  /* 10b011a4 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b011aau);
  /* 10b011aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b011ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b011af call 0x10b028c0 */
  push32(0x10b011b4u); f_10b028c0();
  /* 10b011b4 mov esi, esp */
  ESI = (ESP);
  /* 10b011b6 push 0x10b2a0d0 */
  push32((uint32_t)(0x10b2a0d0u));
  /* 10b011bb push 0x10b2f408 */
  push32((uint32_t)(0x10b2f408u));
  /* 10b011c0 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b011c6u);
  /* 10b011c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b011c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b011cb call 0x10b028c0 */
  push32(0x10b011d0u); f_10b028c0();
  /* 10b011d0 mov esi, esp */
  ESI = (ESP);
  /* 10b011d2 push 0x10b2a0c8 */
  push32((uint32_t)(0x10b2a0c8u));
  /* 10b011d7 push 0x10b2f420 */
  push32((uint32_t)(0x10b2f420u));
  /* 10b011dc call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b011e2u);
  /* 10b011e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b011e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b011e7 call 0x10b028c0 */
  push32(0x10b011ecu); f_10b028c0();
  /* 10b011ec mov esi, esp */
  ESI = (ESP);
  /* 10b011ee push 0x10b2a0c0 */
  push32((uint32_t)(0x10b2a0c0u));
  /* 10b011f3 push 0x10b2f418 */
  push32((uint32_t)(0x10b2f418u));
  /* 10b011f8 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b011feu);
  /* 10b011fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01203 call 0x10b028c0 */
  push32(0x10b01208u); f_10b028c0();
  /* 10b01208 mov esi, esp */
  ESI = (ESP);
  /* 10b0120a push 0x10b2a0b8 */
  push32((uint32_t)(0x10b2a0b8u));
  /* 10b0120f push 0x10b2f430 */
  push32((uint32_t)(0x10b2f430u));
  /* 10b01214 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b0121au);
  /* 10b0121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0121f call 0x10b028c0 */
  push32(0x10b01224u); f_10b028c0();
  /* 10b01224 mov esi, esp */
  ESI = (ESP);
  /* 10b01226 push 0x10b2a0ac */
  push32((uint32_t)(0x10b2a0acu));
  /* 10b0122b push 0x10b2f4b8 */
  push32((uint32_t)(0x10b2f4b8u));
  /* 10b01230 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b01236u);
  /* 10b01236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0123b call 0x10b028c0 */
  push32(0x10b01240u); f_10b028c0();
  /* 10b01240 mov esi, esp */
  ESI = (ESP);
  /* 10b01242 push 0x10b2a0a4 */
  push32((uint32_t)(0x10b2a0a4u));
  /* 10b01247 push 0x10b2f428 */
  push32((uint32_t)(0x10b2f428u));
  /* 10b0124c call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b01252u);
  /* 10b01252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01257 call 0x10b028c0 */
  push32(0x10b0125cu); f_10b028c0();
  /* 10b0125c mov esi, esp */
  ESI = (ESP);
  /* 10b0125e push 0x10b2a09c */
  push32((uint32_t)(0x10b2a09cu));
  /* 10b01263 push 0x10b2f440 */
  push32((uint32_t)(0x10b2f440u));
  /* 10b01268 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b0126eu);
  /* 10b0126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01273 call 0x10b028c0 */
  push32(0x10b01278u); f_10b028c0();
  /* 10b01278 mov esi, esp */
  ESI = (ESP);
  /* 10b0127a push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b0127f push 0x10b2f438 */
  push32((uint32_t)(0x10b2f438u));
  /* 10b01284 call dword ptr [0x10b32490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32490))), 0x10b0128au);
  /* 10b0128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0128f call 0x10b028c0 */
  push32(0x10b01294u); f_10b028c0();
  /* 10b01294 mov esi, esp */
  ESI = (ESP);
  /* 10b01296 push 0x10b2a080 */
  push32((uint32_t)(0x10b2a080u));
  /* 10b0129b push 0x10b2f3f8 */
  push32((uint32_t)(0x10b2f3f8u));
  /* 10b012a0 call dword ptr [0x10b32494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32494))), 0x10b012a6u);
  /* 10b012a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b012a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b012ab call 0x10b028c0 */
  push32(0x10b012b0u); f_10b028c0();
  /* 10b012b0 mov esi, esp */
  ESI = (ESP);
  /* 10b012b2 push 0x10b2a070 */
  push32((uint32_t)(0x10b2a070u));
  /* 10b012b7 push 0x10b2f448 */
  push32((uint32_t)(0x10b2f448u));
  /* 10b012bc call dword ptr [0x10b32494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32494))), 0x10b012c2u);
  /* 10b012c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b012c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b012c7 call 0x10b028c0 */
  push32(0x10b012ccu); f_10b028c0();
  /* 10b012cc mov esi, esp */
  ESI = (ESP);
  /* 10b012ce push 0x10b2a060 */
  push32((uint32_t)(0x10b2a060u));
  /* 10b012d3 push 0x10b2f450 */
  push32((uint32_t)(0x10b2f450u));
  /* 10b012d8 call dword ptr [0x10b32494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32494))), 0x10b012deu);
  /* 10b012de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b012e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b012e3 call 0x10b028c0 */
  push32(0x10b012e8u); f_10b028c0();
  /* 10b012e8 mov esi, esp */
  ESI = (ESP);
  /* 10b012ea push 0x10b2a050 */
  push32((uint32_t)(0x10b2a050u));
  /* 10b012ef push 0x10b2f3f0 */
  push32((uint32_t)(0x10b2f3f0u));
  /* 10b012f4 call dword ptr [0x10b32494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32494))), 0x10b012fau);
  /* 10b012fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b012fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b012ff call 0x10b028c0 */
  push32(0x10b01304u); f_10b028c0();
  /* 10b01304 mov esi, esp */
  ESI = (ESP);
  /* 10b01306 push 0x10b2a03c */
  push32((uint32_t)(0x10b2a03cu));
  /* 10b0130b push 0x10b2f4a0 */
  push32((uint32_t)(0x10b2f4a0u));
  /* 10b01310 call dword ptr [0x10b32494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32494))), 0x10b01316u);
  /* 10b01316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0131b call 0x10b028c0 */
  push32(0x10b01320u); f_10b028c0();
  /* 10b01320 mov esi, esp */
  ESI = (ESP);
  /* 10b01322 push 0x10b2a030 */
  push32((uint32_t)(0x10b2a030u));
  /* 10b01327 push 0x10b2f490 */
  push32((uint32_t)(0x10b2f490u));
  /* 10b0132c call dword ptr [0x10b3248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3248c))), 0x10b01332u);
  /* 10b01332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01337 call 0x10b028c0 */
  push32(0x10b0133cu); f_10b028c0();
  /* 10b0133c mov esi, esp */
  ESI = (ESP);
  /* 10b0133e push 8 */
  push32((uint32_t)(0x8u));
  /* 10b01340 push 0x10b2f4a8 */
  push32((uint32_t)(0x10b2f4a8u));
  /* 10b01345 call dword ptr [0x10b3249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3249c))), 0x10b0134bu);
  /* 10b0134b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01350 call 0x10b028c0 */
  push32(0x10b01355u); f_10b028c0();
  /* 10b01355 mov esi, esp */
  ESI = (ESP);
  /* 10b01357 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b01359 push 0x10b2f4b0 */
  push32((uint32_t)(0x10b2f4b0u));
  /* 10b0135e call dword ptr [0x10b3249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3249c))), 0x10b01364u);
  /* 10b01364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01367 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01369 call 0x10b028c0 */
  push32(0x10b0136eu); f_10b028c0();
  /* 10b0136e mov esi, esp */
  ESI = (ESP);
  /* 10b01370 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b01372 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01374 call dword ptr [0x10b324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b324a0))), 0x10b0137au);
  /* 10b0137a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0137d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0137f call 0x10b028c0 */
  push32(0x10b01384u); f_10b028c0();
  /* 10b01384 mov esi, esp */
  ESI = (ESP);
  /* 10b01386 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b01388 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b0138a call dword ptr [0x10b324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b324a0))), 0x10b01390u);
  /* 10b01390 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01395 call 0x10b028c0 */
  push32(0x10b0139au); f_10b028c0();
  /* 10b0139a mov esi, esp */
  ESI = (ESP);
  /* 10b0139c push 0x10b2a024 */
  push32((uint32_t)(0x10b2a024u));
  /* 10b013a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b013a3 call dword ptr [0x10b32498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32498))), 0x10b013a9u);
  /* 10b013a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b013ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b013ae call 0x10b028c0 */
  push32(0x10b013b3u); f_10b028c0();
  /* 10b013b3 mov esi, esp */
  ESI = (ESP);
  /* 10b013b5 push 0x10b2a01c */
  push32((uint32_t)(0x10b2a01cu));
  /* 10b013ba push 4 */
  push32((uint32_t)(0x4u));
  /* 10b013bc call dword ptr [0x10b32498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32498))), 0x10b013c2u);
  /* 10b013c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b013c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b013c7 call 0x10b028c0 */
  push32(0x10b013ccu); f_10b028c0();
  /* 10b013cc pop edi */
  EDI = (pop32());
  /* 10b013cd pop esi */
  ESI = (pop32());
  /* 10b013ce pop ebx */
  EBX = (pop32());
  /* 10b013cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b013d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b013d4 call 0x10b028c0 */
  push32(0x10b013d9u); f_10b028c0();
  /* 10b013d9 mov esp, ebp */
  ESP = (EBP);
  /* 10b013db pop ebp */
  EBP = (pop32());
  /* 10b013dc ret  */
  ESPCHK(0x10b010a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014b0 @ 0x10b014b0 (3801 bytes, 1097 insns) */
void f_10b014b0(void) {
  FTRACE(0x10b014b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b014b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b014b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b014b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b014b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b014b7 push esi */
  push32((uint32_t)(ESI));
  /* 10b014b8 push edi */
  push32((uint32_t)(EDI));
  /* 10b014b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b014bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b014c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b014c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b014c8 mov esi, esp */
  ESI = (ESP);
  /* 10b014ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10b014cc call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b014d2u);
  /* 10b014d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b014d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b014d7 call 0x10b028c0 */
  push32(0x10b014dcu); f_10b028c0();
  /* 10b014dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b014e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b014e3 je 0x10b01795 */
  if (C.zf) goto L_10b01795;
  /* 10b014e9 mov esi, esp */
  ESI = (ESP);
  /* 10b014eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b014ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10b014ef call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b014f5u);
  /* 10b014f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b014f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b014fa call 0x10b028c0 */
  push32(0x10b014ffu); f_10b028c0();
  /* 10b014ff mov esi, esp */
  ESI = (ESP);
  /* 10b01501 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b01506 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b01508 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0150a call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b01510u);
  /* 10b01510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01515 call 0x10b028c0 */
  push32(0x10b0151au); f_10b028c0();
  /* 10b0151a mov esi, esp */
  ESI = (ESP);
  /* 10b0151c push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10b01521 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01523 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01525 call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b0152bu);
  /* 10b0152b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0152e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01530 call 0x10b028c0 */
  push32(0x10b01535u); f_10b028c0();
  /* 10b01535 mov esi, esp */
  ESI = (ESP);
  /* 10b01537 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01539 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0153b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0153d call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b01543u);
  /* 10b01543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01548 call 0x10b028c0 */
  push32(0x10b0154du); f_10b028c0();
  /* 10b0154d mov esi, esp */
  ESI = (ESP);
  /* 10b0154f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01551 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01555 call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b0155bu);
  /* 10b0155b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0155e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01560 call 0x10b028c0 */
  push32(0x10b01565u); f_10b028c0();
  /* 10b01565 mov esi, esp */
  ESI = (ESP);
  /* 10b01567 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b0156c push 5 */
  push32((uint32_t)(0x5u));
  /* 10b0156e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01570 call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b01576u);
  /* 10b01576 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01579 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0157b call 0x10b028c0 */
  push32(0x10b01580u); f_10b028c0();
  /* 10b01580 mov esi, esp */
  ESI = (ESP);
  /* 10b01582 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10b01587 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b01589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0158b call dword ptr [0x10b32420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32420))), 0x10b01591u);
  /* 10b01591 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01596 call 0x10b028c0 */
  push32(0x10b0159bu); f_10b028c0();
  /* 10b0159b mov esi, esp */
  ESI = (ESP);
  /* 10b0159d push 0x10b2a2ac */
  push32((uint32_t)(0x10b2a2acu));
  /* 10b015a2 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b015a8u);
  /* 10b015a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b015ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b015ad call 0x10b028c0 */
  push32(0x10b015b2u); f_10b028c0();
  /* 10b015b2 mov esi, esp */
  ESI = (ESP);
  /* 10b015b4 push 0x10b2a2a0 */
  push32((uint32_t)(0x10b2a2a0u));
  /* 10b015b9 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b015bfu);
  /* 10b015bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b015c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b015c4 call 0x10b028c0 */
  push32(0x10b015c9u); f_10b028c0();
  /* 10b015c9 mov esi, esp */
  ESI = (ESP);
  /* 10b015cb push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b015cd call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b015d3u);
  /* 10b015d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b015d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b015d8 call 0x10b028c0 */
  push32(0x10b015ddu); f_10b028c0();
  /* 10b015dd mov esi, esp */
  ESI = (ESP);
  /* 10b015df push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b015e1 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b015e7u);
  /* 10b015e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b015ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b015ec call 0x10b028c0 */
  push32(0x10b015f1u); f_10b028c0();
  /* 10b015f1 mov esi, esp */
  ESI = (ESP);
  /* 10b015f3 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10b015f5 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b015fbu);
  /* 10b015fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b015fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01600 call 0x10b028c0 */
  push32(0x10b01605u); f_10b028c0();
  /* 10b01605 mov esi, esp */
  ESI = (ESP);
  /* 10b01607 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10b01609 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b0160fu);
  /* 10b0160f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01614 call 0x10b028c0 */
  push32(0x10b01619u); f_10b028c0();
  /* 10b01619 mov esi, esp */
  ESI = (ESP);
  /* 10b0161b push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10b0161d call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01623u);
  /* 10b01623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01628 call 0x10b028c0 */
  push32(0x10b0162du); f_10b028c0();
  /* 10b0162d mov esi, esp */
  ESI = (ESP);
  /* 10b0162f push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b01631 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01637u);
  /* 10b01637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0163a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0163c call 0x10b028c0 */
  push32(0x10b01641u); f_10b028c0();
  /* 10b01641 mov esi, esp */
  ESI = (ESP);
  /* 10b01643 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10b01645 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b0164bu);
  /* 10b0164b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0164e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01650 call 0x10b028c0 */
  push32(0x10b01655u); f_10b028c0();
  /* 10b01655 mov esi, esp */
  ESI = (ESP);
  /* 10b01657 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b01659 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b0165fu);
  /* 10b0165f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01664 call 0x10b028c0 */
  push32(0x10b01669u); f_10b028c0();
  /* 10b01669 mov esi, esp */
  ESI = (ESP);
  /* 10b0166b push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10b0166d call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01673u);
  /* 10b01673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01678 call 0x10b028c0 */
  push32(0x10b0167du); f_10b028c0();
  /* 10b0167d mov esi, esp */
  ESI = (ESP);
  /* 10b0167f push 0x10b2a288 */
  push32((uint32_t)(0x10b2a288u));
  /* 10b01684 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b01689 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b0168fu);
  /* 10b0168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01694 call 0x10b028c0 */
  push32(0x10b01699u); f_10b028c0();
  /* 10b01699 mov esi, esp */
  ESI = (ESP);
  /* 10b0169b push 0x10b2a26c */
  push32((uint32_t)(0x10b2a26cu));
  /* 10b016a0 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b016a5 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b016abu);
  /* 10b016ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b016ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b016b0 call 0x10b028c0 */
  push32(0x10b016b5u); f_10b028c0();
  /* 10b016b5 mov esi, esp */
  ESI = (ESP);
  /* 10b016b7 push 0x10b2a250 */
  push32((uint32_t)(0x10b2a250u));
  /* 10b016bc push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b016c1 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b016c7u);
  /* 10b016c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b016ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b016cc call 0x10b028c0 */
  push32(0x10b016d1u); f_10b028c0();
  /* 10b016d1 mov esi, esp */
  ESI = (ESP);
  /* 10b016d3 push 0x10b2a234 */
  push32((uint32_t)(0x10b2a234u));
  /* 10b016d8 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b016dd call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b016e3u);
  /* 10b016e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b016e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b016e8 call 0x10b028c0 */
  push32(0x10b016edu); f_10b028c0();
  /* 10b016ed mov esi, esp */
  ESI = (ESP);
  /* 10b016ef push 0x10b2a218 */
  push32((uint32_t)(0x10b2a218u));
  /* 10b016f4 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b016f9 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b016ffu);
  /* 10b016ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01704 call 0x10b028c0 */
  push32(0x10b01709u); f_10b028c0();
  /* 10b01709 mov esi, esp */
  ESI = (ESP);
  /* 10b0170b push 0x10b2a200 */
  push32((uint32_t)(0x10b2a200u));
  /* 10b01710 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b01715 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b0171bu);
  /* 10b0171b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0171e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01720 call 0x10b028c0 */
  push32(0x10b01725u); f_10b028c0();
  /* 10b01725 mov esi, esp */
  ESI = (ESP);
  /* 10b01727 push 0x10b2a1e4 */
  push32((uint32_t)(0x10b2a1e4u));
  /* 10b0172c push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b01731 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b01737u);
  /* 10b01737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0173a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0173c call 0x10b028c0 */
  push32(0x10b01741u); f_10b028c0();
  /* 10b01741 mov esi, esp */
  ESI = (ESP);
  /* 10b01743 push 0x10b2a1c8 */
  push32((uint32_t)(0x10b2a1c8u));
  /* 10b01748 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b0174d call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b01753u);
  /* 10b01753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01756 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01758 call 0x10b028c0 */
  push32(0x10b0175du); f_10b028c0();
  /* 10b0175d mov esi, esp */
  ESI = (ESP);
  /* 10b0175f push 0x10b2a1ac */
  push32((uint32_t)(0x10b2a1acu));
  /* 10b01764 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b01769 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b0176fu);
  /* 10b0176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01774 call 0x10b028c0 */
  push32(0x10b01779u); f_10b028c0();
  /* 10b01779 mov esi, esp */
  ESI = (ESP);
  /* 10b0177b push 0x10b2a190 */
  push32((uint32_t)(0x10b2a190u));
  /* 10b01780 push 0x10b2a094 */
  push32((uint32_t)(0x10b2a094u));
  /* 10b01785 call dword ptr [0x10b3242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3242c))), 0x10b0178bu);
  /* 10b0178b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01790 call 0x10b028c0 */
  push32(0x10b01795u); f_10b028c0();
L_10b01795:;
  /* 10b01795 mov esi, esp */
  ESI = (ESP);
  /* 10b01797 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01799 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b0179fu);
  /* 10b0179f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b017a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b017a4 call 0x10b028c0 */
  push32(0x10b017a9u); f_10b028c0();
  /* 10b017a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b017ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b017b0 je 0x10b01936 */
  if (C.zf) goto L_10b01936;
  /* 10b017b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b017b8 push 0x10b2f3f8 */
  push32((uint32_t)(0x10b2f3f8u));
  /* 10b017bd call 0x10b0100f */
  push32(0x10b017c2u); f_10b0100f();
  /* 10b017c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b017c5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b017c8 jne 0x10b01936 */
  if (!C.zf) goto L_10b01936;
  /* 10b017ce mov esi, esp */
  ESI = (ESP);
  /* 10b017d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b017d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b017d4 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b017dau);
  /* 10b017da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b017dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b017df call 0x10b028c0 */
  push32(0x10b017e4u); f_10b028c0();
  /* 10b017e4 mov esi, esp */
  ESI = (ESP);
  /* 10b017e6 push 0x10b2a188 */
  push32((uint32_t)(0x10b2a188u));
  /* 10b017eb call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b017f1u);
  /* 10b017f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b017f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b017f6 call 0x10b028c0 */
  push32(0x10b017fbu); f_10b028c0();
  /* 10b017fb mov esi, esp */
  ESI = (ESP);
  /* 10b017fd push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10b017ff call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01805u);
  /* 10b01805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0180a call 0x10b028c0 */
  push32(0x10b0180fu); f_10b028c0();
  /* 10b0180f mov esi, esp */
  ESI = (ESP);
  /* 10b01811 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10b01816 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b01818 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0181a call dword ptr [0x10b32440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32440))), 0x10b01820u);
  /* 10b01820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01825 call 0x10b028c0 */
  push32(0x10b0182au); f_10b028c0();
  /* 10b0182a mov esi, esp */
  ESI = (ESP);
  /* 10b0182c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0182e push 0x10b2f410 */
  push32((uint32_t)(0x10b2f410u));
  /* 10b01833 call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01839u);
  /* 10b01839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0183c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0183e call 0x10b028c0 */
  push32(0x10b01843u); f_10b028c0();
  /* 10b01843 mov esi, esp */
  ESI = (ESP);
  /* 10b01845 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01847 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01849 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b0184e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01850 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01856u);
  /* 10b01856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0185b call 0x10b028c0 */
  push32(0x10b01860u); f_10b028c0();
  /* 10b01860 mov esi, esp */
  ESI = (ESP);
  /* 10b01862 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01864 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01866 push 0x10b2f458 */
  push32((uint32_t)(0x10b2f458u));
  /* 10b0186b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0186d call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01873u);
  /* 10b01873 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01878 call 0x10b028c0 */
  push32(0x10b0187du); f_10b028c0();
  /* 10b0187d mov esi, esp */
  ESI = (ESP);
  /* 10b0187f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01883 push 0x10b2f468 */
  push32((uint32_t)(0x10b2f468u));
  /* 10b01888 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0188a call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01890u);
  /* 10b01890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01895 call 0x10b028c0 */
  push32(0x10b0189au); f_10b028c0();
  /* 10b0189a mov esi, esp */
  ESI = (ESP);
  /* 10b0189c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0189e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b018a0 push 0x10b2f460 */
  push32((uint32_t)(0x10b2f460u));
  /* 10b018a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b018a7 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b018adu);
  /* 10b018ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b018b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b018b2 call 0x10b028c0 */
  push32(0x10b018b7u); f_10b028c0();
  /* 10b018b7 mov esi, esp */
  ESI = (ESP);
  /* 10b018b9 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10b018be push 0x10b2f470 */
  push32((uint32_t)(0x10b2f470u));
  /* 10b018c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b018c5 push 0x10b2f3f0 */
  push32((uint32_t)(0x10b2f3f0u));
  /* 10b018ca push 0x10b2f490 */
  push32((uint32_t)(0x10b2f490u));
  /* 10b018cf push 0x10b2f4a8 */
  push32((uint32_t)(0x10b2f4a8u));
  /* 10b018d4 call dword ptr [0x10b3244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3244c))), 0x10b018dau);
  /* 10b018da add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b018dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b018df call 0x10b028c0 */
  push32(0x10b018e4u); f_10b028c0();
  /* 10b018e4 mov esi, esp */
  ESI = (ESP);
  /* 10b018e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b018e8 push 0x10b2f4a8 */
  push32((uint32_t)(0x10b2f4a8u));
  /* 10b018ed call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b018f3u);
  /* 10b018f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b018f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b018f8 call 0x10b028c0 */
  push32(0x10b018fdu); f_10b028c0();
  /* 10b018fd mov esi, esp */
  ESI = (ESP);
  /* 10b018ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01901 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10b01906 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b0190b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b0190d call dword ptr [0x10b32444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32444))), 0x10b01913u);
  /* 10b01913 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01918 call 0x10b028c0 */
  push32(0x10b0191du); f_10b028c0();
  /* 10b0191d mov esi, esp */
  ESI = (ESP);
  /* 10b0191f push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10b01924 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01926 call dword ptr [0x10b32454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32454))), 0x10b0192cu);
  /* 10b0192c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0192f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01931 call 0x10b028c0 */
  push32(0x10b01936u); f_10b028c0();
L_10b01936:;
  /* 10b01936 mov esi, esp */
  ESI = (ESP);
  /* 10b01938 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0193a call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01940u);
  /* 10b01940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01945 call 0x10b028c0 */
  push32(0x10b0194au); f_10b028c0();
  /* 10b0194a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0194f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01951 jne 0x10b019aa */
  if (!C.zf) goto L_10b019aa;
  /* 10b01953 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01955 push 0x10b2f3f8 */
  push32((uint32_t)(0x10b2f3f8u));
  /* 10b0195a call 0x10b0100f */
  push32(0x10b0195fu); f_10b0100f();
  /* 10b0195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01962 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01965 jle 0x10b019aa */
  if ((C.zf||C.sf!=C.of)) goto L_10b019aa;
  /* 10b01967 mov esi, esp */
  ESI = (ESP);
  /* 10b01969 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0196b call dword ptr [0x10b32458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32458))), 0x10b01971u);
  /* 10b01971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01976 call 0x10b028c0 */
  push32(0x10b0197bu); f_10b028c0();
  /* 10b0197b mov esi, esp */
  ESI = (ESP);
  /* 10b0197d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0197f push 0x10b2f428 */
  push32((uint32_t)(0x10b2f428u));
  /* 10b01984 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01986 call dword ptr [0x10b32450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32450))), 0x10b0198cu);
  /* 10b0198c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0198f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01991 call 0x10b028c0 */
  push32(0x10b01996u); f_10b028c0();
  /* 10b01996 mov esi, esp */
  ESI = (ESP);
  /* 10b01998 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0199a call dword ptr [0x10b32460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32460))), 0x10b019a0u);
  /* 10b019a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b019a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b019a5 call 0x10b028c0 */
  push32(0x10b019aau); f_10b028c0();
L_10b019aa:;
  /* 10b019aa mov esi, esp */
  ESI = (ESP);
  /* 10b019ac push 3 */
  push32((uint32_t)(0x3u));
  /* 10b019ae call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b019b4u);
  /* 10b019b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b019b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b019b9 call 0x10b028c0 */
  push32(0x10b019beu); f_10b028c0();
  /* 10b019be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b019c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b019c5 je 0x10b01a7c */
  if (C.zf) goto L_10b01a7c;
  /* 10b019cb mov esi, esp */
  ESI = (ESP);
  /* 10b019cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b019cf call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b019d5u);
  /* 10b019d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b019d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b019da call 0x10b028c0 */
  push32(0x10b019dfu); f_10b028c0();
  /* 10b019df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b019e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b019e6 jne 0x10b01a7c */
  if (!C.zf) goto L_10b01a7c;
  /* 10b019ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b019ee push 0x10b2f3f8 */
  push32((uint32_t)(0x10b2f3f8u));
  /* 10b019f3 call 0x10b0100f */
  push32(0x10b019f8u); f_10b0100f();
  /* 10b019f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b019fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b019fd jne 0x10b01a7c */
  if (!C.zf) goto L_10b01a7c;
  /* 10b019ff mov esi, esp */
  ESI = (ESP);
  /* 10b01a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01a03 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b01a05 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b01a0bu);
  /* 10b01a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a10 call 0x10b028c0 */
  push32(0x10b01a15u); f_10b028c0();
  /* 10b01a15 mov esi, esp */
  ESI = (ESP);
  /* 10b01a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01a19 call dword ptr [0x10b32458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32458))), 0x10b01a1fu);
  /* 10b01a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a24 call 0x10b028c0 */
  push32(0x10b01a29u); f_10b028c0();
  /* 10b01a29 mov esi, esp */
  ESI = (ESP);
  /* 10b01a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01a2d push 0x10b2f428 */
  push32((uint32_t)(0x10b2f428u));
  /* 10b01a32 call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01a38u);
  /* 10b01a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a3d call 0x10b028c0 */
  push32(0x10b01a42u); f_10b028c0();
  /* 10b01a42 mov esi, esp */
  ESI = (ESP);
  /* 10b01a44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01a46 call dword ptr [0x10b32460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32460))), 0x10b01a4cu);
  /* 10b01a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a51 call 0x10b028c0 */
  push32(0x10b01a56u); f_10b028c0();
  /* 10b01a56 mov esi, esp */
  ESI = (ESP);
  /* 10b01a58 push 0x10b2a180 */
  push32((uint32_t)(0x10b2a180u));
  /* 10b01a5d call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b01a63u);
  /* 10b01a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a68 call 0x10b028c0 */
  push32(0x10b01a6du); f_10b028c0();
  /* 10b01a6d mov esi, esp */
  ESI = (ESP);
  /* 10b01a6f call dword ptr [0x10b32464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32464))), 0x10b01a75u);
  /* 10b01a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a77 call 0x10b028c0 */
  push32(0x10b01a7cu); f_10b028c0();
L_10b01a7c:;
  /* 10b01a7c mov esi, esp */
  ESI = (ESP);
  /* 10b01a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01a80 call dword ptr [0x10b3245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3245c))), 0x10b01a86u);
  /* 10b01a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01a8b call 0x10b028c0 */
  push32(0x10b01a90u); f_10b028c0();
  /* 10b01a90 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01a97 je 0x10b01b2a */
  if (C.zf) goto L_10b01b2a;
  /* 10b01a9d mov esi, esp */
  ESI = (ESP);
  /* 10b01a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01aa1 push 0x10b2f408 */
  push32((uint32_t)(0x10b2f408u));
  /* 10b01aa6 call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01aacu);
  /* 10b01aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01aaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ab1 call 0x10b028c0 */
  push32(0x10b01ab6u); f_10b028c0();
  /* 10b01ab6 mov esi, esp */
  ESI = (ESP);
  /* 10b01ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01abc push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01ac3 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01ac9u);
  /* 10b01ac9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01acc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ace call 0x10b028c0 */
  push32(0x10b01ad3u); f_10b028c0();
  /* 10b01ad3 mov esi, esp */
  ESI = (ESP);
  /* 10b01ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01ad9 push 0x10b2f458 */
  push32((uint32_t)(0x10b2f458u));
  /* 10b01ade push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01ae0 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01ae6u);
  /* 10b01ae6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01aeb call 0x10b028c0 */
  push32(0x10b01af0u); f_10b028c0();
  /* 10b01af0 mov esi, esp */
  ESI = (ESP);
  /* 10b01af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01af6 push 0x10b2f468 */
  push32((uint32_t)(0x10b2f468u));
  /* 10b01afb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01afd call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01b03u);
  /* 10b01b03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01b06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b08 call 0x10b028c0 */
  push32(0x10b01b0du); f_10b028c0();
  /* 10b01b0d mov esi, esp */
  ESI = (ESP);
  /* 10b01b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01b13 push 0x10b2f460 */
  push32((uint32_t)(0x10b2f460u));
  /* 10b01b18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01b1a call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01b20u);
  /* 10b01b20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b25 call 0x10b028c0 */
  push32(0x10b01b2au); f_10b028c0();
L_10b01b2a:;
  /* 10b01b2a mov esi, esp */
  ESI = (ESP);
  /* 10b01b2c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b01b2e call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01b34u);
  /* 10b01b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b39 call 0x10b028c0 */
  push32(0x10b01b3eu); f_10b028c0();
  /* 10b01b3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01b43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01b45 je 0x10b01bc2 */
  if (C.zf) goto L_10b01bc2;
  /* 10b01b47 mov esi, esp */
  ESI = (ESP);
  /* 10b01b49 call dword ptr [0x10b3246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3246c))), 0x10b01b4fu);
  /* 10b01b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b51 call 0x10b028c0 */
  push32(0x10b01b56u); f_10b028c0();
  /* 10b01b56 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b5b jle 0x10b01bc2 */
  if ((C.zf||C.sf!=C.of)) goto L_10b01bc2;
  /* 10b01b5d mov esi, esp */
  ESI = (ESP);
  /* 10b01b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01b61 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b01b63 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b01b69u);
  /* 10b01b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01b6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b6e call 0x10b028c0 */
  push32(0x10b01b73u); f_10b028c0();
  /* 10b01b73 mov esi, esp */
  ESI = (ESP);
  /* 10b01b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01b77 push 0x10b2f4b8 */
  push32((uint32_t)(0x10b2f4b8u));
  /* 10b01b7c call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01b82u);
  /* 10b01b82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01b87 call 0x10b028c0 */
  push32(0x10b01b8cu); f_10b028c0();
  /* 10b01b8c mov esi, esp */
  ESI = (ESP);
  /* 10b01b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01b92 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01b99 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01b9fu);
  /* 10b01b9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ba4 call 0x10b028c0 */
  push32(0x10b01ba9u); f_10b028c0();
  /* 10b01ba9 mov esi, esp */
  ESI = (ESP);
  /* 10b01bab push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10b01bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b01bb2 call dword ptr [0x10b32454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32454))), 0x10b01bb8u);
  /* 10b01bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01bbd call 0x10b028c0 */
  push32(0x10b01bc2u); f_10b028c0();
L_10b01bc2:;
  /* 10b01bc2 mov esi, esp */
  ESI = (ESP);
  /* 10b01bc4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b01bc6 call dword ptr [0x10b32470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32470))), 0x10b01bccu);
  /* 10b01bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01bd1 call 0x10b028c0 */
  push32(0x10b01bd6u); f_10b028c0();
  /* 10b01bd6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01bdd je 0x10b01ca6 */
  if (C.zf) goto L_10b01ca6;
  /* 10b01be3 mov esi, esp */
  ESI = (ESP);
  /* 10b01be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01be7 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01bec call dword ptr [0x10b32468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32468))), 0x10b01bf2u);
  /* 10b01bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01bf7 call 0x10b028c0 */
  push32(0x10b01bfcu); f_10b028c0();
  /* 10b01bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01bfe jle 0x10b01c36 */
  if ((C.zf||C.sf!=C.of)) goto L_10b01c36;
  /* 10b01c00 mov esi, esp */
  ESI = (ESP);
  /* 10b01c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c04 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01c09 push 0x10b2f4b8 */
  push32((uint32_t)(0x10b2f4b8u));
  /* 10b01c0e call dword ptr [0x10b32478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32478))), 0x10b01c14u);
  /* 10b01c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01c19 call 0x10b028c0 */
  push32(0x10b01c1eu); f_10b028c0();
  /* 10b01c1e mov esi, esp */
  ESI = (ESP);
  /* 10b01c20 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10b01c22 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b01c24 call dword ptr [0x10b32454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32454))), 0x10b01c2au);
  /* 10b01c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01c2f call 0x10b028c0 */
  push32(0x10b01c34u); f_10b028c0();
  /* 10b01c34 jmp 0x10b01ca6 */
  goto L_10b01ca6;
L_10b01c36:;
  /* 10b01c36 mov esi, esp */
  ESI = (ESP);
  /* 10b01c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c3a push 0x10b2f4b8 */
  push32((uint32_t)(0x10b2f4b8u));
  /* 10b01c3f call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01c45u);
  /* 10b01c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01c4a call 0x10b028c0 */
  push32(0x10b01c4fu); f_10b028c0();
  /* 10b01c4f mov esi, esp */
  ESI = (ESP);
  /* 10b01c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c55 push 0x10b2f458 */
  push32((uint32_t)(0x10b2f458u));
  /* 10b01c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01c5c call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01c62u);
  /* 10b01c62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01c67 call 0x10b028c0 */
  push32(0x10b01c6cu); f_10b028c0();
  /* 10b01c6c mov esi, esp */
  ESI = (ESP);
  /* 10b01c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c72 push 0x10b2f468 */
  push32((uint32_t)(0x10b2f468u));
  /* 10b01c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01c79 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01c7fu);
  /* 10b01c7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01c84 call 0x10b028c0 */
  push32(0x10b01c89u); f_10b028c0();
  /* 10b01c89 mov esi, esp */
  ESI = (ESP);
  /* 10b01c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01c8f push 0x10b2f460 */
  push32((uint32_t)(0x10b2f460u));
  /* 10b01c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01c96 call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b01c9cu);
  /* 10b01c9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01c9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ca1 call 0x10b028c0 */
  push32(0x10b01ca6u); f_10b028c0();
L_10b01ca6:;
  /* 10b01ca6 mov esi, esp */
  ESI = (ESP);
  /* 10b01ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b01caa call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01cb0u);
  /* 10b01cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01cb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01cb5 call 0x10b028c0 */
  push32(0x10b01cbau); f_10b028c0();
  /* 10b01cba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01cc1 jne 0x10b01ddf */
  if (!C.zf) goto L_10b01ddf;
  /* 10b01cc7 mov esi, esp */
  ESI = (ESP);
  /* 10b01cc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b01ccb call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01cd1u);
  /* 10b01cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01cd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01cd6 call 0x10b028c0 */
  push32(0x10b01cdbu); f_10b028c0();
  /* 10b01cdb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01ce2 je 0x10b01ddf */
  if (C.zf) goto L_10b01ddf;
  /* 10b01ce8 mov esi, esp */
  ESI = (ESP);
  /* 10b01cea push 0x10b2f4a8 */
  push32((uint32_t)(0x10b2f4a8u));
  /* 10b01cef push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01cf4 call dword ptr [0x10b3247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3247c))), 0x10b01cfau);
  /* 10b01cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01cff call 0x10b028c0 */
  push32(0x10b01d04u); f_10b028c0();
  /* 10b01d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01d06 jle 0x10b01ddf */
  if ((C.zf||C.sf!=C.of)) goto L_10b01ddf;
  /* 10b01d0c mov esi, esp */
  ESI = (ESP);
  /* 10b01d0e push 0x10b2f400 */
  push32((uint32_t)(0x10b2f400u));
  /* 10b01d13 push 0x10b2f478 */
  push32((uint32_t)(0x10b2f478u));
  /* 10b01d18 call dword ptr [0x10b3247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3247c))), 0x10b01d1eu);
  /* 10b01d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d23 call 0x10b028c0 */
  push32(0x10b01d28u); f_10b028c0();
  /* 10b01d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01d2a jle 0x10b01ddf */
  if ((C.zf||C.sf!=C.of)) goto L_10b01ddf;
  /* 10b01d30 mov esi, esp */
  ESI = (ESP);
  /* 10b01d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01d34 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b01d36 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b01d3cu);
  /* 10b01d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d41 call 0x10b028c0 */
  push32(0x10b01d46u); f_10b028c0();
  /* 10b01d46 mov esi, esp */
  ESI = (ESP);
  /* 10b01d48 push 0x10b2a178 */
  push32((uint32_t)(0x10b2a178u));
  /* 10b01d4d call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b01d53u);
  /* 10b01d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d58 call 0x10b028c0 */
  push32(0x10b01d5du); f_10b028c0();
  /* 10b01d5d mov esi, esp */
  ESI = (ESP);
  /* 10b01d5f push 0x10b2a16c */
  push32((uint32_t)(0x10b2a16cu));
  /* 10b01d64 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b01d6au);
  /* 10b01d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d6f call 0x10b028c0 */
  push32(0x10b01d74u); f_10b028c0();
  /* 10b01d74 mov esi, esp */
  ESI = (ESP);
  /* 10b01d76 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b01d78 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01d7eu);
  /* 10b01d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d83 call 0x10b028c0 */
  push32(0x10b01d88u); f_10b028c0();
  /* 10b01d88 mov esi, esp */
  ESI = (ESP);
  /* 10b01d8a push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b01d8c call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01d92u);
  /* 10b01d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01d97 call 0x10b028c0 */
  push32(0x10b01d9cu); f_10b028c0();
  /* 10b01d9c mov esi, esp */
  ESI = (ESP);
  /* 10b01d9e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b01da0 call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01da6u);
  /* 10b01da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01dab call 0x10b028c0 */
  push32(0x10b01db0u); f_10b028c0();
  /* 10b01db0 mov esi, esp */
  ESI = (ESP);
  /* 10b01db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01db4 push 0x10b2f4a8 */
  push32((uint32_t)(0x10b2f4a8u));
  /* 10b01db9 call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b01dbfu);
  /* 10b01dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01dc4 call 0x10b028c0 */
  push32(0x10b01dc9u); f_10b028c0();
  /* 10b01dc9 mov esi, esp */
  ESI = (ESP);
  /* 10b01dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01dcd push 4 */
  push32((uint32_t)(0x4u));
  /* 10b01dcf call dword ptr [0x10b32474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32474))), 0x10b01dd5u);
  /* 10b01dd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01dd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01dda call 0x10b028c0 */
  push32(0x10b01ddfu); f_10b028c0();
L_10b01ddf:;
  /* 10b01ddf mov esi, esp */
  ESI = (ESP);
  /* 10b01de1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b01de3 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01de9u);
  /* 10b01de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01dee call 0x10b028c0 */
  push32(0x10b01df3u); f_10b028c0();
  /* 10b01df3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01dfa je 0x10b01ed8 */
  if (C.zf) goto L_10b01ed8;
  /* 10b01e00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01e02 push 0x10b2f450 */
  push32((uint32_t)(0x10b2f450u));
  /* 10b01e07 call 0x10b0100f */
  push32(0x10b01e0cu); f_10b0100f();
  /* 10b01e0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01e11 jne 0x10b01ed8 */
  if (!C.zf) goto L_10b01ed8;
  /* 10b01e17 mov esi, esp */
  ESI = (ESP);
  /* 10b01e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01e1b push 5 */
  push32((uint32_t)(0x5u));
  /* 10b01e1d call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b01e23u);
  /* 10b01e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01e28 call 0x10b028c0 */
  push32(0x10b01e2du); f_10b028c0();
  /* 10b01e2d mov esi, esp */
  ESI = (ESP);
  /* 10b01e2f push 0x10b2a164 */
  push32((uint32_t)(0x10b2a164u));
  /* 10b01e34 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b01e3au);
  /* 10b01e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01e3f call 0x10b028c0 */
  push32(0x10b01e44u); f_10b028c0();
  /* 10b01e44 mov esi, esp */
  ESI = (ESP);
  /* 10b01e46 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b01e48 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01e4eu);
  /* 10b01e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01e53 call 0x10b028c0 */
  push32(0x10b01e58u); f_10b028c0();
  /* 10b01e58 mov esi, esp */
  ESI = (ESP);
  /* 10b01e5a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10b01e5c call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01e62u);
  /* 10b01e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01e67 call 0x10b028c0 */
  push32(0x10b01e6cu); f_10b028c0();
  /* 10b01e6c mov esi, esp */
  ESI = (ESP);
  /* 10b01e6e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10b01e70 call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01e76u);
  /* 10b01e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01e7b call 0x10b028c0 */
  push32(0x10b01e80u); f_10b028c0();
  /* 10b01e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01e82 push 0x10b2f450 */
  push32((uint32_t)(0x10b2f450u));
  /* 10b01e87 call 0x10b0100f */
  push32(0x10b01e8cu); f_10b0100f();
  /* 10b01e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01e8f imul eax, eax, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfa0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b01e95 mov esi, esp */
  ESI = (ESP);
  /* 10b01e97 push eax */
  push32((uint32_t)(EAX));
  /* 10b01e98 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b01e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01e9c call dword ptr [0x10b32440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32440))), 0x10b01ea2u);
  /* 10b01ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ea5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ea7 call 0x10b028c0 */
  push32(0x10b01eacu); f_10b028c0();
  /* 10b01eac push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01eae push 0x10b2f450 */
  push32((uint32_t)(0x10b2f450u));
  /* 10b01eb3 call 0x10b0100f */
  push32(0x10b01eb8u); f_10b0100f();
  /* 10b01eb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ebb imul eax, eax, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfa0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b01ec1 mov esi, esp */
  ESI = (ESP);
  /* 10b01ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10b01ec4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b01ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01ec8 call dword ptr [0x10b32440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32440))), 0x10b01eceu);
  /* 10b01ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ed3 call 0x10b028c0 */
  push32(0x10b01ed8u); f_10b028c0();
L_10b01ed8:;
  /* 10b01ed8 mov esi, esp */
  ESI = (ESP);
  /* 10b01eda push 6 */
  push32((uint32_t)(0x6u));
  /* 10b01edc call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01ee2u);
  /* 10b01ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ee7 call 0x10b028c0 */
  push32(0x10b01eecu); f_10b028c0();
  /* 10b01eec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01ef3 je 0x10b01fc6 */
  if (C.zf) goto L_10b01fc6;
  /* 10b01ef9 mov esi, esp */
  ESI = (ESP);
  /* 10b01efb push 5 */
  push32((uint32_t)(0x5u));
  /* 10b01efd call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01f03u);
  /* 10b01f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f08 call 0x10b028c0 */
  push32(0x10b01f0du); f_10b028c0();
  /* 10b01f0d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01f14 jne 0x10b01fc6 */
  if (!C.zf) goto L_10b01fc6;
  /* 10b01f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b01f1c push 0x10b2f448 */
  push32((uint32_t)(0x10b2f448u));
  /* 10b01f21 call 0x10b0100f */
  push32(0x10b01f26u); f_10b0100f();
  /* 10b01f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01f2b jne 0x10b01fc6 */
  if (!C.zf) goto L_10b01fc6;
  /* 10b01f31 mov esi, esp */
  ESI = (ESP);
  /* 10b01f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01f35 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b01f37 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b01f3du);
  /* 10b01f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f42 call 0x10b028c0 */
  push32(0x10b01f47u); f_10b028c0();
  /* 10b01f47 mov esi, esp */
  ESI = (ESP);
  /* 10b01f49 push 0x10b2a15c */
  push32((uint32_t)(0x10b2a15cu));
  /* 10b01f4e call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b01f54u);
  /* 10b01f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f59 call 0x10b028c0 */
  push32(0x10b01f5eu); f_10b028c0();
  /* 10b01f5e mov esi, esp */
  ESI = (ESP);
  /* 10b01f60 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10b01f62 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b01f68u);
  /* 10b01f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f6d call 0x10b028c0 */
  push32(0x10b01f72u); f_10b028c0();
  /* 10b01f72 mov esi, esp */
  ESI = (ESP);
  /* 10b01f74 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10b01f76 call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01f7cu);
  /* 10b01f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f81 call 0x10b028c0 */
  push32(0x10b01f86u); f_10b028c0();
  /* 10b01f86 mov esi, esp */
  ESI = (ESP);
  /* 10b01f88 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b01f8a call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b01f90u);
  /* 10b01f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01f93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01f95 call 0x10b028c0 */
  push32(0x10b01f9au); f_10b028c0();
  /* 10b01f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01f9c push 0x10b2f448 */
  push32((uint32_t)(0x10b2f448u));
  /* 10b01fa1 call 0x10b0100f */
  push32(0x10b01fa6u); f_10b0100f();
  /* 10b01fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01fa9 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b01faf mov esi, esp */
  ESI = (ESP);
  /* 10b01fb1 push eax */
  push32((uint32_t)(EAX));
  /* 10b01fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b01fb6 call dword ptr [0x10b32440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32440))), 0x10b01fbcu);
  /* 10b01fbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01fc1 call 0x10b028c0 */
  push32(0x10b01fc6u); f_10b028c0();
L_10b01fc6:;
  /* 10b01fc6 mov esi, esp */
  ESI = (ESP);
  /* 10b01fc8 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b01fca call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01fd0u);
  /* 10b01fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01fd5 call 0x10b028c0 */
  push32(0x10b01fdau); f_10b028c0();
  /* 10b01fda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b01fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b01fe1 je 0x10b020ca */
  if (C.zf) goto L_10b020ca;
  /* 10b01fe7 mov esi, esp */
  ESI = (ESP);
  /* 10b01fe9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b01feb call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b01ff1u);
  /* 10b01ff1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b01ff4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b01ff6 call 0x10b028c0 */
  push32(0x10b01ffbu); f_10b028c0();
  /* 10b01ffb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02002 jne 0x10b020ca */
  if (!C.zf) goto L_10b020ca;
  /* 10b02008 push 0x10b2f420 */
  push32((uint32_t)(0x10b2f420u));
  /* 10b0200d call 0x10b01005 */
  push32(0x10b02012u); f_10b01005();
  /* 10b02012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02017 jne 0x10b020ca */
  if (!C.zf) goto L_10b020ca;
  /* 10b0201d mov esi, esp */
  ESI = (ESP);
  /* 10b0201f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02021 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b02023 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b02029u);
  /* 10b02029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0202c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0202e call 0x10b028c0 */
  push32(0x10b02033u); f_10b028c0();
  /* 10b02033 mov esi, esp */
  ESI = (ESP);
  /* 10b02035 push 0x10b2a154 */
  push32((uint32_t)(0x10b2a154u));
  /* 10b0203a call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b02040u);
  /* 10b02040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02045 call 0x10b028c0 */
  push32(0x10b0204au); f_10b028c0();
  /* 10b0204a mov esi, esp */
  ESI = (ESP);
  /* 10b0204c push 0x10b2a148 */
  push32((uint32_t)(0x10b2a148u));
  /* 10b02051 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b02057u);
  /* 10b02057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0205a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0205c call 0x10b028c0 */
  push32(0x10b02061u); f_10b028c0();
  /* 10b02061 mov esi, esp */
  ESI = (ESP);
  /* 10b02063 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b02065 call dword ptr [0x10b32434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32434))), 0x10b0206bu);
  /* 10b0206b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0206e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02070 call 0x10b028c0 */
  push32(0x10b02075u); f_10b028c0();
  /* 10b02075 mov esi, esp */
  ESI = (ESP);
  /* 10b02077 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10b02079 call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b0207fu);
  /* 10b0207f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02084 call 0x10b028c0 */
  push32(0x10b02089u); f_10b028c0();
  /* 10b02089 mov esi, esp */
  ESI = (ESP);
  /* 10b0208b push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b0208d call dword ptr [0x10b3243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3243c))), 0x10b02093u);
  /* 10b02093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02098 call 0x10b028c0 */
  push32(0x10b0209du); f_10b028c0();
  /* 10b0209d mov esi, esp */
  ESI = (ESP);
  /* 10b0209f push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10b020a4 push 0x10b2f480 */
  push32((uint32_t)(0x10b2f480u));
  /* 10b020a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b020ab push 0x10b2f4a0 */
  push32((uint32_t)(0x10b2f4a0u));
  /* 10b020b0 push 0x10b2f490 */
  push32((uint32_t)(0x10b2f490u));
  /* 10b020b5 push 0x10b2f4b0 */
  push32((uint32_t)(0x10b2f4b0u));
  /* 10b020ba call dword ptr [0x10b3244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3244c))), 0x10b020c0u);
  /* 10b020c0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b020c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b020c5 call 0x10b028c0 */
  push32(0x10b020cau); f_10b028c0();
L_10b020ca:;
  /* 10b020ca mov esi, esp */
  ESI = (ESP);
  /* 10b020cc push 8 */
  push32((uint32_t)(0x8u));
  /* 10b020ce call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b020d4u);
  /* 10b020d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b020d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b020d9 call 0x10b028c0 */
  push32(0x10b020deu); f_10b028c0();
  /* 10b020de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b020e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b020e5 je 0x10b02172 */
  if (C.zf) goto L_10b02172;
  /* 10b020eb push 0x10b2f430 */
  push32((uint32_t)(0x10b2f430u));
  /* 10b020f0 call 0x10b01005 */
  push32(0x10b020f5u); f_10b01005();
  /* 10b020f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b020f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b020fa jne 0x10b02172 */
  if (!C.zf) goto L_10b02172;
  /* 10b020fc mov esi, esp */
  ESI = (ESP);
  /* 10b020fe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b02100 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b02106u);
  /* 10b02106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0210b call 0x10b028c0 */
  push32(0x10b02110u); f_10b028c0();
  /* 10b02110 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02117 je 0x10b0212a */
  if (C.zf) goto L_10b0212a;
  /* 10b02119 push 0x10b2f4b8 */
  push32((uint32_t)(0x10b2f4b8u));
  /* 10b0211e call 0x10b01005 */
  push32(0x10b02123u); f_10b01005();
  /* 10b02123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02128 jne 0x10b02172 */
  if (!C.zf) goto L_10b02172;
L_10b0212a:;
  /* 10b0212a mov esi, esp */
  ESI = (ESP);
  /* 10b0212c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0212e push 8 */
  push32((uint32_t)(0x8u));
  /* 10b02130 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b02136u);
  /* 10b02136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0213b call 0x10b028c0 */
  push32(0x10b02140u); f_10b028c0();
  /* 10b02140 mov esi, esp */
  ESI = (ESP);
  /* 10b02142 push 0x10b2a140 */
  push32((uint32_t)(0x10b2a140u));
  /* 10b02147 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b0214du);
  /* 10b0214d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02152 call 0x10b028c0 */
  push32(0x10b02157u); f_10b028c0();
  /* 10b02157 mov esi, esp */
  ESI = (ESP);
  /* 10b02159 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b0215e push 3 */
  push32((uint32_t)(0x3u));
  /* 10b02160 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02162 call dword ptr [0x10b32440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32440))), 0x10b02168u);
  /* 10b02168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0216b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0216d call 0x10b028c0 */
  push32(0x10b02172u); f_10b028c0();
L_10b02172:;
  /* 10b02172 mov esi, esp */
  ESI = (ESP);
  /* 10b02174 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b02176 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b0217cu);
  /* 10b0217c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0217f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02181 call 0x10b028c0 */
  push32(0x10b02186u); f_10b028c0();
  /* 10b02186 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0218d je 0x10b02215 */
  if (C.zf) goto L_10b02215;
  /* 10b02193 mov esi, esp */
  ESI = (ESP);
  /* 10b02195 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02197 push 0x10b2f488 */
  push32((uint32_t)(0x10b2f488u));
  /* 10b0219c call dword ptr [0x10b32468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32468))), 0x10b021a2u);
  /* 10b021a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b021a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b021a7 call 0x10b028c0 */
  push32(0x10b021acu); f_10b028c0();
  /* 10b021ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b021ae jle 0x10b02215 */
  if ((C.zf||C.sf!=C.of)) goto L_10b02215;
  /* 10b021b0 mov esi, esp */
  ESI = (ESP);
  /* 10b021b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b021b4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b021b6 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b021bcu);
  /* 10b021bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b021bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b021c1 call 0x10b028c0 */
  push32(0x10b021c6u); f_10b028c0();
  /* 10b021c6 mov esi, esp */
  ESI = (ESP);
  /* 10b021c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b021ca push 0x10b2f440 */
  push32((uint32_t)(0x10b2f440u));
  /* 10b021cf call dword ptr [0x10b32438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32438))), 0x10b021d5u);
  /* 10b021d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b021d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b021da call 0x10b028c0 */
  push32(0x10b021dfu); f_10b028c0();
  /* 10b021df mov esi, esp */
  ESI = (ESP);
  /* 10b021e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b021e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b021e5 push 0x10b2f488 */
  push32((uint32_t)(0x10b2f488u));
  /* 10b021ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10b021ec call dword ptr [0x10b32448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32448))), 0x10b021f2u);
  /* 10b021f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b021f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b021f7 call 0x10b028c0 */
  push32(0x10b021fcu); f_10b028c0();
  /* 10b021fc mov esi, esp */
  ESI = (ESP);
  /* 10b021fe push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10b02203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b02205 call dword ptr [0x10b32454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32454))), 0x10b0220bu);
  /* 10b0220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0220e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02210 call 0x10b028c0 */
  push32(0x10b02215u); f_10b028c0();
L_10b02215:;
  /* 10b02215 mov esi, esp */
  ESI = (ESP);
  /* 10b02217 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b02219 call dword ptr [0x10b32470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32470))), 0x10b0221fu);
  /* 10b0221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02222 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02224 call 0x10b028c0 */
  push32(0x10b02229u); f_10b028c0();
  /* 10b02229 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0222e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02230 je 0x10b02250 */
  if (C.zf) goto L_10b02250;
  /* 10b02232 mov esi, esp */
  ESI = (ESP);
  /* 10b02234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02236 push 0x10b2f488 */
  push32((uint32_t)(0x10b2f488u));
  /* 10b0223b push 0x10b2f438 */
  push32((uint32_t)(0x10b2f438u));
  /* 10b02240 call dword ptr [0x10b32478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32478))), 0x10b02246u);
  /* 10b02246 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0224b call 0x10b028c0 */
  push32(0x10b02250u); f_10b028c0();
L_10b02250:;
  /* 10b02250 mov esi, esp */
  ESI = (ESP);
  /* 10b02252 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b02254 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b0225au);
  /* 10b0225a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0225d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0225f call 0x10b028c0 */
  push32(0x10b02264u); f_10b028c0();
  /* 10b02264 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0226b je 0x10b022d7 */
  if (C.zf) goto L_10b022d7;
  /* 10b0226d mov esi, esp */
  ESI = (ESP);
  /* 10b0226f push 7 */
  push32((uint32_t)(0x7u));
  /* 10b02271 call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b02277u);
  /* 10b02277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0227a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0227c call 0x10b028c0 */
  push32(0x10b02281u); f_10b028c0();
  /* 10b02281 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02288 jne 0x10b022d7 */
  if (!C.zf) goto L_10b022d7;
  /* 10b0228a push 0x10b2f418 */
  push32((uint32_t)(0x10b2f418u));
  /* 10b0228f call 0x10b01005 */
  push32(0x10b02294u); f_10b01005();
  /* 10b02294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02299 jne 0x10b022d7 */
  if (!C.zf) goto L_10b022d7;
  /* 10b0229b mov esi, esp */
  ESI = (ESP);
  /* 10b0229d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0229f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b022a1 call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b022a7u);
  /* 10b022a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b022aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b022ac call 0x10b028c0 */
  push32(0x10b022b1u); f_10b028c0();
  /* 10b022b1 mov esi, esp */
  ESI = (ESP);
  /* 10b022b3 push 0x10b2a138 */
  push32((uint32_t)(0x10b2a138u));
  /* 10b022b8 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b022beu);
  /* 10b022be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b022c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b022c3 call 0x10b028c0 */
  push32(0x10b022c8u); f_10b028c0();
  /* 10b022c8 mov esi, esp */
  ESI = (ESP);
  /* 10b022ca call dword ptr [0x10b32484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32484))), 0x10b022d0u);
  /* 10b022d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b022d2 call 0x10b028c0 */
  push32(0x10b022d7u); f_10b028c0();
L_10b022d7:;
  /* 10b022d7 mov esi, esp */
  ESI = (ESP);
  /* 10b022d9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b022db call dword ptr [0x10b32424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32424))), 0x10b022e1u);
  /* 10b022e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b022e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b022e6 call 0x10b028c0 */
  push32(0x10b022ebu); f_10b028c0();
  /* 10b022eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b022f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b022f2 je 0x10b02378 */
  if (C.zf) goto L_10b02378;
  /* 10b022f8 push 0x10b2f400 */
  push32((uint32_t)(0x10b2f400u));
  /* 10b022fd call 0x10b01005 */
  push32(0x10b02302u); f_10b01005();
  /* 10b02302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02307 jne 0x10b02378 */
  if (!C.zf) goto L_10b02378;
  /* 10b02309 mov esi, esp */
  ESI = (ESP);
  /* 10b0230b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0230d push 0xa */
  push32((uint32_t)(0xau));
  /* 10b0230f call dword ptr [0x10b32428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32428))), 0x10b02315u);
  /* 10b02315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02318 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0231a call 0x10b028c0 */
  push32(0x10b0231fu); f_10b028c0();
  /* 10b0231f mov esi, esp */
  ESI = (ESP);
  /* 10b02321 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b02323 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02325 call dword ptr [0x10b32488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32488))), 0x10b0232bu);
  /* 10b0232b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0232e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02330 call 0x10b028c0 */
  push32(0x10b02335u); f_10b028c0();
  /* 10b02335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02337 jle 0x10b02352 */
  if ((C.zf||C.sf!=C.of)) goto L_10b02352;
  /* 10b02339 mov esi, esp */
  ESI = (ESP);
  /* 10b0233b push 0x10b2a12c */
  push32((uint32_t)(0x10b2a12cu));
  /* 10b02340 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b02346u);
  /* 10b02346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02349 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0234b call 0x10b028c0 */
  push32(0x10b02350u); f_10b028c0();
  /* 10b02350 jmp 0x10b02369 */
  goto L_10b02369;
L_10b02352:;
  /* 10b02352 mov esi, esp */
  ESI = (ESP);
  /* 10b02354 push 0x10b2a120 */
  push32((uint32_t)(0x10b2a120u));
  /* 10b02359 call dword ptr [0x10b32430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32430))), 0x10b0235fu);
  /* 10b0235f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02364 call 0x10b028c0 */
  push32(0x10b02369u); f_10b028c0();
L_10b02369:;
  /* 10b02369 mov esi, esp */
  ESI = (ESP);
  /* 10b0236b call dword ptr [0x10b32464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32464))), 0x10b02371u);
  /* 10b02371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02373 call 0x10b028c0 */
  push32(0x10b02378u); f_10b028c0();
L_10b02378:;
  /* 10b02378 pop edi */
  EDI = (pop32());
  /* 10b02379 pop esi */
  ESI = (pop32());
  /* 10b0237a pop ebx */
  EBX = (pop32());
  /* 10b0237b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0237e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02380 call 0x10b028c0 */
  push32(0x10b02385u); f_10b028c0();
  /* 10b02385 mov esp, ebp */
  ESP = (EBP);
  /* 10b02387 pop ebp */
  EBP = (pop32());
  /* 10b02388 ret  */
  ESPCHK(0x10b014b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10b02740 (63 bytes, 26 insns) */
void f_10b02740(void) {
  FTRACE(0x10b02740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02740 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02741 mov ebp, esp */
  EBP = (ESP);
  /* 10b02743 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b02746 push ebx */
  push32((uint32_t)(EBX));
  /* 10b02747 push esi */
  push32((uint32_t)(ESI));
  /* 10b02748 push edi */
  push32((uint32_t)(EDI));
  /* 10b02749 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b0274c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b02751 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b02756 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b02758 mov esi, esp */
  ESI = (ESP);
  /* 10b0275a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0275d push eax */
  push32((uint32_t)(EAX));
  /* 10b0275e call dword ptr [0x10b32418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32418))), 0x10b02764u);
  /* 10b02764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02769 call 0x10b028c0 */
  push32(0x10b0276eu); f_10b028c0();
  /* 10b0276e pop edi */
  EDI = (pop32());
  /* 10b0276f pop esi */
  ESI = (pop32());
  /* 10b02770 pop ebx */
  EBX = (pop32());
  /* 10b02771 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02774 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02776 call 0x10b028c0 */
  push32(0x10b0277bu); f_10b028c0();
  /* 10b0277b mov esp, ebp */
  ESP = (EBP);
  /* 10b0277d pop ebp */
  EBP = (pop32());
  /* 10b0277e ret  */
  ESPCHK(0x10b02740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x10b02790 (67 bytes, 28 insns) */
void f_10b02790(void) {
  FTRACE(0x10b02790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02790 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02791 mov ebp, esp */
  EBP = (ESP);
  /* 10b02793 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b02796 push ebx */
  push32((uint32_t)(EBX));
  /* 10b02797 push esi */
  push32((uint32_t)(ESI));
  /* 10b02798 push edi */
  push32((uint32_t)(EDI));
  /* 10b02799 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10b0279c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10b027a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10b027a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b027a8 mov esi, esp */
  ESI = (ESP);
  /* 10b027aa mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10b027ad push eax */
  push32((uint32_t)(EAX));
  /* 10b027ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b027b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b027b2 call dword ptr [0x10b3241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3241c))), 0x10b027b8u);
  /* 10b027b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b027bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b027bd call 0x10b028c0 */
  push32(0x10b027c2u); f_10b028c0();
  /* 10b027c2 pop edi */
  EDI = (pop32());
  /* 10b027c3 pop esi */
  ESI = (pop32());
  /* 10b027c4 pop ebx */
  EBX = (pop32());
  /* 10b027c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b027c8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b027ca call 0x10b028c0 */
  push32(0x10b027cfu); f_10b028c0();
  /* 10b027cf mov esp, ebp */
  ESP = (EBP);
  /* 10b027d1 pop ebp */
  EBP = (pop32());
  /* 10b027d2 ret  */
  ESPCHK(0x10b02790u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10b028c0 (56 bytes, 28 insns) */
void f_10b028c0(void) {
  FTRACE(0x10b028c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b028c0 jne 0x10b028c3 */
  if (!C.zf) goto L_10b028c3;
  /* 10b028c2 ret  */
  ESPCHK(0x10b028c0u, _esp0);
  ESP += 4; return;
L_10b028c3:;
  /* 10b028c3 push ebp */
  push32((uint32_t)(EBP));
  /* 10b028c4 mov ebp, esp */
  EBP = (ESP);
  /* 10b028c6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b028c9 push eax */
  push32((uint32_t)(EAX));
  /* 10b028ca push edx */
  push32((uint32_t)(EDX));
  /* 10b028cb push ebx */
  push32((uint32_t)(EBX));
  /* 10b028cc push esi */
  push32((uint32_t)(ESI));
  /* 10b028cd push edi */
  push32((uint32_t)(EDI));
  /* 10b028ce push 0x10b2a2c8 */
  push32((uint32_t)(0x10b2a2c8u));
  /* 10b028d3 push 0x10b2a2c4 */
  push32((uint32_t)(0x10b2a2c4u));
  /* 10b028d8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10b028da push 0x10b2a2b4 */
  push32((uint32_t)(0x10b2a2b4u));
  /* 10b028df push 1 */
  push32((uint32_t)(0x1u));
  /* 10b028e1 call 0x10b02c90 */
  push32(0x10b028e6u); f_10b02c90();
  /* 10b028e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b028e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b028ec jne 0x10b028ef */
  if (!C.zf) goto L_10b028ef;
  /* 10b028ee int3  */
  x86_unimpl("int3 @ 0x10b028ee");
L_10b028ef:;
  /* 10b028ef pop edi */
  EDI = (pop32());
  /* 10b028f0 pop esi */
  ESI = (pop32());
  /* 10b028f1 pop ebx */
  EBX = (pop32());
  /* 10b028f2 pop edx */
  EDX = (pop32());
  /* 10b028f3 pop eax */
  EAX = (pop32());
  /* 10b028f4 mov esp, ebp */
  ESP = (EBP);
  /* 10b028f6 pop ebp */
  EBP = (pop32());
  /* 10b028f7 ret  */
  ESPCHK(0x10b028c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x10b02900 (313 bytes, 78 insns) */
void f_10b02900(void) {
  FTRACE(0x10b02900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02901 mov ebp, esp */
  EBP = (ESP);
  /* 10b02903 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02907 jne 0x10b029c7 */
  if (!C.zf) goto L_10b029c7;
  /* 10b0290d call dword ptr [0x10b32324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32324))), 0x10b02913u);
  /* 10b02913 mov dword ptr [0x10b2f510], eax */
  w32((uint32_t)(0x10b2f510), (EAX));
  /* 10b02918 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0291a call 0x10b063c0 */
  push32(0x10b0291fu); f_10b063c0();
  /* 10b0291f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02924 jne 0x10b0292d */
  if (!C.zf) goto L_10b0292d;
  /* 10b02926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02928 jmp 0x10b02a35 */
  goto L_10b02a35;
L_10b0292d:;
  /* 10b0292d mov eax, dword ptr [0x10b2f510] */
  EAX = (r32((uint32_t)(0x10b2f510)));
  /* 10b02932 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b02935 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0293a mov dword ptr [0x10b2f51c], eax */
  w32((uint32_t)(0x10b2f51c), (EAX));
  /* 10b0293f mov ecx, dword ptr [0x10b2f510] */
  ECX = (r32((uint32_t)(0x10b2f510)));
  /* 10b02945 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0294b mov dword ptr [0x10b2f518], ecx */
  w32((uint32_t)(0x10b2f518), (ECX));
  /* 10b02951 mov edx, dword ptr [0x10b2f518] */
  EDX = (r32((uint32_t)(0x10b2f518)));
  /* 10b02957 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b0295a add edx, dword ptr [0x10b2f51c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2f51c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02960 mov dword ptr [0x10b2f514], edx */
  w32((uint32_t)(0x10b2f514), (EDX));
  /* 10b02966 mov eax, dword ptr [0x10b2f510] */
  EAX = (r32((uint32_t)(0x10b2f510)));
  /* 10b0296b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b0296e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02973 mov dword ptr [0x10b2f510], eax */
  w32((uint32_t)(0x10b2f510), (EAX));
  /* 10b02978 call 0x10b03530 */
  push32(0x10b0297du); f_10b03530();
  /* 10b0297d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0297f jne 0x10b0298d */
  if (!C.zf) goto L_10b0298d;
  /* 10b02981 call 0x10b06410 */
  push32(0x10b02986u); f_10b06410();
  /* 10b02986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02988 jmp 0x10b02a35 */
  goto L_10b02a35;
L_10b0298d:;
  /* 10b0298d call dword ptr [0x10b32320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32320))), 0x10b02993u);
  /* 10b02993 mov dword ptr [0x10b3104c], eax */
  w32((uint32_t)(0x10b3104c), (EAX));
  /* 10b02998 call 0x10b061a0 */
  push32(0x10b0299du); f_10b061a0();
  /* 10b0299d mov dword ptr [0x10b2f4f8], eax */
  w32((uint32_t)(0x10b2f4f8), (EAX));
  /* 10b029a2 call 0x10b037e0 */
  push32(0x10b029a7u); f_10b037e0();
  /* 10b029a7 call 0x10b05c90 */
  push32(0x10b029acu); f_10b05c90();
  /* 10b029ac call 0x10b05b40 */
  push32(0x10b029b1u); f_10b05b40();
  /* 10b029b1 call 0x10b03330 */
  push32(0x10b029b6u); f_10b03330();
  /* 10b029b6 mov ecx, dword ptr [0x10b2f4f4] */
  ECX = (r32((uint32_t)(0x10b2f4f4)));
  /* 10b029bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b029bf mov dword ptr [0x10b2f4f4], ecx */
  w32((uint32_t)(0x10b2f4f4), (ECX));
  /* 10b029c5 jmp 0x10b02a30 */
  goto L_10b02a30;
L_10b029c7:;
  /* 10b029c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b029cb jne 0x10b02a20 */
  if (!C.zf) goto L_10b02a20;
  /* 10b029cd cmp dword ptr [0x10b2f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b029d4 jle 0x10b02a1a */
  if ((C.zf||C.sf!=C.of)) goto L_10b02a1a;
  /* 10b029d6 mov edx, dword ptr [0x10b2f4f4] */
  EDX = (r32((uint32_t)(0x10b2f4f4)));
  /* 10b029dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b029df mov dword ptr [0x10b2f4f4], edx */
  w32((uint32_t)(0x10b2f4f4), (EDX));
  /* 10b029e5 cmp dword ptr [0x10b2f548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b029ec jne 0x10b029f3 */
  if (!C.zf) goto L_10b029f3;
  /* 10b029ee call 0x10b033b0 */
  push32(0x10b029f3u); f_10b033b0();
L_10b029f3:;
  /* 10b029f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b029f5 call 0x10b050e0 */
  push32(0x10b029fau); f_10b050e0();
  /* 10b029fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b029fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b02a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02a02 je 0x10b02a09 */
  if (C.zf) goto L_10b02a09;
  /* 10b02a04 call 0x10b059f0 */
  push32(0x10b02a09u); f_10b059f0();
L_10b02a09:;
  /* 10b02a09 call 0x10b03b10 */
  push32(0x10b02a0eu); f_10b03b10();
  /* 10b02a0e call 0x10b035c0 */
  push32(0x10b02a13u); f_10b035c0();
  /* 10b02a13 call 0x10b06410 */
  push32(0x10b02a18u); f_10b06410();
  /* 10b02a18 jmp 0x10b02a1e */
  goto L_10b02a1e;
L_10b02a1a:;
  /* 10b02a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02a1c jmp 0x10b02a35 */
  goto L_10b02a35;
L_10b02a1e:;
  /* 10b02a1e jmp 0x10b02a30 */
  goto L_10b02a30;
L_10b02a20:;
  /* 10b02a20 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a24 jne 0x10b02a30 */
  if (!C.zf) goto L_10b02a30;
  /* 10b02a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02a28 call 0x10b036b0 */
  push32(0x10b02a2du); f_10b036b0();
  /* 10b02a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02a30:;
  /* 10b02a30 mov eax, 1 */
  EAX = (0x1u);
L_10b02a35:;
  /* 10b02a35 pop ebp */
  EBP = (pop32());
  /* 10b02a36 ret 0xc */
  ESPCHK(0x10b02900u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10b02a40 (243 bytes, 86 insns) */
void f_10b02a40(void) {
  FTRACE(0x10b02a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02a41 mov ebp, esp */
  EBP = (ESP);
  /* 10b02a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02a44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b02a4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a4f jne 0x10b02a61 */
  if (!C.zf) goto L_10b02a61;
  /* 10b02a51 cmp dword ptr [0x10b2f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a58 jne 0x10b02a61 */
  if (!C.zf) goto L_10b02a61;
  /* 10b02a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02a5c jmp 0x10b02b2d */
  goto L_10b02b2d;
L_10b02a61:;
  /* 10b02a61 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a65 je 0x10b02a6d */
  if (C.zf) goto L_10b02a6d;
  /* 10b02a67 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a6b jne 0x10b02aaf */
  if (!C.zf) goto L_10b02aaf;
L_10b02a6d:;
  /* 10b02a6d cmp dword ptr [0x10b3105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b3105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a74 je 0x10b02a8b */
  if (C.zf) goto L_10b02a8b;
  /* 10b02a76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02a79 push eax */
  push32((uint32_t)(EAX));
  /* 10b02a7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02a7d push ecx */
  push32((uint32_t)(ECX));
  /* 10b02a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02a81 push edx */
  push32((uint32_t)(EDX));
  /* 10b02a82 call dword ptr [0x10b3105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3105c))), 0x10b02a88u);
  /* 10b02a88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b02a8b:;
  /* 10b02a8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02a8f je 0x10b02aa5 */
  if (C.zf) goto L_10b02aa5;
  /* 10b02a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02a94 push eax */
  push32((uint32_t)(EAX));
  /* 10b02a95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02a98 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02a9c push edx */
  push32((uint32_t)(EDX));
  /* 10b02a9d call 0x10b02900 */
  push32(0x10b02aa2u); f_10b02900();
  /* 10b02aa2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b02aa5:;
  /* 10b02aa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02aa9 jne 0x10b02aaf */
  if (!C.zf) goto L_10b02aaf;
  /* 10b02aab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02aad jmp 0x10b02b2d */
  goto L_10b02b2d;
L_10b02aaf:;
  /* 10b02aaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02ab2 push eax */
  push32((uint32_t)(EAX));
  /* 10b02ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02aba push edx */
  push32((uint32_t)(EDX));
  /* 10b02abb call 0x10b01014 */
  push32(0x10b02ac0u); f_10b01014();
  /* 10b02ac0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b02ac3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02ac7 jne 0x10b02ade */
  if (!C.zf) goto L_10b02ade;
  /* 10b02ac9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02acd jne 0x10b02ade */
  if (!C.zf) goto L_10b02ade;
  /* 10b02acf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02ad2 push eax */
  push32((uint32_t)(EAX));
  /* 10b02ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02ad5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02ad9 call 0x10b02900 */
  push32(0x10b02adeu); f_10b02900();
L_10b02ade:;
  /* 10b02ade cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02ae2 je 0x10b02aea */
  if (C.zf) goto L_10b02aea;
  /* 10b02ae4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02ae8 jne 0x10b02b2a */
  if (!C.zf) goto L_10b02b2a;
L_10b02aea:;
  /* 10b02aea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02aed push edx */
  push32((uint32_t)(EDX));
  /* 10b02aee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02af1 push eax */
  push32((uint32_t)(EAX));
  /* 10b02af2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02af6 call 0x10b02900 */
  push32(0x10b02afbu); f_10b02900();
  /* 10b02afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02afd jne 0x10b02b06 */
  if (!C.zf) goto L_10b02b06;
  /* 10b02aff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b02b06:;
  /* 10b02b06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b0a je 0x10b02b2a */
  if (C.zf) goto L_10b02b2a;
  /* 10b02b0c cmp dword ptr [0x10b3105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b3105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b13 je 0x10b02b2a */
  if (C.zf) goto L_10b02b2a;
  /* 10b02b15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02b18 push edx */
  push32((uint32_t)(EDX));
  /* 10b02b19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02b1c push eax */
  push32((uint32_t)(EAX));
  /* 10b02b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02b20 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02b21 call dword ptr [0x10b3105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3105c))), 0x10b02b27u);
  /* 10b02b27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b02b2a:;
  /* 10b02b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b02b2d:;
  /* 10b02b2d mov esp, ebp */
  ESP = (EBP);
  /* 10b02b2f pop ebp */
  EBP = (pop32());
  /* 10b02b30 ret 0xc */
  ESPCHK(0x10b02a40u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10b02b40 (58 bytes, 18 insns) */
void f_10b02b40(void) {
  FTRACE(0x10b02b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02b41 mov ebp, esp */
  EBP = (ESP);
  /* 10b02b43 cmp dword ptr [0x10b2f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b4a je 0x10b02b5e */
  if (C.zf) goto L_10b02b5e;
  /* 10b02b4c cmp dword ptr [0x10b2f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b53 jne 0x10b02b63 */
  if (!C.zf) goto L_10b02b63;
  /* 10b02b55 cmp dword ptr [0x10b2f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b5c jne 0x10b02b63 */
  if (!C.zf) goto L_10b02b63;
L_10b02b5e:;
  /* 10b02b5e call 0x10b064b0 */
  push32(0x10b02b63u); f_10b064b0();
L_10b02b63:;
  /* 10b02b63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02b66 push eax */
  push32((uint32_t)(EAX));
  /* 10b02b67 call 0x10b06500 */
  push32(0x10b02b6cu); f_10b06500();
  /* 10b02b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02b6f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b02b74 call dword ptr [0x10b2da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2da30))), 0x10b02b7au);
  /* 10b02b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02b7d pop ebp */
  EBP = (pop32());
  /* 10b02b7e ret  */
  ESPCHK(0x10b02b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x10b02b80 (11 bytes, 5 insns) */
void f_10b02b80(void) {
  FTRACE(0x10b02b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02b81 mov ebp, esp */
  EBP = (ESP);
  /* 10b02b83 call dword ptr [0x10b32328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32328))), 0x10b02b89u);
  /* 10b02b89 pop ebp */
  EBP = (pop32());
  /* 10b02b8a ret  */
  ESPCHK(0x10b02b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x10b02b90 (87 bytes, 30 insns) */
void f_10b02b90(void) {
  FTRACE(0x10b02b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02b91 mov ebp, esp */
  EBP = (ESP);
  /* 10b02b93 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02b94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b98 jl 0x10b02ba0 */
  if ((C.sf!=C.of)) goto L_10b02ba0;
  /* 10b02b9a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02b9e jl 0x10b02ba5 */
  if ((C.sf!=C.of)) goto L_10b02ba5;
L_10b02ba0:;
  /* 10b02ba0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02ba3 jmp 0x10b02be3 */
  goto L_10b02be3;
L_10b02ba5:;
  /* 10b02ba5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02ba9 jne 0x10b02bb7 */
  if (!C.zf) goto L_10b02bb7;
  /* 10b02bab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02bae mov eax, dword ptr [eax*4 + 0x10b2da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b2da38)));
  /* 10b02bb5 jmp 0x10b02be3 */
  goto L_10b02be3;
L_10b02bb7:;
  /* 10b02bb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02bba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b02bbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b02bbf je 0x10b02bc6 */
  if (C.zf) goto L_10b02bc6;
  /* 10b02bc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02bc4 jmp 0x10b02be3 */
  goto L_10b02be3;
L_10b02bc6:;
  /* 10b02bc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02bc9 mov eax, dword ptr [edx*4 + 0x10b2da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2da38)));
  /* 10b02bd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b02bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02bd9 mov dword ptr [ecx*4 + 0x10b2da38], edx */
  w32((uint32_t)(ECX*4 + 0x10b2da38), (EDX));
  /* 10b02be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b02be3:;
  /* 10b02be3 mov esp, ebp */
  ESP = (EBP);
  /* 10b02be5 pop ebp */
  EBP = (pop32());
  /* 10b02be6 ret  */
  ESPCHK(0x10b02b90u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10b02bf0 (126 bytes, 38 insns) */
void f_10b02bf0(void) {
  FTRACE(0x10b02bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10b02bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02bf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02bf8 jl 0x10b02c00 */
  if ((C.sf!=C.of)) goto L_10b02c00;
  /* 10b02bfa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02bfe jl 0x10b02c07 */
  if ((C.sf!=C.of)) goto L_10b02c07;
L_10b02c00:;
  /* 10b02c00 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10b02c05 jmp 0x10b02c6a */
  goto L_10b02c6a;
L_10b02c07:;
  /* 10b02c07 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02c0b jne 0x10b02c19 */
  if (!C.zf) goto L_10b02c19;
  /* 10b02c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c10 mov eax, dword ptr [eax*4 + 0x10b2da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b2da44)));
  /* 10b02c17 jmp 0x10b02c6a */
  goto L_10b02c6a;
L_10b02c19:;
  /* 10b02c19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c1c mov edx, dword ptr [ecx*4 + 0x10b2da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da44)));
  /* 10b02c23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b02c26 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02c2a jne 0x10b02c40 */
  if (!C.zf) goto L_10b02c40;
  /* 10b02c2c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b02c2e call dword ptr [0x10b3232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3232c))), 0x10b02c34u);
  /* 10b02c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c37 mov dword ptr [ecx*4 + 0x10b2da44], eax */
  w32((uint32_t)(ECX*4 + 0x10b2da44), (EAX));
  /* 10b02c3e jmp 0x10b02c67 */
  goto L_10b02c67;
L_10b02c40:;
  /* 10b02c40 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02c44 jne 0x10b02c5a */
  if (!C.zf) goto L_10b02c5a;
  /* 10b02c46 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b02c48 call dword ptr [0x10b3232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3232c))), 0x10b02c4eu);
  /* 10b02c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c51 mov dword ptr [edx*4 + 0x10b2da44], eax */
  w32((uint32_t)(EDX*4 + 0x10b2da44), (EAX));
  /* 10b02c58 jmp 0x10b02c67 */
  goto L_10b02c67;
L_10b02c5a:;
  /* 10b02c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02c60 mov dword ptr [eax*4 + 0x10b2da44], ecx */
  w32((uint32_t)(EAX*4 + 0x10b2da44), (ECX));
L_10b02c67:;
  /* 10b02c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b02c6a:;
  /* 10b02c6a mov esp, ebp */
  ESP = (EBP);
  /* 10b02c6c pop ebp */
  EBP = (pop32());
  /* 10b02c6d ret  */
  ESPCHK(0x10b02bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x10b02c70 (28 bytes, 11 insns) */
void f_10b02c70(void) {
  FTRACE(0x10b02c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02c71 mov ebp, esp */
  EBP = (ESP);
  /* 10b02c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02c74 mov eax, dword ptr [0x10b31040] */
  EAX = (r32((uint32_t)(0x10b31040)));
  /* 10b02c79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b02c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02c7f mov dword ptr [0x10b31040], ecx */
  w32((uint32_t)(0x10b31040), (ECX));
  /* 10b02c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b02c88 mov esp, ebp */
  ESP = (EBP);
  /* 10b02c8a pop ebp */
  EBP = (pop32());
  /* 10b02c8b ret  */
  ESPCHK(0x10b02c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c90 @ 0x10b02c90 (912 bytes, 248 insns) */
void f_10b02c90(void) {
  FTRACE(0x10b02c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b02c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b02c91 mov ebp, esp */
  EBP = (ESP);
  /* 10b02c93 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10b02c98 call 0x10b06d70 */
  push32(0x10b02c9du); f_10b06d70();
  /* 10b02c9d push edi */
  push32((uint32_t)(EDI));
  /* 10b02c9e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10b02ca5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b02caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02cac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10b02cb2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b02cb4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b02cb6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b02cb7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10b02cbe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b02cc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02cc5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10b02ccb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b02ccd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b02ccf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b02cd0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10b02cd7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10b02cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b02cde lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10b02ce4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b02ce6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10b02ce8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b02ce9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10b02cec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10b02cf2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02cf6 jl 0x10b02cfe */
  if ((C.sf!=C.of)) goto L_10b02cfe;
  /* 10b02cf8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02cfc jl 0x10b02d06 */
  if ((C.sf!=C.of)) goto L_10b02d06;
L_10b02cfe:;
  /* 10b02cfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02d01 jmp 0x10b0301b */
  goto L_10b0301b;
L_10b02d06:;
  /* 10b02d06 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02d0a jne 0x10b02db0 */
  if (!C.zf) goto L_10b02db0;
  /* 10b02d10 push 0x10b2da34 */
  push32((uint32_t)(0x10b2da34u));
  /* 10b02d15 call dword ptr [0x10b32344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32344))), 0x10b02d1bu);
  /* 10b02d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02d1d jle 0x10b02db0 */
  if ((C.zf||C.sf!=C.of)) goto L_10b02db0;
  /* 10b02d23 cmp dword ptr [0x10b2f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02d2a jne 0x10b02d6e */
  if (!C.zf) goto L_10b02d6e;
  /* 10b02d2c push 0x10b2a470 */
  push32((uint32_t)(0x10b2a470u));
  /* 10b02d31 call dword ptr [0x10b32340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32340))), 0x10b02d37u);
  /* 10b02d37 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10b02d3d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02d44 je 0x10b02d66 */
  if (C.zf) goto L_10b02d66;
  /* 10b02d46 push 0x10b2a464 */
  push32((uint32_t)(0x10b2a464u));
  /* 10b02d4b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10b02d51 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02d52 call dword ptr [0x10b3233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3233c))), 0x10b02d58u);
  /* 10b02d58 mov dword ptr [0x10b2f508], eax */
  w32((uint32_t)(0x10b2f508), (EAX));
  /* 10b02d5d cmp dword ptr [0x10b2f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02d64 jne 0x10b02d6e */
  if (!C.zf) goto L_10b02d6e;
L_10b02d66:;
  /* 10b02d66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02d69 jmp 0x10b0301b */
  goto L_10b0301b;
L_10b02d6e:;
  /* 10b02d6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02d71 push edx */
  push32((uint32_t)(EDX));
  /* 10b02d72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02d75 push eax */
  push32((uint32_t)(EAX));
  /* 10b02d76 push 0x10b2a430 */
  push32((uint32_t)(0x10b2a430u));
  /* 10b02d7b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10b02d81 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02d82 call dword ptr [0x10b2f508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f508))), 0x10b02d88u);
  /* 10b02d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02d8b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b02d91 push edx */
  push32((uint32_t)(EDX));
  /* 10b02d92 call dword ptr [0x10b32338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32338))), 0x10b02d98u);
  /* 10b02d98 push 0x10b2da34 */
  push32((uint32_t)(0x10b2da34u));
  /* 10b02d9d call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b02da3u);
  /* 10b02da3 call 0x10b02b80 */
  push32(0x10b02da8u); f_10b02b80();
  /* 10b02da8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b02dab jmp 0x10b0301b */
  goto L_10b0301b;
L_10b02db0:;
  /* 10b02db0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02db4 je 0x10b02ded */
  if (C.zf) goto L_10b02ded;
  /* 10b02db6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10b02dbc push eax */
  push32((uint32_t)(EAX));
  /* 10b02dbd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b02dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02dc1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10b02dc6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10b02dcc push edx */
  push32((uint32_t)(EDX));
  /* 10b02dcd call 0x10b06c70 */
  push32(0x10b02dd2u); f_10b06c70();
  /* 10b02dd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02dd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02dd7 jge 0x10b02ded */
  if ((C.sf==C.of)) goto L_10b02ded;
  /* 10b02dd9 push 0x10b2a404 */
  push32((uint32_t)(0x10b2a404u));
  /* 10b02dde lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10b02de4 push eax */
  push32((uint32_t)(EAX));
  /* 10b02de5 call 0x10b06b80 */
  push32(0x10b02deau); f_10b06b80();
  /* 10b02dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02ded:;
  /* 10b02ded cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02df1 jne 0x10b02e25 */
  if (!C.zf) goto L_10b02e25;
  /* 10b02df3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02df7 je 0x10b02e05 */
  if (C.zf) goto L_10b02e05;
  /* 10b02df9 mov dword ptr [ebp - 0x3028], 0x10b2a3f0 */
  w32((uint32_t)(EBP + -0x3028), (0x10b2a3f0u));
  /* 10b02e03 jmp 0x10b02e0f */
  goto L_10b02e0f;
L_10b02e05:;
  /* 10b02e05 mov dword ptr [ebp - 0x3028], 0x10b2a3dc */
  w32((uint32_t)(EBP + -0x3028), (0x10b2a3dcu));
L_10b02e0f:;
  /* 10b02e0f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10b02e15 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02e16 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b02e1c push edx */
  push32((uint32_t)(EDX));
  /* 10b02e1d call 0x10b06b80 */
  push32(0x10b02e22u); f_10b06b80();
  /* 10b02e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02e25:;
  /* 10b02e25 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10b02e2b push eax */
  push32((uint32_t)(EAX));
  /* 10b02e2c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10b02e32 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02e33 call 0x10b06b90 */
  push32(0x10b02e38u); f_10b06b90();
  /* 10b02e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02e3b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02e3f jne 0x10b02e7a */
  if (!C.zf) goto L_10b02e7a;
  /* 10b02e41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02e44 mov eax, dword ptr [edx*4 + 0x10b2da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2da38)));
  /* 10b02e4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b02e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02e50 je 0x10b02e66 */
  if (C.zf) goto L_10b02e66;
  /* 10b02e52 push 0x10b2a3d8 */
  push32((uint32_t)(0x10b2a3d8u));
  /* 10b02e57 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10b02e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10b02e5e call 0x10b06b90 */
  push32(0x10b02e63u); f_10b06b90();
  /* 10b02e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02e66:;
  /* 10b02e66 push 0x10b2a3d4 */
  push32((uint32_t)(0x10b2a3d4u));
  /* 10b02e6b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b02e71 push edx */
  push32((uint32_t)(EDX));
  /* 10b02e72 call 0x10b06b90 */
  push32(0x10b02e77u); f_10b06b90();
  /* 10b02e77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02e7a:;
  /* 10b02e7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02e7e je 0x10b02ec2 */
  if (C.zf) goto L_10b02ec2;
  /* 10b02e80 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10b02e86 push eax */
  push32((uint32_t)(EAX));
  /* 10b02e87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02e8a push ecx */
  push32((uint32_t)(ECX));
  /* 10b02e8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02e8e push edx */
  push32((uint32_t)(EDX));
  /* 10b02e8f push 0x10b2a3c8 */
  push32((uint32_t)(0x10b2a3c8u));
  /* 10b02e94 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b02e99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b02e9f push eax */
  push32((uint32_t)(EAX));
  /* 10b02ea0 call 0x10b06a80 */
  push32(0x10b02ea5u); f_10b06a80();
  /* 10b02ea5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02eaa jge 0x10b02ec0 */
  if ((C.sf==C.of)) goto L_10b02ec0;
  /* 10b02eac push 0x10b2a404 */
  push32((uint32_t)(0x10b2a404u));
  /* 10b02eb1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10b02eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02eb8 call 0x10b06b80 */
  push32(0x10b02ebdu); f_10b06b80();
  /* 10b02ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02ec0:;
  /* 10b02ec0 jmp 0x10b02ed8 */
  goto L_10b02ed8;
L_10b02ec2:;
  /* 10b02ec2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10b02ec8 push edx */
  push32((uint32_t)(EDX));
  /* 10b02ec9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b02ecf push eax */
  push32((uint32_t)(EAX));
  /* 10b02ed0 call 0x10b06b80 */
  push32(0x10b02ed5u); f_10b06b80();
  /* 10b02ed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b02ed8:;
  /* 10b02ed8 cmp dword ptr [0x10b31040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02edf je 0x10b02f1c */
  if (C.zf) goto L_10b02f1c;
  /* 10b02ee1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10b02ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02ee8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b02eee push edx */
  push32((uint32_t)(EDX));
  /* 10b02eef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02ef2 push eax */
  push32((uint32_t)(EAX));
  /* 10b02ef3 call dword ptr [0x10b31040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b31040))), 0x10b02ef9u);
  /* 10b02ef9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b02efe je 0x10b02f1c */
  if (C.zf) goto L_10b02f1c;
  /* 10b02f00 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02f04 jne 0x10b02f11 */
  if (!C.zf) goto L_10b02f11;
  /* 10b02f06 push 0x10b2da34 */
  push32((uint32_t)(0x10b2da34u));
  /* 10b02f0b call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b02f11u);
L_10b02f11:;
  /* 10b02f11 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10b02f17 jmp 0x10b0301b */
  goto L_10b0301b;
L_10b02f1c:;
  /* 10b02f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02f1f mov edx, dword ptr [ecx*4 + 0x10b2da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da38)));
  /* 10b02f26 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b02f29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b02f2b je 0x10b02f6b */
  if (C.zf) goto L_10b02f6b;
  /* 10b02f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02f30 cmp dword ptr [eax*4 + 0x10b2da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b2da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02f38 je 0x10b02f6b */
  if (C.zf) goto L_10b02f6b;
  /* 10b02f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b02f3c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10b02f42 push ecx */
  push32((uint32_t)(ECX));
  /* 10b02f43 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b02f49 push edx */
  push32((uint32_t)(EDX));
  /* 10b02f4a call 0x10b06a00 */
  push32(0x10b02f4fu); f_10b06a00();
  /* 10b02f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02f52 push eax */
  push32((uint32_t)(EAX));
  /* 10b02f53 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10b02f59 push eax */
  push32((uint32_t)(EAX));
  /* 10b02f5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02f5d mov edx, dword ptr [ecx*4 + 0x10b2da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da44)));
  /* 10b02f64 push edx */
  push32((uint32_t)(EDX));
  /* 10b02f65 call dword ptr [0x10b32330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32330))), 0x10b02f6bu);
L_10b02f6b:;
  /* 10b02f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02f6e mov ecx, dword ptr [eax*4 + 0x10b2da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2da38)));
  /* 10b02f75 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b02f78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b02f7a je 0x10b02f89 */
  if (C.zf) goto L_10b02f89;
  /* 10b02f7c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10b02f82 push edx */
  push32((uint32_t)(EDX));
  /* 10b02f83 call dword ptr [0x10b32338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32338))), 0x10b02f89u);
L_10b02f89:;
  /* 10b02f89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02f8c mov ecx, dword ptr [eax*4 + 0x10b2da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2da38)));
  /* 10b02f93 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b02f96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b02f98 je 0x10b03008 */
  if (C.zf) goto L_10b03008;
  /* 10b02f9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02f9e je 0x10b02fbd */
  if (C.zf) goto L_10b02fbd;
  /* 10b02fa0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b02fa2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10b02fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10b02fa9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b02fac push eax */
  push32((uint32_t)(EAX));
  /* 10b02fad call 0x10b06710 */
  push32(0x10b02fb2u); f_10b06710();
  /* 10b02fb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02fb5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10b02fbb jmp 0x10b02fc7 */
  goto L_10b02fc7;
L_10b02fbd:;
  /* 10b02fbd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10b02fc7:;
  /* 10b02fc7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10b02fcd push ecx */
  push32((uint32_t)(ECX));
  /* 10b02fce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b02fd1 push edx */
  push32((uint32_t)(EDX));
  /* 10b02fd2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10b02fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10b02fd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b02fdc push ecx */
  push32((uint32_t)(ECX));
  /* 10b02fdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b02fe0 push edx */
  push32((uint32_t)(EDX));
  /* 10b02fe1 call 0x10b03020 */
  push32(0x10b02fe6u); f_10b03020();
  /* 10b02fe6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b02fe9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10b02fef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b02ff3 jne 0x10b03000 */
  if (!C.zf) goto L_10b03000;
  /* 10b02ff5 push 0x10b2da34 */
  push32((uint32_t)(0x10b2da34u));
  /* 10b02ffa call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b03000u);
L_10b03000:;
  /* 10b03000 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10b03006 jmp 0x10b0301b */
  goto L_10b0301b;
L_10b03008:;
  /* 10b03008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0300c jne 0x10b03019 */
  if (!C.zf) goto L_10b03019;
  /* 10b0300e push 0x10b2da34 */
  push32((uint32_t)(0x10b2da34u));
  /* 10b03013 call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b03019u);
L_10b03019:;
  /* 10b03019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0301b:;
  /* 10b0301b pop edi */
  EDI = (pop32());
  /* 10b0301c mov esp, ebp */
  ESP = (EBP);
  /* 10b0301e pop ebp */
  EBP = (pop32());
  /* 10b0301f ret  */
  ESPCHK(0x10b02c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x10b03020 (780 bytes, 197 insns) */
void f_10b03020(void) {
  FTRACE(0x10b03020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03020 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03021 mov ebp, esp */
  EBP = (ESP);
  /* 10b03023 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10b03028 call 0x10b06d70 */
  push32(0x10b0302du); f_10b06d70();
L_10b0302d:;
  /* 10b0302d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03031 jne 0x10b03058 */
  if (!C.zf) goto L_10b03058;
  /* 10b03033 push 0x10b2a5c0 */
  push32((uint32_t)(0x10b2a5c0u));
  /* 10b03038 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0303a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10b0303f push 0x10b2a5b4 */
  push32((uint32_t)(0x10b2a5b4u));
  /* 10b03044 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03046 call 0x10b02c90 */
  push32(0x10b0304bu); f_10b02c90();
  /* 10b0304b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0304e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03051 jne 0x10b03058 */
  if (!C.zf) goto L_10b03058;
  /* 10b03053 call 0x10b02b80 */
  push32(0x10b03058u); f_10b02b80();
L_10b03058:;
  /* 10b03058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0305a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0305c jne 0x10b0302d */
  if (!C.zf) goto L_10b0302d;
  /* 10b0305e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b03063 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10b03069 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0306a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0306c call dword ptr [0x10b32348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32348))), 0x10b03072u);
  /* 10b03072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03074 jne 0x10b0308a */
  if (!C.zf) goto L_10b0308a;
  /* 10b03076 push 0x10b2a59c */
  push32((uint32_t)(0x10b2a59cu));
  /* 10b0307b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10b03081 push edx */
  push32((uint32_t)(EDX));
  /* 10b03082 call 0x10b06b80 */
  push32(0x10b03087u); f_10b06b80();
  /* 10b03087 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0308a:;
  /* 10b0308a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10b03090 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03096 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03097 call 0x10b06a00 */
  push32(0x10b0309cu); f_10b06a00();
  /* 10b0309c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0309f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b030a2 jbe 0x10b030cd */
  if ((C.cf||C.zf)) goto L_10b030cd;
  /* 10b030a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b030a7 push edx */
  push32((uint32_t)(EDX));
  /* 10b030a8 call 0x10b06a00 */
  push32(0x10b030adu); f_10b06a00();
  /* 10b030ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b030b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b030b3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10b030b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b030ba push 3 */
  push32((uint32_t)(0x3u));
  /* 10b030bc push 0x10b2a598 */
  push32((uint32_t)(0x10b2a598u));
  /* 10b030c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b030c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b030c5 call 0x10b073f0 */
  push32(0x10b030cau); f_10b073f0();
  /* 10b030ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b030cd:;
  /* 10b030cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b030d0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10b030d6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b030dd je 0x10b03128 */
  if (C.zf) goto L_10b03128;
  /* 10b030df mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b030e5 push edx */
  push32((uint32_t)(EDX));
  /* 10b030e6 call 0x10b06a00 */
  push32(0x10b030ebu); f_10b06a00();
  /* 10b030eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b030ee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b030f1 jbe 0x10b03128 */
  if ((C.cf||C.zf)) goto L_10b03128;
  /* 10b030f3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b030f9 push eax */
  push32((uint32_t)(EAX));
  /* 10b030fa call 0x10b06a00 */
  push32(0x10b030ffu); f_10b06a00();
  /* 10b030ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03102 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b03108 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10b0310c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10b03112 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b03114 push 0x10b2a598 */
  push32((uint32_t)(0x10b2a598u));
  /* 10b03119 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b0311f push eax */
  push32((uint32_t)(EAX));
  /* 10b03120 call 0x10b073f0 */
  push32(0x10b03125u); f_10b073f0();
  /* 10b03125 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03128:;
  /* 10b03128 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0312c jne 0x10b0313a */
  if (!C.zf) goto L_10b0313a;
  /* 10b0312e mov dword ptr [ebp - 0x1114], 0x10b2a524 */
  w32((uint32_t)(EBP + -0x1114), (0x10b2a524u));
  /* 10b03138 jmp 0x10b03144 */
  goto L_10b03144;
L_10b0313a:;
  /* 10b0313a mov dword ptr [ebp - 0x1114], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1114), (0x10b2a2c4u));
L_10b03144:;
  /* 10b03144 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b03147 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0314a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0314c je 0x10b03159 */
  if (C.zf) goto L_10b03159;
  /* 10b0314e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b03151 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10b03157 jmp 0x10b03163 */
  goto L_10b03163;
L_10b03159:;
  /* 10b03159 mov dword ptr [ebp - 0x1118], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1118), (0x10b2a2c4u));
L_10b03163:;
  /* 10b03163 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b03166 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b03169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0316b je 0x10b0317f */
  if (C.zf) goto L_10b0317f;
  /* 10b0316d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03171 jne 0x10b0317f */
  if (!C.zf) goto L_10b0317f;
  /* 10b03173 mov dword ptr [ebp - 0x111c], 0x10b2a514 */
  w32((uint32_t)(EBP + -0x111c), (0x10b2a514u));
  /* 10b0317d jmp 0x10b03189 */
  goto L_10b03189;
L_10b0317f:;
  /* 10b0317f mov dword ptr [ebp - 0x111c], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x111c), (0x10b2a2c4u));
L_10b03189:;
  /* 10b03189 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0318c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0318f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b03191 je 0x10b0319f */
  if (C.zf) goto L_10b0319f;
  /* 10b03193 mov dword ptr [ebp - 0x1120], 0x10b2a510 */
  w32((uint32_t)(EBP + -0x1120), (0x10b2a510u));
  /* 10b0319d jmp 0x10b031a9 */
  goto L_10b031a9;
L_10b0319f:;
  /* 10b0319f mov dword ptr [ebp - 0x1120], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1120), (0x10b2a2c4u));
L_10b031a9:;
  /* 10b031a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b031ad je 0x10b031ba */
  if (C.zf) goto L_10b031ba;
  /* 10b031af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b031b2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10b031b8 jmp 0x10b031c4 */
  goto L_10b031c4;
L_10b031ba:;
  /* 10b031ba mov dword ptr [ebp - 0x1124], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1124), (0x10b2a2c4u));
L_10b031c4:;
  /* 10b031c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b031c8 je 0x10b031d6 */
  if (C.zf) goto L_10b031d6;
  /* 10b031ca mov dword ptr [ebp - 0x1128], 0x10b2a508 */
  w32((uint32_t)(EBP + -0x1128), (0x10b2a508u));
  /* 10b031d4 jmp 0x10b031e0 */
  goto L_10b031e0;
L_10b031d6:;
  /* 10b031d6 mov dword ptr [ebp - 0x1128], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1128), (0x10b2a2c4u));
L_10b031e0:;
  /* 10b031e0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b031e4 je 0x10b031f1 */
  if (C.zf) goto L_10b031f1;
  /* 10b031e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b031e9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10b031ef jmp 0x10b031fb */
  goto L_10b031fb;
L_10b031f1:;
  /* 10b031f1 mov dword ptr [ebp - 0x112c], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x112c), (0x10b2a2c4u));
L_10b031fb:;
  /* 10b031fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b031ff je 0x10b0320d */
  if (C.zf) goto L_10b0320d;
  /* 10b03201 mov dword ptr [ebp - 0x1130], 0x10b2a500 */
  w32((uint32_t)(EBP + -0x1130), (0x10b2a500u));
  /* 10b0320b jmp 0x10b03217 */
  goto L_10b03217;
L_10b0320d:;
  /* 10b0320d mov dword ptr [ebp - 0x1130], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1130), (0x10b2a2c4u));
L_10b03217:;
  /* 10b03217 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0321e je 0x10b0322e */
  if (C.zf) goto L_10b0322e;
  /* 10b03220 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10b03226 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10b0322c jmp 0x10b03238 */
  goto L_10b03238;
L_10b0322e:;
  /* 10b0322e mov dword ptr [ebp - 0x1134], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1134), (0x10b2a2c4u));
L_10b03238:;
  /* 10b03238 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0323f je 0x10b0324d */
  if (C.zf) goto L_10b0324d;
  /* 10b03241 mov dword ptr [ebp - 0x1138], 0x10b2a4f4 */
  w32((uint32_t)(EBP + -0x1138), (0x10b2a4f4u));
  /* 10b0324b jmp 0x10b03257 */
  goto L_10b03257;
L_10b0324d:;
  /* 10b0324d mov dword ptr [ebp - 0x1138], 0x10b2a2c4 */
  w32((uint32_t)(EBP + -0x1138), (0x10b2a2c4u));
L_10b03257:;
  /* 10b03257 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10b0325d push edx */
  push32((uint32_t)(EDX));
  /* 10b0325e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10b03264 push eax */
  push32((uint32_t)(EAX));
  /* 10b03265 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10b0326b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0326c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10b03272 push edx */
  push32((uint32_t)(EDX));
  /* 10b03273 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10b03279 push eax */
  push32((uint32_t)(EAX));
  /* 10b0327a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10b03280 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03281 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10b03287 push edx */
  push32((uint32_t)(EDX));
  /* 10b03288 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10b0328e push eax */
  push32((uint32_t)(EAX));
  /* 10b0328f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10b03295 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03296 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10b0329c push edx */
  push32((uint32_t)(EDX));
  /* 10b0329d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b032a0 push eax */
  push32((uint32_t)(EAX));
  /* 10b032a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b032a4 mov edx, dword ptr [ecx*4 + 0x10b2da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da50)));
  /* 10b032ab push edx */
  push32((uint32_t)(EDX));
  /* 10b032ac push 0x10b2a4a0 */
  push32((uint32_t)(0x10b2a4a0u));
  /* 10b032b1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b032b6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10b032bc push eax */
  push32((uint32_t)(EAX));
  /* 10b032bd call 0x10b06a80 */
  push32(0x10b032c2u); f_10b06a80();
  /* 10b032c2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b032c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b032c7 jge 0x10b032dd */
  if ((C.sf==C.of)) goto L_10b032dd;
  /* 10b032c9 push 0x10b2a404 */
  push32((uint32_t)(0x10b2a404u));
  /* 10b032ce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10b032d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b032d5 call 0x10b06b80 */
  push32(0x10b032dau); f_10b06b80();
  /* 10b032da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b032dd:;
  /* 10b032dd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10b032e2 push 0x10b2a47c */
  push32((uint32_t)(0x10b2a47cu));
  /* 10b032e7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10b032ed push edx */
  push32((uint32_t)(EDX));
  /* 10b032ee call 0x10b07330 */
  push32(0x10b032f3u); f_10b07330();
  /* 10b032f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b032f6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10b032fc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03303 jne 0x10b03316 */
  if (!C.zf) goto L_10b03316;
  /* 10b03305 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b03307 call 0x10b07070 */
  push32(0x10b0330cu); f_10b07070();
  /* 10b0330c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0330f push 3 */
  push32((uint32_t)(0x3u));
  /* 10b03311 call 0x10b03390 */
  push32(0x10b03316u); f_10b03390();
L_10b03316:;
  /* 10b03316 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0331d jne 0x10b03326 */
  if (!C.zf) goto L_10b03326;
  /* 10b0331f mov eax, 1 */
  EAX = (0x1u);
  /* 10b03324 jmp 0x10b03328 */
  goto L_10b03328;
L_10b03326:;
  /* 10b03326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b03328:;
  /* 10b03328 mov esp, ebp */
  ESP = (EBP);
  /* 10b0332a pop ebp */
  EBP = (pop32());
  /* 10b0332b ret  */
  ESPCHK(0x10b03020u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x10b03330 (56 bytes, 15 insns) */
void f_10b03330(void) {
  FTRACE(0x10b03330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03330 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03331 mov ebp, esp */
  EBP = (ESP);
  /* 10b03333 cmp dword ptr [0x10b3103c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b3103c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0333a je 0x10b03342 */
  if (C.zf) goto L_10b03342;
  /* 10b0333c call dword ptr [0x10b3103c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3103c))), 0x10b03342u);
L_10b03342:;
  /* 10b03342 push 0x10b2d418 */
  push32((uint32_t)(0x10b2d418u));
  /* 10b03347 push 0x10b2d208 */
  push32((uint32_t)(0x10b2d208u));
  /* 10b0334c call 0x10b03500 */
  push32(0x10b03351u); f_10b03500();
  /* 10b03351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03354 push 0x10b2d104 */
  push32((uint32_t)(0x10b2d104u));
  /* 10b03359 push 0x10b2d000 */
  push32((uint32_t)(0x10b2d000u));
  /* 10b0335e call 0x10b03500 */
  push32(0x10b03363u); f_10b03500();
  /* 10b03363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03366 pop ebp */
  EBP = (pop32());
  /* 10b03367 ret  */
  ESPCHK(0x10b03330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x10b03370 (21 bytes, 10 insns) */
void f_10b03370(void) {
  FTRACE(0x10b03370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03370 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03371 mov ebp, esp */
  EBP = (ESP);
  /* 10b03373 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03375 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0337a push eax */
  push32((uint32_t)(EAX));
  /* 10b0337b call 0x10b033f0 */
  push32(0x10b03380u); f_10b033f0();
  /* 10b03380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03383 pop ebp */
  EBP = (pop32());
  /* 10b03384 ret  */
  ESPCHK(0x10b03370u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10b03390 (21 bytes, 10 insns) */
void f_10b03390(void) {
  FTRACE(0x10b03390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03390 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03391 mov ebp, esp */
  EBP = (ESP);
  /* 10b03393 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03395 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0339a push eax */
  push32((uint32_t)(EAX));
  /* 10b0339b call 0x10b033f0 */
  push32(0x10b033a0u); f_10b033f0();
  /* 10b033a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b033a3 pop ebp */
  EBP = (pop32());
  /* 10b033a4 ret  */
  ESPCHK(0x10b03390u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x10b033b0 (19 bytes, 9 insns) */
void f_10b033b0(void) {
  FTRACE(0x10b033b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b033b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b033b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b033b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b033b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b033b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b033b9 call 0x10b033f0 */
  push32(0x10b033beu); f_10b033f0();
  /* 10b033be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b033c1 pop ebp */
  EBP = (pop32());
  /* 10b033c2 ret  */
  ESPCHK(0x10b033b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033d0 @ 0x10b033d0 (19 bytes, 9 insns) */
void f_10b033d0(void) {
  FTRACE(0x10b033d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b033d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b033d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b033d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b033d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b033d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b033d9 call 0x10b033f0 */
  push32(0x10b033deu); f_10b033f0();
  /* 10b033de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b033e1 pop ebp */
  EBP = (pop32());
  /* 10b033e2 ret  */
  ESPCHK(0x10b033d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033f0 @ 0x10b033f0 (227 bytes, 61 insns) */
void f_10b033f0(void) {
  FTRACE(0x10b033f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b033f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b033f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b033f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b033f4 call 0x10b034e0 */
  push32(0x10b033f9u); f_10b034e0();
  /* 10b033f9 cmp dword ptr [0x10b2f54c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f54c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03400 jne 0x10b03413 */
  if (!C.zf) goto L_10b03413;
  /* 10b03402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03405 push eax */
  push32((uint32_t)(EAX));
  /* 10b03406 call dword ptr [0x10b32354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32354))), 0x10b0340cu);
  /* 10b0340c push eax */
  push32((uint32_t)(EAX));
  /* 10b0340d call dword ptr [0x10b32350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32350))), 0x10b03413u);
L_10b03413:;
  /* 10b03413 mov dword ptr [0x10b2f548], 1 */
  w32((uint32_t)(0x10b2f548), (0x1u));
  /* 10b0341d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10b03420 mov byte ptr [0x10b2f544], cl */
  w8((uint32_t)(0x10b2f544), (CL));
  /* 10b03426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0342a jne 0x10b03473 */
  if (!C.zf) goto L_10b03473;
  /* 10b0342c cmp dword ptr [0x10b31038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03433 je 0x10b03461 */
  if (C.zf) goto L_10b03461;
  /* 10b03435 mov edx, dword ptr [0x10b31034] */
  EDX = (r32((uint32_t)(0x10b31034)));
  /* 10b0343b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0343e:;
  /* 10b0343e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03441 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0344a cmp ecx, dword ptr [0x10b31038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b31038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03450 jb 0x10b03461 */
  if (C.cf) goto L_10b03461;
  /* 10b03452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03455 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03458 je 0x10b0345f */
  if (C.zf) goto L_10b0345f;
  /* 10b0345a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0345d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10b0345fu);
L_10b0345f:;
  /* 10b0345f jmp 0x10b0343e */
  goto L_10b0343e;
L_10b03461:;
  /* 10b03461 push 0x10b2d724 */
  push32((uint32_t)(0x10b2d724u));
  /* 10b03466 push 0x10b2d51c */
  push32((uint32_t)(0x10b2d51cu));
  /* 10b0346b call 0x10b03500 */
  push32(0x10b03470u); f_10b03500();
  /* 10b03470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03473:;
  /* 10b03473 push 0x10b2d92c */
  push32((uint32_t)(0x10b2d92cu));
  /* 10b03478 push 0x10b2d828 */
  push32((uint32_t)(0x10b2d828u));
  /* 10b0347d call 0x10b03500 */
  push32(0x10b03482u); f_10b03500();
  /* 10b03482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03485 cmp dword ptr [0x10b2f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0348c jne 0x10b034ae */
  if (!C.zf) goto L_10b034ae;
  /* 10b0348e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b03490 call 0x10b050e0 */
  push32(0x10b03495u); f_10b050e0();
  /* 10b03495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03498 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0349b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0349d je 0x10b034ae */
  if (C.zf) goto L_10b034ae;
  /* 10b0349f mov dword ptr [0x10b2f550], 1 */
  w32((uint32_t)(0x10b2f550), (0x1u));
  /* 10b034a9 call 0x10b059f0 */
  push32(0x10b034aeu); f_10b059f0();
L_10b034ae:;
  /* 10b034ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b034b2 je 0x10b034bb */
  if (C.zf) goto L_10b034bb;
  /* 10b034b4 call 0x10b034f0 */
  push32(0x10b034b9u); f_10b034f0();
  /* 10b034b9 jmp 0x10b034cf */
  goto L_10b034cf;
L_10b034bb:;
  /* 10b034bb mov dword ptr [0x10b2f54c], 1 */
  w32((uint32_t)(0x10b2f54c), (0x1u));
  /* 10b034c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b034c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b034c9 call dword ptr [0x10b3234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3234c))), 0x10b034cfu);
L_10b034cf:;
  /* 10b034cf mov esp, ebp */
  ESP = (EBP);
  /* 10b034d1 pop ebp */
  EBP = (pop32());
  /* 10b034d2 ret  */
  ESPCHK(0x10b033f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e0 @ 0x10b034e0 (15 bytes, 7 insns) */
void f_10b034e0(void) {
  FTRACE(0x10b034e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b034e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b034e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b034e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b034e5 call 0x10b075d0 */
  push32(0x10b034eau); f_10b075d0();
  /* 10b034ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b034ed pop ebp */
  EBP = (pop32());
  /* 10b034ee ret  */
  ESPCHK(0x10b034e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x10b034f0 (15 bytes, 7 insns) */
void f_10b034f0(void) {
  FTRACE(0x10b034f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b034f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b034f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b034f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b034f5 call 0x10b07670 */
  push32(0x10b034fau); f_10b07670();
  /* 10b034fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b034fd pop ebp */
  EBP = (pop32());
  /* 10b034fe ret  */
  ESPCHK(0x10b034f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10b03500 (37 bytes, 16 insns) */
void f_10b03500(void) {
  FTRACE(0x10b03500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03500 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03501 mov ebp, esp */
  EBP = (ESP);
L_10b03503:;
  /* 10b03503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03506 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03509 jae 0x10b03523 */
  if (!C.cf) goto L_10b03523;
  /* 10b0350b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0350e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03511 je 0x10b03518 */
  if (C.zf) goto L_10b03518;
  /* 10b03513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03516 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10b03518u);
L_10b03518:;
  /* 10b03518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0351b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0351e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b03521 jmp 0x10b03503 */
  goto L_10b03503;
L_10b03523:;
  /* 10b03523 pop ebp */
  EBP = (pop32());
  /* 10b03524 ret  */
  ESPCHK(0x10b03500u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x10b03530 (130 bytes, 42 insns) */
void f_10b03530(void) {
  FTRACE(0x10b03530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03530 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03531 mov ebp, esp */
  EBP = (ESP);
  /* 10b03533 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03534 call 0x10b074f0 */
  push32(0x10b03539u); f_10b074f0();
  /* 10b03539 call dword ptr [0x10b32360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32360))), 0x10b0353fu);
  /* 10b0353f mov dword ptr [0x10b2da5c], eax */
  w32((uint32_t)(0x10b2da5c), (EAX));
  /* 10b03544 cmp dword ptr [0x10b2da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0354b jne 0x10b03551 */
  if (!C.zf) goto L_10b03551;
  /* 10b0354d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0354f jmp 0x10b035ae */
  goto L_10b035ae;
L_10b03551:;
  /* 10b03551 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10b03553 push 0x10b2a5d8 */
  push32((uint32_t)(0x10b2a5d8u));
  /* 10b03558 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0355a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b0355c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0355e call 0x10b03fe0 */
  push32(0x10b03563u); f_10b03fe0();
  /* 10b03563 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03566 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03569 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0356d je 0x10b03584 */
  if (C.zf) goto L_10b03584;
  /* 10b0356f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03572 push eax */
  push32((uint32_t)(EAX));
  /* 10b03573 mov ecx, dword ptr [0x10b2da5c] */
  ECX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b03579 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0357a call dword ptr [0x10b3235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3235c))), 0x10b03580u);
  /* 10b03580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03582 jne 0x10b03588 */
  if (!C.zf) goto L_10b03588;
L_10b03584:;
  /* 10b03584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03586 jmp 0x10b035ae */
  goto L_10b035ae;
L_10b03588:;
  /* 10b03588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0358b push edx */
  push32((uint32_t)(EDX));
  /* 10b0358c call 0x10b035f0 */
  push32(0x10b03591u); f_10b035f0();
  /* 10b03591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03594 call dword ptr [0x10b32358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32358))), 0x10b0359au);
  /* 10b0359a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0359d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0359f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b035a2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10b035a9 mov eax, 1 */
  EAX = (0x1u);
L_10b035ae:;
  /* 10b035ae mov esp, ebp */
  ESP = (EBP);
  /* 10b035b0 pop ebp */
  EBP = (pop32());
  /* 10b035b1 ret  */
  ESPCHK(0x10b03530u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x10b035c0 (41 bytes, 11 insns) */
void f_10b035c0(void) {
  FTRACE(0x10b035c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b035c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b035c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b035c3 call 0x10b07530 */
  push32(0x10b035c8u); f_10b07530();
  /* 10b035c8 cmp dword ptr [0x10b2da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b035cf je 0x10b035e7 */
  if (C.zf) goto L_10b035e7;
  /* 10b035d1 mov eax, dword ptr [0x10b2da5c] */
  EAX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b035d6 push eax */
  push32((uint32_t)(EAX));
  /* 10b035d7 call dword ptr [0x10b32364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32364))), 0x10b035ddu);
  /* 10b035dd mov dword ptr [0x10b2da5c], 0xffffffff */
  w32((uint32_t)(0x10b2da5c), (0xffffffffu));
L_10b035e7:;
  /* 10b035e7 pop ebp */
  EBP = (pop32());
  /* 10b035e8 ret  */
  ESPCHK(0x10b035c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f0 @ 0x10b035f0 (25 bytes, 8 insns) */
void f_10b035f0(void) {
  FTRACE(0x10b035f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b035f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b035f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b035f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b035f6 mov dword ptr [eax + 0x50], 0x10b2dc00 */
  w32((uint32_t)(EAX + 0x50), (0x10b2dc00u));
  /* 10b035fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03600 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10b03607 pop ebp */
  EBP = (pop32());
  /* 10b03608 ret  */
  ESPCHK(0x10b035f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x10b03610 (152 bytes, 48 insns) */
void f_10b03610(void) {
  FTRACE(0x10b03610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03610 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03611 mov ebp, esp */
  EBP = (ESP);
  /* 10b03613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03616 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0361cu);
  /* 10b0361c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0361f mov eax, dword ptr [0x10b2da5c] */
  EAX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b03624 push eax */
  push32((uint32_t)(EAX));
  /* 10b03625 call dword ptr [0x10b32298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32298))), 0x10b0362bu);
  /* 10b0362b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0362e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03632 jne 0x10b03697 */
  if (!C.zf) goto L_10b03697;
  /* 10b03634 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10b03639 push 0x10b2a5d8 */
  push32((uint32_t)(0x10b2a5d8u));
  /* 10b0363e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03640 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b03642 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03644 call 0x10b03fe0 */
  push32(0x10b03649u); f_10b03fe0();
  /* 10b03649 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0364c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0364f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03653 je 0x10b0368d */
  if (C.zf) goto L_10b0368d;
  /* 10b03655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03658 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03659 mov edx, dword ptr [0x10b2da5c] */
  EDX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b0365f push edx */
  push32((uint32_t)(EDX));
  /* 10b03660 call dword ptr [0x10b3235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3235c))), 0x10b03666u);
  /* 10b03666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03668 je 0x10b0368d */
  if (C.zf) goto L_10b0368d;
  /* 10b0366a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0366d push eax */
  push32((uint32_t)(EAX));
  /* 10b0366e call 0x10b035f0 */
  push32(0x10b03673u); f_10b035f0();
  /* 10b03673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03676 call dword ptr [0x10b32358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32358))), 0x10b0367cu);
  /* 10b0367c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0367f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b03681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03684 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10b0368b jmp 0x10b03697 */
  goto L_10b03697;
L_10b0368d:;
  /* 10b0368d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b0368f call 0x10b02b40 */
  push32(0x10b03694u); f_10b02b40();
  /* 10b03694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03697:;
  /* 10b03697 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0369a push eax */
  push32((uint32_t)(EAX));
  /* 10b0369b call dword ptr [0x10b32294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32294))), 0x10b036a1u);
  /* 10b036a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b036a4 mov esp, ebp */
  ESP = (EBP);
  /* 10b036a6 pop ebp */
  EBP = (pop32());
  /* 10b036a7 ret  */
  ESPCHK(0x10b03610u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b0 @ 0x10b036b0 (263 bytes, 86 insns) */
void f_10b036b0(void) {
  FTRACE(0x10b036b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b036b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b036b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b036b3 cmp dword ptr [0x10b2da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b036ba je 0x10b037b5 */
  if (C.zf) goto L_10b037b5;
  /* 10b036c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b036c4 jne 0x10b036d5 */
  if (!C.zf) goto L_10b036d5;
  /* 10b036c6 mov eax, dword ptr [0x10b2da5c] */
  EAX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b036cb push eax */
  push32((uint32_t)(EAX));
  /* 10b036cc call dword ptr [0x10b32298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32298))), 0x10b036d2u);
  /* 10b036d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b036d5:;
  /* 10b036d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b036d9 je 0x10b037a6 */
  if (C.zf) goto L_10b037a6;
  /* 10b036df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b036e2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b036e6 je 0x10b036f9 */
  if (C.zf) goto L_10b036f9;
  /* 10b036e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b036ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b036ed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10b036f0 push eax */
  push32((uint32_t)(EAX));
  /* 10b036f1 call 0x10b04660 */
  push32(0x10b036f6u); f_10b04660();
  /* 10b036f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b036f9:;
  /* 10b036f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b036fc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03700 je 0x10b03713 */
  if (C.zf) goto L_10b03713;
  /* 10b03702 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03707 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10b0370a push eax */
  push32((uint32_t)(EAX));
  /* 10b0370b call 0x10b04660 */
  push32(0x10b03710u); f_10b04660();
  /* 10b03710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03713:;
  /* 10b03713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03716 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0371a je 0x10b0372d */
  if (C.zf) goto L_10b0372d;
  /* 10b0371c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0371e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03721 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10b03724 push eax */
  push32((uint32_t)(EAX));
  /* 10b03725 call 0x10b04660 */
  push32(0x10b0372au); f_10b04660();
  /* 10b0372a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0372d:;
  /* 10b0372d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03730 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03734 je 0x10b03747 */
  if (C.zf) goto L_10b03747;
  /* 10b03736 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0373b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10b0373e push eax */
  push32((uint32_t)(EAX));
  /* 10b0373f call 0x10b04660 */
  push32(0x10b03744u); f_10b04660();
  /* 10b03744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03747:;
  /* 10b03747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0374a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0374e je 0x10b03761 */
  if (C.zf) goto L_10b03761;
  /* 10b03750 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03752 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03755 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10b03758 push eax */
  push32((uint32_t)(EAX));
  /* 10b03759 call 0x10b04660 */
  push32(0x10b0375eu); f_10b04660();
  /* 10b0375e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03761:;
  /* 10b03761 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03764 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03768 je 0x10b0377b */
  if (C.zf) goto L_10b0377b;
  /* 10b0376a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0376c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0376f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10b03772 push eax */
  push32((uint32_t)(EAX));
  /* 10b03773 call 0x10b04660 */
  push32(0x10b03778u); f_10b04660();
  /* 10b03778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0377b:;
  /* 10b0377b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0377e cmp dword ptr [ecx + 0x50], 0x10b2dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10b2dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03785 je 0x10b03798 */
  if (C.zf) goto L_10b03798;
  /* 10b03787 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0378c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10b0378f push eax */
  push32((uint32_t)(EAX));
  /* 10b03790 call 0x10b04660 */
  push32(0x10b03795u); f_10b04660();
  /* 10b03795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03798:;
  /* 10b03798 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0379a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0379d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0379e call 0x10b04660 */
  push32(0x10b037a3u); f_10b04660();
  /* 10b037a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b037a6:;
  /* 10b037a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b037a8 mov edx, dword ptr [0x10b2da5c] */
  EDX = (r32((uint32_t)(0x10b2da5c)));
  /* 10b037ae push edx */
  push32((uint32_t)(EDX));
  /* 10b037af call dword ptr [0x10b3235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3235c))), 0x10b037b5u);
L_10b037b5:;
  /* 10b037b5 pop ebp */
  EBP = (pop32());
  /* 10b037b6 ret  */
  ESPCHK(0x10b036b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037c0 @ 0x10b037c0 (11 bytes, 5 insns) */
void f_10b037c0(void) {
  FTRACE(0x10b037c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b037c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b037c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b037c3 call dword ptr [0x10b32358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32358))), 0x10b037c9u);
  /* 10b037c9 pop ebp */
  EBP = (pop32());
  /* 10b037ca ret  */
  ESPCHK(0x10b037c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x10b037d0 (11 bytes, 5 insns) */
void f_10b037d0(void) {
  FTRACE(0x10b037d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b037d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b037d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b037d3 call dword ptr [0x10b32374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32374))), 0x10b037d9u);
  /* 10b037d9 pop ebp */
  EBP = (pop32());
  /* 10b037da ret  */
  ESPCHK(0x10b037d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037e0 @ 0x10b037e0 (804 bytes, 236 insns) */
void f_10b037e0(void) {
  FTRACE(0x10b037e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b037e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b037e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b037e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b037e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10b037eb push 0x10b2a5e4 */
  push32((uint32_t)(0x10b2a5e4u));
  /* 10b037f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b037f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b037f7 call 0x10b03bd0 */
  push32(0x10b037fcu); f_10b03bd0();
  /* 10b037fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b037ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10b03802 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03806 jne 0x10b03812 */
  if (!C.zf) goto L_10b03812;
  /* 10b03808 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b0380a call 0x10b02b40 */
  push32(0x10b0380fu); f_10b02b40();
  /* 10b0380f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b03812:;
  /* 10b03812 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03815 mov dword ptr [0x10b30ee0], eax */
  w32((uint32_t)(0x10b30ee0), (EAX));
  /* 10b0381a mov dword ptr [0x10b3101c], 0x20 */
  w32((uint32_t)(0x10b3101c), (0x20u));
  /* 10b03824 jmp 0x10b0382f */
  goto L_10b0382f;
L_10b03826:;
  /* 10b03826 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03829 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0382c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10b0382f:;
  /* 10b0382f mov edx, dword ptr [0x10b30ee0] */
  EDX = (r32((uint32_t)(0x10b30ee0)));
  /* 10b03835 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0383b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0383e jae 0x10b03863 */
  if (!C.cf) goto L_10b03863;
  /* 10b03840 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03843 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b03847 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0384a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b03850 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03853 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b03857 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0385a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b03861 jmp 0x10b03826 */
  goto L_10b03826;
L_10b03863:;
  /* 10b03863 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10b03866 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03867 call dword ptr [0x10b32380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32380))), 0x10b0386du);
  /* 10b0386d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10b03870 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b03876 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b03878 je 0x10b03a05 */
  if (C.zf) goto L_10b03a05;
  /* 10b0387e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03882 je 0x10b03a05 */
  if (C.zf) goto L_10b03a05;
  /* 10b03888 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0388b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0388d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10b03890 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b03893 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03896 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b03899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0389c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0389f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10b038a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b038a9 jge 0x10b038b3 */
  if ((C.sf==C.of)) goto L_10b038b3;
  /* 10b038ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10b038ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10b038b1 jmp 0x10b038ba */
  goto L_10b038ba;
L_10b038b3:;
  /* 10b038b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10b038ba:;
  /* 10b038ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10b038bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10b038c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10b038c7 jmp 0x10b038d2 */
  goto L_10b038d2;
L_10b038c9:;
  /* 10b038c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b038cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b038cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10b038d2:;
  /* 10b038d2 mov ecx, dword ptr [0x10b3101c] */
  ECX = (r32((uint32_t)(0x10b3101c)));
  /* 10b038d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b038db jge 0x10b03972 */
  if ((C.sf==C.of)) goto L_10b03972;
  /* 10b038e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10b038e6 push 0x10b2a5e4 */
  push32((uint32_t)(0x10b2a5e4u));
  /* 10b038eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b038ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b038f2 call 0x10b03bd0 */
  push32(0x10b038f7u); f_10b03bd0();
  /* 10b038f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b038fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10b038fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03901 jne 0x10b0390e */
  if (!C.zf) goto L_10b0390e;
  /* 10b03903 mov edx, dword ptr [0x10b3101c] */
  EDX = (r32((uint32_t)(0x10b3101c)));
  /* 10b03909 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10b0390c jmp 0x10b03972 */
  goto L_10b03972;
L_10b0390e:;
  /* 10b0390e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b03911 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03914 mov dword ptr [eax*4 + 0x10b30ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10b30ee0), (ECX));
  /* 10b0391b mov edx, dword ptr [0x10b3101c] */
  EDX = (r32((uint32_t)(0x10b3101c)));
  /* 10b03921 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03924 mov dword ptr [0x10b3101c], edx */
  w32((uint32_t)(0x10b3101c), (EDX));
  /* 10b0392a jmp 0x10b03935 */
  goto L_10b03935;
L_10b0392c:;
  /* 10b0392c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0392f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03932 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10b03935:;
  /* 10b03935 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10b03938 mov edx, dword ptr [ecx*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0393f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03945 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03948 jae 0x10b0396d */
  if (!C.cf) goto L_10b0396d;
  /* 10b0394a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0394d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b03951 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03954 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b0395a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0395d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b03961 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03964 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b0396b jmp 0x10b0392c */
  goto L_10b0392c;
L_10b0396d:;
  /* 10b0396d jmp 0x10b038c9 */
  goto L_10b038c9;
L_10b03972:;
  /* 10b03972 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10b03979 jmp 0x10b03996 */
  goto L_10b03996;
L_10b0397b:;
  /* 10b0397b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b0397e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03981 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10b03984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03987 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0398a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0398d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b03990 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03993 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10b03996:;
  /* 10b03996 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b03999 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0399c jge 0x10b03a05 */
  if ((C.sf==C.of)) goto L_10b03a05;
  /* 10b0399e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b039a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b039a4 je 0x10b03a00 */
  if (C.zf) goto L_10b03a00;
  /* 10b039a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b039a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b039ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b039af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b039b1 je 0x10b03a00 */
  if (C.zf) goto L_10b03a00;
  /* 10b039b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b039b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b039b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b039bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b039be jne 0x10b039d0 */
  if (!C.zf) goto L_10b039d0;
  /* 10b039c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b039c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b039c5 push edx */
  push32((uint32_t)(EDX));
  /* 10b039c6 call dword ptr [0x10b3237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3237c))), 0x10b039ccu);
  /* 10b039cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b039ce je 0x10b03a00 */
  if (C.zf) goto L_10b03a00;
L_10b039d0:;
  /* 10b039d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b039d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b039d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b039d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b039dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b039df mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b039e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b039e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10b039eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b039ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10b039f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b039f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b039f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b039f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b039fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b039fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10b03a00:;
  /* 10b03a00 jmp 0x10b0397b */
  goto L_10b0397b;
L_10b03a05:;
  /* 10b03a05 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10b03a0c jmp 0x10b03a17 */
  goto L_10b03a17;
L_10b03a0e:;
  /* 10b03a0e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b03a11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03a14 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10b03a17:;
  /* 10b03a17 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a1b jge 0x10b03af4 */
  if ((C.sf==C.of)) goto L_10b03af4;
  /* 10b03a21 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b03a24 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b03a27 mov edx, dword ptr [0x10b30ee0] */
  EDX = (r32((uint32_t)(0x10b30ee0)));
  /* 10b03a2d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03a2f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10b03a32 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03a35 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a38 jne 0x10b03ae0 */
  if (!C.zf) goto L_10b03ae0;
  /* 10b03a3e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03a41 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10b03a45 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a49 jne 0x10b03a54 */
  if (!C.zf) goto L_10b03a54;
  /* 10b03a4b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10b03a52 jmp 0x10b03a64 */
  goto L_10b03a64;
L_10b03a54:;
  /* 10b03a54 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10b03a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03a5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b03a5c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03a5e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03a61 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10b03a64:;
  /* 10b03a64 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10b03a67 push eax */
  push32((uint32_t)(EAX));
  /* 10b03a68 call dword ptr [0x10b3232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3232c))), 0x10b03a6eu);
  /* 10b03a6e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10b03a71 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a75 je 0x10b03acf */
  if (C.zf) goto L_10b03acf;
  /* 10b03a77 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b03a7a push ecx */
  push32((uint32_t)(ECX));
  /* 10b03a7b call dword ptr [0x10b3237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3237c))), 0x10b03a81u);
  /* 10b03a81 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10b03a84 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a88 je 0x10b03acf */
  if (C.zf) goto L_10b03acf;
  /* 10b03a8a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03a8d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b03a90 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b03a92 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10b03a95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b03a9b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03a9e jne 0x10b03ab0 */
  if (!C.zf) goto L_10b03ab0;
  /* 10b03aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03aa3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b03aa6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10b03aa8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03aab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10b03aae jmp 0x10b03acd */
  goto L_10b03acd;
L_10b03ab0:;
  /* 10b03ab0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10b03ab3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b03ab9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03abc jne 0x10b03acd */
  if (!C.zf) goto L_10b03acd;
  /* 10b03abe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03ac1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b03ac4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10b03ac7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03aca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b03acd:;
  /* 10b03acd jmp 0x10b03ade */
  goto L_10b03ade;
L_10b03acf:;
  /* 10b03acf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03ad2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b03ad5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10b03ad8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03adb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b03ade:;
  /* 10b03ade jmp 0x10b03aef */
  goto L_10b03aef;
L_10b03ae0:;
  /* 10b03ae0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03ae3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b03ae6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10b03ae9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b03aec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10b03aef:;
  /* 10b03aef jmp 0x10b03a0e */
  goto L_10b03a0e;
L_10b03af4:;
  /* 10b03af4 mov eax, dword ptr [0x10b3101c] */
  EAX = (r32((uint32_t)(0x10b3101c)));
  /* 10b03af9 push eax */
  push32((uint32_t)(EAX));
  /* 10b03afa call dword ptr [0x10b32378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32378))), 0x10b03b00u);
  /* 10b03b00 mov esp, ebp */
  ESP = (EBP);
  /* 10b03b02 pop ebp */
  EBP = (pop32());
  /* 10b03b03 ret  */
  ESPCHK(0x10b037e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10b03b10 (155 bytes, 45 insns) */
void f_10b03b10(void) {
  FTRACE(0x10b03b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03b11 mov ebp, esp */
  EBP = (ESP);
  /* 10b03b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03b16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b03b1d jmp 0x10b03b28 */
  goto L_10b03b28;
L_10b03b1f:;
  /* 10b03b1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03b25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b03b28:;
  /* 10b03b28 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03b2c jge 0x10b03ba7 */
  if ((C.sf==C.of)) goto L_10b03ba7;
  /* 10b03b2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b31 cmp dword ptr [ecx*4 + 0x10b30ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b30ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03b39 je 0x10b03ba2 */
  if (C.zf) goto L_10b03ba2;
  /* 10b03b3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b3e mov eax, dword ptr [edx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b03b45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03b48 jmp 0x10b03b53 */
  goto L_10b03b53;
L_10b03b4a:;
  /* 10b03b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03b4d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03b50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b03b53:;
  /* 10b03b53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b56 mov eax, dword ptr [edx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b03b5d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03b62 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03b65 jae 0x10b03b7f */
  if (!C.cf) goto L_10b03b7f;
  /* 10b03b67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03b6a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03b6e je 0x10b03b7d */
  if (C.zf) goto L_10b03b7d;
  /* 10b03b70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03b73 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03b76 push edx */
  push32((uint32_t)(EDX));
  /* 10b03b77 call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b03b7du);
L_10b03b7d:;
  /* 10b03b7d jmp 0x10b03b4a */
  goto L_10b03b4a;
L_10b03b7f:;
  /* 10b03b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03b81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b84 mov ecx, dword ptr [eax*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b03b8b push ecx */
  push32((uint32_t)(ECX));
  /* 10b03b8c call 0x10b04660 */
  push32(0x10b03b91u); f_10b04660();
  /* 10b03b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03b94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03b97 mov dword ptr [edx*4 + 0x10b30ee0], 0 */
  w32((uint32_t)(EDX*4 + 0x10b30ee0), (0x0u));
L_10b03ba2:;
  /* 10b03ba2 jmp 0x10b03b1f */
  goto L_10b03b1f;
L_10b03ba7:;
  /* 10b03ba7 mov esp, ebp */
  ESP = (EBP);
  /* 10b03ba9 pop ebp */
  EBP = (pop32());
  /* 10b03baa ret  */
  ESPCHK(0x10b03b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x10b03bb0 (29 bytes, 13 insns) */
void f_10b03bb0(void) {
  FTRACE(0x10b03bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b03bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03bb9 mov eax, dword ptr [0x10b2f6f8] */
  EAX = (r32((uint32_t)(0x10b2f6f8)));
  /* 10b03bbe push eax */
  push32((uint32_t)(EAX));
  /* 10b03bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03bc3 call 0x10b03c20 */
  push32(0x10b03bc8u); f_10b03c20();
  /* 10b03bc8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03bcb pop ebp */
  EBP = (pop32());
  /* 10b03bcc ret  */
  ESPCHK(0x10b03bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x10b03bd0 (35 bytes, 16 insns) */
void f_10b03bd0(void) {
  FTRACE(0x10b03bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b03bd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03bd6 push eax */
  push32((uint32_t)(EAX));
  /* 10b03bd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03bda push ecx */
  push32((uint32_t)(ECX));
  /* 10b03bdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03bde push edx */
  push32((uint32_t)(EDX));
  /* 10b03bdf mov eax, dword ptr [0x10b2f6f8] */
  EAX = (r32((uint32_t)(0x10b2f6f8)));
  /* 10b03be4 push eax */
  push32((uint32_t)(EAX));
  /* 10b03be5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03be8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03be9 call 0x10b03c20 */
  push32(0x10b03beeu); f_10b03c20();
  /* 10b03bee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03bf1 pop ebp */
  EBP = (pop32());
  /* 10b03bf2 ret  */
  ESPCHK(0x10b03bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c00 @ 0x10b03c00 (27 bytes, 13 insns) */
void f_10b03c00(void) {
  FTRACE(0x10b03c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03c01 mov ebp, esp */
  EBP = (ESP);
  /* 10b03c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03c0c push eax */
  push32((uint32_t)(EAX));
  /* 10b03c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03c11 call 0x10b03c20 */
  push32(0x10b03c16u); f_10b03c20();
  /* 10b03c16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c19 pop ebp */
  EBP = (pop32());
  /* 10b03c1a ret  */
  ESPCHK(0x10b03c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c20 @ 0x10b03c20 (94 bytes, 38 insns) */
void f_10b03c20(void) {
  FTRACE(0x10b03c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03c21 mov ebp, esp */
  EBP = (ESP);
  /* 10b03c23 push ecx */
  push32((uint32_t)(ECX));
L_10b03c24:;
  /* 10b03c24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b03c26 call 0x10b075d0 */
  push32(0x10b03c2bu); f_10b075d0();
  /* 10b03c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b03c31 push eax */
  push32((uint32_t)(EAX));
  /* 10b03c32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03c35 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03c36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03c39 push edx */
  push32((uint32_t)(EDX));
  /* 10b03c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03c3d push eax */
  push32((uint32_t)(EAX));
  /* 10b03c3e call 0x10b03ca0 */
  push32(0x10b03c43u); f_10b03ca0();
  /* 10b03c43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03c49 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b03c4b call 0x10b07670 */
  push32(0x10b03c50u); f_10b07670();
  /* 10b03c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03c57 jne 0x10b03c5f */
  if (!C.zf) goto L_10b03c5f;
  /* 10b03c59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03c5d jne 0x10b03c64 */
  if (!C.zf) goto L_10b03c64;
L_10b03c5f:;
  /* 10b03c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03c62 jmp 0x10b03c7a */
  goto L_10b03c7a;
L_10b03c64:;
  /* 10b03c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03c67 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03c68 call 0x10b07910 */
  push32(0x10b03c6du); f_10b07910();
  /* 10b03c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03c72 jne 0x10b03c78 */
  if (!C.zf) goto L_10b03c78;
  /* 10b03c74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03c76 jmp 0x10b03c7a */
  goto L_10b03c7a;
L_10b03c78:;
  /* 10b03c78 jmp 0x10b03c24 */
  goto L_10b03c24;
L_10b03c7a:;
  /* 10b03c7a mov esp, ebp */
  ESP = (EBP);
  /* 10b03c7c pop ebp */
  EBP = (pop32());
  /* 10b03c7d ret  */
  ESPCHK(0x10b03c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c80 @ 0x10b03c80 (23 bytes, 11 insns) */
void f_10b03c80(void) {
  FTRACE(0x10b03c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03c81 mov ebp, esp */
  EBP = (ESP);
  /* 10b03c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03c8c push eax */
  push32((uint32_t)(EAX));
  /* 10b03c8d call 0x10b03ca0 */
  push32(0x10b03c92u); f_10b03ca0();
  /* 10b03c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03c95 pop ebp */
  EBP = (pop32());
  /* 10b03c96 ret  */
  ESPCHK(0x10b03c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca0 @ 0x10b03ca0 (787 bytes, 254 insns) */
void f_10b03ca0(void) {
  FTRACE(0x10b03ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10b03ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b03ca7 push esi */
  push32((uint32_t)(ESI));
  /* 10b03ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10b03ca9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b03cb0 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b03cb5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b03cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03cba je 0x10b03cec */
  if (C.zf) goto L_10b03cec;
L_10b03cbc:;
  /* 10b03cbc call 0x10b04d70 */
  push32(0x10b03cc1u); f_10b04d70();
  /* 10b03cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03cc3 jne 0x10b03ce6 */
  if (!C.zf) goto L_10b03ce6;
  /* 10b03cc5 push 0x10b2a6d8 */
  push32((uint32_t)(0x10b2a6d8u));
  /* 10b03cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03ccc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10b03cd1 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b03cd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b03cd8 call 0x10b02c90 */
  push32(0x10b03cddu); f_10b02c90();
  /* 10b03cdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03ce0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03ce3 jne 0x10b03ce6 */
  if (!C.zf) goto L_10b03ce6;
  /* 10b03ce5 int3  */
  x86_unimpl("int3 @ 0x10b03ce5");
L_10b03ce6:;
  /* 10b03ce6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b03ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b03cea jne 0x10b03cbc */
  if (!C.zf) goto L_10b03cbc;
L_10b03cec:;
  /* 10b03cec mov edx, dword ptr [0x10b2da88] */
  EDX = (r32((uint32_t)(0x10b2da88)));
  /* 10b03cf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b03cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03cf8 cmp eax, dword ptr [0x10b2da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03cfe jne 0x10b03d01 */
  if (!C.zf) goto L_10b03d01;
  /* 10b03d00 int3  */
  x86_unimpl("int3 @ 0x10b03d00");
L_10b03d01:;
  /* 10b03d01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03d04 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03d05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03d08 push edx */
  push32((uint32_t)(EDX));
  /* 10b03d09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03d0c push eax */
  push32((uint32_t)(EAX));
  /* 10b03d0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03d10 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03d14 push edx */
  push32((uint32_t)(EDX));
  /* 10b03d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03d19 call dword ptr [0x10b2dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2dc90))), 0x10b03d1fu);
  /* 10b03d1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03d24 jne 0x10b03d84 */
  if (!C.zf) goto L_10b03d84;
  /* 10b03d26 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03d2a je 0x10b03d57 */
  if (C.zf) goto L_10b03d57;
L_10b03d2c:;
  /* 10b03d2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03d2f push eax */
  push32((uint32_t)(EAX));
  /* 10b03d30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03d34 push 0x10b2a694 */
  push32((uint32_t)(0x10b2a694u));
  /* 10b03d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d41 call 0x10b02c90 */
  push32(0x10b03d46u); f_10b02c90();
  /* 10b03d46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03d49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03d4c jne 0x10b03d4f */
  if (!C.zf) goto L_10b03d4f;
  /* 10b03d4e int3  */
  x86_unimpl("int3 @ 0x10b03d4e");
L_10b03d4f:;
  /* 10b03d4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b03d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b03d53 jne 0x10b03d2c */
  if (!C.zf) goto L_10b03d2c;
  /* 10b03d55 jmp 0x10b03d7d */
  goto L_10b03d7d;
L_10b03d57:;
  /* 10b03d57 push 0x10b2a670 */
  push32((uint32_t)(0x10b2a670u));
  /* 10b03d5c push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b03d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03d69 call 0x10b02c90 */
  push32(0x10b03d6eu); f_10b02c90();
  /* 10b03d6e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03d71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03d74 jne 0x10b03d77 */
  if (!C.zf) goto L_10b03d77;
  /* 10b03d76 int3  */
  x86_unimpl("int3 @ 0x10b03d76");
L_10b03d77:;
  /* 10b03d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b03d7b jne 0x10b03d57 */
  if (!C.zf) goto L_10b03d57;
L_10b03d7d:;
  /* 10b03d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03d7f jmp 0x10b03fac */
  goto L_10b03fac;
L_10b03d84:;
  /* 10b03d84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03d87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b03d8d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03d90 je 0x10b03da6 */
  if (C.zf) goto L_10b03da6;
  /* 10b03d92 mov edx, dword ptr [0x10b2da84] */
  EDX = (r32((uint32_t)(0x10b2da84)));
  /* 10b03d98 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b03d9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b03d9d jne 0x10b03da6 */
  if (!C.zf) goto L_10b03da6;
  /* 10b03d9f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10b03da6:;
  /* 10b03da6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03daa ja 0x10b03db7 */
  if ((!C.cf&&!C.zf)) goto L_10b03db7;
  /* 10b03dac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03daf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03db2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03db5 jbe 0x10b03de3 */
  if ((C.cf||C.zf)) goto L_10b03de3;
L_10b03db7:;
  /* 10b03db7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03dba push ecx */
  push32((uint32_t)(ECX));
  /* 10b03dbb push 0x10b2a648 */
  push32((uint32_t)(0x10b2a648u));
  /* 10b03dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03dc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03dc8 call 0x10b02c90 */
  push32(0x10b03dcdu); f_10b02c90();
  /* 10b03dcd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03dd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03dd3 jne 0x10b03dd6 */
  if (!C.zf) goto L_10b03dd6;
  /* 10b03dd5 int3  */
  x86_unimpl("int3 @ 0x10b03dd5");
L_10b03dd6:;
  /* 10b03dd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b03dd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b03dda jne 0x10b03db7 */
  if (!C.zf) goto L_10b03db7;
  /* 10b03ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03dde jmp 0x10b03fac */
  goto L_10b03fac;
L_10b03de3:;
  /* 10b03de3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03de6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b03deb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03dee je 0x10b03e30 */
  if (C.zf) goto L_10b03e30;
  /* 10b03df0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03df4 je 0x10b03e30 */
  if (C.zf) goto L_10b03e30;
  /* 10b03df6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03df9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b03dff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03e02 je 0x10b03e30 */
  if (C.zf) goto L_10b03e30;
  /* 10b03e04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03e08 je 0x10b03e30 */
  if (C.zf) goto L_10b03e30;
L_10b03e0a:;
  /* 10b03e0a push 0x10b2a614 */
  push32((uint32_t)(0x10b2a614u));
  /* 10b03e0f push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b03e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03e1c call 0x10b02c90 */
  push32(0x10b03e21u); f_10b02c90();
  /* 10b03e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03e27 jne 0x10b03e2a */
  if (!C.zf) goto L_10b03e2a;
  /* 10b03e29 int3  */
  x86_unimpl("int3 @ 0x10b03e29");
L_10b03e2a:;
  /* 10b03e2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b03e2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b03e2e jne 0x10b03e0a */
  if (!C.zf) goto L_10b03e0a;
L_10b03e30:;
  /* 10b03e30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03e33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03e36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b03e39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b03e3c push ecx */
  push32((uint32_t)(ECX));
  /* 10b03e3d call 0x10b07a20 */
  push32(0x10b03e42u); f_10b07a20();
  /* 10b03e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03e45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b03e48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03e4c jne 0x10b03e55 */
  if (!C.zf) goto L_10b03e55;
  /* 10b03e4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03e50 jmp 0x10b03fac */
  goto L_10b03fac;
L_10b03e55:;
  /* 10b03e55 mov edx, dword ptr [0x10b2da88] */
  EDX = (r32((uint32_t)(0x10b2da88)));
  /* 10b03e5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03e5e mov dword ptr [0x10b2da88], edx */
  w32((uint32_t)(0x10b2da88), (EDX));
  /* 10b03e64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03e68 je 0x10b03eb3 */
  if (C.zf) goto L_10b03eb3;
  /* 10b03e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b03e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b03e7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b03e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10b03e91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03e97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10b03e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03e9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10b03ea4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03ea7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10b03eae jmp 0x10b03f53 */
  goto L_10b03f53;
L_10b03eb3:;
  /* 10b03eb3 mov edx, dword ptr [0x10b2f558] */
  EDX = (r32((uint32_t)(0x10b2f558)));
  /* 10b03eb9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03ebc mov dword ptr [0x10b2f558], edx */
  w32((uint32_t)(0x10b2f558), (EDX));
  /* 10b03ec2 mov eax, dword ptr [0x10b2f560] */
  EAX = (r32((uint32_t)(0x10b2f560)));
  /* 10b03ec7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03eca mov dword ptr [0x10b2f560], eax */
  w32((uint32_t)(0x10b2f560), (EAX));
  /* 10b03ecf mov ecx, dword ptr [0x10b2f560] */
  ECX = (r32((uint32_t)(0x10b2f560)));
  /* 10b03ed5 cmp ecx, dword ptr [0x10b2f564] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2f564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03edb jbe 0x10b03ee9 */
  if ((C.cf||C.zf)) goto L_10b03ee9;
  /* 10b03edd mov edx, dword ptr [0x10b2f560] */
  EDX = (r32((uint32_t)(0x10b2f560)));
  /* 10b03ee3 mov dword ptr [0x10b2f564], edx */
  w32((uint32_t)(0x10b2f564), (EDX));
L_10b03ee9:;
  /* 10b03ee9 cmp dword ptr [0x10b2f55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b03ef0 je 0x10b03eff */
  if (C.zf) goto L_10b03eff;
  /* 10b03ef2 mov eax, dword ptr [0x10b2f55c] */
  EAX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b03ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03efa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b03efd jmp 0x10b03f08 */
  goto L_10b03f08;
L_10b03eff:;
  /* 10b03eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f02 mov dword ptr [0x10b2f554], edx */
  w32((uint32_t)(0x10b2f554), (EDX));
L_10b03f08:;
  /* 10b03f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f0b mov ecx, dword ptr [0x10b2f55c] */
  ECX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b03f11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b03f13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10b03f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03f23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b03f26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03f2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10b03f2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03f35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10b03f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03f3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10b03f41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b03f47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10b03f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f4d mov dword ptr [0x10b2f55c], ecx */
  w32((uint32_t)(0x10b2f55c), (ECX));
L_10b03f53:;
  /* 10b03f53 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b03f55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b03f57 mov dl, byte ptr [0x10b2da90] */
  DL = (r8((uint32_t)(0x10b2da90)));
  /* 10b03f5d push edx */
  push32((uint32_t)(EDX));
  /* 10b03f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03f64 push eax */
  push32((uint32_t)(EAX));
  /* 10b03f65 call 0x10b07940 */
  push32(0x10b03f6au); f_10b07940();
  /* 10b03f6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03f6d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b03f6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b03f71 mov cl, byte ptr [0x10b2da90] */
  CL = (r8((uint32_t)(0x10b2da90)));
  /* 10b03f77 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03f78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10b03f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03f83 call 0x10b07940 */
  push32(0x10b03f88u); f_10b07940();
  /* 10b03f88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03f8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03f8e push edx */
  push32((uint32_t)(EDX));
  /* 10b03f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b03f91 mov al, byte ptr [0x10b2da92] */
  AL = (r8((uint32_t)(0x10b2da92)));
  /* 10b03f96 push eax */
  push32((uint32_t)(EAX));
  /* 10b03f97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03f9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03f9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b03f9e call 0x10b07940 */
  push32(0x10b03fa3u); f_10b07940();
  /* 10b03fa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b03fa9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b03fac:;
  /* 10b03fac pop edi */
  EDI = (pop32());
  /* 10b03fad pop esi */
  ESI = (pop32());
  /* 10b03fae pop ebx */
  EBX = (pop32());
  /* 10b03faf mov esp, ebp */
  ESP = (EBP);
  /* 10b03fb1 pop ebp */
  EBP = (pop32());
  /* 10b03fb2 ret  */
  ESPCHK(0x10b03ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x10b03fc0 (27 bytes, 13 insns) */
void f_10b03fc0(void) {
  FTRACE(0x10b03fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b03fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b03fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b03fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03fcc push eax */
  push32((uint32_t)(EAX));
  /* 10b03fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b03fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03fd1 call 0x10b03fe0 */
  push32(0x10b03fd6u); f_10b03fe0();
  /* 10b03fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b03fd9 pop ebp */
  EBP = (pop32());
  /* 10b03fda ret  */
  ESPCHK(0x10b03fc0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10b03fe0 (96 bytes, 37 insns) */
void f_10b03fe0(void) {
  FTRACE(0x10b03fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b03fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b03fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10b03fe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b03fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03fe9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b03fed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b03ff0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b03ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b03ff4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b03ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10b03ff8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b03ffb push eax */
  push32((uint32_t)(EAX));
  /* 10b03ffc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b03fff push ecx */
  push32((uint32_t)(ECX));
  /* 10b04000 call 0x10b03bd0 */
  push32(0x10b04005u); f_10b03bd0();
  /* 10b04005 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04008 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0400b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0400f je 0x10b04039 */
  if (C.zf) goto L_10b04039;
  /* 10b04011 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04014 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b04017 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0401a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0401d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b04020:;
  /* 10b04020 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04023 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04026 jae 0x10b04039 */
  if (!C.cf) goto L_10b04039;
  /* 10b04028 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0402b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b0402e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04031 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04034 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b04037 jmp 0x10b04020 */
  goto L_10b04020;
L_10b04039:;
  /* 10b04039 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0403c mov esp, ebp */
  ESP = (EBP);
  /* 10b0403e pop ebp */
  EBP = (pop32());
  /* 10b0403f ret  */
  ESPCHK(0x10b03fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004040 @ 0x10b04040 (27 bytes, 13 insns) */
void f_10b04040(void) {
  FTRACE(0x10b04040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04040 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04041 mov ebp, esp */
  EBP = (ESP);
  /* 10b04043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04047 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04049 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0404c push eax */
  push32((uint32_t)(EAX));
  /* 10b0404d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04050 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04051 call 0x10b04060 */
  push32(0x10b04056u); f_10b04060();
  /* 10b04056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04059 pop ebp */
  EBP = (pop32());
  /* 10b0405a ret  */
  ESPCHK(0x10b04040u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x10b04060 (64 bytes, 27 insns) */
void f_10b04060(void) {
  FTRACE(0x10b04060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04060 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04061 mov ebp, esp */
  EBP = (ESP);
  /* 10b04063 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04064 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04066 call 0x10b075d0 */
  push32(0x10b0406bu); f_10b075d0();
  /* 10b0406b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0406e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04070 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b04073 push eax */
  push32((uint32_t)(EAX));
  /* 10b04074 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b04077 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04078 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0407b push edx */
  push32((uint32_t)(EDX));
  /* 10b0407c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0407f push eax */
  push32((uint32_t)(EAX));
  /* 10b04080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04083 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04084 call 0x10b040a0 */
  push32(0x10b04089u); f_10b040a0();
  /* 10b04089 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0408c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0408f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04091 call 0x10b07670 */
  push32(0x10b04096u); f_10b07670();
  /* 10b04096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0409c mov esp, ebp */
  ESP = (EBP);
  /* 10b0409e pop ebp */
  EBP = (pop32());
  /* 10b0409f ret  */
  ESPCHK(0x10b04060u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x10b040a0 (1297 bytes, 431 insns) */
void f_10b040a0(void) {
  FTRACE(0x10b040a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b040a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b040a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b040a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b040a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b040a7 push esi */
  push32((uint32_t)(ESI));
  /* 10b040a8 push edi */
  push32((uint32_t)(EDI));
  /* 10b040a9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b040b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b040b4 jne 0x10b040d3 */
  if (!C.zf) goto L_10b040d3;
  /* 10b040b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b040b9 push eax */
  push32((uint32_t)(EAX));
  /* 10b040ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b040bd push ecx */
  push32((uint32_t)(ECX));
  /* 10b040be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b040c1 push edx */
  push32((uint32_t)(EDX));
  /* 10b040c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b040c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b040c6 call 0x10b03bd0 */
  push32(0x10b040cbu); f_10b03bd0();
  /* 10b040cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b040ce jmp 0x10b045aa */
  goto L_10b045aa;
L_10b040d3:;
  /* 10b040d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b040d7 je 0x10b040f6 */
  if (C.zf) goto L_10b040f6;
  /* 10b040d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b040dd jne 0x10b040f6 */
  if (!C.zf) goto L_10b040f6;
  /* 10b040df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b040e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b040e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b040e6 push edx */
  push32((uint32_t)(EDX));
  /* 10b040e7 call 0x10b04660 */
  push32(0x10b040ecu); f_10b04660();
  /* 10b040ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b040ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b040f1 jmp 0x10b045aa */
  goto L_10b045aa;
L_10b040f6:;
  /* 10b040f6 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b040fb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b040fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04100 je 0x10b04132 */
  if (C.zf) goto L_10b04132;
L_10b04102:;
  /* 10b04102 call 0x10b04d70 */
  push32(0x10b04107u); f_10b04d70();
  /* 10b04107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04109 jne 0x10b0412c */
  if (!C.zf) goto L_10b0412c;
  /* 10b0410b push 0x10b2a6d8 */
  push32((uint32_t)(0x10b2a6d8u));
  /* 10b04110 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04112 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10b04117 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b0411c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0411e call 0x10b02c90 */
  push32(0x10b04123u); f_10b02c90();
  /* 10b04123 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04126 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04129 jne 0x10b0412c */
  if (!C.zf) goto L_10b0412c;
  /* 10b0412b int3  */
  x86_unimpl("int3 @ 0x10b0412b");
L_10b0412c:;
  /* 10b0412c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0412e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04130 jne 0x10b04102 */
  if (!C.zf) goto L_10b04102;
L_10b04132:;
  /* 10b04132 mov edx, dword ptr [0x10b2da88] */
  EDX = (r32((uint32_t)(0x10b2da88)));
  /* 10b04138 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b0413b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0413e cmp eax, dword ptr [0x10b2da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04144 jne 0x10b04147 */
  if (!C.zf) goto L_10b04147;
  /* 10b04146 int3  */
  x86_unimpl("int3 @ 0x10b04146");
L_10b04147:;
  /* 10b04147 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0414a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0414b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0414e push edx */
  push32((uint32_t)(EDX));
  /* 10b0414f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b04152 push eax */
  push32((uint32_t)(EAX));
  /* 10b04153 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b04156 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04157 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0415a push edx */
  push32((uint32_t)(EDX));
  /* 10b0415b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0415e push eax */
  push32((uint32_t)(EAX));
  /* 10b0415f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04161 call dword ptr [0x10b2dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2dc90))), 0x10b04167u);
  /* 10b04167 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0416a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0416c jne 0x10b041cc */
  if (!C.zf) goto L_10b041cc;
  /* 10b0416e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04172 je 0x10b0419f */
  if (C.zf) goto L_10b0419f;
L_10b04174:;
  /* 10b04174 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b04177 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04178 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0417b push edx */
  push32((uint32_t)(EDX));
  /* 10b0417c push 0x10b2a854 */
  push32((uint32_t)(0x10b2a854u));
  /* 10b04181 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04185 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04187 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04189 call 0x10b02c90 */
  push32(0x10b0418eu); f_10b02c90();
  /* 10b0418e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04191 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04194 jne 0x10b04197 */
  if (!C.zf) goto L_10b04197;
  /* 10b04196 int3  */
  x86_unimpl("int3 @ 0x10b04196");
L_10b04197:;
  /* 10b04197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0419b jne 0x10b04174 */
  if (!C.zf) goto L_10b04174;
  /* 10b0419d jmp 0x10b041c5 */
  goto L_10b041c5;
L_10b0419f:;
  /* 10b0419f push 0x10b2a830 */
  push32((uint32_t)(0x10b2a830u));
  /* 10b041a4 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b041a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041b1 call 0x10b02c90 */
  push32(0x10b041b6u); f_10b02c90();
  /* 10b041b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b041b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b041bc jne 0x10b041bf */
  if (!C.zf) goto L_10b041bf;
  /* 10b041be int3  */
  x86_unimpl("int3 @ 0x10b041be");
L_10b041bf:;
  /* 10b041bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b041c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b041c3 jne 0x10b0419f */
  if (!C.zf) goto L_10b0419f;
L_10b041c5:;
  /* 10b041c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b041c7 jmp 0x10b045aa */
  goto L_10b045aa;
L_10b041cc:;
  /* 10b041cc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b041d0 jbe 0x10b041fe */
  if ((C.cf||C.zf)) goto L_10b041fe;
L_10b041d2:;
  /* 10b041d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b041d5 push edx */
  push32((uint32_t)(EDX));
  /* 10b041d6 push 0x10b2a800 */
  push32((uint32_t)(0x10b2a800u));
  /* 10b041db push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b041e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b041e3 call 0x10b02c90 */
  push32(0x10b041e8u); f_10b02c90();
  /* 10b041e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b041eb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b041ee jne 0x10b041f1 */
  if (!C.zf) goto L_10b041f1;
  /* 10b041f0 int3  */
  x86_unimpl("int3 @ 0x10b041f0");
L_10b041f1:;
  /* 10b041f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b041f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b041f5 jne 0x10b041d2 */
  if (!C.zf) goto L_10b041d2;
  /* 10b041f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b041f9 jmp 0x10b045aa */
  goto L_10b045aa;
L_10b041fe:;
  /* 10b041fe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04202 je 0x10b04246 */
  if (C.zf) goto L_10b04246;
  /* 10b04204 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b04207 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0420d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04210 je 0x10b04246 */
  if (C.zf) goto L_10b04246;
  /* 10b04212 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b04215 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0421b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0421e je 0x10b04246 */
  if (C.zf) goto L_10b04246;
L_10b04220:;
  /* 10b04220 push 0x10b2a614 */
  push32((uint32_t)(0x10b2a614u));
  /* 10b04225 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b0422a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0422c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0422e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04230 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04232 call 0x10b02c90 */
  push32(0x10b04237u); f_10b02c90();
  /* 10b04237 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0423a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0423d jne 0x10b04240 */
  if (!C.zf) goto L_10b04240;
  /* 10b0423f int3  */
  x86_unimpl("int3 @ 0x10b0423f");
L_10b04240:;
  /* 10b04240 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04244 jne 0x10b04220 */
  if (!C.zf) goto L_10b04220;
L_10b04246:;
  /* 10b04246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04249 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0424a call 0x10b051d0 */
  push32(0x10b0424fu); f_10b051d0();
  /* 10b0424f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04254 jne 0x10b04277 */
  if (!C.zf) goto L_10b04277;
  /* 10b04256 push 0x10b2a7dc */
  push32((uint32_t)(0x10b2a7dcu));
  /* 10b0425b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0425d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10b04262 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04267 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04269 call 0x10b02c90 */
  push32(0x10b0426eu); f_10b02c90();
  /* 10b0426e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04271 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04274 jne 0x10b04277 */
  if (!C.zf) goto L_10b04277;
  /* 10b04276 int3  */
  x86_unimpl("int3 @ 0x10b04276");
L_10b04277:;
  /* 10b04277 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04279 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0427b jne 0x10b04246 */
  if (!C.zf) goto L_10b04246;
  /* 10b0427d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04280 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04283 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b04286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04289 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0428d jne 0x10b04296 */
  if (!C.zf) goto L_10b04296;
  /* 10b0428f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10b04296:;
  /* 10b04296 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0429a je 0x10b042da */
  if (C.zf) goto L_10b042da;
L_10b0429c:;
  /* 10b0429c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0429f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b042a6 jne 0x10b042b1 */
  if (!C.zf) goto L_10b042b1;
  /* 10b042a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b042ab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b042af je 0x10b042d2 */
  if (C.zf) goto L_10b042d2;
L_10b042b1:;
  /* 10b042b1 push 0x10b2a794 */
  push32((uint32_t)(0x10b2a794u));
  /* 10b042b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b042b8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10b042bd push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b042c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b042c4 call 0x10b02c90 */
  push32(0x10b042c9u); f_10b02c90();
  /* 10b042c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b042cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b042cf jne 0x10b042d2 */
  if (!C.zf) goto L_10b042d2;
  /* 10b042d1 int3  */
  x86_unimpl("int3 @ 0x10b042d1");
L_10b042d2:;
  /* 10b042d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b042d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b042d6 jne 0x10b0429c */
  if (!C.zf) goto L_10b0429c;
  /* 10b042d8 jmp 0x10b0433e */
  goto L_10b0433e;
L_10b042da:;
  /* 10b042da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b042dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b042e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b042e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b042e8 jne 0x10b042ff */
  if (!C.zf) goto L_10b042ff;
  /* 10b042ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b042ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b042f3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b042f6 jne 0x10b042ff */
  if (!C.zf) goto L_10b042ff;
  /* 10b042f8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10b042ff:;
  /* 10b042ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04302 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04305 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0430a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0430d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04313 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04315 je 0x10b04338 */
  if (C.zf) goto L_10b04338;
  /* 10b04317 push 0x10b2a758 */
  push32((uint32_t)(0x10b2a758u));
  /* 10b0431c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0431e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10b04323 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04328 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0432a call 0x10b02c90 */
  push32(0x10b0432fu); f_10b02c90();
  /* 10b0432f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04332 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04335 jne 0x10b04338 */
  if (!C.zf) goto L_10b04338;
  /* 10b04337 int3  */
  x86_unimpl("int3 @ 0x10b04337");
L_10b04338:;
  /* 10b04338 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0433a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0433c jne 0x10b042ff */
  if (!C.zf) goto L_10b042ff;
L_10b0433e:;
  /* 10b0433e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04342 je 0x10b04369 */
  if (C.zf) goto L_10b04369;
  /* 10b04344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04347 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0434a push eax */
  push32((uint32_t)(EAX));
  /* 10b0434b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0434e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0434f call 0x10b07b50 */
  push32(0x10b04354u); f_10b07b50();
  /* 10b04354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04357 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0435a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0435e jne 0x10b04367 */
  if (!C.zf) goto L_10b04367;
  /* 10b04360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04362 jmp 0x10b045aa */
  goto L_10b045aa;
L_10b04367:;
  /* 10b04367 jmp 0x10b0438c */
  goto L_10b0438c;
L_10b04369:;
  /* 10b04369 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0436c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0436f push edx */
  push32((uint32_t)(EDX));
  /* 10b04370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04373 push eax */
  push32((uint32_t)(EAX));
  /* 10b04374 call 0x10b07aa0 */
  push32(0x10b04379u); f_10b07aa0();
  /* 10b04379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0437c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0437f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04383 jne 0x10b0438c */
  if (!C.zf) goto L_10b0438c;
  /* 10b04385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04387 jmp 0x10b045aa */
  goto L_10b045aa;
L_10b0438c:;
  /* 10b0438c mov ecx, dword ptr [0x10b2da88] */
  ECX = (r32((uint32_t)(0x10b2da88)));
  /* 10b04392 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04395 mov dword ptr [0x10b2da88], ecx */
  w32((uint32_t)(0x10b2da88), (ECX));
  /* 10b0439b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0439f jne 0x10b043f7 */
  if (!C.zf) goto L_10b043f7;
  /* 10b043a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b043a4 mov eax, dword ptr [0x10b2f558] */
  EAX = (r32((uint32_t)(0x10b2f558)));
  /* 10b043a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b043ac mov dword ptr [0x10b2f558], eax */
  w32((uint32_t)(0x10b2f558), (EAX));
  /* 10b043b1 mov ecx, dword ptr [0x10b2f558] */
  ECX = (r32((uint32_t)(0x10b2f558)));
  /* 10b043b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b043ba mov dword ptr [0x10b2f558], ecx */
  w32((uint32_t)(0x10b2f558), (ECX));
  /* 10b043c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b043c3 mov eax, dword ptr [0x10b2f560] */
  EAX = (r32((uint32_t)(0x10b2f560)));
  /* 10b043c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b043cb mov dword ptr [0x10b2f560], eax */
  w32((uint32_t)(0x10b2f560), (EAX));
  /* 10b043d0 mov ecx, dword ptr [0x10b2f560] */
  ECX = (r32((uint32_t)(0x10b2f560)));
  /* 10b043d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b043d9 mov dword ptr [0x10b2f560], ecx */
  w32((uint32_t)(0x10b2f560), (ECX));
  /* 10b043df mov edx, dword ptr [0x10b2f560] */
  EDX = (r32((uint32_t)(0x10b2f560)));
  /* 10b043e5 cmp edx, dword ptr [0x10b2f564] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2f564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b043eb jbe 0x10b043f7 */
  if ((C.cf||C.zf)) goto L_10b043f7;
  /* 10b043ed mov eax, dword ptr [0x10b2f560] */
  EAX = (r32((uint32_t)(0x10b2f560)));
  /* 10b043f2 mov dword ptr [0x10b2f564], eax */
  w32((uint32_t)(0x10b2f564), (EAX));
L_10b043f7:;
  /* 10b043f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b043fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b043fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b04400 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04403 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04406 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04409 jbe 0x10b0442f */
  if ((C.cf||C.zf)) goto L_10b0442f;
  /* 10b0440b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0440e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04411 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04414 push edx */
  push32((uint32_t)(EDX));
  /* 10b04415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04417 mov al, byte ptr [0x10b2da92] */
  AL = (r8((uint32_t)(0x10b2da92)));
  /* 10b0441c push eax */
  push32((uint32_t)(EAX));
  /* 10b0441d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04420 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04423 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04426 push edx */
  push32((uint32_t)(EDX));
  /* 10b04427 call 0x10b07940 */
  push32(0x10b0442cu); f_10b07940();
  /* 10b0442c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0442f:;
  /* 10b0442f push 4 */
  push32((uint32_t)(0x4u));
  /* 10b04431 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04433 mov al, byte ptr [0x10b2da90] */
  AL = (r8((uint32_t)(0x10b2da90)));
  /* 10b04438 push eax */
  push32((uint32_t)(EAX));
  /* 10b04439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0443c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0443f push ecx */
  push32((uint32_t)(ECX));
  /* 10b04440 call 0x10b07940 */
  push32(0x10b04445u); f_10b07940();
  /* 10b04445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04448 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0444c jne 0x10b04469 */
  if (!C.zf) goto L_10b04469;
  /* 10b0444e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04451 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b04454 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b04457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0445a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0445d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10b04460 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04463 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b04466 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10b04469:;
  /* 10b04469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0446c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0446f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10b04472:;
  /* 10b04472 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04476 jne 0x10b044a7 */
  if (!C.zf) goto L_10b044a7;
  /* 10b04478 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0447c jne 0x10b04486 */
  if (!C.zf) goto L_10b04486;
  /* 10b0447e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04481 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04484 je 0x10b044a7 */
  if (C.zf) goto L_10b044a7;
L_10b04486:;
  /* 10b04486 push 0x10b2a724 */
  push32((uint32_t)(0x10b2a724u));
  /* 10b0448b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0448d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10b04492 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04497 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04499 call 0x10b02c90 */
  push32(0x10b0449eu); f_10b02c90();
  /* 10b0449e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b044a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b044a4 jne 0x10b044a7 */
  if (!C.zf) goto L_10b044a7;
  /* 10b044a6 int3  */
  x86_unimpl("int3 @ 0x10b044a6");
L_10b044a7:;
  /* 10b044a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b044a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b044ab jne 0x10b04472 */
  if (!C.zf) goto L_10b04472;
  /* 10b044ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b044b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b044b3 je 0x10b044bb */
  if (C.zf) goto L_10b044bb;
  /* 10b044b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b044b9 je 0x10b044c3 */
  if (C.zf) goto L_10b044c3;
L_10b044bb:;
  /* 10b044bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b044be jmp 0x10b045aa */
  goto L_10b045aa;
L_10b044c3:;
  /* 10b044c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b044c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b044c9 je 0x10b044db */
  if (C.zf) goto L_10b044db;
  /* 10b044cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b044ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b044d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b044d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b044d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b044d9 jmp 0x10b04517 */
  goto L_10b04517;
L_10b044db:;
  /* 10b044db mov eax, dword ptr [0x10b2f554] */
  EAX = (r32((uint32_t)(0x10b2f554)));
  /* 10b044e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b044e3 je 0x10b04506 */
  if (C.zf) goto L_10b04506;
  /* 10b044e5 push 0x10b2a708 */
  push32((uint32_t)(0x10b2a708u));
  /* 10b044ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10b044ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10b044f1 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b044f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b044f8 call 0x10b02c90 */
  push32(0x10b044fdu); f_10b02c90();
  /* 10b044fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04500 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04503 jne 0x10b04506 */
  if (!C.zf) goto L_10b04506;
  /* 10b04505 int3  */
  x86_unimpl("int3 @ 0x10b04505");
L_10b04506:;
  /* 10b04506 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04508 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0450a jne 0x10b044db */
  if (!C.zf) goto L_10b044db;
  /* 10b0450c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0450f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b04512 mov dword ptr [0x10b2f554], eax */
  w32((uint32_t)(0x10b2f554), (EAX));
L_10b04517:;
  /* 10b04517 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0451a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0451e je 0x10b0452f */
  if (C.zf) goto L_10b0452f;
  /* 10b04520 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04523 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b04526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04529 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0452b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b0452d jmp 0x10b0456a */
  goto L_10b0456a;
L_10b0452f:;
  /* 10b0452f mov eax, dword ptr [0x10b2f55c] */
  EAX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b04534 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04537 je 0x10b0455a */
  if (C.zf) goto L_10b0455a;
  /* 10b04539 push 0x10b2a6ec */
  push32((uint32_t)(0x10b2a6ecu));
  /* 10b0453e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04540 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10b04545 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b0454a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0454c call 0x10b02c90 */
  push32(0x10b04551u); f_10b02c90();
  /* 10b04551 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04554 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04557 jne 0x10b0455a */
  if (!C.zf) goto L_10b0455a;
  /* 10b04559 int3  */
  x86_unimpl("int3 @ 0x10b04559");
L_10b0455a:;
  /* 10b0455a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0455c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0455e jne 0x10b0452f */
  if (!C.zf) goto L_10b0452f;
  /* 10b04560 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04563 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b04565 mov dword ptr [0x10b2f55c], eax */
  w32((uint32_t)(0x10b2f55c), (EAX));
L_10b0456a:;
  /* 10b0456a cmp dword ptr [0x10b2f55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04571 je 0x10b04581 */
  if (C.zf) goto L_10b04581;
  /* 10b04573 mov ecx, dword ptr [0x10b2f55c] */
  ECX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b04579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0457c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b0457f jmp 0x10b04589 */
  goto L_10b04589;
L_10b04581:;
  /* 10b04581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04584 mov dword ptr [0x10b2f554], eax */
  w32((uint32_t)(0x10b2f554), (EAX));
L_10b04589:;
  /* 10b04589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0458c mov edx, dword ptr [0x10b2f55c] */
  EDX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b04592 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b04594 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04597 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b0459e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b045a1 mov dword ptr [0x10b2f55c], ecx */
  w32((uint32_t)(0x10b2f55c), (ECX));
  /* 10b045a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b045aa:;
  /* 10b045aa pop edi */
  EDI = (pop32());
  /* 10b045ab pop esi */
  ESI = (pop32());
  /* 10b045ac pop ebx */
  EBX = (pop32());
  /* 10b045ad mov esp, ebp */
  ESP = (EBP);
  /* 10b045af pop ebp */
  EBP = (pop32());
  /* 10b045b0 ret  */
  ESPCHK(0x10b040a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x10b045c0 (27 bytes, 13 insns) */
void f_10b045c0(void) {
  FTRACE(0x10b045c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b045c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b045c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b045c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b045c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b045c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b045c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b045cc push eax */
  push32((uint32_t)(EAX));
  /* 10b045cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b045d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b045d1 call 0x10b045e0 */
  push32(0x10b045d6u); f_10b045e0();
  /* 10b045d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b045d9 pop ebp */
  EBP = (pop32());
  /* 10b045da ret  */
  ESPCHK(0x10b045c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e0 @ 0x10b045e0 (64 bytes, 27 insns) */
void f_10b045e0(void) {
  FTRACE(0x10b045e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b045e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b045e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b045e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b045e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b045e6 call 0x10b075d0 */
  push32(0x10b045ebu); f_10b075d0();
  /* 10b045eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b045ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10b045f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b045f3 push eax */
  push32((uint32_t)(EAX));
  /* 10b045f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b045f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b045f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b045fb push edx */
  push32((uint32_t)(EDX));
  /* 10b045fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b045ff push eax */
  push32((uint32_t)(EAX));
  /* 10b04600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04603 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04604 call 0x10b040a0 */
  push32(0x10b04609u); f_10b040a0();
  /* 10b04609 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0460c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0460f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04611 call 0x10b07670 */
  push32(0x10b04616u); f_10b07670();
  /* 10b04616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0461c mov esp, ebp */
  ESP = (EBP);
  /* 10b0461e pop ebp */
  EBP = (pop32());
  /* 10b0461f ret  */
  ESPCHK(0x10b045e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x10b04620 (19 bytes, 9 insns) */
void f_10b04620(void) {
  FTRACE(0x10b04620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04620 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04621 mov ebp, esp */
  EBP = (ESP);
  /* 10b04623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04628 push eax */
  push32((uint32_t)(EAX));
  /* 10b04629 call 0x10b04660 */
  push32(0x10b0462eu); f_10b04660();
  /* 10b0462e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04631 pop ebp */
  EBP = (pop32());
  /* 10b04632 ret  */
  ESPCHK(0x10b04620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x10b04640 (19 bytes, 9 insns) */
void f_10b04640(void) {
  FTRACE(0x10b04640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04640 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04641 mov ebp, esp */
  EBP = (ESP);
  /* 10b04643 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04648 push eax */
  push32((uint32_t)(EAX));
  /* 10b04649 call 0x10b04690 */
  push32(0x10b0464eu); f_10b04690();
  /* 10b0464e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04651 pop ebp */
  EBP = (pop32());
  /* 10b04652 ret  */
  ESPCHK(0x10b04640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x10b04660 (41 bytes, 16 insns) */
void f_10b04660(void) {
  FTRACE(0x10b04660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04660 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04661 mov ebp, esp */
  EBP = (ESP);
  /* 10b04663 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04665 call 0x10b075d0 */
  push32(0x10b0466au); f_10b075d0();
  /* 10b0466a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0466d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04670 push eax */
  push32((uint32_t)(EAX));
  /* 10b04671 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04674 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04675 call 0x10b04690 */
  push32(0x10b0467au); f_10b04690();
  /* 10b0467a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0467d push 9 */
  push32((uint32_t)(0x9u));
  /* 10b0467f call 0x10b07670 */
  push32(0x10b04684u); f_10b07670();
  /* 10b04684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04687 pop ebp */
  EBP = (pop32());
  /* 10b04688 ret  */
  ESPCHK(0x10b04660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x10b04690 (1004 bytes, 342 insns) */
void f_10b04690(void) {
  FTRACE(0x10b04690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04690 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04691 mov ebp, esp */
  EBP = (ESP);
  /* 10b04693 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04694 push ebx */
  push32((uint32_t)(EBX));
  /* 10b04695 push esi */
  push32((uint32_t)(ESI));
  /* 10b04696 push edi */
  push32((uint32_t)(EDI));
  /* 10b04697 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b0469c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0469f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b046a1 je 0x10b046d3 */
  if (C.zf) goto L_10b046d3;
L_10b046a3:;
  /* 10b046a3 call 0x10b04d70 */
  push32(0x10b046a8u); f_10b04d70();
  /* 10b046a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b046aa jne 0x10b046cd */
  if (!C.zf) goto L_10b046cd;
  /* 10b046ac push 0x10b2a6d8 */
  push32((uint32_t)(0x10b2a6d8u));
  /* 10b046b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b046b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10b046b8 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b046bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b046bf call 0x10b02c90 */
  push32(0x10b046c4u); f_10b02c90();
  /* 10b046c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b046c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b046ca jne 0x10b046cd */
  if (!C.zf) goto L_10b046cd;
  /* 10b046cc int3  */
  x86_unimpl("int3 @ 0x10b046cc");
L_10b046cd:;
  /* 10b046cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b046cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b046d1 jne 0x10b046a3 */
  if (!C.zf) goto L_10b046a3;
L_10b046d3:;
  /* 10b046d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b046d7 jne 0x10b046de */
  if (!C.zf) goto L_10b046de;
  /* 10b046d9 jmp 0x10b04a75 */
  goto L_10b04a75;
L_10b046de:;
  /* 10b046de push 0 */
  push32((uint32_t)(0x0u));
  /* 10b046e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b046e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b046e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b046e7 push edx */
  push32((uint32_t)(EDX));
  /* 10b046e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b046ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b046ed push eax */
  push32((uint32_t)(EAX));
  /* 10b046ee push 3 */
  push32((uint32_t)(0x3u));
  /* 10b046f0 call dword ptr [0x10b2dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2dc90))), 0x10b046f6u);
  /* 10b046f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b046f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b046fb jne 0x10b04728 */
  if (!C.zf) goto L_10b04728;
L_10b046fd:;
  /* 10b046fd push 0x10b2a99c */
  push32((uint32_t)(0x10b2a99cu));
  /* 10b04702 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04707 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04709 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0470b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0470d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0470f call 0x10b02c90 */
  push32(0x10b04714u); f_10b02c90();
  /* 10b04714 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04717 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0471a jne 0x10b0471d */
  if (!C.zf) goto L_10b0471d;
  /* 10b0471c int3  */
  x86_unimpl("int3 @ 0x10b0471c");
L_10b0471d:;
  /* 10b0471d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0471f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04721 jne 0x10b046fd */
  if (!C.zf) goto L_10b046fd;
  /* 10b04723 jmp 0x10b04a75 */
  goto L_10b04a75;
L_10b04728:;
  /* 10b04728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0472b push edx */
  push32((uint32_t)(EDX));
  /* 10b0472c call 0x10b051d0 */
  push32(0x10b04731u); f_10b051d0();
  /* 10b04731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04736 jne 0x10b04759 */
  if (!C.zf) goto L_10b04759;
  /* 10b04738 push 0x10b2a7dc */
  push32((uint32_t)(0x10b2a7dcu));
  /* 10b0473d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0473f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10b04744 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04749 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0474b call 0x10b02c90 */
  push32(0x10b04750u); f_10b02c90();
  /* 10b04750 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04753 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04756 jne 0x10b04759 */
  if (!C.zf) goto L_10b04759;
  /* 10b04758 int3  */
  x86_unimpl("int3 @ 0x10b04758");
L_10b04759:;
  /* 10b04759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0475b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0475d jne 0x10b04728 */
  if (!C.zf) goto L_10b04728;
  /* 10b0475f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04762 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04765 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b04768:;
  /* 10b04768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0476b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b0476e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04773 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04776 je 0x10b047bb */
  if (C.zf) goto L_10b047bb;
  /* 10b04778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0477b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0477f je 0x10b047bb */
  if (C.zf) goto L_10b047bb;
  /* 10b04781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04784 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04787 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0478c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0478f je 0x10b047bb */
  if (C.zf) goto L_10b047bb;
  /* 10b04791 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04794 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04798 je 0x10b047bb */
  if (C.zf) goto L_10b047bb;
  /* 10b0479a push 0x10b2a974 */
  push32((uint32_t)(0x10b2a974u));
  /* 10b0479f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b047a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10b047a6 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b047ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10b047ad call 0x10b02c90 */
  push32(0x10b047b2u); f_10b02c90();
  /* 10b047b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b047b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b047b8 jne 0x10b047bb */
  if (!C.zf) goto L_10b047bb;
  /* 10b047ba int3  */
  x86_unimpl("int3 @ 0x10b047ba");
L_10b047bb:;
  /* 10b047bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b047bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b047bf jne 0x10b04768 */
  if (!C.zf) goto L_10b04768;
  /* 10b047c1 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b047c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b047c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b047cb jne 0x10b04896 */
  if (!C.zf) goto L_10b04896;
  /* 10b047d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b047d3 mov cl, byte ptr [0x10b2da90] */
  CL = (r8((uint32_t)(0x10b2da90)));
  /* 10b047d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b047da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b047dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b047e0 push edx */
  push32((uint32_t)(EDX));
  /* 10b047e1 call 0x10b04ce0 */
  push32(0x10b047e6u); f_10b04ce0();
  /* 10b047e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b047e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b047eb jne 0x10b04830 */
  if (!C.zf) goto L_10b04830;
L_10b047ed:;
  /* 10b047ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b047f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b047f3 push eax */
  push32((uint32_t)(EAX));
  /* 10b047f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b047f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b047fa push edx */
  push32((uint32_t)(EDX));
  /* 10b047fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b047fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b04801 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04807 mov edx, dword ptr [ecx*4 + 0x10b2da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da94)));
  /* 10b0480e push edx */
  push32((uint32_t)(EDX));
  /* 10b0480f push 0x10b2a948 */
  push32((uint32_t)(0x10b2a948u));
  /* 10b04814 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04816 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04818 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0481a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0481c call 0x10b02c90 */
  push32(0x10b04821u); f_10b02c90();
  /* 10b04821 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04824 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04827 jne 0x10b0482a */
  if (!C.zf) goto L_10b0482a;
  /* 10b04829 int3  */
  x86_unimpl("int3 @ 0x10b04829");
L_10b0482a:;
  /* 10b0482a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0482c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0482e jne 0x10b047ed */
  if (!C.zf) goto L_10b047ed;
L_10b04830:;
  /* 10b04830 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b04832 mov cl, byte ptr [0x10b2da90] */
  CL = (r8((uint32_t)(0x10b2da90)));
  /* 10b04838 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0483c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b0483f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04842 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10b04846 push edx */
  push32((uint32_t)(EDX));
  /* 10b04847 call 0x10b04ce0 */
  push32(0x10b0484cu); f_10b04ce0();
  /* 10b0484c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0484f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04851 jne 0x10b04896 */
  if (!C.zf) goto L_10b04896;
L_10b04853:;
  /* 10b04853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04856 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04859 push eax */
  push32((uint32_t)(EAX));
  /* 10b0485a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0485d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b04860 push edx */
  push32((uint32_t)(EDX));
  /* 10b04861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04864 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b04867 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0486d mov edx, dword ptr [ecx*4 + 0x10b2da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da94)));
  /* 10b04874 push edx */
  push32((uint32_t)(EDX));
  /* 10b04875 push 0x10b2a91c */
  push32((uint32_t)(0x10b2a91cu));
  /* 10b0487a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0487c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0487e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04880 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04882 call 0x10b02c90 */
  push32(0x10b04887u); f_10b02c90();
  /* 10b04887 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0488a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0488d jne 0x10b04890 */
  if (!C.zf) goto L_10b04890;
  /* 10b0488f int3  */
  x86_unimpl("int3 @ 0x10b0488f");
L_10b04890:;
  /* 10b04890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04894 jne 0x10b04853 */
  if (!C.zf) goto L_10b04853;
L_10b04896:;
  /* 10b04896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04899 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0489d jne 0x10b0490b */
  if (!C.zf) goto L_10b0490b;
L_10b0489f:;
  /* 10b0489f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b048a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b048a9 jne 0x10b048b4 */
  if (!C.zf) goto L_10b048b4;
  /* 10b048ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b048ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b048b2 je 0x10b048d5 */
  if (C.zf) goto L_10b048d5;
L_10b048b4:;
  /* 10b048b4 push 0x10b2a8dc */
  push32((uint32_t)(0x10b2a8dcu));
  /* 10b048b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b048bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10b048c0 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b048c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b048c7 call 0x10b02c90 */
  push32(0x10b048ccu); f_10b02c90();
  /* 10b048cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b048cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b048d2 jne 0x10b048d5 */
  if (!C.zf) goto L_10b048d5;
  /* 10b048d4 int3  */
  x86_unimpl("int3 @ 0x10b048d4");
L_10b048d5:;
  /* 10b048d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b048d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b048d9 jne 0x10b0489f */
  if (!C.zf) goto L_10b0489f;
  /* 10b048db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b048de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b048e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b048e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b048e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b048e7 mov cl, byte ptr [0x10b2da91] */
  CL = (r8((uint32_t)(0x10b2da91)));
  /* 10b048ed push ecx */
  push32((uint32_t)(ECX));
  /* 10b048ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b048f1 push edx */
  push32((uint32_t)(EDX));
  /* 10b048f2 call 0x10b07940 */
  push32(0x10b048f7u); f_10b07940();
  /* 10b048f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b048fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b048fd push eax */
  push32((uint32_t)(EAX));
  /* 10b048fe call 0x10b07d40 */
  push32(0x10b04903u); f_10b07d40();
  /* 10b04903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04906 jmp 0x10b04a75 */
  goto L_10b04a75;
L_10b0490b:;
  /* 10b0490b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0490e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04912 jne 0x10b04921 */
  if (!C.zf) goto L_10b04921;
  /* 10b04914 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04918 jne 0x10b04921 */
  if (!C.zf) goto L_10b04921;
  /* 10b0491a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10b04921:;
  /* 10b04921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04924 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04927 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0492a je 0x10b0494d */
  if (C.zf) goto L_10b0494d;
  /* 10b0492c push 0x10b2a8bc */
  push32((uint32_t)(0x10b2a8bcu));
  /* 10b04931 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04933 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10b04938 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b0493d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0493f call 0x10b02c90 */
  push32(0x10b04944u); f_10b02c90();
  /* 10b04944 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04947 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0494a jne 0x10b0494d */
  if (!C.zf) goto L_10b0494d;
  /* 10b0494c int3  */
  x86_unimpl("int3 @ 0x10b0494c");
L_10b0494d:;
  /* 10b0494d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0494f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04951 jne 0x10b04921 */
  if (!C.zf) goto L_10b04921;
  /* 10b04953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04956 mov eax, dword ptr [0x10b2f560] */
  EAX = (r32((uint32_t)(0x10b2f560)));
  /* 10b0495b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0495e mov dword ptr [0x10b2f560], eax */
  w32((uint32_t)(0x10b2f560), (EAX));
  /* 10b04963 mov ecx, dword ptr [0x10b2da84] */
  ECX = (r32((uint32_t)(0x10b2da84)));
  /* 10b04969 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0496c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0496e jne 0x10b04a4c */
  if (!C.zf) goto L_10b04a4c;
  /* 10b04974 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04977 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0497a je 0x10b0498c */
  if (C.zf) goto L_10b0498c;
  /* 10b0497c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0497f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b04981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04984 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b04987 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b0498a jmp 0x10b049ca */
  goto L_10b049ca;
L_10b0498c:;
  /* 10b0498c mov ecx, dword ptr [0x10b2f554] */
  ECX = (r32((uint32_t)(0x10b2f554)));
  /* 10b04992 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04995 je 0x10b049b8 */
  if (C.zf) goto L_10b049b8;
  /* 10b04997 push 0x10b2a8a4 */
  push32((uint32_t)(0x10b2a8a4u));
  /* 10b0499c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0499e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10b049a3 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b049a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b049aa call 0x10b02c90 */
  push32(0x10b049afu); f_10b02c90();
  /* 10b049af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b049b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b049b5 jne 0x10b049b8 */
  if (!C.zf) goto L_10b049b8;
  /* 10b049b7 int3  */
  x86_unimpl("int3 @ 0x10b049b7");
L_10b049b8:;
  /* 10b049b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b049ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b049bc jne 0x10b0498c */
  if (!C.zf) goto L_10b0498c;
  /* 10b049be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b049c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b049c4 mov dword ptr [0x10b2f554], ecx */
  w32((uint32_t)(0x10b2f554), (ECX));
L_10b049ca:;
  /* 10b049ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b049cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b049d1 je 0x10b049e2 */
  if (C.zf) goto L_10b049e2;
  /* 10b049d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b049d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b049d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b049dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b049de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b049e0 jmp 0x10b04a1f */
  goto L_10b04a1f;
L_10b049e2:;
  /* 10b049e2 mov ecx, dword ptr [0x10b2f55c] */
  ECX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b049e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b049eb je 0x10b04a0e */
  if (C.zf) goto L_10b04a0e;
  /* 10b049ed push 0x10b2a88c */
  push32((uint32_t)(0x10b2a88cu));
  /* 10b049f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b049f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10b049f9 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b049fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04a00 call 0x10b02c90 */
  push32(0x10b04a05u); f_10b02c90();
  /* 10b04a05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04a0b jne 0x10b04a0e */
  if (!C.zf) goto L_10b04a0e;
  /* 10b04a0d int3  */
  x86_unimpl("int3 @ 0x10b04a0d");
L_10b04a0e:;
  /* 10b04a0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04a10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b04a12 jne 0x10b049e2 */
  if (!C.zf) goto L_10b049e2;
  /* 10b04a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b04a19 mov dword ptr [0x10b2f55c], ecx */
  w32((uint32_t)(0x10b2f55c), (ECX));
L_10b04a1f:;
  /* 10b04a1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a22 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b04a25 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a28 push eax */
  push32((uint32_t)(EAX));
  /* 10b04a29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04a2b mov cl, byte ptr [0x10b2da91] */
  CL = (r8((uint32_t)(0x10b2da91)));
  /* 10b04a31 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a35 push edx */
  push32((uint32_t)(EDX));
  /* 10b04a36 call 0x10b07940 */
  push32(0x10b04a3bu); f_10b07940();
  /* 10b04a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a41 push eax */
  push32((uint32_t)(EAX));
  /* 10b04a42 call 0x10b07d40 */
  push32(0x10b04a47u); f_10b07d40();
  /* 10b04a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a4a jmp 0x10b04a75 */
  goto L_10b04a75;
L_10b04a4c:;
  /* 10b04a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a4f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10b04a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a59 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b04a5c push eax */
  push32((uint32_t)(EAX));
  /* 10b04a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04a5f mov cl, byte ptr [0x10b2da91] */
  CL = (r8((uint32_t)(0x10b2da91)));
  /* 10b04a65 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04a66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04a69 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a6c push edx */
  push32((uint32_t)(EDX));
  /* 10b04a6d call 0x10b07940 */
  push32(0x10b04a72u); f_10b07940();
  /* 10b04a72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b04a75:;
  /* 10b04a75 pop edi */
  EDI = (pop32());
  /* 10b04a76 pop esi */
  ESI = (pop32());
  /* 10b04a77 pop ebx */
  EBX = (pop32());
  /* 10b04a78 mov esp, ebp */
  ESP = (EBP);
  /* 10b04a7a pop ebp */
  EBP = (pop32());
  /* 10b04a7b ret  */
  ESPCHK(0x10b04690u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x10b04a80 (19 bytes, 9 insns) */
void f_10b04a80(void) {
  FTRACE(0x10b04a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04a81 mov ebp, esp */
  EBP = (ESP);
  /* 10b04a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b04a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04a88 push eax */
  push32((uint32_t)(EAX));
  /* 10b04a89 call 0x10b04aa0 */
  push32(0x10b04a8eu); f_10b04aa0();
  /* 10b04a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04a91 pop ebp */
  EBP = (pop32());
  /* 10b04a92 ret  */
  ESPCHK(0x10b04a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x10b04aa0 (342 bytes, 119 insns) */
void f_10b04aa0(void) {
  FTRACE(0x10b04aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b04aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b04aa7 push esi */
  push32((uint32_t)(ESI));
  /* 10b04aa8 push edi */
  push32((uint32_t)(EDI));
  /* 10b04aa9 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b04aae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b04ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04ab3 je 0x10b04ae5 */
  if (C.zf) goto L_10b04ae5;
L_10b04ab5:;
  /* 10b04ab5 call 0x10b04d70 */
  push32(0x10b04abau); f_10b04d70();
  /* 10b04aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04abc jne 0x10b04adf */
  if (!C.zf) goto L_10b04adf;
  /* 10b04abe push 0x10b2a6d8 */
  push32((uint32_t)(0x10b2a6d8u));
  /* 10b04ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04ac5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10b04aca push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04acf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04ad1 call 0x10b02c90 */
  push32(0x10b04ad6u); f_10b02c90();
  /* 10b04ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04ad9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04adc jne 0x10b04adf */
  if (!C.zf) goto L_10b04adf;
  /* 10b04ade int3  */
  x86_unimpl("int3 @ 0x10b04ade");
L_10b04adf:;
  /* 10b04adf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04ae1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04ae3 jne 0x10b04ab5 */
  if (!C.zf) goto L_10b04ab5;
L_10b04ae5:;
  /* 10b04ae5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04ae7 call 0x10b075d0 */
  push32(0x10b04aecu); f_10b075d0();
  /* 10b04aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b04aef:;
  /* 10b04aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04af2 push edx */
  push32((uint32_t)(EDX));
  /* 10b04af3 call 0x10b051d0 */
  push32(0x10b04af8u); f_10b051d0();
  /* 10b04af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04afd jne 0x10b04b20 */
  if (!C.zf) goto L_10b04b20;
  /* 10b04aff push 0x10b2a7dc */
  push32((uint32_t)(0x10b2a7dcu));
  /* 10b04b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04b06 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10b04b0b push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04b12 call 0x10b02c90 */
  push32(0x10b04b17u); f_10b02c90();
  /* 10b04b17 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04b1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b1d jne 0x10b04b20 */
  if (!C.zf) goto L_10b04b20;
  /* 10b04b1f int3  */
  x86_unimpl("int3 @ 0x10b04b1f");
L_10b04b20:;
  /* 10b04b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04b24 jne 0x10b04aef */
  if (!C.zf) goto L_10b04aef;
  /* 10b04b26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04b29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04b2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b04b2f:;
  /* 10b04b2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04b32 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04b35 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04b3a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b3d je 0x10b04b82 */
  if (C.zf) goto L_10b04b82;
  /* 10b04b3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04b42 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b46 je 0x10b04b82 */
  if (C.zf) goto L_10b04b82;
  /* 10b04b48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04b4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04b4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04b53 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b56 je 0x10b04b82 */
  if (C.zf) goto L_10b04b82;
  /* 10b04b58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04b5b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b5f je 0x10b04b82 */
  if (C.zf) goto L_10b04b82;
  /* 10b04b61 push 0x10b2a974 */
  push32((uint32_t)(0x10b2a974u));
  /* 10b04b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04b68 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10b04b6d push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04b74 call 0x10b02c90 */
  push32(0x10b04b79u); f_10b02c90();
  /* 10b04b79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04b7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b7f jne 0x10b04b82 */
  if (!C.zf) goto L_10b04b82;
  /* 10b04b81 int3  */
  x86_unimpl("int3 @ 0x10b04b81");
L_10b04b82:;
  /* 10b04b82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04b84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b04b86 jne 0x10b04b2f */
  if (!C.zf) goto L_10b04b2f;
  /* 10b04b88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04b8b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b8f jne 0x10b04b9e */
  if (!C.zf) goto L_10b04b9e;
  /* 10b04b91 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04b95 jne 0x10b04b9e */
  if (!C.zf) goto L_10b04b9e;
  /* 10b04b97 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10b04b9e:;
  /* 10b04b9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04ba1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04ba5 je 0x10b04bd9 */
  if (C.zf) goto L_10b04bd9;
L_10b04ba7:;
  /* 10b04ba7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04baa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04bad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04bb0 je 0x10b04bd3 */
  if (C.zf) goto L_10b04bd3;
  /* 10b04bb2 push 0x10b2a8bc */
  push32((uint32_t)(0x10b2a8bcu));
  /* 10b04bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04bb9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10b04bbe push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04bc5 call 0x10b02c90 */
  push32(0x10b04bcau); f_10b02c90();
  /* 10b04bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04bcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04bd0 jne 0x10b04bd3 */
  if (!C.zf) goto L_10b04bd3;
  /* 10b04bd2 int3  */
  x86_unimpl("int3 @ 0x10b04bd2");
L_10b04bd3:;
  /* 10b04bd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04bd7 jne 0x10b04ba7 */
  if (!C.zf) goto L_10b04ba7;
L_10b04bd9:;
  /* 10b04bd9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04bdc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b04bdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b04be2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04be4 call 0x10b07670 */
  push32(0x10b04be9u); f_10b07670();
  /* 10b04be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04bef pop edi */
  EDI = (pop32());
  /* 10b04bf0 pop esi */
  ESI = (pop32());
  /* 10b04bf1 pop ebx */
  EBX = (pop32());
  /* 10b04bf2 mov esp, ebp */
  ESP = (EBP);
  /* 10b04bf4 pop ebp */
  EBP = (pop32());
  /* 10b04bf5 ret  */
  ESPCHK(0x10b04aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x10b04c00 (28 bytes, 11 insns) */
void f_10b04c00(void) {
  FTRACE(0x10b04c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04c01 mov ebp, esp */
  EBP = (ESP);
  /* 10b04c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04c04 mov eax, dword ptr [0x10b2da8c] */
  EAX = (r32((uint32_t)(0x10b2da8c)));
  /* 10b04c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b04c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04c0f mov dword ptr [0x10b2da8c], ecx */
  w32((uint32_t)(0x10b2da8c), (ECX));
  /* 10b04c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04c18 mov esp, ebp */
  ESP = (EBP);
  /* 10b04c1a pop ebp */
  EBP = (pop32());
  /* 10b04c1b ret  */
  ESPCHK(0x10b04c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x10b04c20 (157 bytes, 59 insns) */
void f_10b04c20(void) {
  FTRACE(0x10b04c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04c21 mov ebp, esp */
  EBP = (ESP);
  /* 10b04c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04c24 push ebx */
  push32((uint32_t)(EBX));
  /* 10b04c25 push esi */
  push32((uint32_t)(ESI));
  /* 10b04c26 push edi */
  push32((uint32_t)(EDI));
  /* 10b04c27 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04c29 call 0x10b075d0 */
  push32(0x10b04c2eu); f_10b075d0();
  /* 10b04c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04c31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04c34 push eax */
  push32((uint32_t)(EAX));
  /* 10b04c35 call 0x10b051d0 */
  push32(0x10b04c3au); f_10b051d0();
  /* 10b04c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04c3f je 0x10b04cac */
  if (C.zf) goto L_10b04cac;
  /* 10b04c41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04c44 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04c47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b04c4a:;
  /* 10b04c4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04c4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04c50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04c55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04c58 je 0x10b04c9d */
  if (C.zf) goto L_10b04c9d;
  /* 10b04c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04c5d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04c61 je 0x10b04c9d */
  if (C.zf) goto L_10b04c9d;
  /* 10b04c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04c66 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b04c69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04c6e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04c71 je 0x10b04c9d */
  if (C.zf) goto L_10b04c9d;
  /* 10b04c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04c76 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04c7a je 0x10b04c9d */
  if (C.zf) goto L_10b04c9d;
  /* 10b04c7c push 0x10b2a974 */
  push32((uint32_t)(0x10b2a974u));
  /* 10b04c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04c83 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10b04c88 push 0x10b2a6cc */
  push32((uint32_t)(0x10b2a6ccu));
  /* 10b04c8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b04c8f call 0x10b02c90 */
  push32(0x10b04c94u); f_10b02c90();
  /* 10b04c94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04c97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04c9a jne 0x10b04c9d */
  if (!C.zf) goto L_10b04c9d;
  /* 10b04c9c int3  */
  x86_unimpl("int3 @ 0x10b04c9c");
L_10b04c9d:;
  /* 10b04c9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04c9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b04ca1 jne 0x10b04c4a */
  if (!C.zf) goto L_10b04c4a;
  /* 10b04ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04ca6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04ca9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10b04cac:;
  /* 10b04cac push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04cae call 0x10b07670 */
  push32(0x10b04cb3u); f_10b07670();
  /* 10b04cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04cb6 pop edi */
  EDI = (pop32());
  /* 10b04cb7 pop esi */
  ESI = (pop32());
  /* 10b04cb8 pop ebx */
  EBX = (pop32());
  /* 10b04cb9 mov esp, ebp */
  ESP = (EBP);
  /* 10b04cbb pop ebp */
  EBP = (pop32());
  /* 10b04cbc ret  */
  ESPCHK(0x10b04c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x10b04cc0 (28 bytes, 11 insns) */
void f_10b04cc0(void) {
  FTRACE(0x10b04cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b04cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04cc4 mov eax, dword ptr [0x10b2dc90] */
  EAX = (r32((uint32_t)(0x10b2dc90)));
  /* 10b04cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b04ccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04ccf mov dword ptr [0x10b2dc90], ecx */
  w32((uint32_t)(0x10b2dc90), (ECX));
  /* 10b04cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04cd8 mov esp, ebp */
  ESP = (EBP);
  /* 10b04cda pop ebp */
  EBP = (pop32());
  /* 10b04cdb ret  */
  ESPCHK(0x10b04cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x10b04ce0 (136 bytes, 55 insns) */
void f_10b04ce0(void) {
  FTRACE(0x10b04ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10b04ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04ce4 push ebx */
  push32((uint32_t)(EBX));
  /* 10b04ce5 push esi */
  push32((uint32_t)(ESI));
  /* 10b04ce6 push edi */
  push32((uint32_t)(EDI));
  /* 10b04ce7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10b04cee:;
  /* 10b04cee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b04cf1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b04cf4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04cf7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b04cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04cfc je 0x10b04d5e */
  if (C.zf) goto L_10b04d5e;
  /* 10b04cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04d03 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b04d05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04d08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04d11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04d14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b04d17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04d19 je 0x10b04d5c */
  if (C.zf) goto L_10b04d5c;
L_10b04d1b:;
  /* 10b04d1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b04d1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b04d23 push eax */
  push32((uint32_t)(EAX));
  /* 10b04d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04d27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04d29 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10b04d2c push edx */
  push32((uint32_t)(EDX));
  /* 10b04d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b04d30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04d33 push eax */
  push32((uint32_t)(EAX));
  /* 10b04d34 push 0x10b2a9b8 */
  push32((uint32_t)(0x10b2a9b8u));
  /* 10b04d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04d41 call 0x10b02c90 */
  push32(0x10b04d46u); f_10b02c90();
  /* 10b04d46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04d49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04d4c jne 0x10b04d4f */
  if (!C.zf) goto L_10b04d4f;
  /* 10b04d4e int3  */
  x86_unimpl("int3 @ 0x10b04d4e");
L_10b04d4f:;
  /* 10b04d4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04d51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04d53 jne 0x10b04d1b */
  if (!C.zf) goto L_10b04d1b;
  /* 10b04d55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b04d5c:;
  /* 10b04d5c jmp 0x10b04cee */
  goto L_10b04cee;
L_10b04d5e:;
  /* 10b04d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b04d61 pop edi */
  EDI = (pop32());
  /* 10b04d62 pop esi */
  ESI = (pop32());
  /* 10b04d63 pop ebx */
  EBX = (pop32());
  /* 10b04d64 mov esp, ebp */
  ESP = (EBP);
  /* 10b04d66 pop ebp */
  EBP = (pop32());
  /* 10b04d67 ret  */
  ESPCHK(0x10b04ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d70 @ 0x10b04d70 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10b04d70(void) {
  FTRACE(0x10b04d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b04d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b04d71 mov ebp, esp */
  EBP = (ESP);
  /* 10b04d73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b04d76 push ebx */
  push32((uint32_t)(EBX));
  /* 10b04d77 push esi */
  push32((uint32_t)(ESI));
  /* 10b04d78 push edi */
  push32((uint32_t)(EDI));
  /* 10b04d79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b04d80 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b04d85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b04d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04d8a jne 0x10b04d96 */
  if (!C.zf) goto L_10b04d96;
  /* 10b04d8c mov eax, 1 */
  EAX = (0x1u);
  /* 10b04d91 jmp 0x10b050c8 */
  goto L_10b050c8;
L_10b04d96:;
  /* 10b04d96 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04d98 call 0x10b075d0 */
  push32(0x10b04d9du); f_10b075d0();
  /* 10b04d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04da0 call 0x10b07db0 */
  push32(0x10b04da5u); f_10b07db0();
  /* 10b04da5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b04da8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04dac je 0x10b04eb9 */
  if (C.zf) goto L_10b04eb9;
  /* 10b04db2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04db6 je 0x10b04eb9 */
  if (C.zf) goto L_10b04eb9;
  /* 10b04dbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b04dbf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b04dc2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b04dc5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04dc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b04dcb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04dcf ja 0x10b04e82 */
  if ((!C.cf&&!C.zf)) goto L_10b04e82;
  /* 10b04dd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b04dd8 jmp dword ptr [eax*4 + 0x10b050cf] */
  switch (EAX) {
    case 0: goto L_10b04e5a;
    case 1: goto L_10b04e32;
    case 2: goto L_10b04e0a;
    case 3: goto L_10b04ddf;
    default: x86_unimpl("switch@0x10b04dd8 out of table"); return;
  }
L_10b04ddf:;
  /* 10b04ddf push 0x10b2ab0c */
  push32((uint32_t)(0x10b2ab0cu));
  /* 10b04de4 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04deb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04ded push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04def push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04df1 call 0x10b02c90 */
  push32(0x10b04df6u); f_10b02c90();
  /* 10b04df6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04df9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04dfc jne 0x10b04dff */
  if (!C.zf) goto L_10b04dff;
  /* 10b04dfe int3  */
  x86_unimpl("int3 @ 0x10b04dfe");
L_10b04dff:;
  /* 10b04dff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04e03 jne 0x10b04ddf */
  if (!C.zf) goto L_10b04ddf;
  /* 10b04e05 jmp 0x10b04ea8 */
  goto L_10b04ea8;
L_10b04e0a:;
  /* 10b04e0a push 0x10b2aae8 */
  push32((uint32_t)(0x10b2aae8u));
  /* 10b04e0f push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e1c call 0x10b02c90 */
  push32(0x10b04e21u); f_10b02c90();
  /* 10b04e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04e27 jne 0x10b04e2a */
  if (!C.zf) goto L_10b04e2a;
  /* 10b04e29 int3  */
  x86_unimpl("int3 @ 0x10b04e29");
L_10b04e2a:;
  /* 10b04e2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04e2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b04e2e jne 0x10b04e0a */
  if (!C.zf) goto L_10b04e0a;
  /* 10b04e30 jmp 0x10b04ea8 */
  goto L_10b04ea8;
L_10b04e32:;
  /* 10b04e32 push 0x10b2aac4 */
  push32((uint32_t)(0x10b2aac4u));
  /* 10b04e37 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e44 call 0x10b02c90 */
  push32(0x10b04e49u); f_10b02c90();
  /* 10b04e49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04e4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04e4f jne 0x10b04e52 */
  if (!C.zf) goto L_10b04e52;
  /* 10b04e51 int3  */
  x86_unimpl("int3 @ 0x10b04e51");
L_10b04e52:;
  /* 10b04e52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04e56 jne 0x10b04e32 */
  if (!C.zf) goto L_10b04e32;
  /* 10b04e58 jmp 0x10b04ea8 */
  goto L_10b04ea8;
L_10b04e5a:;
  /* 10b04e5a push 0x10b2aaa0 */
  push32((uint32_t)(0x10b2aaa0u));
  /* 10b04e5f push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e6c call 0x10b02c90 */
  push32(0x10b04e71u); f_10b02c90();
  /* 10b04e71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04e74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04e77 jne 0x10b04e7a */
  if (!C.zf) goto L_10b04e7a;
  /* 10b04e79 int3  */
  x86_unimpl("int3 @ 0x10b04e79");
L_10b04e7a:;
  /* 10b04e7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04e7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04e7e jne 0x10b04e5a */
  if (!C.zf) goto L_10b04e5a;
  /* 10b04e80 jmp 0x10b04ea8 */
  goto L_10b04ea8;
L_10b04e82:;
  /* 10b04e82 push 0x10b2aa74 */
  push32((uint32_t)(0x10b2aa74u));
  /* 10b04e87 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b04e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04e94 call 0x10b02c90 */
  push32(0x10b04e99u); f_10b02c90();
  /* 10b04e99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04e9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04e9f jne 0x10b04ea2 */
  if (!C.zf) goto L_10b04ea2;
  /* 10b04ea1 int3  */
  x86_unimpl("int3 @ 0x10b04ea1");
L_10b04ea2:;
  /* 10b04ea2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b04ea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b04ea6 jne 0x10b04e82 */
  if (!C.zf) goto L_10b04e82;
L_10b04ea8:;
  /* 10b04ea8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b04eaa call 0x10b07670 */
  push32(0x10b04eafu); f_10b07670();
  /* 10b04eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04eb4 jmp 0x10b050c8 */
  goto L_10b050c8;
L_10b04eb9:;
  /* 10b04eb9 mov eax, dword ptr [0x10b2f55c] */
  EAX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b04ebe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b04ec1 jmp 0x10b04ecb */
  goto L_10b04ecb;
L_10b04ec3:;
  /* 10b04ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04ec6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b04ec8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b04ecb:;
  /* 10b04ecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04ecf je 0x10b050bb */
  if (C.zf) goto L_10b050bb;
  /* 10b04ed5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b04edc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04edf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b04ee2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04ee8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04eeb je 0x10b04f10 */
  if (C.zf) goto L_10b04f10;
  /* 10b04eed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04ef0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04ef4 je 0x10b04f10 */
  if (C.zf) goto L_10b04f10;
  /* 10b04ef6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04ef9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b04efc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04f02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04f05 je 0x10b04f10 */
  if (C.zf) goto L_10b04f10;
  /* 10b04f07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04f0e jne 0x10b04f28 */
  if (!C.zf) goto L_10b04f28;
L_10b04f10:;
  /* 10b04f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b04f16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b04f1c mov edx, dword ptr [ecx*4 + 0x10b2da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da94)));
  /* 10b04f23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b04f26 jmp 0x10b04f2f */
  goto L_10b04f2f;
L_10b04f28:;
  /* 10b04f28 mov dword ptr [ebp - 0x14], 0x10b2aa6c */
  w32((uint32_t)(EBP + -0x14), (0x10b2aa6cu));
L_10b04f2f:;
  /* 10b04f2f push 4 */
  push32((uint32_t)(0x4u));
  /* 10b04f31 mov al, byte ptr [0x10b2da90] */
  AL = (r8((uint32_t)(0x10b2da90)));
  /* 10b04f36 push eax */
  push32((uint32_t)(EAX));
  /* 10b04f37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04f3d push ecx */
  push32((uint32_t)(ECX));
  /* 10b04f3e call 0x10b04ce0 */
  push32(0x10b04f43u); f_10b04ce0();
  /* 10b04f43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04f48 jne 0x10b04f84 */
  if (!C.zf) goto L_10b04f84;
L_10b04f4a:;
  /* 10b04f4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04f50 push edx */
  push32((uint32_t)(EDX));
  /* 10b04f51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b04f57 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04f58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b04f5b push edx */
  push32((uint32_t)(EDX));
  /* 10b04f5c push 0x10b2a948 */
  push32((uint32_t)(0x10b2a948u));
  /* 10b04f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04f69 call 0x10b02c90 */
  push32(0x10b04f6eu); f_10b02c90();
  /* 10b04f6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04f71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04f74 jne 0x10b04f77 */
  if (!C.zf) goto L_10b04f77;
  /* 10b04f76 int3  */
  x86_unimpl("int3 @ 0x10b04f76");
L_10b04f77:;
  /* 10b04f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b04f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04f7b jne 0x10b04f4a */
  if (!C.zf) goto L_10b04f4a;
  /* 10b04f7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b04f84:;
  /* 10b04f84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b04f86 mov cl, byte ptr [0x10b2da90] */
  CL = (r8((uint32_t)(0x10b2da90)));
  /* 10b04f8c push ecx */
  push32((uint32_t)(ECX));
  /* 10b04f8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b04f93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04f96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10b04f9a push edx */
  push32((uint32_t)(EDX));
  /* 10b04f9b call 0x10b04ce0 */
  push32(0x10b04fa0u); f_10b04ce0();
  /* 10b04fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b04fa5 jne 0x10b04fe1 */
  if (!C.zf) goto L_10b04fe1;
L_10b04fa7:;
  /* 10b04fa7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04faa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04fad push eax */
  push32((uint32_t)(EAX));
  /* 10b04fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04fb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b04fb4 push edx */
  push32((uint32_t)(EDX));
  /* 10b04fb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b04fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10b04fb9 push 0x10b2a91c */
  push32((uint32_t)(0x10b2a91cu));
  /* 10b04fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b04fc6 call 0x10b02c90 */
  push32(0x10b04fcbu); f_10b02c90();
  /* 10b04fcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04fce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04fd1 jne 0x10b04fd4 */
  if (!C.zf) goto L_10b04fd4;
  /* 10b04fd3 int3  */
  x86_unimpl("int3 @ 0x10b04fd3");
L_10b04fd4:;
  /* 10b04fd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b04fd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b04fd8 jne 0x10b04fa7 */
  if (!C.zf) goto L_10b04fa7;
  /* 10b04fda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b04fe1:;
  /* 10b04fe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04fe4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b04fe8 jne 0x10b0503a */
  if (!C.zf) goto L_10b0503a;
  /* 10b04fea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04fed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b04ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b04ff1 mov dl, byte ptr [0x10b2da91] */
  DL = (r8((uint32_t)(0x10b2da91)));
  /* 10b04ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10b04ff8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b04ffb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b04ffe push eax */
  push32((uint32_t)(EAX));
  /* 10b04fff call 0x10b04ce0 */
  push32(0x10b05004u); f_10b04ce0();
  /* 10b05004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05009 jne 0x10b0503a */
  if (!C.zf) goto L_10b0503a;
L_10b0500b:;
  /* 10b0500b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0500e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05011 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05012 push 0x10b2aa40 */
  push32((uint32_t)(0x10b2aa40u));
  /* 10b05017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05019 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0501b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0501d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0501f call 0x10b02c90 */
  push32(0x10b05024u); f_10b02c90();
  /* 10b05024 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05027 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0502a jne 0x10b0502d */
  if (!C.zf) goto L_10b0502d;
  /* 10b0502c int3  */
  x86_unimpl("int3 @ 0x10b0502c");
L_10b0502d:;
  /* 10b0502d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0502f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05031 jne 0x10b0500b */
  if (!C.zf) goto L_10b0500b;
  /* 10b05033 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b0503a:;
  /* 10b0503a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0503e jne 0x10b050b6 */
  if (!C.zf) goto L_10b050b6;
  /* 10b05040 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05043 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05047 je 0x10b0507c */
  if (C.zf) goto L_10b0507c;
L_10b05049:;
  /* 10b05049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0504c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0504f push edx */
  push32((uint32_t)(EDX));
  /* 10b05050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05053 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b05056 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05057 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0505a push edx */
  push32((uint32_t)(EDX));
  /* 10b0505b push 0x10b2aa20 */
  push32((uint32_t)(0x10b2aa20u));
  /* 10b05060 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05062 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05068 call 0x10b02c90 */
  push32(0x10b0506du); f_10b02c90();
  /* 10b0506d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05070 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05073 jne 0x10b05076 */
  if (!C.zf) goto L_10b05076;
  /* 10b05075 int3  */
  x86_unimpl("int3 @ 0x10b05075");
L_10b05076:;
  /* 10b05076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0507a jne 0x10b05049 */
  if (!C.zf) goto L_10b05049;
L_10b0507c:;
  /* 10b0507c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0507f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b05082 push edx */
  push32((uint32_t)(EDX));
  /* 10b05083 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05086 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05089 push eax */
  push32((uint32_t)(EAX));
  /* 10b0508a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0508d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0508e push 0x10b2a9f4 */
  push32((uint32_t)(0x10b2a9f4u));
  /* 10b05093 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05095 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05097 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05099 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0509b call 0x10b02c90 */
  push32(0x10b050a0u); f_10b02c90();
  /* 10b050a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b050a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b050a6 jne 0x10b050a9 */
  if (!C.zf) goto L_10b050a9;
  /* 10b050a8 int3  */
  x86_unimpl("int3 @ 0x10b050a8");
L_10b050a9:;
  /* 10b050a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b050ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b050ad jne 0x10b0507c */
  if (!C.zf) goto L_10b0507c;
  /* 10b050af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b050b6:;
  /* 10b050b6 jmp 0x10b04ec3 */
  goto L_10b04ec3;
L_10b050bb:;
  /* 10b050bb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b050bd call 0x10b07670 */
  push32(0x10b050c2u); f_10b07670();
  /* 10b050c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b050c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b050c8:;
  /* 10b050c8 pop edi */
  EDI = (pop32());
  /* 10b050c9 pop esi */
  ESI = (pop32());
  /* 10b050ca pop ebx */
  EBX = (pop32());
  /* 10b050cb mov esp, ebp */
  ESP = (EBP);
  /* 10b050cd pop ebp */
  EBP = (pop32());
  /* 10b050ce ret  */
  ESPCHK(0x10b04d70u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e0 @ 0x10b050e0 (34 bytes, 13 insns) */
void f_10b050e0(void) {
  FTRACE(0x10b050e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b050e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b050e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b050e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b050e4 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b050e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b050ec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b050f0 je 0x10b050fb */
  if (C.zf) goto L_10b050fb;
  /* 10b050f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b050f5 mov dword ptr [0x10b2da84], ecx */
  w32((uint32_t)(0x10b2da84), (ECX));
L_10b050fb:;
  /* 10b050fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b050fe mov esp, ebp */
  ESP = (EBP);
  /* 10b05100 pop ebp */
  EBP = (pop32());
  /* 10b05101 ret  */
  ESPCHK(0x10b050e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x10b05110 (103 bytes, 38 insns) */
void f_10b05110(void) {
  FTRACE(0x10b05110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05110 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05111 mov ebp, esp */
  EBP = (ESP);
  /* 10b05113 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05114 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b05119 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0511c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0511e jne 0x10b05122 */
  if (!C.zf) goto L_10b05122;
  /* 10b05120 jmp 0x10b05173 */
  goto L_10b05173;
L_10b05122:;
  /* 10b05122 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05124 call 0x10b075d0 */
  push32(0x10b05129u); f_10b075d0();
  /* 10b05129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0512c mov ecx, dword ptr [0x10b2f55c] */
  ECX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b05132 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b05135 jmp 0x10b0513f */
  goto L_10b0513f;
L_10b05137:;
  /* 10b05137 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0513a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0513c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0513f:;
  /* 10b0513f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05143 je 0x10b05169 */
  if (C.zf) goto L_10b05169;
  /* 10b05145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05148 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b0514b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05151 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05154 jne 0x10b05167 */
  if (!C.zf) goto L_10b05167;
  /* 10b05156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05159 push eax */
  push32((uint32_t)(EAX));
  /* 10b0515a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0515d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05160 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05161 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10b05164u);
  /* 10b05164 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b05167:;
  /* 10b05167 jmp 0x10b05137 */
  goto L_10b05137;
L_10b05169:;
  /* 10b05169 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b0516b call 0x10b07670 */
  push32(0x10b05170u); f_10b07670();
  /* 10b05170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b05173:;
  /* 10b05173 mov esp, ebp */
  ESP = (EBP);
  /* 10b05175 pop ebp */
  EBP = (pop32());
  /* 10b05176 ret  */
  ESPCHK(0x10b05110u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10b05180 (75 bytes, 28 insns) */
void f_10b05180(void) {
  FTRACE(0x10b05180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05180 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05181 mov ebp, esp */
  EBP = (ESP);
  /* 10b05183 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05184 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05188 je 0x10b051bd */
  if (C.zf) goto L_10b051bd;
  /* 10b0518a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0518d push eax */
  push32((uint32_t)(EAX));
  /* 10b0518e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05191 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05192 call dword ptr [0x10b3238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3238c))), 0x10b05198u);
  /* 10b05198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0519a jne 0x10b051bd */
  if (!C.zf) goto L_10b051bd;
  /* 10b0519c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b051a0 je 0x10b051b4 */
  if (C.zf) goto L_10b051b4;
  /* 10b051a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b051a5 push edx */
  push32((uint32_t)(EDX));
  /* 10b051a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b051a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b051aa call dword ptr [0x10b32388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32388))), 0x10b051b0u);
  /* 10b051b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b051b2 jne 0x10b051bd */
  if (!C.zf) goto L_10b051bd;
L_10b051b4:;
  /* 10b051b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b051bb jmp 0x10b051c4 */
  goto L_10b051c4;
L_10b051bd:;
  /* 10b051bd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b051c4:;
  /* 10b051c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b051c7 mov esp, ebp */
  ESP = (EBP);
  /* 10b051c9 pop ebp */
  EBP = (pop32());
  /* 10b051ca ret  */
  ESPCHK(0x10b05180u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x10b051d0 (134 bytes, 50 insns) */
void f_10b051d0(void) {
  FTRACE(0x10b051d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b051d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b051d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b051d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b051d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b051d8 jne 0x10b051de */
  if (!C.zf) goto L_10b051de;
  /* 10b051da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b051dc jmp 0x10b05252 */
  goto L_10b05252;
L_10b051de:;
  /* 10b051de push 1 */
  push32((uint32_t)(0x1u));
  /* 10b051e0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b051e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b051e5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b051e8 push eax */
  push32((uint32_t)(EAX));
  /* 10b051e9 call 0x10b05180 */
  push32(0x10b051eeu); f_10b05180();
  /* 10b051ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b051f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b051f3 jne 0x10b051f9 */
  if (!C.zf) goto L_10b051f9;
  /* 10b051f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b051f7 jmp 0x10b05252 */
  goto L_10b05252;
L_10b051f9:;
  /* 10b051f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b051fc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b051ff push ecx */
  push32((uint32_t)(ECX));
  /* 10b05200 call 0x10b07ed0 */
  push32(0x10b05205u); f_10b07ed0();
  /* 10b05205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05208 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0520b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0520f je 0x10b05226 */
  if (C.zf) goto L_10b05226;
  /* 10b05211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05214 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05217 push edx */
  push32((uint32_t)(EDX));
  /* 10b05218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0521b push eax */
  push32((uint32_t)(EAX));
  /* 10b0521c call 0x10b07f30 */
  push32(0x10b05221u); f_10b07f30();
  /* 10b05221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05224 jmp 0x10b05252 */
  goto L_10b05252;
L_10b05226:;
  /* 10b05226 mov ecx, dword ptr [0x10b2f510] */
  ECX = (r32((uint32_t)(0x10b2f510)));
  /* 10b0522c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b05232 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b05234 je 0x10b0523d */
  if (C.zf) goto L_10b0523d;
  /* 10b05236 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0523b jmp 0x10b05252 */
  goto L_10b05252;
L_10b0523d:;
  /* 10b0523d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05240 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05243 push edx */
  push32((uint32_t)(EDX));
  /* 10b05244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05246 mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b0524b push eax */
  push32((uint32_t)(EAX));
  /* 10b0524c call dword ptr [0x10b32390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32390))), 0x10b05252u);
L_10b05252:;
  /* 10b05252 mov esp, ebp */
  ESP = (EBP);
  /* 10b05254 pop ebp */
  EBP = (pop32());
  /* 10b05255 ret  */
  ESPCHK(0x10b051d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x10b05260 (227 bytes, 80 insns) */
void f_10b05260(void) {
  FTRACE(0x10b05260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05260 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05261 mov ebp, esp */
  EBP = (ESP);
  /* 10b05263 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05267 push eax */
  push32((uint32_t)(EAX));
  /* 10b05268 call 0x10b051d0 */
  push32(0x10b0526du); f_10b051d0();
  /* 10b0526d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05272 jne 0x10b0527b */
  if (!C.zf) goto L_10b0527b;
  /* 10b05274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05276 jmp 0x10b0533f */
  goto L_10b0533f;
L_10b0527b:;
  /* 10b0527b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b0527d call 0x10b075d0 */
  push32(0x10b05282u); f_10b075d0();
  /* 10b05282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05285 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05288 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0528b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0528e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05291 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b05294 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b05299 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0529c je 0x10b052c0 */
  if (C.zf) goto L_10b052c0;
  /* 10b0529e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052a1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052a5 je 0x10b052c0 */
  if (C.zf) goto L_10b052c0;
  /* 10b052a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b052ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b052b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052b5 je 0x10b052c0 */
  if (C.zf) goto L_10b052c0;
  /* 10b052b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052ba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052be jne 0x10b05333 */
  if (!C.zf) goto L_10b05333;
L_10b052c0:;
  /* 10b052c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b052c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b052c5 push edx */
  push32((uint32_t)(EDX));
  /* 10b052c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b052c9 push eax */
  push32((uint32_t)(EAX));
  /* 10b052ca call 0x10b05180 */
  push32(0x10b052cfu); f_10b05180();
  /* 10b052cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b052d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b052d4 je 0x10b05333 */
  if (C.zf) goto L_10b05333;
  /* 10b052d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b052dc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052df jne 0x10b05333 */
  if (!C.zf) goto L_10b05333;
  /* 10b052e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b052e7 cmp ecx, dword ptr [0x10b2da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052ed jg 0x10b05333 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b05333;
  /* 10b052ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b052f3 je 0x10b05300 */
  if (C.zf) goto L_10b05300;
  /* 10b052f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b052f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b052fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b052fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b05300:;
  /* 10b05300 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05304 je 0x10b05311 */
  if (C.zf) goto L_10b05311;
  /* 10b05306 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b05309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0530c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0530f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b05311:;
  /* 10b05311 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05315 je 0x10b05322 */
  if (C.zf) goto L_10b05322;
  /* 10b05317 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0531a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0531d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b05320 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b05322:;
  /* 10b05322 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05324 call 0x10b07670 */
  push32(0x10b05329u); f_10b07670();
  /* 10b05329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0532c mov eax, 1 */
  EAX = (0x1u);
  /* 10b05331 jmp 0x10b0533f */
  goto L_10b0533f;
L_10b05333:;
  /* 10b05333 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05335 call 0x10b07670 */
  push32(0x10b0533au); f_10b07670();
  /* 10b0533a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0533d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0533f:;
  /* 10b0533f mov esp, ebp */
  ESP = (EBP);
  /* 10b05341 pop ebp */
  EBP = (pop32());
  /* 10b05342 ret  */
  ESPCHK(0x10b05260u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x10b05350 (28 bytes, 11 insns) */
void f_10b05350(void) {
  FTRACE(0x10b05350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05350 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05351 mov ebp, esp */
  EBP = (ESP);
  /* 10b05353 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05354 mov eax, dword ptr [0x10b30eb8] */
  EAX = (r32((uint32_t)(0x10b30eb8)));
  /* 10b05359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0535c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0535f mov dword ptr [0x10b30eb8], ecx */
  w32((uint32_t)(0x10b30eb8), (ECX));
  /* 10b05365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05368 mov esp, ebp */
  ESP = (EBP);
  /* 10b0536a pop ebp */
  EBP = (pop32());
  /* 10b0536b ret  */
  ESPCHK(0x10b05350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005370 @ 0x10b05370 (362 bytes, 116 insns) */
void f_10b05370(void) {
  FTRACE(0x10b05370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05370 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05371 mov ebp, esp */
  EBP = (ESP);
  /* 10b05373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05376 push ebx */
  push32((uint32_t)(EBX));
  /* 10b05377 push esi */
  push32((uint32_t)(ESI));
  /* 10b05378 push edi */
  push32((uint32_t)(EDI));
  /* 10b05379 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0537d jne 0x10b053aa */
  if (!C.zf) goto L_10b053aa;
L_10b0537f:;
  /* 10b0537f push 0x10b2ab54 */
  push32((uint32_t)(0x10b2ab54u));
  /* 10b05384 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b05389 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0538b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0538d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0538f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05391 call 0x10b02c90 */
  push32(0x10b05396u); f_10b02c90();
  /* 10b05396 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0539c jne 0x10b0539f */
  if (!C.zf) goto L_10b0539f;
  /* 10b0539e int3  */
  x86_unimpl("int3 @ 0x10b0539e");
L_10b0539f:;
  /* 10b0539f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b053a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b053a3 jne 0x10b0537f */
  if (!C.zf) goto L_10b0537f;
  /* 10b053a5 jmp 0x10b054d3 */
  goto L_10b054d3;
L_10b053aa:;
  /* 10b053aa push 9 */
  push32((uint32_t)(0x9u));
  /* 10b053ac call 0x10b075d0 */
  push32(0x10b053b1u); f_10b075d0();
  /* 10b053b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b053b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b053b7 mov edx, dword ptr [0x10b2f55c] */
  EDX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b053bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b053bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b053c6 jmp 0x10b053d1 */
  goto L_10b053d1;
L_10b053c8:;
  /* 10b053c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b053cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b053ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b053d1:;
  /* 10b053d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b053d5 jge 0x10b053f5 */
  if ((C.sf==C.of)) goto L_10b053f5;
  /* 10b053d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b053da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b053dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10b053e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b053e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b053eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10b053f3 jmp 0x10b053c8 */
  goto L_10b053c8;
L_10b053f5:;
  /* 10b053f5 mov edx, dword ptr [0x10b2f55c] */
  EDX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b053fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b053fe jmp 0x10b05408 */
  goto L_10b05408;
L_10b05400:;
  /* 10b05400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05403 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b05405 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b05408:;
  /* 10b05408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0540c je 0x10b054b1 */
  if (C.zf) goto L_10b054b1;
  /* 10b05412 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05415 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b05418 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0541d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0541f jl 0x10b05487 */
  if ((C.sf!=C.of)) goto L_10b05487;
  /* 10b05421 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05424 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b05427 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0542d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05430 jge 0x10b05487 */
  if ((C.sf==C.of)) goto L_10b05487;
  /* 10b05432 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05435 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b05438 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0543e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05441 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10b05445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05448 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0544b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b0544e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05457 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10b0545b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0545e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b05461 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b05466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05469 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10b0546d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05470 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05473 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05476 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b05479 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0547e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05481 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10b05485 jmp 0x10b054ac */
  goto L_10b054ac;
L_10b05487:;
  /* 10b05487 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0548a push edx */
  push32((uint32_t)(EDX));
  /* 10b0548b push 0x10b2ab30 */
  push32((uint32_t)(0x10b2ab30u));
  /* 10b05490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05498 call 0x10b02c90 */
  push32(0x10b0549du); f_10b02c90();
  /* 10b0549d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b054a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b054a3 jne 0x10b054a6 */
  if (!C.zf) goto L_10b054a6;
  /* 10b054a5 int3  */
  x86_unimpl("int3 @ 0x10b054a5");
L_10b054a6:;
  /* 10b054a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b054a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b054aa jne 0x10b05487 */
  if (!C.zf) goto L_10b05487;
L_10b054ac:;
  /* 10b054ac jmp 0x10b05400 */
  goto L_10b05400;
L_10b054b1:;
  /* 10b054b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b054b4 mov edx, dword ptr [0x10b2f564] */
  EDX = (r32((uint32_t)(0x10b2f564)));
  /* 10b054ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10b054bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b054c0 mov ecx, dword ptr [0x10b2f558] */
  ECX = (r32((uint32_t)(0x10b2f558)));
  /* 10b054c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10b054c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b054cb call 0x10b07670 */
  push32(0x10b054d0u); f_10b07670();
  /* 10b054d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b054d3:;
  /* 10b054d3 pop edi */
  EDI = (pop32());
  /* 10b054d4 pop esi */
  ESI = (pop32());
  /* 10b054d5 pop ebx */
  EBX = (pop32());
  /* 10b054d6 mov esp, ebp */
  ESP = (EBP);
  /* 10b054d8 pop ebp */
  EBP = (pop32());
  /* 10b054d9 ret  */
  ESPCHK(0x10b05370u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x10b054e0 (291 bytes, 95 insns) */
void f_10b054e0(void) {
  FTRACE(0x10b054e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b054e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b054e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b054e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b054e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b054e7 push esi */
  push32((uint32_t)(ESI));
  /* 10b054e8 push edi */
  push32((uint32_t)(EDI));
  /* 10b054e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b054f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b054f4 je 0x10b05502 */
  if (C.zf) goto L_10b05502;
  /* 10b054f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b054fa je 0x10b05502 */
  if (C.zf) goto L_10b05502;
  /* 10b054fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05500 jne 0x10b05530 */
  if (!C.zf) goto L_10b05530;
L_10b05502:;
  /* 10b05502 push 0x10b2ab7c */
  push32((uint32_t)(0x10b2ab7cu));
  /* 10b05507 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b0550c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0550e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05510 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05514 call 0x10b02c90 */
  push32(0x10b05519u); f_10b02c90();
  /* 10b05519 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0551c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0551f jne 0x10b05522 */
  if (!C.zf) goto L_10b05522;
  /* 10b05521 int3  */
  x86_unimpl("int3 @ 0x10b05521");
L_10b05522:;
  /* 10b05522 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05526 jne 0x10b05502 */
  if (!C.zf) goto L_10b05502;
  /* 10b05528 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0552b jmp 0x10b055fc */
  goto L_10b055fc;
L_10b05530:;
  /* 10b05530 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b05537 jmp 0x10b05542 */
  goto L_10b05542;
L_10b05539:;
  /* 10b05539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0553c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0553f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b05542:;
  /* 10b05542 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05546 jge 0x10b055cc */
  if ((C.sf==C.of)) goto L_10b055cc;
  /* 10b0554c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0554f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05555 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05558 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10b0555c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05560 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05563 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05566 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10b0556a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0556d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05573 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05576 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10b0557a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0557e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05581 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05584 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10b05588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0558b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0558e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05593 jne 0x10b055a2 */
  if (!C.zf) goto L_10b055a2;
  /* 10b05595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0559b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b055a0 je 0x10b055c7 */
  if (C.zf) goto L_10b055c7;
L_10b055a2:;
  /* 10b055a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b055a6 je 0x10b055c7 */
  if (C.zf) goto L_10b055c7;
  /* 10b055a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b055ac jne 0x10b055c0 */
  if (!C.zf) goto L_10b055c0;
  /* 10b055ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b055b2 jne 0x10b055c7 */
  if (!C.zf) goto L_10b055c7;
  /* 10b055b4 mov eax, dword ptr [0x10b2da84] */
  EAX = (r32((uint32_t)(0x10b2da84)));
  /* 10b055b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10b055bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b055be je 0x10b055c7 */
  if (C.zf) goto L_10b055c7;
L_10b055c0:;
  /* 10b055c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10b055c7:;
  /* 10b055c7 jmp 0x10b05539 */
  goto L_10b05539;
L_10b055cc:;
  /* 10b055cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b055cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b055d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10b055d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b055d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b055db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10b055de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b055e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b055e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10b055e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b055ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b055ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10b055f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b055f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b055f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b055fc:;
  /* 10b055fc pop edi */
  EDI = (pop32());
  /* 10b055fd pop esi */
  ESI = (pop32());
  /* 10b055fe pop ebx */
  EBX = (pop32());
  /* 10b055ff mov esp, ebp */
  ESP = (EBP);
  /* 10b05601 pop ebp */
  EBP = (pop32());
  /* 10b05602 ret  */
  ESPCHK(0x10b054e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10b05610 (697 bytes, 253 insns) */
void f_10b05610(void) {
  FTRACE(0x10b05610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05610 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05611 mov ebp, esp */
  EBP = (ESP);
  /* 10b05613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05616 push ebx */
  push32((uint32_t)(EBX));
  /* 10b05617 push esi */
  push32((uint32_t)(ESI));
  /* 10b05618 push edi */
  push32((uint32_t)(EDI));
  /* 10b05619 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b05620 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05622 call 0x10b075d0 */
  push32(0x10b05627u); f_10b075d0();
  /* 10b05627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0562a:;
  /* 10b0562a push 0x10b2ac74 */
  push32((uint32_t)(0x10b2ac74u));
  /* 10b0562f push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b05634 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0563a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0563c call 0x10b02c90 */
  push32(0x10b05641u); f_10b02c90();
  /* 10b05641 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05644 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05647 jne 0x10b0564a */
  if (!C.zf) goto L_10b0564a;
  /* 10b05649 int3  */
  x86_unimpl("int3 @ 0x10b05649");
L_10b0564a:;
  /* 10b0564a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0564c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0564e jne 0x10b0562a */
  if (!C.zf) goto L_10b0562a;
  /* 10b05650 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05654 je 0x10b0565e */
  if (C.zf) goto L_10b0565e;
  /* 10b05656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05659 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0565b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b0565e:;
  /* 10b0565e mov eax, dword ptr [0x10b2f55c] */
  EAX = (r32((uint32_t)(0x10b2f55c)));
  /* 10b05663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b05666 jmp 0x10b05670 */
  goto L_10b05670;
L_10b05668:;
  /* 10b05668 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0566b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0566d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b05670:;
  /* 10b05670 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05674 je 0x10b05892 */
  if (C.zf) goto L_10b05892;
  /* 10b0567a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0567d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05680 je 0x10b05892 */
  if (C.zf) goto L_10b05892;
  /* 10b05686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05689 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b0568c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05692 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05695 je 0x10b056c4 */
  if (C.zf) goto L_10b056c4;
  /* 10b05697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0569a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b0569d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b056a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b056a5 je 0x10b056c4 */
  if (C.zf) goto L_10b056c4;
  /* 10b056a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b056aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b056ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b056b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b056b5 jne 0x10b056c9 */
  if (!C.zf) goto L_10b056c9;
  /* 10b056b7 mov ecx, dword ptr [0x10b2da84] */
  ECX = (r32((uint32_t)(0x10b2da84)));
  /* 10b056bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10b056c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b056c2 jne 0x10b056c9 */
  if (!C.zf) goto L_10b056c9;
L_10b056c4:;
  /* 10b056c4 jmp 0x10b0588d */
  goto L_10b0588d;
L_10b056c9:;
  /* 10b056c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b056cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b056d0 je 0x10b05742 */
  if (C.zf) goto L_10b05742;
  /* 10b056d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b056d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b056d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b056d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b056dc push ecx */
  push32((uint32_t)(ECX));
  /* 10b056dd call 0x10b05180 */
  push32(0x10b056e2u); f_10b05180();
  /* 10b056e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b056e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b056e7 jne 0x10b05713 */
  if (!C.zf) goto L_10b05713;
L_10b056e9:;
  /* 10b056e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b056ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b056ef push eax */
  push32((uint32_t)(EAX));
  /* 10b056f0 push 0x10b2ac60 */
  push32((uint32_t)(0x10b2ac60u));
  /* 10b056f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b056f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b056f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b056fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b056fd call 0x10b02c90 */
  push32(0x10b05702u); f_10b02c90();
  /* 10b05702 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05705 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05708 jne 0x10b0570b */
  if (!C.zf) goto L_10b0570b;
  /* 10b0570a int3  */
  x86_unimpl("int3 @ 0x10b0570a");
L_10b0570b:;
  /* 10b0570b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0570d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0570f jne 0x10b056e9 */
  if (!C.zf) goto L_10b056e9;
  /* 10b05711 jmp 0x10b05742 */
  goto L_10b05742;
L_10b05713:;
  /* 10b05713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05716 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b05719 push eax */
  push32((uint32_t)(EAX));
  /* 10b0571a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0571d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b05720 push edx */
  push32((uint32_t)(EDX));
  /* 10b05721 push 0x10b2ac54 */
  push32((uint32_t)(0x10b2ac54u));
  /* 10b05726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05728 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0572a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0572c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0572e call 0x10b02c90 */
  push32(0x10b05733u); f_10b02c90();
  /* 10b05733 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05736 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05739 jne 0x10b0573c */
  if (!C.zf) goto L_10b0573c;
  /* 10b0573b int3  */
  x86_unimpl("int3 @ 0x10b0573b");
L_10b0573c:;
  /* 10b0573c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0573e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05740 jne 0x10b05713 */
  if (!C.zf) goto L_10b05713;
L_10b05742:;
  /* 10b05742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05745 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b05748 push edx */
  push32((uint32_t)(EDX));
  /* 10b05749 push 0x10b2ac4c */
  push32((uint32_t)(0x10b2ac4cu));
  /* 10b0574e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05756 call 0x10b02c90 */
  push32(0x10b0575bu); f_10b02c90();
  /* 10b0575b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0575e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05761 jne 0x10b05764 */
  if (!C.zf) goto L_10b05764;
  /* 10b05763 int3  */
  x86_unimpl("int3 @ 0x10b05763");
L_10b05764:;
  /* 10b05764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05768 jne 0x10b05742 */
  if (!C.zf) goto L_10b05742;
  /* 10b0576a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0576d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b05770 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05776 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05779 jne 0x10b057ec */
  if (!C.zf) goto L_10b057ec;
L_10b0577b:;
  /* 10b0577b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0577e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b05781 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05782 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05785 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b05788 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b0578b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b05790 push eax */
  push32((uint32_t)(EAX));
  /* 10b05791 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05794 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05797 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05798 push 0x10b2ac18 */
  push32((uint32_t)(0x10b2ac18u));
  /* 10b0579d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0579f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b057a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b057a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b057a5 call 0x10b02c90 */
  push32(0x10b057aau); f_10b02c90();
  /* 10b057aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b057ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b057b0 jne 0x10b057b3 */
  if (!C.zf) goto L_10b057b3;
  /* 10b057b2 int3  */
  x86_unimpl("int3 @ 0x10b057b2");
L_10b057b3:;
  /* 10b057b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b057b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b057b7 jne 0x10b0577b */
  if (!C.zf) goto L_10b0577b;
  /* 10b057b9 cmp dword ptr [0x10b30eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b057c0 je 0x10b057db */
  if (C.zf) goto L_10b057db;
  /* 10b057c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b057c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b057c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b057cf push edx */
  push32((uint32_t)(EDX));
  /* 10b057d0 call dword ptr [0x10b30eb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b30eb8))), 0x10b057d6u);
  /* 10b057d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b057d9 jmp 0x10b057e7 */
  goto L_10b057e7;
L_10b057db:;
  /* 10b057db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057de push eax */
  push32((uint32_t)(EAX));
  /* 10b057df call 0x10b058d0 */
  push32(0x10b057e4u); f_10b058d0();
  /* 10b057e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b057e7:;
  /* 10b057e7 jmp 0x10b0588d */
  goto L_10b0588d;
L_10b057ec:;
  /* 10b057ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b057f3 jne 0x10b05832 */
  if (!C.zf) goto L_10b05832;
L_10b057f5:;
  /* 10b057f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b057fb push eax */
  push32((uint32_t)(EAX));
  /* 10b057fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b057ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05802 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05803 push 0x10b2abf0 */
  push32((uint32_t)(0x10b2abf0u));
  /* 10b05808 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0580a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0580c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0580e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05810 call 0x10b02c90 */
  push32(0x10b05815u); f_10b02c90();
  /* 10b05815 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05818 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0581b jne 0x10b0581e */
  if (!C.zf) goto L_10b0581e;
  /* 10b0581d int3  */
  x86_unimpl("int3 @ 0x10b0581d");
L_10b0581e:;
  /* 10b0581e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b05820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05822 jne 0x10b057f5 */
  if (!C.zf) goto L_10b057f5;
  /* 10b05824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05827 push eax */
  push32((uint32_t)(EAX));
  /* 10b05828 call 0x10b058d0 */
  push32(0x10b0582du); f_10b058d0();
  /* 10b0582d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05830 jmp 0x10b0588d */
  goto L_10b0588d;
L_10b05832:;
  /* 10b05832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05835 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b05838 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0583e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05841 jne 0x10b0588d */
  if (!C.zf) goto L_10b0588d;
L_10b05843:;
  /* 10b05843 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05846 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b05849 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0584a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0584d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b05850 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b05853 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b05858 push eax */
  push32((uint32_t)(EAX));
  /* 10b05859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0585c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0585f push ecx */
  push32((uint32_t)(ECX));
  /* 10b05860 push 0x10b2abbc */
  push32((uint32_t)(0x10b2abbcu));
  /* 10b05865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05869 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0586b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0586d call 0x10b02c90 */
  push32(0x10b05872u); f_10b02c90();
  /* 10b05872 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05875 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05878 jne 0x10b0587b */
  if (!C.zf) goto L_10b0587b;
  /* 10b0587a int3  */
  x86_unimpl("int3 @ 0x10b0587a");
L_10b0587b:;
  /* 10b0587b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0587d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0587f jne 0x10b05843 */
  if (!C.zf) goto L_10b05843;
  /* 10b05881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05884 push eax */
  push32((uint32_t)(EAX));
  /* 10b05885 call 0x10b058d0 */
  push32(0x10b0588au); f_10b058d0();
  /* 10b0588a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0588d:;
  /* 10b0588d jmp 0x10b05668 */
  goto L_10b05668;
L_10b05892:;
  /* 10b05892 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05894 call 0x10b07670 */
  push32(0x10b05899u); f_10b07670();
  /* 10b05899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0589c:;
  /* 10b0589c push 0x10b2aba4 */
  push32((uint32_t)(0x10b2aba4u));
  /* 10b058a1 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b058a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b058a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b058aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b058ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10b058ae call 0x10b02c90 */
  push32(0x10b058b3u); f_10b02c90();
  /* 10b058b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b058b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b058b9 jne 0x10b058bc */
  if (!C.zf) goto L_10b058bc;
  /* 10b058bb int3  */
  x86_unimpl("int3 @ 0x10b058bb");
L_10b058bc:;
  /* 10b058bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b058be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b058c0 jne 0x10b0589c */
  if (!C.zf) goto L_10b0589c;
  /* 10b058c2 pop edi */
  EDI = (pop32());
  /* 10b058c3 pop esi */
  ESI = (pop32());
  /* 10b058c4 pop ebx */
  EBX = (pop32());
  /* 10b058c5 mov esp, ebp */
  ESP = (EBP);
  /* 10b058c7 pop ebp */
  EBP = (pop32());
  /* 10b058c8 ret  */
  ESPCHK(0x10b05610u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x10b058d0 (276 bytes, 89 insns) */
void f_10b058d0(void) {
  FTRACE(0x10b058d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b058d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b058d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b058d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b058d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b058d7 push esi */
  push32((uint32_t)(ESI));
  /* 10b058d8 push edi */
  push32((uint32_t)(EDI));
  /* 10b058d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10b058e0 jmp 0x10b058eb */
  goto L_10b058eb;
L_10b058e2:;
  /* 10b058e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b058e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b058e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10b058eb:;
  /* 10b058eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b058ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b058f2 jge 0x10b058ff */
  if ((C.sf==C.of)) goto L_10b058ff;
  /* 10b058f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b058f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b058fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10b058fd jmp 0x10b05906 */
  goto L_10b05906;
L_10b058ff:;
  /* 10b058ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10b05906:;
  /* 10b05906 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b05909 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0590c jge 0x10b059ac */
  if ((C.sf==C.of)) goto L_10b059ac;
  /* 10b05912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05915 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05918 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10b0591b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10b0591e cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05925 jle 0x10b05943 */
  if ((C.zf||C.sf!=C.of)) goto L_10b05943;
  /* 10b05927 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10b0592c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b0592f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b05935 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05936 call 0x10b09be0 */
  push32(0x10b0593bu); f_10b09be0();
  /* 10b0593b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0593e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10b05941 jmp 0x10b05960 */
  goto L_10b05960;
L_10b05943:;
  /* 10b05943 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b05946 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0594c mov eax, dword ptr [0x10b2dc98] */
  EAX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b05951 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b05953 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b05957 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0595d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10b05960:;
  /* 10b05960 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05964 je 0x10b05974 */
  if (C.zf) goto L_10b05974;
  /* 10b05966 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b05969 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0596f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10b05972 jmp 0x10b0597b */
  goto L_10b0597b;
L_10b05974:;
  /* 10b05974 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10b0597b:;
  /* 10b0597b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b0597e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10b05981 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10b05985 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10b05988 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0598e push edx */
  push32((uint32_t)(EDX));
  /* 10b0598f push 0x10b2ac98 */
  push32((uint32_t)(0x10b2ac98u));
  /* 10b05994 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b05997 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0599a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10b0599e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0599f call 0x10b09ae0 */
  push32(0x10b059a4u); f_10b09ae0();
  /* 10b059a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b059a7 jmp 0x10b058e2 */
  goto L_10b058e2;
L_10b059ac:;
  /* 10b059ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10b059af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10b059b4:;
  /* 10b059b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10b059b7 push eax */
  push32((uint32_t)(EAX));
  /* 10b059b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10b059bb push ecx */
  push32((uint32_t)(ECX));
  /* 10b059bc push 0x10b2ac88 */
  push32((uint32_t)(0x10b2ac88u));
  /* 10b059c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b059c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b059c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b059c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b059c9 call 0x10b02c90 */
  push32(0x10b059ceu); f_10b02c90();
  /* 10b059ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b059d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b059d4 jne 0x10b059d7 */
  if (!C.zf) goto L_10b059d7;
  /* 10b059d6 int3  */
  x86_unimpl("int3 @ 0x10b059d6");
L_10b059d7:;
  /* 10b059d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b059d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b059db jne 0x10b059b4 */
  if (!C.zf) goto L_10b059b4;
  /* 10b059dd pop edi */
  EDI = (pop32());
  /* 10b059de pop esi */
  ESI = (pop32());
  /* 10b059df pop ebx */
  EBX = (pop32());
  /* 10b059e0 mov esp, ebp */
  ESP = (EBP);
  /* 10b059e2 pop ebp */
  EBP = (pop32());
  /* 10b059e3 ret  */
  ESPCHK(0x10b058d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x10b059f0 (116 bytes, 46 insns) */
void f_10b059f0(void) {
  FTRACE(0x10b059f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b059f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b059f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b059f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b059f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b059f7 push esi */
  push32((uint32_t)(ESI));
  /* 10b059f8 push edi */
  push32((uint32_t)(EDI));
  /* 10b059f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10b059fc push eax */
  push32((uint32_t)(EAX));
  /* 10b059fd call 0x10b05370 */
  push32(0x10b05a02u); f_10b05370();
  /* 10b05a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05a05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a09 jne 0x10b05a24 */
  if (!C.zf) goto L_10b05a24;
  /* 10b05a0b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a0f jne 0x10b05a24 */
  if (!C.zf) goto L_10b05a24;
  /* 10b05a11 mov ecx, dword ptr [0x10b2da84] */
  ECX = (r32((uint32_t)(0x10b2da84)));
  /* 10b05a17 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10b05a1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b05a1c je 0x10b05a5b */
  if (C.zf) goto L_10b05a5b;
  /* 10b05a1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a22 je 0x10b05a5b */
  if (C.zf) goto L_10b05a5b;
L_10b05a24:;
  /* 10b05a24 push 0x10b2aca0 */
  push32((uint32_t)(0x10b2aca0u));
  /* 10b05a29 push 0x10b2a66c */
  push32((uint32_t)(0x10b2a66cu));
  /* 10b05a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05a36 call 0x10b02c90 */
  push32(0x10b05a3bu); f_10b02c90();
  /* 10b05a3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05a3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a41 jne 0x10b05a44 */
  if (!C.zf) goto L_10b05a44;
  /* 10b05a43 int3  */
  x86_unimpl("int3 @ 0x10b05a43");
L_10b05a44:;
  /* 10b05a44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b05a46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05a48 jne 0x10b05a24 */
  if (!C.zf) goto L_10b05a24;
  /* 10b05a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05a4c call 0x10b05610 */
  push32(0x10b05a51u); f_10b05610();
  /* 10b05a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05a54 mov eax, 1 */
  EAX = (0x1u);
  /* 10b05a59 jmp 0x10b05a5d */
  goto L_10b05a5d;
L_10b05a5b:;
  /* 10b05a5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b05a5d:;
  /* 10b05a5d pop edi */
  EDI = (pop32());
  /* 10b05a5e pop esi */
  ESI = (pop32());
  /* 10b05a5f pop ebx */
  EBX = (pop32());
  /* 10b05a60 mov esp, ebp */
  ESP = (EBP);
  /* 10b05a62 pop ebp */
  EBP = (pop32());
  /* 10b05a63 ret  */
  ESPCHK(0x10b059f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10b05a70 (197 bytes, 79 insns) */
void f_10b05a70(void) {
  FTRACE(0x10b05a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05a71 mov ebp, esp */
  EBP = (ESP);
  /* 10b05a73 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05a74 push ebx */
  push32((uint32_t)(EBX));
  /* 10b05a75 push esi */
  push32((uint32_t)(ESI));
  /* 10b05a76 push edi */
  push32((uint32_t)(EDI));
  /* 10b05a77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a7b jne 0x10b05a82 */
  if (!C.zf) goto L_10b05a82;
  /* 10b05a7d jmp 0x10b05b2e */
  goto L_10b05b2e;
L_10b05a82:;
  /* 10b05a82 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b05a89 jmp 0x10b05a94 */
  goto L_10b05a94;
L_10b05a8b:;
  /* 10b05a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05a8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05a91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b05a94:;
  /* 10b05a94 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05a98 jge 0x10b05ade */
  if ((C.sf==C.of)) goto L_10b05ade;
L_10b05a9a:;
  /* 10b05a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05a9d mov edx, dword ptr [ecx*4 + 0x10b2da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2da94)));
  /* 10b05aa4 push edx */
  push32((uint32_t)(EDX));
  /* 10b05aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05aa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05aab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10b05aaf push edx */
  push32((uint32_t)(EDX));
  /* 10b05ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05ab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05ab6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10b05aba push edx */
  push32((uint32_t)(EDX));
  /* 10b05abb push 0x10b2acfc */
  push32((uint32_t)(0x10b2acfcu));
  /* 10b05ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05ac8 call 0x10b02c90 */
  push32(0x10b05acdu); f_10b02c90();
  /* 10b05acd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05ad0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05ad3 jne 0x10b05ad6 */
  if (!C.zf) goto L_10b05ad6;
  /* 10b05ad5 int3  */
  x86_unimpl("int3 @ 0x10b05ad5");
L_10b05ad6:;
  /* 10b05ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05ada jne 0x10b05a9a */
  if (!C.zf) goto L_10b05a9a;
  /* 10b05adc jmp 0x10b05a8b */
  goto L_10b05a8b;
L_10b05ade:;
  /* 10b05ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05ae1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10b05ae4 push edx */
  push32((uint32_t)(EDX));
  /* 10b05ae5 push 0x10b2acd8 */
  push32((uint32_t)(0x10b2acd8u));
  /* 10b05aea push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05af2 call 0x10b02c90 */
  push32(0x10b05af7u); f_10b02c90();
  /* 10b05af7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05afa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05afd jne 0x10b05b00 */
  if (!C.zf) goto L_10b05b00;
  /* 10b05aff int3  */
  x86_unimpl("int3 @ 0x10b05aff");
L_10b05b00:;
  /* 10b05b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05b02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05b04 jne 0x10b05ade */
  if (!C.zf) goto L_10b05ade;
L_10b05b06:;
  /* 10b05b06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05b09 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10b05b0c push edx */
  push32((uint32_t)(EDX));
  /* 10b05b0d push 0x10b2acb8 */
  push32((uint32_t)(0x10b2acb8u));
  /* 10b05b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05b1a call 0x10b02c90 */
  push32(0x10b05b1fu); f_10b02c90();
  /* 10b05b1f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05b22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05b25 jne 0x10b05b28 */
  if (!C.zf) goto L_10b05b28;
  /* 10b05b27 int3  */
  x86_unimpl("int3 @ 0x10b05b27");
L_10b05b28:;
  /* 10b05b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05b2c jne 0x10b05b06 */
  if (!C.zf) goto L_10b05b06;
L_10b05b2e:;
  /* 10b05b2e pop edi */
  EDI = (pop32());
  /* 10b05b2f pop esi */
  ESI = (pop32());
  /* 10b05b30 pop ebx */
  EBX = (pop32());
  /* 10b05b31 mov esp, ebp */
  ESP = (EBP);
  /* 10b05b33 pop ebp */
  EBP = (pop32());
  /* 10b05b34 ret  */
  ESPCHK(0x10b05a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x10b05b40 (329 bytes, 102 insns) */
void f_10b05b40(void) {
  FTRACE(0x10b05b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05b41 mov ebp, esp */
  EBP = (ESP);
  /* 10b05b43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05b46 cmp dword ptr [0x10b31030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05b4d jne 0x10b05b54 */
  if (!C.zf) goto L_10b05b54;
  /* 10b05b4f call 0x10b0a480 */
  push32(0x10b05b54u); f_10b0a480();
L_10b05b54:;
  /* 10b05b54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b05b5b mov eax, dword ptr [0x10b2f4f8] */
  EAX = (r32((uint32_t)(0x10b2f4f8)));
  /* 10b05b60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b05b63:;
  /* 10b05b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05b66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b05b69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05b6b je 0x10b05b99 */
  if (C.zf) goto L_10b05b99;
  /* 10b05b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05b70 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05b73 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05b76 je 0x10b05b81 */
  if (C.zf) goto L_10b05b81;
  /* 10b05b78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05b7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05b7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b05b81:;
  /* 10b05b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05b84 push eax */
  push32((uint32_t)(EAX));
  /* 10b05b85 call 0x10b06a00 */
  push32(0x10b05b8au); f_10b06a00();
  /* 10b05b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05b90 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b05b94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b05b97 jmp 0x10b05b63 */
  goto L_10b05b63;
L_10b05b99:;
  /* 10b05b99 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10b05b9b push 0x10b2ad1c */
  push32((uint32_t)(0x10b2ad1cu));
  /* 10b05ba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b05ba2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05ba5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10b05bac push ecx */
  push32((uint32_t)(ECX));
  /* 10b05bad call 0x10b03bd0 */
  push32(0x10b05bb2u); f_10b03bd0();
  /* 10b05bb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05bb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b05bb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05bbb mov dword ptr [0x10b2f52c], edx */
  w32((uint32_t)(0x10b2f52c), (EDX));
  /* 10b05bc1 cmp dword ptr [0x10b2f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05bc8 jne 0x10b05bd4 */
  if (!C.zf) goto L_10b05bd4;
  /* 10b05bca push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05bcc call 0x10b02b40 */
  push32(0x10b05bd1u); f_10b02b40();
  /* 10b05bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b05bd4:;
  /* 10b05bd4 mov eax, dword ptr [0x10b2f4f8] */
  EAX = (r32((uint32_t)(0x10b2f4f8)));
  /* 10b05bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b05bdc jmp 0x10b05be7 */
  goto L_10b05be7;
L_10b05bde:;
  /* 10b05bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05be1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05be4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b05be7:;
  /* 10b05be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05bea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b05bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05bef je 0x10b05c57 */
  if (C.zf) goto L_10b05c57;
  /* 10b05bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05bf5 call 0x10b06a00 */
  push32(0x10b05bfau); f_10b06a00();
  /* 10b05bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05bfd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05c00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b05c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b05c09 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05c0c je 0x10b05c55 */
  if (C.zf) goto L_10b05c55;
  /* 10b05c0e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10b05c10 push 0x10b2ad1c */
  push32((uint32_t)(0x10b2ad1cu));
  /* 10b05c15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b05c17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b05c1a push ecx */
  push32((uint32_t)(ECX));
  /* 10b05c1b call 0x10b03bd0 */
  push32(0x10b05c20u); f_10b03bd0();
  /* 10b05c20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05c23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05c26 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b05c28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05c2b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05c2e jne 0x10b05c3a */
  if (!C.zf) goto L_10b05c3a;
  /* 10b05c30 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b05c32 call 0x10b02b40 */
  push32(0x10b05c37u); f_10b02b40();
  /* 10b05c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b05c3a:;
  /* 10b05c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05c3d push ecx */
  push32((uint32_t)(ECX));
  /* 10b05c3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05c41 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b05c43 push eax */
  push32((uint32_t)(EAX));
  /* 10b05c44 call 0x10b06b80 */
  push32(0x10b05c49u); f_10b06b80();
  /* 10b05c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05c4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05c4f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05c52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b05c55:;
  /* 10b05c55 jmp 0x10b05bde */
  goto L_10b05bde;
L_10b05c57:;
  /* 10b05c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b05c59 mov edx, dword ptr [0x10b2f4f8] */
  EDX = (r32((uint32_t)(0x10b2f4f8)));
  /* 10b05c5f push edx */
  push32((uint32_t)(EDX));
  /* 10b05c60 call 0x10b04660 */
  push32(0x10b05c65u); f_10b04660();
  /* 10b05c65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05c68 mov dword ptr [0x10b2f4f8], 0 */
  w32((uint32_t)(0x10b2f4f8), (0x0u));
  /* 10b05c72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05c75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b05c7b mov dword ptr [0x10b31020], 1 */
  w32((uint32_t)(0x10b31020), (0x1u));
  /* 10b05c85 mov esp, ebp */
  ESP = (EBP);
  /* 10b05c87 pop ebp */
  EBP = (pop32());
  /* 10b05c88 ret  */
  ESPCHK(0x10b05b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x10b05c90 (216 bytes, 69 insns) */
void f_10b05c90(void) {
  FTRACE(0x10b05c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05c91 mov ebp, esp */
  EBP = (ESP);
  /* 10b05c93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05c96 cmp dword ptr [0x10b31030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05c9d jne 0x10b05ca4 */
  if (!C.zf) goto L_10b05ca4;
  /* 10b05c9f call 0x10b0a480 */
  push32(0x10b05ca4u); f_10b0a480();
L_10b05ca4:;
  /* 10b05ca4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b05ca9 push 0x10b2f568 */
  push32((uint32_t)(0x10b2f568u));
  /* 10b05cae push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05cb0 call dword ptr [0x10b32348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32348))), 0x10b05cb6u);
  /* 10b05cb6 mov dword ptr [0x10b2f53c], 0x10b2f568 */
  w32((uint32_t)(0x10b2f53c), (0x10b2f568u));
  /* 10b05cc0 mov eax, dword ptr [0x10b3104c] */
  EAX = (r32((uint32_t)(0x10b3104c)));
  /* 10b05cc5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05cc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b05cca jne 0x10b05cd7 */
  if (!C.zf) goto L_10b05cd7;
  /* 10b05ccc mov edx, dword ptr [0x10b2f53c] */
  EDX = (r32((uint32_t)(0x10b2f53c)));
  /* 10b05cd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b05cd5 jmp 0x10b05cdf */
  goto L_10b05cdf;
L_10b05cd7:;
  /* 10b05cd7 mov eax, dword ptr [0x10b3104c] */
  EAX = (r32((uint32_t)(0x10b3104c)));
  /* 10b05cdc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10b05cdf:;
  /* 10b05cdf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b05ce2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b05ce5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10b05ce8 push edx */
  push32((uint32_t)(EDX));
  /* 10b05ce9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b05cec push eax */
  push32((uint32_t)(EAX));
  /* 10b05ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b05cf1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b05cf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05cf5 call 0x10b05d70 */
  push32(0x10b05cfau); f_10b05d70();
  /* 10b05cfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05cfd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10b05d02 push 0x10b2ad28 */
  push32((uint32_t)(0x10b2ad28u));
  /* 10b05d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b05d09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05d0f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10b05d12 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05d13 call 0x10b03bd0 */
  push32(0x10b05d18u); f_10b03bd0();
  /* 10b05d18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05d1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b05d1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05d22 jne 0x10b05d2e */
  if (!C.zf) goto L_10b05d2e;
  /* 10b05d24 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b05d26 call 0x10b02b40 */
  push32(0x10b05d2bu); f_10b02b40();
  /* 10b05d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b05d2e:;
  /* 10b05d2e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10b05d31 push edx */
  push32((uint32_t)(EDX));
  /* 10b05d32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b05d35 push eax */
  push32((uint32_t)(EAX));
  /* 10b05d36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05d39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05d3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10b05d3f push eax */
  push32((uint32_t)(EAX));
  /* 10b05d40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10b05d44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b05d47 push edx */
  push32((uint32_t)(EDX));
  /* 10b05d48 call 0x10b05d70 */
  push32(0x10b05d4du); f_10b05d70();
  /* 10b05d4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05d50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05d53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05d56 mov dword ptr [0x10b2f520], eax */
  w32((uint32_t)(0x10b2f520), (EAX));
  /* 10b05d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b05d5e mov dword ptr [0x10b2f524], ecx */
  w32((uint32_t)(0x10b2f524), (ECX));
  /* 10b05d64 mov esp, ebp */
  ESP = (EBP);
  /* 10b05d66 pop ebp */
  EBP = (pop32());
  /* 10b05d67 ret  */
  ESPCHK(0x10b05c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d70 @ 0x10b05d70 (1060 bytes, 360 insns) */
void f_10b05d70(void) {
  FTRACE(0x10b05d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b05d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b05d71 mov ebp, esp */
  EBP = (ESP);
  /* 10b05d73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05d76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05d79 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b05d7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b05d82 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10b05d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b05d8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b05d8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05d92 je 0x10b05da5 */
  if (C.zf) goto L_10b05da5;
  /* 10b05d94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05d97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05d9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b05d9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05d9f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05da2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10b05da5:;
  /* 10b05da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05da8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05dab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05dae jne 0x10b05e7d */
  if (!C.zf) goto L_10b05e7d;
L_10b05db4:;
  /* 10b05db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05db7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05dba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b05dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05dc3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05dc6 je 0x10b05e42 */
  if (C.zf) goto L_10b05e42;
  /* 10b05dc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05dcb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b05dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05dd0 je 0x10b05e42 */
  if (C.zf) goto L_10b05e42;
  /* 10b05dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05dd5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b05dd7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b05dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b05ddb mov al, byte ptr [edx + 0x10b30d81] */
  AL = (r8((uint32_t)(EDX + 0x10b30d81)));
  /* 10b05de1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b05de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05de6 je 0x10b05e17 */
  if (C.zf) goto L_10b05e17;
  /* 10b05de8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05deb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b05ded add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05df0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05df3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b05df5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05df9 je 0x10b05e17 */
  if (C.zf) goto L_10b05e17;
  /* 10b05dfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05dfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b05e03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b05e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b05e0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b05e17:;
  /* 10b05e17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b05e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b05e24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05e28 je 0x10b05e3d */
  if (C.zf) goto L_10b05e3d;
  /* 10b05e2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b05e32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b05e34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b05e3d:;
  /* 10b05e3d jmp 0x10b05db4 */
  goto L_10b05db4;
L_10b05e42:;
  /* 10b05e42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b05e47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b05e4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05e53 je 0x10b05e64 */
  if (C.zf) goto L_10b05e64;
  /* 10b05e55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b05e5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10b05e64:;
  /* 10b05e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05e6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05e6d jne 0x10b05e78 */
  if (!C.zf) goto L_10b05e78;
  /* 10b05e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b05e78:;
  /* 10b05e78 jmp 0x10b05f4c */
  goto L_10b05f4c;
L_10b05e7d:;
  /* 10b05e7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b05e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05e85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05e88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b05e8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05e8e je 0x10b05ea3 */
  if (C.zf) goto L_10b05ea3;
  /* 10b05e90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05e96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b05e98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b05e9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05e9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05ea0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b05ea3:;
  /* 10b05ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05ea6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b05ea8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10b05eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05eae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05eb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b05eb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05eb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b05ebd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b05ebf mov dl, byte ptr [ecx + 0x10b30d81] */
  DL = (r8((uint32_t)(ECX + 0x10b30d81)));
  /* 10b05ec5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b05ec8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05eca je 0x10b05efb */
  if (C.zf) goto L_10b05efb;
  /* 10b05ecc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05ecf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b05ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05ed4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b05ed7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b05ed9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05edd je 0x10b05ef2 */
  if (C.zf) goto L_10b05ef2;
  /* 10b05edf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05ee5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b05ee7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b05ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05eec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05eef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b05ef2:;
  /* 10b05ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05ef8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b05efb:;
  /* 10b05efb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05efe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05f04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f07 je 0x10b05f27 */
  if (C.zf) goto L_10b05f27;
  /* 10b05f09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05f0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b05f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05f13 je 0x10b05f27 */
  if (C.zf) goto L_10b05f27;
  /* 10b05f15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05f18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b05f1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f21 jne 0x10b05e7d */
  if (!C.zf) goto L_10b05e7d;
L_10b05f27:;
  /* 10b05f27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b05f2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b05f30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05f32 jne 0x10b05f3f */
  if (!C.zf) goto L_10b05f3f;
  /* 10b05f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b05f3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b05f3d jmp 0x10b05f4c */
  goto L_10b05f4c;
L_10b05f3f:;
  /* 10b05f3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f43 je 0x10b05f4c */
  if (C.zf) goto L_10b05f4c;
  /* 10b05f45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05f48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10b05f4c:;
  /* 10b05f4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10b05f53:;
  /* 10b05f53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b05f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b05f5b je 0x10b05f7e */
  if (C.zf) goto L_10b05f7e;
L_10b05f5d:;
  /* 10b05f5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b05f63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f66 je 0x10b05f73 */
  if (C.zf) goto L_10b05f73;
  /* 10b05f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05f6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f71 jne 0x10b05f7e */
  if (!C.zf) goto L_10b05f7e;
L_10b05f73:;
  /* 10b05f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05f79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b05f7c jmp 0x10b05f5d */
  goto L_10b05f5d;
L_10b05f7e:;
  /* 10b05f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05f81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05f84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b05f86 jne 0x10b05f8d */
  if (!C.zf) goto L_10b05f8d;
  /* 10b05f88 jmp 0x10b0616b */
  goto L_10b0616b;
L_10b05f8d:;
  /* 10b05f8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05f91 je 0x10b05fa4 */
  if (C.zf) goto L_10b05fa4;
  /* 10b05f93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05f96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b05f99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b05f9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b05f9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05fa1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b05fa4:;
  /* 10b05fa4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b05fa7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b05fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05fac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b05faf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b05fb1:;
  /* 10b05fb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b05fb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b05fbf:;
  /* 10b05fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05fc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b05fc5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05fc8 jne 0x10b05fde */
  if (!C.zf) goto L_10b05fde;
  /* 10b05fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05fcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05fd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b05fd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b05fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b05fd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b05fdc jmp 0x10b05fbf */
  goto L_10b05fbf;
L_10b05fde:;
  /* 10b05fde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b05fe1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b05fe4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05fe7 jne 0x10b0603a */
  if (!C.zf) goto L_10b0603a;
  /* 10b05fe9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b05fec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b05fee mov ecx, 2 */
  ECX = (0x2u);
  /* 10b05ff3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b05ff5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b05ff7 jne 0x10b06032 */
  if (!C.zf) goto L_10b06032;
  /* 10b05ff9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b05ffd je 0x10b0601f */
  if (C.zf) goto L_10b0601f;
  /* 10b05fff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06002 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b06006 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06009 jne 0x10b06016 */
  if (!C.zf) goto L_10b06016;
  /* 10b0600b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0600e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06011 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b06014 jmp 0x10b0601d */
  goto L_10b0601d;
L_10b06016:;
  /* 10b06016 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b0601d:;
  /* 10b0601d jmp 0x10b06026 */
  goto L_10b06026;
L_10b0601f:;
  /* 10b0601f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b06026:;
  /* 10b06026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06028 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0602c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10b0602f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b06032:;
  /* 10b06032 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06035 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b06037 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b0603a:;
  /* 10b0603a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0603d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06040 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06043 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b06046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b06048 je 0x10b0606e */
  if (C.zf) goto L_10b0606e;
  /* 10b0604a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0604e je 0x10b0605f */
  if (C.zf) goto L_10b0605f;
  /* 10b06050 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06053 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10b06056 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06059 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0605c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10b0605f:;
  /* 10b0605f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b06062 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b06064 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06067 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0606a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0606c jmp 0x10b0603a */
  goto L_10b0603a;
L_10b0606e:;
  /* 10b0606e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06071 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b06074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b06076 je 0x10b06094 */
  if (C.zf) goto L_10b06094;
  /* 10b06078 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0607c jne 0x10b06099 */
  if (!C.zf) goto L_10b06099;
  /* 10b0607e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06081 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b06084 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06087 je 0x10b06094 */
  if (C.zf) goto L_10b06094;
  /* 10b06089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0608c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0608f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06092 jne 0x10b06099 */
  if (!C.zf) goto L_10b06099;
L_10b06094:;
  /* 10b06094 jmp 0x10b06144 */
  goto L_10b06144;
L_10b06099:;
  /* 10b06099 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0609d je 0x10b06136 */
  if (C.zf) goto L_10b06136;
  /* 10b060a3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b060a7 je 0x10b060fd */
  if (C.zf) goto L_10b060fd;
  /* 10b060a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b060ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b060ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b060b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b060b2 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b060b8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b060bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b060bd je 0x10b060e8 */
  if (C.zf) goto L_10b060e8;
  /* 10b060bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b060c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b060c5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b060c7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b060c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b060cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b060cf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10b060d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b060d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b060d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b060db mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b060de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b060e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b060e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b060e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b060e8:;
  /* 10b060e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b060eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b060ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b060f0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b060f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b060f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b060f8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b060fb jmp 0x10b06129 */
  goto L_10b06129;
L_10b060fd:;
  /* 10b060fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06102 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b06104 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b06106 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b0610c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0610f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b06111 je 0x10b06129 */
  if (C.zf) goto L_10b06129;
  /* 10b06113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06116 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06119 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0611c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0611f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b06121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b06127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b06129:;
  /* 10b06129 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0612c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0612e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06131 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b06134 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b06136:;
  /* 10b06136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06139 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0613c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0613f jmp 0x10b05fb1 */
  goto L_10b05fb1;
L_10b06144:;
  /* 10b06144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06148 je 0x10b06159 */
  if (C.zf) goto L_10b06159;
  /* 10b0614a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0614d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b06150 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06153 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06156 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10b06159:;
  /* 10b06159 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0615c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0615e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06161 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b06164 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b06166 jmp 0x10b05f53 */
  goto L_10b05f53;
L_10b0616b:;
  /* 10b0616b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0616f je 0x10b06183 */
  if (C.zf) goto L_10b06183;
  /* 10b06171 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06174 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0617a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0617d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06180 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b06183:;
  /* 10b06183 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b06186 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b06188 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0618b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0618e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b06190 mov esp, ebp */
  ESP = (EBP);
  /* 10b06192 pop ebp */
  EBP = (pop32());
  /* 10b06193 ret  */
  ESPCHK(0x10b05d70u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x10b061a0 (537 bytes, 173 insns) */
void f_10b061a0(void) {
  FTRACE(0x10b061a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b061a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b061a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b061a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b061a6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b061ad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10b061b4 cmp dword ptr [0x10b2f66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b061bb jne 0x10b061fa */
  if (!C.zf) goto L_10b061fa;
  /* 10b061bd call dword ptr [0x10b323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a4))), 0x10b061c3u);
  /* 10b061c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b061c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b061ca je 0x10b061d8 */
  if (C.zf) goto L_10b061d8;
  /* 10b061cc mov dword ptr [0x10b2f66c], 1 */
  w32((uint32_t)(0x10b2f66c), (0x1u));
  /* 10b061d6 jmp 0x10b061fa */
  goto L_10b061fa;
L_10b061d8:;
  /* 10b061d8 call dword ptr [0x10b323a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a0))), 0x10b061deu);
  /* 10b061de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b061e1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b061e5 je 0x10b061f3 */
  if (C.zf) goto L_10b061f3;
  /* 10b061e7 mov dword ptr [0x10b2f66c], 2 */
  w32((uint32_t)(0x10b2f66c), (0x2u));
  /* 10b061f1 jmp 0x10b061fa */
  goto L_10b061fa;
L_10b061f3:;
  /* 10b061f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b061f5 jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b061fa:;
  /* 10b061fa cmp dword ptr [0x10b2f66c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f66c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06201 jne 0x10b062fe */
  if (!C.zf) goto L_10b062fe;
  /* 10b06207 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0620b jne 0x10b06223 */
  if (!C.zf) goto L_10b06223;
  /* 10b0620d call dword ptr [0x10b323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a4))), 0x10b06213u);
  /* 10b06213 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b06216 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0621a jne 0x10b06223 */
  if (!C.zf) goto L_10b06223;
  /* 10b0621c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0621e jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b06223:;
  /* 10b06223 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b06226 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b06229:;
  /* 10b06229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0622c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0622e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b06231 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06233 je 0x10b06255 */
  if (C.zf) goto L_10b06255;
  /* 10b06235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06238 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0623b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0623e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06241 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06243 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b06246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06248 jne 0x10b06253 */
  if (!C.zf) goto L_10b06253;
  /* 10b0624a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0624d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06250 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b06253:;
  /* 10b06253 jmp 0x10b06229 */
  goto L_10b06229;
L_10b06255:;
  /* 10b06255 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06258 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0625b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b0625d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06260 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b06263 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06265 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06269 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0626b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0626e push edx */
  push32((uint32_t)(EDX));
  /* 10b0626f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b06272 push eax */
  push32((uint32_t)(EAX));
  /* 10b06273 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06275 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06277 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b0627du);
  /* 10b0627d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b06280 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06284 je 0x10b062a4 */
  if (C.zf) goto L_10b062a4;
  /* 10b06286 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10b06288 push 0x10b2ad34 */
  push32((uint32_t)(0x10b2ad34u));
  /* 10b0628d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0628f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06292 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06293 call 0x10b03bd0 */
  push32(0x10b06298u); f_10b03bd0();
  /* 10b06298 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0629b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b0629e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b062a2 jne 0x10b062b5 */
  if (!C.zf) goto L_10b062b5;
L_10b062a4:;
  /* 10b062a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b062a7 push edx */
  push32((uint32_t)(EDX));
  /* 10b062a8 call dword ptr [0x10b32398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32398))), 0x10b062aeu);
  /* 10b062ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b062b0 jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b062b5:;
  /* 10b062b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b062b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b062b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b062bc push eax */
  push32((uint32_t)(EAX));
  /* 10b062bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b062c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b062c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b062c4 push edx */
  push32((uint32_t)(EDX));
  /* 10b062c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b062c8 push eax */
  push32((uint32_t)(EAX));
  /* 10b062c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b062cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b062cd call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b062d3u);
  /* 10b062d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b062d5 jne 0x10b062ec */
  if (!C.zf) goto L_10b062ec;
  /* 10b062d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b062d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b062dc push ecx */
  push32((uint32_t)(ECX));
  /* 10b062dd call 0x10b04660 */
  push32(0x10b062e2u); f_10b04660();
  /* 10b062e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b062e5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10b062ec:;
  /* 10b062ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b062ef push edx */
  push32((uint32_t)(EDX));
  /* 10b062f0 call dword ptr [0x10b32398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32398))), 0x10b062f6u);
  /* 10b062f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b062f9 jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b062fe:;
  /* 10b062fe cmp dword ptr [0x10b2f66c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f66c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06305 jne 0x10b063b3 */
  if (!C.zf) goto L_10b063b3;
  /* 10b0630b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0630f jne 0x10b06327 */
  if (!C.zf) goto L_10b06327;
  /* 10b06311 call dword ptr [0x10b323a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a0))), 0x10b06317u);
  /* 10b06317 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b0631a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0631e jne 0x10b06327 */
  if (!C.zf) goto L_10b06327;
  /* 10b06320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06322 jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b06327:;
  /* 10b06327 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0632a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0632d:;
  /* 10b0632d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06330 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b06333 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06335 je 0x10b06355 */
  if (C.zf) goto L_10b06355;
  /* 10b06337 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0633a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0633d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b06340 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06343 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b06346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06348 jne 0x10b06353 */
  if (!C.zf) goto L_10b06353;
  /* 10b0634a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0634d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06350 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b06353:;
  /* 10b06353 jmp 0x10b0632d */
  goto L_10b0632d;
L_10b06355:;
  /* 10b06355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06358 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0635b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0635e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b06361 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10b06366 push 0x10b2ad34 */
  push32((uint32_t)(0x10b2ad34u));
  /* 10b0636b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0636d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06370 push edx */
  push32((uint32_t)(EDX));
  /* 10b06371 call 0x10b03bd0 */
  push32(0x10b06376u); f_10b03bd0();
  /* 10b06376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06379 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0637c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06380 jne 0x10b06390 */
  if (!C.zf) goto L_10b06390;
  /* 10b06382 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b06385 push eax */
  push32((uint32_t)(EAX));
  /* 10b06386 call dword ptr [0x10b32394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32394))), 0x10b0638cu);
  /* 10b0638c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0638e jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b06390:;
  /* 10b06390 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06393 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06394 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b06397 push edx */
  push32((uint32_t)(EDX));
  /* 10b06398 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0639b push eax */
  push32((uint32_t)(EAX));
  /* 10b0639c call 0x10b0a4b0 */
  push32(0x10b063a1u); f_10b0a4b0();
  /* 10b063a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b063a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b063a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b063a8 call dword ptr [0x10b32394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32394))), 0x10b063aeu);
  /* 10b063ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b063b1 jmp 0x10b063b5 */
  goto L_10b063b5;
L_10b063b3:;
  /* 10b063b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b063b5:;
  /* 10b063b5 mov esp, ebp */
  ESP = (EBP);
  /* 10b063b7 pop ebp */
  EBP = (pop32());
  /* 10b063b8 ret  */
  ESPCHK(0x10b061a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x10b063c0 (77 bytes, 25 insns) */
void f_10b063c0(void) {
  FTRACE(0x10b063c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b063c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b063c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b063c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b063c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b063ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b063cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b063d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10b063d3 push eax */
  push32((uint32_t)(EAX));
  /* 10b063d4 call dword ptr [0x10b323ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323ac))), 0x10b063dau);
  /* 10b063da mov dword ptr [0x10b30eac], eax */
  w32((uint32_t)(0x10b30eac), (EAX));
  /* 10b063df cmp dword ptr [0x10b30eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b063e6 jne 0x10b063ec */
  if (!C.zf) goto L_10b063ec;
  /* 10b063e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b063ea jmp 0x10b0640b */
  goto L_10b0640b;
L_10b063ec:;
  /* 10b063ec call 0x10b07e70 */
  push32(0x10b063f1u); f_10b07e70();
  /* 10b063f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b063f3 jne 0x10b06406 */
  if (!C.zf) goto L_10b06406;
  /* 10b063f5 mov ecx, dword ptr [0x10b30eac] */
  ECX = (r32((uint32_t)(0x10b30eac)));
  /* 10b063fb push ecx */
  push32((uint32_t)(ECX));
  /* 10b063fc call dword ptr [0x10b323a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a8))), 0x10b06402u);
  /* 10b06402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06404 jmp 0x10b0640b */
  goto L_10b0640b;
L_10b06406:;
  /* 10b06406 mov eax, 1 */
  EAX = (0x1u);
L_10b0640b:;
  /* 10b0640b pop ebp */
  EBP = (pop32());
  /* 10b0640c ret  */
  ESPCHK(0x10b063c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006410 @ 0x10b06410 (156 bytes, 48 insns) */
void f_10b06410(void) {
  FTRACE(0x10b06410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06410 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06411 mov ebp, esp */
  EBP = (ESP);
  /* 10b06413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06416 mov eax, dword ptr [0x10b30ea8] */
  EAX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b0641b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0641e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b06425 jmp 0x10b06430 */
  goto L_10b06430;
L_10b06427:;
  /* 10b06427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0642a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0642d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b06430:;
  /* 10b06430 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06433 cmp edx, dword ptr [0x10b30ea4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b30ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06439 jge 0x10b06486 */
  if ((C.sf==C.of)) goto L_10b06486;
  /* 10b0643b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b06440 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b06445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06448 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0644b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0644c call dword ptr [0x10b32368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32368))), 0x10b06452u);
  /* 10b06452 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b06457 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06459 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0645c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0645f push eax */
  push32((uint32_t)(EAX));
  /* 10b06460 call dword ptr [0x10b32368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32368))), 0x10b06466u);
  /* 10b06466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06469 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b0646c push edx */
  push32((uint32_t)(EDX));
  /* 10b0646d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0646f mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b06474 push eax */
  push32((uint32_t)(EAX));
  /* 10b06475 call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b0647bu);
  /* 10b0647b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0647e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06481 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b06484 jmp 0x10b06427 */
  goto L_10b06427;
L_10b06486:;
  /* 10b06486 mov edx, dword ptr [0x10b30ea8] */
  EDX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b0648c push edx */
  push32((uint32_t)(EDX));
  /* 10b0648d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0648f mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b06494 push eax */
  push32((uint32_t)(EAX));
  /* 10b06495 call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b0649bu);
  /* 10b0649b mov ecx, dword ptr [0x10b30eac] */
  ECX = (r32((uint32_t)(0x10b30eac)));
  /* 10b064a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b064a2 call dword ptr [0x10b323a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323a8))), 0x10b064a8u);
  /* 10b064a8 mov esp, ebp */
  ESP = (EBP);
  /* 10b064aa pop ebp */
  EBP = (pop32());
  /* 10b064ab ret  */
  ESPCHK(0x10b06410u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10b064b0 (73 bytes, 19 insns) */
void f_10b064b0(void) {
  FTRACE(0x10b064b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b064b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b064b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b064b3 cmp dword ptr [0x10b2f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b064ba je 0x10b064ce */
  if (C.zf) goto L_10b064ce;
  /* 10b064bc cmp dword ptr [0x10b2f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b064c3 jne 0x10b064f7 */
  if (!C.zf) goto L_10b064f7;
  /* 10b064c5 cmp dword ptr [0x10b2f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b064cc jne 0x10b064f7 */
  if (!C.zf) goto L_10b064f7;
L_10b064ce:;
  /* 10b064ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10b064d3 call 0x10b06500 */
  push32(0x10b064d8u); f_10b06500();
  /* 10b064d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b064db cmp dword ptr [0x10b2f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b064e2 je 0x10b064ea */
  if (C.zf) goto L_10b064ea;
  /* 10b064e4 call dword ptr [0x10b2f670] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f670))), 0x10b064eau);
L_10b064ea:;
  /* 10b064ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b064ef call 0x10b06500 */
  push32(0x10b064f4u); f_10b06500();
  /* 10b064f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b064f7:;
  /* 10b064f7 pop ebp */
  EBP = (pop32());
  /* 10b064f8 ret  */
  ESPCHK(0x10b064b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x10b06500 (447 bytes, 131 insns) */
void f_10b06500(void) {
  FTRACE(0x10b06500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06500 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06501 mov ebp, esp */
  EBP = (ESP);
  /* 10b06503 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06509 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0650a push esi */
  push32((uint32_t)(ESI));
  /* 10b0650b push edi */
  push32((uint32_t)(EDI));
  /* 10b0650c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b06513 jmp 0x10b0651e */
  goto L_10b0651e;
L_10b06515:;
  /* 10b06515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0651b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b0651e:;
  /* 10b0651e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06522 jae 0x10b06537 */
  if (!C.cf) goto L_10b06537;
  /* 10b06524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0652a cmp edx, dword ptr [ecx*8 + 0x10b2dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10b2dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06531 jne 0x10b06535 */
  if (!C.zf) goto L_10b06535;
  /* 10b06533 jmp 0x10b06537 */
  goto L_10b06537;
L_10b06535:;
  /* 10b06535 jmp 0x10b06515 */
  goto L_10b06515;
L_10b06537:;
  /* 10b06537 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0653a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0653d cmp ecx, dword ptr [eax*8 + 0x10b2dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b2dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06544 jne 0x10b066b8 */
  if (!C.zf) goto L_10b066b8;
  /* 10b0654a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06551 je 0x10b06574 */
  if (C.zf) goto L_10b06574;
  /* 10b06553 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06556 mov eax, dword ptr [edx*8 + 0x10b2dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b2dab4)));
  /* 10b0655d push eax */
  push32((uint32_t)(EAX));
  /* 10b0655e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06566 call 0x10b02c90 */
  push32(0x10b0656bu); f_10b02c90();
  /* 10b0656b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0656e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06571 jne 0x10b06574 */
  if (!C.zf) goto L_10b06574;
  /* 10b06573 int3  */
  x86_unimpl("int3 @ 0x10b06573");
L_10b06574:;
  /* 10b06574 cmp dword ptr [0x10b2f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0657b je 0x10b0658f */
  if (C.zf) goto L_10b0658f;
  /* 10b0657d cmp dword ptr [0x10b2f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06584 jne 0x10b065c8 */
  if (!C.zf) goto L_10b065c8;
  /* 10b06586 cmp dword ptr [0x10b2f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0658d jne 0x10b065c8 */
  if (!C.zf) goto L_10b065c8;
L_10b0658f:;
  /* 10b0658f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06591 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10b06594 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06595 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06598 mov eax, dword ptr [edx*8 + 0x10b2dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b2dab4)));
  /* 10b0659f push eax */
  push32((uint32_t)(EAX));
  /* 10b065a0 call 0x10b06a00 */
  push32(0x10b065a5u); f_10b06a00();
  /* 10b065a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b065a8 push eax */
  push32((uint32_t)(EAX));
  /* 10b065a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b065ac mov edx, dword ptr [ecx*8 + 0x10b2dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10b2dab4)));
  /* 10b065b3 push edx */
  push32((uint32_t)(EDX));
  /* 10b065b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b065b6 call dword ptr [0x10b3232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3232c))), 0x10b065bcu);
  /* 10b065bc push eax */
  push32((uint32_t)(EAX));
  /* 10b065bd call dword ptr [0x10b32330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32330))), 0x10b065c3u);
  /* 10b065c3 jmp 0x10b066b8 */
  goto L_10b066b8;
L_10b065c8:;
  /* 10b065c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b065cf je 0x10b066b8 */
  if (C.zf) goto L_10b066b8;
  /* 10b065d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b065da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10b065e0 push eax */
  push32((uint32_t)(EAX));
  /* 10b065e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b065e3 call dword ptr [0x10b32348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32348))), 0x10b065e9u);
  /* 10b065e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b065eb jne 0x10b06601 */
  if (!C.zf) goto L_10b06601;
  /* 10b065ed push 0x10b2a59c */
  push32((uint32_t)(0x10b2a59cu));
  /* 10b065f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10b065f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b065f9 call 0x10b06b80 */
  push32(0x10b065feu); f_10b06b80();
  /* 10b065fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b06601:;
  /* 10b06601 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10b06607 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b0660a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0660d push eax */
  push32((uint32_t)(EAX));
  /* 10b0660e call 0x10b06a00 */
  push32(0x10b06613u); f_10b06a00();
  /* 10b06613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06616 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06619 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0661c jbe 0x10b0664a */
  if ((C.cf||C.zf)) goto L_10b0664a;
  /* 10b0661e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10b06624 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06625 call 0x10b06a00 */
  push32(0x10b0662au); f_10b06a00();
  /* 10b0662a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0662d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06630 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10b06634 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b06637 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b06639 push 0x10b2a598 */
  push32((uint32_t)(0x10b2a598u));
  /* 10b0663e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06641 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06642 call 0x10b073f0 */
  push32(0x10b06647u); f_10b073f0();
  /* 10b06647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0664a:;
  /* 10b0664a push 0x10b2aff0 */
  push32((uint32_t)(0x10b2aff0u));
  /* 10b0664f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b06655 push edx */
  push32((uint32_t)(EDX));
  /* 10b06656 call 0x10b06b80 */
  push32(0x10b0665bu); f_10b06b80();
  /* 10b0665b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0665e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06661 push eax */
  push32((uint32_t)(EAX));
  /* 10b06662 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10b06668 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06669 call 0x10b06b90 */
  push32(0x10b0666eu); f_10b06b90();
  /* 10b0666e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06671 push 0x10b2a510 */
  push32((uint32_t)(0x10b2a510u));
  /* 10b06676 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b0667c push edx */
  push32((uint32_t)(EDX));
  /* 10b0667d call 0x10b06b90 */
  push32(0x10b06682u); f_10b06b90();
  /* 10b06682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06688 mov ecx, dword ptr [eax*8 + 0x10b2dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10b2dab4)));
  /* 10b0668f push ecx */
  push32((uint32_t)(ECX));
  /* 10b06690 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10b06696 push edx */
  push32((uint32_t)(EDX));
  /* 10b06697 call 0x10b06b90 */
  push32(0x10b0669cu); f_10b06b90();
  /* 10b0669c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0669f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10b066a4 push 0x10b2afc8 */
  push32((uint32_t)(0x10b2afc8u));
  /* 10b066a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10b066af push eax */
  push32((uint32_t)(EAX));
  /* 10b066b0 call 0x10b07330 */
  push32(0x10b066b5u); f_10b07330();
  /* 10b066b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b066b8:;
  /* 10b066b8 pop edi */
  EDI = (pop32());
  /* 10b066b9 pop esi */
  ESI = (pop32());
  /* 10b066ba pop ebx */
  EBX = (pop32());
  /* 10b066bb mov esp, ebp */
  ESP = (EBP);
  /* 10b066bd pop ebp */
  EBP = (pop32());
  /* 10b066be ret  */
  ESPCHK(0x10b06500u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10b066c0 (80 bytes, 27 insns) */
void f_10b066c0(void) {
  FTRACE(0x10b066c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b066c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b066c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b066c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b066c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b066cb jmp 0x10b066d6 */
  goto L_10b066d6;
L_10b066cd:;
  /* 10b066cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b066d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b066d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b066d6:;
  /* 10b066d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b066da jae 0x10b066ef */
  if (!C.cf) goto L_10b066ef;
  /* 10b066dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b066df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b066e2 cmp edx, dword ptr [ecx*8 + 0x10b2dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10b2dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b066e9 jne 0x10b066ed */
  if (!C.zf) goto L_10b066ed;
  /* 10b066eb jmp 0x10b066ef */
  goto L_10b066ef;
L_10b066ed:;
  /* 10b066ed jmp 0x10b066cd */
  goto L_10b066cd;
L_10b066ef:;
  /* 10b066ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b066f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b066f5 cmp ecx, dword ptr [eax*8 + 0x10b2dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b2dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b066fc jne 0x10b0670a */
  if (!C.zf) goto L_10b0670a;
  /* 10b066fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06701 mov eax, dword ptr [edx*8 + 0x10b2dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10b2dab4)));
  /* 10b06708 jmp 0x10b0670c */
  goto L_10b0670c;
L_10b0670a:;
  /* 10b0670a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0670c:;
  /* 10b0670c mov esp, ebp */
  ESP = (EBP);
  /* 10b0670e pop ebp */
  EBP = (pop32());
  /* 10b0670f ret  */
  ESPCHK(0x10b066c0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10b06710 (66 bytes, 28 insns) */
void f_10b06710(void) {
  FTRACE(0x10b06710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06711 mov ebp, esp */
  EBP = (ESP);
  /* 10b06713 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06717 jne 0x10b06737 */
  if (!C.zf) goto L_10b06737;
  /* 10b06719 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0671d jge 0x10b06737 */
  if ((C.sf==C.of)) goto L_10b06737;
  /* 10b0671f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06724 push eax */
  push32((uint32_t)(EAX));
  /* 10b06725 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06728 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0672c push edx */
  push32((uint32_t)(EDX));
  /* 10b0672d call 0x10b06760 */
  push32(0x10b06732u); f_10b06760();
  /* 10b06732 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06735 jmp 0x10b0674d */
  goto L_10b0674d;
L_10b06737:;
  /* 10b06737 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06739 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0673c push eax */
  push32((uint32_t)(EAX));
  /* 10b0673d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06740 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06744 push edx */
  push32((uint32_t)(EDX));
  /* 10b06745 call 0x10b06760 */
  push32(0x10b0674au); f_10b06760();
  /* 10b0674a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0674d:;
  /* 10b0674d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06750 pop ebp */
  EBP = (pop32());
  /* 10b06751 ret  */
  ESPCHK(0x10b06710u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10b06760 (194 bytes, 71 insns) */
void f_10b06760(void) {
  FTRACE(0x10b06760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06760 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06761 mov ebp, esp */
  EBP = (ESP);
  /* 10b06763 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06766 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0676c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06770 je 0x10b06789 */
  if (C.zf) goto L_10b06789;
  /* 10b06772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06775 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10b06778 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0677b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0677e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b06781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06784 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b06786 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b06789:;
  /* 10b06789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0678c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b0678f:;
  /* 10b0678f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06792 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06794 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b06797 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b0679a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0679d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0679f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b067a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b067a5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b067a9 jbe 0x10b067c1 */
  if ((C.cf||C.zf)) goto L_10b067c1;
  /* 10b067ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b067ae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b067b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067b4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b067b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b067bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b067bf jmp 0x10b067d5 */
  goto L_10b067d5;
L_10b067c1:;
  /* 10b067c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b067c4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b067c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b067cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b067d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b067d5:;
  /* 10b067d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b067d9 ja 0x10b0678f */
  if ((!C.cf&&!C.zf)) goto L_10b0678f;
  /* 10b067db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067de mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b067e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b067e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b067ea:;
  /* 10b067ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b067ef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10b067f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b067f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b067f8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b067fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b067fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b067ff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10b06802 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b06804 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06807 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0680a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0680d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06810 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06813 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b06816 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06819 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0681c jb 0x10b067ea */
  if (C.cf) goto L_10b067ea;
  /* 10b0681e mov esp, ebp */
  ESP = (EBP);
  /* 10b06820 pop ebp */
  EBP = (pop32());
  /* 10b06821 ret  */
  ESPCHK(0x10b06760u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10b06830 (63 bytes, 24 insns) */
void f_10b06830(void) {
  FTRACE(0x10b06830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06830 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06831 mov ebp, esp */
  EBP = (ESP);
  /* 10b06833 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06834 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06838 jne 0x10b06849 */
  if (!C.zf) goto L_10b06849;
  /* 10b0683a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0683e jge 0x10b06849 */
  if ((C.sf==C.of)) goto L_10b06849;
  /* 10b06840 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b06847 jmp 0x10b06850 */
  goto L_10b06850;
L_10b06849:;
  /* 10b06849 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b06850:;
  /* 10b06850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06853 push eax */
  push32((uint32_t)(EAX));
  /* 10b06854 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06857 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06858 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0685b push edx */
  push32((uint32_t)(EDX));
  /* 10b0685c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0685f push eax */
  push32((uint32_t)(EAX));
  /* 10b06860 call 0x10b06760 */
  push32(0x10b06865u); f_10b06760();
  /* 10b06865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0686b mov esp, ebp */
  ESP = (EBP);
  /* 10b0686d pop ebp */
  EBP = (pop32());
  /* 10b0686e ret  */
  ESPCHK(0x10b06830u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10b06870 (30 bytes, 14 insns) */
void f_10b06870(void) {
  FTRACE(0x10b06870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06870 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06871 mov ebp, esp */
  EBP = (ESP);
  /* 10b06873 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06875 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06878 push eax */
  push32((uint32_t)(EAX));
  /* 10b06879 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0687c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0687d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06880 push edx */
  push32((uint32_t)(EDX));
  /* 10b06881 call 0x10b06760 */
  push32(0x10b06886u); f_10b06760();
  /* 10b06886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0688c pop ebp */
  EBP = (pop32());
  /* 10b0688d ret  */
  ESPCHK(0x10b06870u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10b06890 (72 bytes, 28 insns) */
void f_10b06890(void) {
  FTRACE(0x10b06890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06890 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06891 mov ebp, esp */
  EBP = (ESP);
  /* 10b06893 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06894 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06898 jne 0x10b068b1 */
  if (!C.zf) goto L_10b068b1;
  /* 10b0689a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0689e jg 0x10b068b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b068b1;
  /* 10b068a0 jl 0x10b068a8 */
  if ((C.sf!=C.of)) goto L_10b068a8;
  /* 10b068a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b068a6 jae 0x10b068b1 */
  if (!C.cf) goto L_10b068b1;
L_10b068a8:;
  /* 10b068a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b068af jmp 0x10b068b8 */
  goto L_10b068b8;
L_10b068b1:;
  /* 10b068b1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b068b8:;
  /* 10b068b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b068bb push eax */
  push32((uint32_t)(EAX));
  /* 10b068bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b068bf push ecx */
  push32((uint32_t)(ECX));
  /* 10b068c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b068c3 push edx */
  push32((uint32_t)(EDX));
  /* 10b068c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b068c7 push eax */
  push32((uint32_t)(EAX));
  /* 10b068c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b068cb push ecx */
  push32((uint32_t)(ECX));
  /* 10b068cc call 0x10b068e0 */
  push32(0x10b068d1u); f_10b068e0();
  /* 10b068d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b068d4 mov esp, ebp */
  ESP = (EBP);
  /* 10b068d6 pop ebp */
  EBP = (pop32());
  /* 10b068d7 ret  */
  ESPCHK(0x10b06890u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10b068e0 (242 bytes, 91 insns) */
void f_10b068e0(void) {
  FTRACE(0x10b068e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b068e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b068e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b068e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b068e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b068e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b068ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b068f0 je 0x10b06914 */
  if (C.zf) goto L_10b06914;
  /* 10b068f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b068f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10b068f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b068fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b068fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b06901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06904 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b06906 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06909 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0690c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0690e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b06911 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b06914:;
  /* 10b06914 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06917 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b0691a:;
  /* 10b0691a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0691d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0691f push ecx */
  push32((uint32_t)(ECX));
  /* 10b06920 push eax */
  push32((uint32_t)(EAX));
  /* 10b06921 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06924 push edx */
  push32((uint32_t)(EDX));
  /* 10b06925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06928 push eax */
  push32((uint32_t)(EAX));
  /* 10b06929 call 0x10b0a860 */
  push32(0x10b0692eu); f_10b0a860();
  /* 10b0692e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b06931 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b06934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06936 push edx */
  push32((uint32_t)(EDX));
  /* 10b06937 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06938 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0693b push eax */
  push32((uint32_t)(EAX));
  /* 10b0693c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0693f push ecx */
  push32((uint32_t)(ECX));
  /* 10b06940 call 0x10b0a7f0 */
  push32(0x10b06945u); f_10b0a7f0();
  /* 10b06945 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b06948 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b0694b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0694f jbe 0x10b06967 */
  if ((C.cf||C.zf)) goto L_10b06967;
  /* 10b06951 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06954 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0695a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b0695c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0695f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06962 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b06965 jmp 0x10b0697b */
  goto L_10b0697b;
L_10b06967:;
  /* 10b06967 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0696a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0696d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06970 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b06972 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06978 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0697b:;
  /* 10b0697b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0697f ja 0x10b0691a */
  if ((!C.cf&&!C.zf)) goto L_10b0691a;
  /* 10b06981 jb 0x10b06989 */
  if (C.cf) goto L_10b06989;
  /* 10b06983 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06987 ja 0x10b0691a */
  if ((!C.cf&&!C.zf)) goto L_10b0691a;
L_10b06989:;
  /* 10b06989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0698c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b0698f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06992 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06995 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b06998:;
  /* 10b06998 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0699b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b0699d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10b069a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b069a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b069a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b069a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b069aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b069ad mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10b069b0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b069b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b069b5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b069b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b069bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b069be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b069c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b069c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b069c7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b069ca jb 0x10b06998 */
  if (C.cf) goto L_10b06998;
  /* 10b069cc mov esp, ebp */
  ESP = (EBP);
  /* 10b069ce pop ebp */
  EBP = (pop32());
  /* 10b069cf ret 0x14 */
  ESPCHK(0x10b068e0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10b069e0 (31 bytes, 15 insns) */
void f_10b069e0(void) {
  FTRACE(0x10b069e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b069e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b069e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b069e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b069e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b069e8 push eax */
  push32((uint32_t)(EAX));
  /* 10b069e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b069ec push ecx */
  push32((uint32_t)(ECX));
  /* 10b069ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b069f0 push edx */
  push32((uint32_t)(EDX));
  /* 10b069f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b069f4 push eax */
  push32((uint32_t)(EAX));
  /* 10b069f5 call 0x10b068e0 */
  push32(0x10b069fau); f_10b068e0();
  /* 10b069fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b069fd pop ebp */
  EBP = (pop32());
  /* 10b069fe ret  */
  ESPCHK(0x10b069e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10b06a00 (123 bytes, 44 insns) */
void f_10b06a00(void) {
  FTRACE(0x10b06a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06a00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06a04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06a0a je 0x10b06a20 */
  if (C.zf) goto L_10b06a20;
L_10b06a0c:;
  /* 10b06a0c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b06a0e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b06a0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b06a11 je 0x10b06a53 */
  if (C.zf) goto L_10b06a53;
  /* 10b06a13 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06a19 jne 0x10b06a0c */
  if (!C.zf) goto L_10b06a0c;
  /* 10b06a1b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b06a20:;
  /* 10b06a20 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b06a22 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b06a27 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06a29 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b06a2c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06a2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06a31 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b06a36 je 0x10b06a20 */
  if (C.zf) goto L_10b06a20;
  /* 10b06a38 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b06a3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b06a3d je 0x10b06a71 */
  if (C.zf) goto L_10b06a71;
  /* 10b06a3f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b06a41 je 0x10b06a67 */
  if (C.zf) goto L_10b06a67;
  /* 10b06a43 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b06a48 je 0x10b06a5d */
  if (C.zf) goto L_10b06a5d;
  /* 10b06a4a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b06a4f je 0x10b06a53 */
  if (C.zf) goto L_10b06a53;
  /* 10b06a51 jmp 0x10b06a20 */
  goto L_10b06a20;
L_10b06a53:;
  /* 10b06a53 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10b06a56 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06a5a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06a5c ret  */
  ESPCHK(0x10b06a00u, _esp0);
  ESP += 4; return;
L_10b06a5d:;
  /* 10b06a5d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10b06a60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06a64 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06a66 ret  */
  ESPCHK(0x10b06a00u, _esp0);
  ESP += 4; return;
L_10b06a67:;
  /* 10b06a67 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10b06a6a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06a6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06a70 ret  */
  ESPCHK(0x10b06a00u, _esp0);
  ESP += 4; return;
L_10b06a71:;
  /* 10b06a71 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10b06a74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06a78 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06a7a ret  */
  ESPCHK(0x10b06a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x10b06a80 (249 bytes, 93 insns) */
void f_10b06a80(void) {
  FTRACE(0x10b06a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06a81 mov ebp, esp */
  EBP = (ESP);
  /* 10b06a83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06a86 push ebx */
  push32((uint32_t)(EBX));
  /* 10b06a87 push esi */
  push32((uint32_t)(ESI));
  /* 10b06a88 push edi */
  push32((uint32_t)(EDI));
  /* 10b06a89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b06a8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b06a8f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10b06a92 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10b06a95:;
  /* 10b06a95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06a99 jne 0x10b06ab9 */
  if (!C.zf) goto L_10b06ab9;
  /* 10b06a9b push 0x10b2b028 */
  push32((uint32_t)(0x10b2b028u));
  /* 10b06aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06aa2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b06aa4 push 0x10b2b01c */
  push32((uint32_t)(0x10b2b01cu));
  /* 10b06aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b06aab call 0x10b02c90 */
  push32(0x10b06ab0u); f_10b02c90();
  /* 10b06ab0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06ab3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ab6 jne 0x10b06ab9 */
  if (!C.zf) goto L_10b06ab9;
  /* 10b06ab8 int3  */
  x86_unimpl("int3 @ 0x10b06ab8");
L_10b06ab9:;
  /* 10b06ab9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06abb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06abd jne 0x10b06a95 */
  if (!C.zf) goto L_10b06a95;
L_10b06abf:;
  /* 10b06abf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ac3 jne 0x10b06ae3 */
  if (!C.zf) goto L_10b06ae3;
  /* 10b06ac5 push 0x10b2b00c */
  push32((uint32_t)(0x10b2b00cu));
  /* 10b06aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06acc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b06ace push 0x10b2b01c */
  push32((uint32_t)(0x10b2b01cu));
  /* 10b06ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b06ad5 call 0x10b02c90 */
  push32(0x10b06adau); f_10b02c90();
  /* 10b06ada add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06add cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ae0 jne 0x10b06ae3 */
  if (!C.zf) goto L_10b06ae3;
  /* 10b06ae2 int3  */
  x86_unimpl("int3 @ 0x10b06ae2");
L_10b06ae3:;
  /* 10b06ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b06ae7 jne 0x10b06abf */
  if (!C.zf) goto L_10b06abf;
  /* 10b06ae9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06aec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10b06af3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06af9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b06afc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06aff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06b02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b06b04 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06b0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b06b0d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b06b10 push edx */
  push32((uint32_t)(EDX));
  /* 10b06b11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06b14 push eax */
  push32((uint32_t)(EAX));
  /* 10b06b15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b18 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06b19 call 0x10b0ab60 */
  push32(0x10b06b1eu); f_10b0ab60();
  /* 10b06b1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06b21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b06b24 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b27 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b06b2a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06b2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b06b33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b36 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06b3a jl 0x10b06b5e */
  if ((C.sf!=C.of)) goto L_10b06b5e;
  /* 10b06b3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b06b41 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b06b44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06b46 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b06b4c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b06b4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b52 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b06b54 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06b57 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b5a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b06b5c jmp 0x10b06b6f */
  goto L_10b06b6f;
L_10b06b5e:;
  /* 10b06b5e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06b61 push eax */
  push32((uint32_t)(EAX));
  /* 10b06b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06b64 call 0x10b0a8e0 */
  push32(0x10b06b69u); f_10b0a8e0();
  /* 10b06b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06b6c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10b06b6f:;
  /* 10b06b6f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b06b72 pop edi */
  EDI = (pop32());
  /* 10b06b73 pop esi */
  ESI = (pop32());
  /* 10b06b74 pop ebx */
  EBX = (pop32());
  /* 10b06b75 mov esp, ebp */
  ESP = (EBP);
  /* 10b06b77 pop ebp */
  EBP = (pop32());
  /* 10b06b78 ret  */
  ESPCHK(0x10b06a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x10b06b80 (7 bytes, 3 insns) */
void f_10b06b80(void) {
  FTRACE(0x10b06b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06b80 push edi */
  push32((uint32_t)(EDI));
  /* 10b06b81 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b06b85 jmp 0x10b06bf1 */
  jmp_ind(0x10b06bf1u); return;
}

/* FUN_10006b90 @ 0x10b06b90 (224 bytes, 84 insns) */
void f_10b06b90(void) {
  FTRACE(0x10b06b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06b90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b06b94 push edi */
  push32((uint32_t)(EDI));
  /* 10b06b95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06b9b je 0x10b06bac */
  if (C.zf) goto L_10b06bac;
L_10b06b9d:;
  /* 10b06b9d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b06b9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b06ba0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b06ba2 je 0x10b06bdf */
  if (C.zf) goto L_10b06bdf;
  /* 10b06ba4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06baa jne 0x10b06b9d */
  if (!C.zf) goto L_10b06b9d;
L_10b06bac:;
  /* 10b06bac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b06bae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b06bb3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06bb5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b06bb8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06bba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06bbd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b06bc2 je 0x10b06bac */
  if (C.zf) goto L_10b06bac;
  /* 10b06bc4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b06bc7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b06bc9 je 0x10b06bee */
  if (C.zf) goto L_10b06bee;
  /* 10b06bcb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b06bcd je 0x10b06be9 */
  if (C.zf) goto L_10b06be9;
  /* 10b06bcf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b06bd4 je 0x10b06be4 */
  if (C.zf) goto L_10b06be4;
  /* 10b06bd6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b06bdb je 0x10b06bdf */
  if (C.zf) goto L_10b06bdf;
  /* 10b06bdd jmp 0x10b06bac */
  goto L_10b06bac;
L_10b06bdf:;
  /* 10b06bdf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10b06be2 jmp 0x10b06bf1 */
  goto L_10b06bf1;
L_10b06be4:;
  /* 10b06be4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10b06be7 jmp 0x10b06bf1 */
  goto L_10b06bf1;
L_10b06be9:;
  /* 10b06be9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10b06bec jmp 0x10b06bf1 */
  goto L_10b06bf1;
L_10b06bee:;
  /* 10b06bee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10b06bf1:;
  /* 10b06bf1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b06bf5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06bfb je 0x10b06c16 */
  if (C.zf) goto L_10b06c16;
L_10b06bfd:;
  /* 10b06bfd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b06bff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b06c00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b06c02 je 0x10b06c68 */
  if (C.zf) goto L_10b06c68;
  /* 10b06c04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b06c06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b06c07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b06c0d jne 0x10b06bfd */
  if (!C.zf) goto L_10b06bfd;
  /* 10b06c0f jmp 0x10b06c16 */
  goto L_10b06c16;
L_10b06c11:;
  /* 10b06c11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b06c13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b06c16:;
  /* 10b06c16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b06c1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b06c1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06c1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b06c22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b06c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b06c26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06c29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b06c2e je 0x10b06c11 */
  if (C.zf) goto L_10b06c11;
  /* 10b06c30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b06c32 je 0x10b06c68 */
  if (C.zf) goto L_10b06c68;
  /* 10b06c34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b06c36 je 0x10b06c5f */
  if (C.zf) goto L_10b06c5f;
  /* 10b06c38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b06c3e je 0x10b06c52 */
  if (C.zf) goto L_10b06c52;
  /* 10b06c40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b06c46 je 0x10b06c4a */
  if (C.zf) goto L_10b06c4a;
  /* 10b06c48 jmp 0x10b06c11 */
  goto L_10b06c11;
L_10b06c4a:;
  /* 10b06c4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b06c4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b06c50 pop edi */
  EDI = (pop32());
  /* 10b06c51 ret  */
  ESPCHK(0x10b06b90u, _esp0);
  ESP += 4; return;
L_10b06c52:;
  /* 10b06c52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b06c55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b06c59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10b06c5d pop edi */
  EDI = (pop32());
  /* 10b06c5e ret  */
  ESPCHK(0x10b06b90u, _esp0);
  ESP += 4; return;
L_10b06c5f:;
  /* 10b06c5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b06c62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b06c66 pop edi */
  EDI = (pop32());
  /* 10b06c67 ret  */
  ESPCHK(0x10b06b90u, _esp0);
  ESP += 4; return;
L_10b06c68:;
  /* 10b06c68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b06c6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b06c6e pop edi */
  EDI = (pop32());
  /* 10b06c6f ret  */
  ESPCHK(0x10b06b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x10b06c70 (243 bytes, 91 insns) */
void f_10b06c70(void) {
  FTRACE(0x10b06c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06c71 mov ebp, esp */
  EBP = (ESP);
  /* 10b06c73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06c76 push ebx */
  push32((uint32_t)(EBX));
  /* 10b06c77 push esi */
  push32((uint32_t)(ESI));
  /* 10b06c78 push edi */
  push32((uint32_t)(EDI));
  /* 10b06c79 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b06c7c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b06c7f:;
  /* 10b06c7f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06c83 jne 0x10b06ca3 */
  if (!C.zf) goto L_10b06ca3;
  /* 10b06c85 push 0x10b2b028 */
  push32((uint32_t)(0x10b2b028u));
  /* 10b06c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06c8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10b06c8e push 0x10b2b038 */
  push32((uint32_t)(0x10b2b038u));
  /* 10b06c93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b06c95 call 0x10b02c90 */
  push32(0x10b06c9au); f_10b02c90();
  /* 10b06c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06c9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ca0 jne 0x10b06ca3 */
  if (!C.zf) goto L_10b06ca3;
  /* 10b06ca2 int3  */
  x86_unimpl("int3 @ 0x10b06ca2");
L_10b06ca3:;
  /* 10b06ca3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b06ca5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b06ca7 jne 0x10b06c7f */
  if (!C.zf) goto L_10b06c7f;
L_10b06ca9:;
  /* 10b06ca9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06cad jne 0x10b06ccd */
  if (!C.zf) goto L_10b06ccd;
  /* 10b06caf push 0x10b2b00c */
  push32((uint32_t)(0x10b2b00cu));
  /* 10b06cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06cb6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10b06cb8 push 0x10b2b038 */
  push32((uint32_t)(0x10b2b038u));
  /* 10b06cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b06cbf call 0x10b02c90 */
  push32(0x10b06cc4u); f_10b02c90();
  /* 10b06cc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06cc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06cca jne 0x10b06ccd */
  if (!C.zf) goto L_10b06ccd;
  /* 10b06ccc int3  */
  x86_unimpl("int3 @ 0x10b06ccc");
L_10b06ccd:;
  /* 10b06ccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06ccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b06cd1 jne 0x10b06ca9 */
  if (!C.zf) goto L_10b06ca9;
  /* 10b06cd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06cd6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10b06cdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06ce0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06ce3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b06ce6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06ce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06cec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b06cee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06cf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06cf4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b06cf7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b06cfa push ecx */
  push32((uint32_t)(ECX));
  /* 10b06cfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b06cfe push edx */
  push32((uint32_t)(EDX));
  /* 10b06cff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d02 push eax */
  push32((uint32_t)(EAX));
  /* 10b06d03 call 0x10b0ab60 */
  push32(0x10b06d08u); f_10b0ab60();
  /* 10b06d08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06d0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b06d0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b06d14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06d17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b06d1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d20 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06d24 jl 0x10b06d48 */
  if ((C.sf!=C.of)) goto L_10b06d48;
  /* 10b06d26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b06d2b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b06d2e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b06d30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b06d36 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b06d39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b06d3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06d41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b06d46 jmp 0x10b06d59 */
  goto L_10b06d59;
L_10b06d48:;
  /* 10b06d48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b06d4b push edx */
  push32((uint32_t)(EDX));
  /* 10b06d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b06d4e call 0x10b0a8e0 */
  push32(0x10b06d53u); f_10b0a8e0();
  /* 10b06d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06d56 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10b06d59:;
  /* 10b06d59 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b06d5c pop edi */
  EDI = (pop32());
  /* 10b06d5d pop esi */
  ESI = (pop32());
  /* 10b06d5e pop ebx */
  EBX = (pop32());
  /* 10b06d5f mov esp, ebp */
  ESP = (EBP);
  /* 10b06d61 pop ebp */
  EBP = (pop32());
  /* 10b06d62 ret  */
  ESPCHK(0x10b06c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x10b06d70 (47 bytes, 17 insns) */
void f_10b06d70(void) {
  FTRACE(0x10b06d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06d70 push ecx */
  push32((uint32_t)(ECX));
  /* 10b06d71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06d76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10b06d7a jb 0x10b06d90 */
  if (C.cf) goto L_10b06d90;
L_10b06d7c:;
  /* 10b06d7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06d82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06d87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b06d89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06d8e jae 0x10b06d7c */
  if (!C.cf) goto L_10b06d7c;
L_10b06d90:;
  /* 10b06d90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06d92 mov eax, esp */
  EAX = (ESP);
  /* 10b06d94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b06d96 mov esp, ecx */
  ESP = (ECX);
  /* 10b06d98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b06d9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b06d9d push eax */
  push32((uint32_t)(EAX));
  /* 10b06d9e ret  */
  ESPCHK(0x10b06d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x10b06da0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10b06da0(void) {
  FTRACE(0x10b06da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06da1 mov ebp, esp */
  EBP = (ESP);
  /* 10b06da3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06da6 push esi */
  push32((uint32_t)(ESI));
  /* 10b06da7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06dab je 0x10b06db3 */
  if (C.zf) goto L_10b06db3;
  /* 10b06dad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06db1 jne 0x10b06db8 */
  if (!C.zf) goto L_10b06db8;
L_10b06db3:;
  /* 10b06db3 jmp 0x10b06f88 */
  goto L_10b06f88;
L_10b06db8:;
  /* 10b06db8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06dbc je 0x10b06dd4 */
  if (C.zf) goto L_10b06dd4;
  /* 10b06dbe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06dc2 je 0x10b06dd4 */
  if (C.zf) goto L_10b06dd4;
  /* 10b06dc4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06dc8 je 0x10b06dd4 */
  if (C.zf) goto L_10b06dd4;
  /* 10b06dca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06dce jne 0x10b06eb1 */
  if (!C.zf) goto L_10b06eb1;
L_10b06dd4:;
  /* 10b06dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06dd6 call 0x10b075d0 */
  push32(0x10b06ddbu); f_10b075d0();
  /* 10b06ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06dde cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06de2 je 0x10b06dea */
  if (C.zf) goto L_10b06dea;
  /* 10b06de4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06de8 jne 0x10b06e2f */
  if (!C.zf) goto L_10b06e2f;
L_10b06dea:;
  /* 10b06dea cmp dword ptr [0x10b2f684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06df1 jne 0x10b06e2f */
  if (!C.zf) goto L_10b06e2f;
  /* 10b06df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06df5 push 0x10b06fd0 */
  push32((uint32_t)(0x10b06fd0u));
  /* 10b06dfa call dword ptr [0x10b3231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3231c))), 0x10b06e00u);
  /* 10b06e00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06e03 jne 0x10b06e11 */
  if (!C.zf) goto L_10b06e11;
  /* 10b06e05 mov dword ptr [0x10b2f684], 1 */
  w32((uint32_t)(0x10b2f684), (0x1u));
  /* 10b06e0f jmp 0x10b06e2f */
  goto L_10b06e2f;
L_10b06e11:;
  /* 10b06e11 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b06e17u);
  /* 10b06e17 mov esi, eax */
  ESI = (EAX);
  /* 10b06e19 call 0x10b0bab0 */
  push32(0x10b06e1eu); f_10b0bab0();
  /* 10b06e1e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10b06e20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06e22 call 0x10b07670 */
  push32(0x10b06e27u); f_10b07670();
  /* 10b06e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06e2a jmp 0x10b06f88 */
  goto L_10b06f88;
L_10b06e2f:;
  /* 10b06e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06e32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b06e35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06e38 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06e3b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b06e3e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06e42 ja 0x10b06ea2 */
  if ((!C.cf&&!C.zf)) goto L_10b06ea2;
  /* 10b06e44 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b06e47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b06e49 mov dl, byte ptr [eax + 0x10b06faf] */
  DL = (r8((uint32_t)(EAX + 0x10b06faf)));
  /* 10b06e4f jmp dword ptr [edx*4 + 0x10b06f9b] */
  switch (EDX) {
    case 0: goto L_10b06e56;
    case 1: goto L_10b06e90;
    case 2: goto L_10b06e6a;
    case 3: goto L_10b06e7d;
    case 4: goto L_10b06ea2;
    default: x86_unimpl("switch@0x10b06e4f out of table"); return;
  }
L_10b06e56:;
  /* 10b06e56 mov ecx, dword ptr [0x10b2f674] */
  ECX = (r32((uint32_t)(0x10b2f674)));
  /* 10b06e5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b06e5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06e62 mov dword ptr [0x10b2f674], edx */
  w32((uint32_t)(0x10b2f674), (EDX));
  /* 10b06e68 jmp 0x10b06ea2 */
  goto L_10b06ea2;
L_10b06e6a:;
  /* 10b06e6a mov eax, dword ptr [0x10b2f678] */
  EAX = (r32((uint32_t)(0x10b2f678)));
  /* 10b06e6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b06e72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06e75 mov dword ptr [0x10b2f678], ecx */
  w32((uint32_t)(0x10b2f678), (ECX));
  /* 10b06e7b jmp 0x10b06ea2 */
  goto L_10b06ea2;
L_10b06e7d:;
  /* 10b06e7d mov edx, dword ptr [0x10b2f67c] */
  EDX = (r32((uint32_t)(0x10b2f67c)));
  /* 10b06e83 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b06e86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06e89 mov dword ptr [0x10b2f67c], eax */
  w32((uint32_t)(0x10b2f67c), (EAX));
  /* 10b06e8e jmp 0x10b06ea2 */
  goto L_10b06ea2;
L_10b06e90:;
  /* 10b06e90 mov ecx, dword ptr [0x10b2f680] */
  ECX = (r32((uint32_t)(0x10b2f680)));
  /* 10b06e96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b06e99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06e9c mov dword ptr [0x10b2f680], edx */
  w32((uint32_t)(0x10b2f680), (EDX));
L_10b06ea2:;
  /* 10b06ea2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06ea4 call 0x10b07670 */
  push32(0x10b06ea9u); f_10b07670();
  /* 10b06ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06eac jmp 0x10b06f83 */
  goto L_10b06f83;
L_10b06eb1:;
  /* 10b06eb1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06eb5 je 0x10b06ec8 */
  if (C.zf) goto L_10b06ec8;
  /* 10b06eb7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ebb je 0x10b06ec8 */
  if (C.zf) goto L_10b06ec8;
  /* 10b06ebd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06ec1 je 0x10b06ec8 */
  if (C.zf) goto L_10b06ec8;
  /* 10b06ec3 jmp 0x10b06f88 */
  goto L_10b06f88;
L_10b06ec8:;
  /* 10b06ec8 call 0x10b03610 */
  push32(0x10b06ecdu); f_10b03610();
  /* 10b06ecd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b06ed0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06ed3 cmp dword ptr [eax + 0x50], 0x10b2dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10b2dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06eda jne 0x10b06f25 */
  if (!C.zf) goto L_10b06f25;
  /* 10b06edc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10b06ee1 push 0x10b2b044 */
  push32((uint32_t)(0x10b2b044u));
  /* 10b06ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b06ee8 mov ecx, dword ptr [0x10b2dc80] */
  ECX = (r32((uint32_t)(0x10b2dc80)));
  /* 10b06eee push ecx */
  push32((uint32_t)(ECX));
  /* 10b06eef call 0x10b03bd0 */
  push32(0x10b06ef4u); f_10b03bd0();
  /* 10b06ef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06ef7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06efa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10b06efd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06f00 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06f04 je 0x10b06f23 */
  if (C.zf) goto L_10b06f23;
  /* 10b06f06 mov ecx, dword ptr [0x10b2dc80] */
  ECX = (r32((uint32_t)(0x10b2dc80)));
  /* 10b06f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10b06f0d push 0x10b2dc00 */
  push32((uint32_t)(0x10b2dc00u));
  /* 10b06f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06f15 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10b06f18 push eax */
  push32((uint32_t)(EAX));
  /* 10b06f19 call 0x10b0a4b0 */
  push32(0x10b06f1eu); f_10b0a4b0();
  /* 10b06f1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06f21 jmp 0x10b06f25 */
  goto L_10b06f25;
L_10b06f23:;
  /* 10b06f23 jmp 0x10b06f88 */
  goto L_10b06f88;
L_10b06f25:;
  /* 10b06f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06f28 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b06f2b push edx */
  push32((uint32_t)(EDX));
  /* 10b06f2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b06f2f push eax */
  push32((uint32_t)(EAX));
  /* 10b06f30 call 0x10b072b0 */
  push32(0x10b06f35u); f_10b072b0();
  /* 10b06f35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06f38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b06f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06f3f jne 0x10b06f43 */
  if (!C.zf) goto L_10b06f43;
  /* 10b06f41 jmp 0x10b06f88 */
  goto L_10b06f88;
L_10b06f43:;
  /* 10b06f43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06f46 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b06f49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b06f4c:;
  /* 10b06f4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06f4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b06f52 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06f55 jne 0x10b06f83 */
  if (!C.zf) goto L_10b06f83;
  /* 10b06f57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06f5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b06f5d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b06f60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06f63 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06f66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b06f69 mov edx, dword ptr [0x10b2dc84] */
  EDX = (r32((uint32_t)(0x10b2dc84)));
  /* 10b06f6f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b06f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b06f75 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10b06f78 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06f7a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06f7d jb 0x10b06f81 */
  if (C.cf) goto L_10b06f81;
  /* 10b06f7f jmp 0x10b06f83 */
  goto L_10b06f83;
L_10b06f81:;
  /* 10b06f81 jmp 0x10b06f4c */
  goto L_10b06f4c;
L_10b06f83:;
  /* 10b06f83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b06f86 jmp 0x10b06f96 */
  goto L_10b06f96;
L_10b06f88:;
  /* 10b06f88 call 0x10b0baa0 */
  push32(0x10b06f8du); f_10b0baa0();
  /* 10b06f8d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10b06f93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b06f96:;
  /* 10b06f96 pop esi */
  ESI = (pop32());
  /* 10b06f97 mov esp, ebp */
  ESP = (EBP);
  /* 10b06f99 pop ebp */
  EBP = (pop32());
  /* 10b06f9a ret  */
  ESPCHK(0x10b06da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd0 @ 0x10b06fd0 (146 bytes, 45 insns) */
void f_10b06fd0(void) {
  FTRACE(0x10b06fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b06fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b06fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b06fd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b06fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b06fd8 call 0x10b075d0 */
  push32(0x10b06fddu); f_10b075d0();
  /* 10b06fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b06fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b06fe4 jne 0x10b06ffe */
  if (!C.zf) goto L_10b06ffe;
  /* 10b06fe6 mov dword ptr [ebp - 8], 0x10b2f674 */
  w32((uint32_t)(EBP + -0x8), (0x10b2f674u));
  /* 10b06fed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b06ff0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b06ff2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b06ff5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b06ffc jmp 0x10b07014 */
  goto L_10b07014;
L_10b06ffe:;
  /* 10b06ffe mov dword ptr [ebp - 8], 0x10b2f678 */
  w32((uint32_t)(EBP + -0x8), (0x10b2f678u));
  /* 10b07005 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07008 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0700a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0700d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10b07014:;
  /* 10b07014 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07018 jne 0x10b07028 */
  if (!C.zf) goto L_10b07028;
  /* 10b0701a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0701c call 0x10b07670 */
  push32(0x10b07021u); f_10b07670();
  /* 10b07021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07026 jmp 0x10b0705c */
  goto L_10b0705c;
L_10b07028:;
  /* 10b07028 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0702c je 0x10b0704d */
  if (C.zf) goto L_10b0704d;
  /* 10b0702e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07031 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10b07037 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b07039 call 0x10b07670 */
  push32(0x10b0703eu); f_10b07670();
  /* 10b0703e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07041 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07044 push edx */
  push32((uint32_t)(EDX));
  /* 10b07045 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10b07048u);
  /* 10b07048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0704b jmp 0x10b07057 */
  goto L_10b07057;
L_10b0704d:;
  /* 10b0704d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0704f call 0x10b07670 */
  push32(0x10b07054u); f_10b07670();
  /* 10b07054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07057:;
  /* 10b07057 mov eax, 1 */
  EAX = (0x1u);
L_10b0705c:;
  /* 10b0705c mov esp, ebp */
  ESP = (EBP);
  /* 10b0705e pop ebp */
  EBP = (pop32());
  /* 10b0705f ret 4 */
  ESPCHK(0x10b06fd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007070 @ 0x10b07070 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10b07070(void) {
  FTRACE(0x10b07070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07070 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07071 mov ebp, esp */
  EBP = (ESP);
  /* 10b07073 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07076 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0707d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07080 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b07083 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b07086 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07089 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b0708c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07090 ja 0x10b0713e */
  if ((!C.cf&&!C.zf)) goto L_10b0713e;
  /* 10b07096 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b07099 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0709b mov dl, byte ptr [eax + 0x10b07292] */
  DL = (r8((uint32_t)(EAX + 0x10b07292)));
  /* 10b070a1 jmp dword ptr [edx*4 + 0x10b0727a] */
  switch (EDX) {
    case 0: goto L_10b070a8;
    case 1: goto L_10b07113;
    case 2: goto L_10b070f9;
    case 3: goto L_10b070c5;
    case 4: goto L_10b070df;
    case 5: goto L_10b0713e;
    default: x86_unimpl("switch@0x10b070a1 out of table"); return;
  }
L_10b070a8:;
  /* 10b070a8 mov dword ptr [ebp - 0x18], 0x10b2f674 */
  w32((uint32_t)(EBP + -0x18), (0x10b2f674u));
  /* 10b070af mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b070b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b070b4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b070b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b070ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b070bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b070c0 jmp 0x10b07146 */
  goto L_10b07146;
L_10b070c5:;
  /* 10b070c5 mov dword ptr [ebp - 0x18], 0x10b2f678 */
  w32((uint32_t)(EBP + -0x18), (0x10b2f678u));
  /* 10b070cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b070cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b070d1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b070d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b070d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b070da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b070dd jmp 0x10b07146 */
  goto L_10b07146;
L_10b070df:;
  /* 10b070df mov dword ptr [ebp - 0x18], 0x10b2f67c */
  w32((uint32_t)(EBP + -0x18), (0x10b2f67cu));
  /* 10b070e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b070e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b070eb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b070ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b070f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b070f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b070f7 jmp 0x10b07146 */
  goto L_10b07146;
L_10b070f9:;
  /* 10b070f9 mov dword ptr [ebp - 0x18], 0x10b2f680 */
  w32((uint32_t)(EBP + -0x18), (0x10b2f680u));
  /* 10b07100 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b07103 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b07105 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b07108 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0710b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0710e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b07111 jmp 0x10b07146 */
  goto L_10b07146;
L_10b07113:;
  /* 10b07113 call 0x10b03610 */
  push32(0x10b07118u); f_10b03610();
  /* 10b07118 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0711b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0711e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b07121 push edx */
  push32((uint32_t)(EDX));
  /* 10b07122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07125 push eax */
  push32((uint32_t)(EAX));
  /* 10b07126 call 0x10b072b0 */
  push32(0x10b0712bu); f_10b072b0();
  /* 10b0712b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0712e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07131 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b07134 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b07137 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b07139 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b0713c jmp 0x10b07146 */
  goto L_10b07146;
L_10b0713e:;
  /* 10b0713e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b07141 jmp 0x10b07276 */
  goto L_10b07276;
L_10b07146:;
  /* 10b07146 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0714a je 0x10b07156 */
  if (C.zf) goto L_10b07156;
  /* 10b0714c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0714e call 0x10b075d0 */
  push32(0x10b07153u); f_10b075d0();
  /* 10b07153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07156:;
  /* 10b07156 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0715a jne 0x10b07173 */
  if (!C.zf) goto L_10b07173;
  /* 10b0715c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07160 je 0x10b0716c */
  if (C.zf) goto L_10b0716c;
  /* 10b07162 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b07164 call 0x10b07670 */
  push32(0x10b07169u); f_10b07670();
  /* 10b07169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0716c:;
  /* 10b0716c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0716e jmp 0x10b07276 */
  goto L_10b07276;
L_10b07173:;
  /* 10b07173 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07177 jne 0x10b07190 */
  if (!C.zf) goto L_10b07190;
  /* 10b07179 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0717d je 0x10b07189 */
  if (C.zf) goto L_10b07189;
  /* 10b0717f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b07181 call 0x10b07670 */
  push32(0x10b07186u); f_10b07670();
  /* 10b07186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07189:;
  /* 10b07189 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b0718b call 0x10b03390 */
  push32(0x10b07190u); f_10b03390();
L_10b07190:;
  /* 10b07190 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07194 je 0x10b071a2 */
  if (C.zf) goto L_10b071a2;
  /* 10b07196 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0719a je 0x10b071a2 */
  if (C.zf) goto L_10b071a2;
  /* 10b0719c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b071a0 jne 0x10b071ce */
  if (!C.zf) goto L_10b071ce;
L_10b071a2:;
  /* 10b071a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b071a5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10b071a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b071ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b071ae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10b071b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b071b9 jne 0x10b071ce */
  if (!C.zf) goto L_10b071ce;
  /* 10b071bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b071be mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10b071c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b071c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b071c7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10b071ce:;
  /* 10b071ce cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b071d2 jne 0x10b07210 */
  if (!C.zf) goto L_10b07210;
  /* 10b071d4 mov eax, dword ptr [0x10b2dc78] */
  EAX = (r32((uint32_t)(0x10b2dc78)));
  /* 10b071d9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b071dc jmp 0x10b071e7 */
  goto L_10b071e7;
L_10b071de:;
  /* 10b071de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b071e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b071e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b071e7:;
  /* 10b071e7 mov edx, dword ptr [0x10b2dc78] */
  EDX = (r32((uint32_t)(0x10b2dc78)));
  /* 10b071ed add edx, dword ptr [0x10b2dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b071f3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b071f6 jge 0x10b0720e */
  if ((C.sf==C.of)) goto L_10b0720e;
  /* 10b071f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b071fb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b071fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07201 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b07204 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10b0720c jmp 0x10b071de */
  goto L_10b071de;
L_10b0720e:;
  /* 10b0720e jmp 0x10b07219 */
  goto L_10b07219;
L_10b07210:;
  /* 10b07210 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b07213 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b07219:;
  /* 10b07219 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0721d je 0x10b07229 */
  if (C.zf) goto L_10b07229;
  /* 10b0721f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b07221 call 0x10b07670 */
  push32(0x10b07226u); f_10b07670();
  /* 10b07226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07229:;
  /* 10b07229 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0722d jne 0x10b07240 */
  if (!C.zf) goto L_10b07240;
  /* 10b0722f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07232 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10b07235 push edx */
  push32((uint32_t)(EDX));
  /* 10b07236 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b07238 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10b0723bu);
  /* 10b0723b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0723e jmp 0x10b0724a */
  goto L_10b0724a;
L_10b07240:;
  /* 10b07240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07243 push eax */
  push32((uint32_t)(EAX));
  /* 10b07244 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10b07247u);
  /* 10b07247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0724a:;
  /* 10b0724a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0724e je 0x10b0725c */
  if (C.zf) goto L_10b0725c;
  /* 10b07250 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07254 je 0x10b0725c */
  if (C.zf) goto L_10b0725c;
  /* 10b07256 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0725a jne 0x10b07274 */
  if (!C.zf) goto L_10b07274;
L_10b0725c:;
  /* 10b0725c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0725f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b07262 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10b07265 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07269 jne 0x10b07274 */
  if (!C.zf) goto L_10b07274;
  /* 10b0726b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0726e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07271 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10b07274:;
  /* 10b07274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b07276:;
  /* 10b07276 mov esp, ebp */
  ESP = (EBP);
  /* 10b07278 pop ebp */
  EBP = (pop32());
  /* 10b07279 ret  */
  ESPCHK(0x10b07070u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x10b072b0 (91 bytes, 35 insns) */
void f_10b072b0(void) {
  FTRACE(0x10b072b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b072b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b072b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b072b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b072b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b072b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b072ba:;
  /* 10b072ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b072bd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b072c0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b072c3 je 0x10b072e3 */
  if (C.zf) goto L_10b072e3;
  /* 10b072c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b072c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b072cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b072ce mov ecx, dword ptr [0x10b2dc84] */
  ECX = (r32((uint32_t)(0x10b2dc84)));
  /* 10b072d4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b072d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b072da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b072dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b072df jae 0x10b072e3 */
  if (!C.cf) goto L_10b072e3;
  /* 10b072e1 jmp 0x10b072ba */
  goto L_10b072ba;
L_10b072e3:;
  /* 10b072e3 mov eax, dword ptr [0x10b2dc84] */
  EAX = (r32((uint32_t)(0x10b2dc84)));
  /* 10b072e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b072eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b072ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b072f0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b072f3 jae 0x10b07305 */
  if (!C.cf) goto L_10b07305;
  /* 10b072f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b072f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b072fb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b072fe jne 0x10b07305 */
  if (!C.zf) goto L_10b07305;
  /* 10b07300 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07303 jmp 0x10b07307 */
  goto L_10b07307;
L_10b07305:;
  /* 10b07305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b07307:;
  /* 10b07307 mov esp, ebp */
  ESP = (EBP);
  /* 10b07309 pop ebp */
  EBP = (pop32());
  /* 10b0730a ret  */
  ESPCHK(0x10b072b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x10b07310 (13 bytes, 6 insns) */
void f_10b07310(void) {
  FTRACE(0x10b07310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07310 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07311 mov ebp, esp */
  EBP = (ESP);
  /* 10b07313 call 0x10b03610 */
  push32(0x10b07318u); f_10b03610();
  /* 10b07318 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0731b pop ebp */
  EBP = (pop32());
  /* 10b0731c ret  */
  ESPCHK(0x10b07310u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x10b07320 (13 bytes, 6 insns) */
void f_10b07320(void) {
  FTRACE(0x10b07320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07320 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07321 mov ebp, esp */
  EBP = (ESP);
  /* 10b07323 call 0x10b03610 */
  push32(0x10b07328u); f_10b03610();
  /* 10b07328 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0732b pop ebp */
  EBP = (pop32());
  /* 10b0732c ret  */
  ESPCHK(0x10b07320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x10b07330 (187 bytes, 54 insns) */
void f_10b07330(void) {
  FTRACE(0x10b07330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07330 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07331 mov ebp, esp */
  EBP = (ESP);
  /* 10b07333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0733d cmp dword ptr [0x10b2f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07344 jne 0x10b073a3 */
  if (!C.zf) goto L_10b073a3;
  /* 10b07346 push 0x10b2a470 */
  push32((uint32_t)(0x10b2a470u));
  /* 10b0734b call dword ptr [0x10b32340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32340))), 0x10b07351u);
  /* 10b07351 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b07354 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07358 je 0x10b07377 */
  if (C.zf) goto L_10b07377;
  /* 10b0735a push 0x10b2b074 */
  push32((uint32_t)(0x10b2b074u));
  /* 10b0735f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07362 push eax */
  push32((uint32_t)(EAX));
  /* 10b07363 call dword ptr [0x10b3233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3233c))), 0x10b07369u);
  /* 10b07369 mov dword ptr [0x10b2f688], eax */
  w32((uint32_t)(0x10b2f688), (EAX));
  /* 10b0736e cmp dword ptr [0x10b2f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07375 jne 0x10b0737b */
  if (!C.zf) goto L_10b0737b;
L_10b07377:;
  /* 10b07377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07379 jmp 0x10b073e7 */
  goto L_10b073e7;
L_10b0737b:;
  /* 10b0737b push 0x10b2b064 */
  push32((uint32_t)(0x10b2b064u));
  /* 10b07380 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07383 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07384 call dword ptr [0x10b3233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3233c))), 0x10b0738au);
  /* 10b0738a mov dword ptr [0x10b2f68c], eax */
  w32((uint32_t)(0x10b2f68c), (EAX));
  /* 10b0738f push 0x10b2b050 */
  push32((uint32_t)(0x10b2b050u));
  /* 10b07394 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07397 push edx */
  push32((uint32_t)(EDX));
  /* 10b07398 call dword ptr [0x10b3233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3233c))), 0x10b0739eu);
  /* 10b0739e mov dword ptr [0x10b2f690], eax */
  w32((uint32_t)(0x10b2f690), (EAX));
L_10b073a3:;
  /* 10b073a3 cmp dword ptr [0x10b2f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b073aa je 0x10b073b5 */
  if (C.zf) goto L_10b073b5;
  /* 10b073ac call dword ptr [0x10b2f68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f68c))), 0x10b073b2u);
  /* 10b073b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b073b5:;
  /* 10b073b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b073b9 je 0x10b073d1 */
  if (C.zf) goto L_10b073d1;
  /* 10b073bb cmp dword ptr [0x10b2f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b073c2 je 0x10b073d1 */
  if (C.zf) goto L_10b073d1;
  /* 10b073c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b073c7 push eax */
  push32((uint32_t)(EAX));
  /* 10b073c8 call dword ptr [0x10b2f690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f690))), 0x10b073ceu);
  /* 10b073ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b073d1:;
  /* 10b073d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b073d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b073d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b073d8 push edx */
  push32((uint32_t)(EDX));
  /* 10b073d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b073dc push eax */
  push32((uint32_t)(EAX));
  /* 10b073dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b073e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b073e1 call dword ptr [0x10b2f688] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f688))), 0x10b073e7u);
L_10b073e7:;
  /* 10b073e7 mov esp, ebp */
  ESP = (EBP);
  /* 10b073e9 pop ebp */
  EBP = (pop32());
  /* 10b073ea ret  */
  ESPCHK(0x10b07330u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10b073f0 (254 bytes, 109 insns) */
void f_10b073f0(void) {
  FTRACE(0x10b073f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b073f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b073f4 push edi */
  push32((uint32_t)(EDI));
  /* 10b073f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b073f7 je 0x10b07473 */
  if (C.zf) goto L_10b07473;
  /* 10b073f9 push esi */
  push32((uint32_t)(ESI));
  /* 10b073fa push ebx */
  push32((uint32_t)(EBX));
  /* 10b073fb mov ebx, ecx */
  EBX = (ECX);
  /* 10b073fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10b07401 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b07407 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0740b jne 0x10b07414 */
  if (!C.zf) goto L_10b07414;
  /* 10b0740d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b07410 jne 0x10b07481 */
  if (!C.zf) goto L_10b07481;
  /* 10b07412 jmp 0x10b07435 */
  goto L_10b07435;
L_10b07414:;
  /* 10b07414 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b07416 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b07417 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b07419 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b0741a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b0741b je 0x10b07442 */
  if (C.zf) goto L_10b07442;
  /* 10b0741d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b0741f je 0x10b0744a */
  if (C.zf) goto L_10b0744a;
  /* 10b07421 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b07427 jne 0x10b07414 */
  if (!C.zf) goto L_10b07414;
  /* 10b07429 mov ebx, ecx */
  EBX = (ECX);
  /* 10b0742b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0742e jne 0x10b07481 */
  if (!C.zf) goto L_10b07481;
L_10b07430:;
  /* 10b07430 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b07433 je 0x10b07442 */
  if (C.zf) goto L_10b07442;
L_10b07435:;
  /* 10b07435 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b07437 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b07438 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0743a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b0743b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b0743d je 0x10b0746e */
  if (C.zf) goto L_10b0746e;
  /* 10b0743f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b07440 jne 0x10b07435 */
  if (!C.zf) goto L_10b07435;
L_10b07442:;
  /* 10b07442 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b07446 pop ebx */
  EBX = (pop32());
  /* 10b07447 pop esi */
  ESI = (pop32());
  /* 10b07448 pop edi */
  EDI = (pop32());
  /* 10b07449 ret  */
  ESPCHK(0x10b073f0u, _esp0);
  ESP += 4; return;
L_10b0744a:;
  /* 10b0744a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b07450 je 0x10b07464 */
  if (C.zf) goto L_10b07464;
L_10b07452:;
  /* 10b07452 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b07454 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b07455 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b07456 je 0x10b074e6 */
  if (C.zf) goto L_10b074e6;
  /* 10b0745c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b07462 jne 0x10b07452 */
  if (!C.zf) goto L_10b07452;
L_10b07464:;
  /* 10b07464 mov ebx, ecx */
  EBX = (ECX);
  /* 10b07466 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b07469 jne 0x10b074d7 */
  if (!C.zf) goto L_10b074d7;
L_10b0746b:;
  /* 10b0746b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0746d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b0746e:;
  /* 10b0746e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b0746f jne 0x10b0746b */
  if (!C.zf) goto L_10b0746b;
  /* 10b07471 pop ebx */
  EBX = (pop32());
  /* 10b07472 pop esi */
  ESI = (pop32());
L_10b07473:;
  /* 10b07473 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b07477 pop edi */
  EDI = (pop32());
  /* 10b07478 ret  */
  ESPCHK(0x10b073f0u, _esp0);
  ESP += 4; return;
L_10b07479:;
  /* 10b07479 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b0747b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0747e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b0747f je 0x10b07430 */
  if (C.zf) goto L_10b07430;
L_10b07481:;
  /* 10b07481 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b07486 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b07488 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0748a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0748d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0748f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10b07491 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07494 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b07499 je 0x10b07479 */
  if (C.zf) goto L_10b07479;
  /* 10b0749b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b0749d je 0x10b074cb */
  if (C.zf) goto L_10b074cb;
  /* 10b0749f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b074a1 je 0x10b074c1 */
  if (C.zf) goto L_10b074c1;
  /* 10b074a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b074a9 je 0x10b074b7 */
  if (C.zf) goto L_10b074b7;
  /* 10b074ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b074b1 jne 0x10b07479 */
  if (!C.zf) goto L_10b07479;
  /* 10b074b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b074b5 jmp 0x10b074cf */
  goto L_10b074cf;
L_10b074b7:;
  /* 10b074b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b074bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b074bf jmp 0x10b074cf */
  goto L_10b074cf;
L_10b074c1:;
  /* 10b074c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b074c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b074c9 jmp 0x10b074cf */
  goto L_10b074cf;
L_10b074cb:;
  /* 10b074cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b074cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10b074cf:;
  /* 10b074cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b074d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b074d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b074d5 je 0x10b074e1 */
  if (C.zf) goto L_10b074e1;
L_10b074d7:;
  /* 10b074d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b074d9:;
  /* 10b074d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10b074db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b074de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b074df jne 0x10b074d9 */
  if (!C.zf) goto L_10b074d9;
L_10b074e1:;
  /* 10b074e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b074e4 jne 0x10b0746b */
  if (!C.zf) goto L_10b0746b;
L_10b074e6:;
  /* 10b074e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b074ea pop ebx */
  EBX = (pop32());
  /* 10b074eb pop esi */
  ESI = (pop32());
  /* 10b074ec pop edi */
  EDI = (pop32());
  /* 10b074ed ret  */
  ESPCHK(0x10b073f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074f0 @ 0x10b074f0 (55 bytes, 16 insns) */
void f_10b074f0(void) {
  FTRACE(0x10b074f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b074f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b074f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b074f3 mov eax, dword ptr [0x10b2db84] */
  EAX = (r32((uint32_t)(0x10b2db84)));
  /* 10b074f8 push eax */
  push32((uint32_t)(EAX));
  /* 10b074f9 call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b074ffu);
  /* 10b074ff mov ecx, dword ptr [0x10b2db74] */
  ECX = (r32((uint32_t)(0x10b2db74)));
  /* 10b07505 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07506 call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b0750cu);
  /* 10b0750c mov edx, dword ptr [0x10b2db64] */
  EDX = (r32((uint32_t)(0x10b2db64)));
  /* 10b07512 push edx */
  push32((uint32_t)(EDX));
  /* 10b07513 call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b07519u);
  /* 10b07519 mov eax, dword ptr [0x10b2db44] */
  EAX = (r32((uint32_t)(0x10b2db44)));
  /* 10b0751e push eax */
  push32((uint32_t)(EAX));
  /* 10b0751f call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b07525u);
  /* 10b07525 pop ebp */
  EBP = (pop32());
  /* 10b07526 ret  */
  ESPCHK(0x10b074f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10b07530 (159 bytes, 47 insns) */
void f_10b07530(void) {
  FTRACE(0x10b07530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07530 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07531 mov ebp, esp */
  EBP = (ESP);
  /* 10b07533 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0753b jmp 0x10b07546 */
  goto L_10b07546;
L_10b0753d:;
  /* 10b0753d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b07546:;
  /* 10b07546 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0754a jge 0x10b07599 */
  if ((C.sf==C.of)) goto L_10b07599;
  /* 10b0754c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0754f cmp dword ptr [ecx*4 + 0x10b2db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b2db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07557 je 0x10b07597 */
  if (C.zf) goto L_10b07597;
  /* 10b07559 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0755d je 0x10b07597 */
  if (C.zf) goto L_10b07597;
  /* 10b0755f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07563 je 0x10b07597 */
  if (C.zf) goto L_10b07597;
  /* 10b07565 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07569 je 0x10b07597 */
  if (C.zf) goto L_10b07597;
  /* 10b0756b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0756f je 0x10b07597 */
  if (C.zf) goto L_10b07597;
  /* 10b07571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07574 mov eax, dword ptr [edx*4 + 0x10b2db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2db40)));
  /* 10b0757b push eax */
  push32((uint32_t)(EAX));
  /* 10b0757c call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b07582u);
  /* 10b07582 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b07584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07587 mov edx, dword ptr [ecx*4 + 0x10b2db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2db40)));
  /* 10b0758e push edx */
  push32((uint32_t)(EDX));
  /* 10b0758f call 0x10b04660 */
  push32(0x10b07594u); f_10b04660();
  /* 10b07594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07597:;
  /* 10b07597 jmp 0x10b0753d */
  goto L_10b0753d;
L_10b07599:;
  /* 10b07599 mov eax, dword ptr [0x10b2db64] */
  EAX = (r32((uint32_t)(0x10b2db64)));
  /* 10b0759e push eax */
  push32((uint32_t)(EAX));
  /* 10b0759f call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b075a5u);
  /* 10b075a5 mov ecx, dword ptr [0x10b2db74] */
  ECX = (r32((uint32_t)(0x10b2db74)));
  /* 10b075ab push ecx */
  push32((uint32_t)(ECX));
  /* 10b075ac call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b075b2u);
  /* 10b075b2 mov edx, dword ptr [0x10b2db84] */
  EDX = (r32((uint32_t)(0x10b2db84)));
  /* 10b075b8 push edx */
  push32((uint32_t)(EDX));
  /* 10b075b9 call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b075bfu);
  /* 10b075bf mov eax, dword ptr [0x10b2db44] */
  EAX = (r32((uint32_t)(0x10b2db44)));
  /* 10b075c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b075c5 call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b075cbu);
  /* 10b075cb mov esp, ebp */
  ESP = (EBP);
  /* 10b075cd pop ebp */
  EBP = (pop32());
  /* 10b075ce ret  */
  ESPCHK(0x10b07530u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x10b075d0 (151 bytes, 46 insns) */
void f_10b075d0(void) {
  FTRACE(0x10b075d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b075d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b075d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b075d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b075d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b075d7 cmp dword ptr [eax*4 + 0x10b2db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b2db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b075df jne 0x10b07652 */
  if (!C.zf) goto L_10b07652;
  /* 10b075e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10b075e6 push 0x10b2b080 */
  push32((uint32_t)(0x10b2b080u));
  /* 10b075eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b075ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b075ef call 0x10b03bd0 */
  push32(0x10b075f4u); f_10b03bd0();
  /* 10b075f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b075f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b075fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b075fe jne 0x10b0760a */
  if (!C.zf) goto L_10b0760a;
  /* 10b07600 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b07602 call 0x10b02b40 */
  push32(0x10b07607u); f_10b02b40();
  /* 10b07607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0760a:;
  /* 10b0760a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0760c call 0x10b075d0 */
  push32(0x10b07611u); f_10b075d0();
  /* 10b07611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07617 cmp dword ptr [ecx*4 + 0x10b2db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b2db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0761f jne 0x10b0763a */
  if (!C.zf) goto L_10b0763a;
  /* 10b07621 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07624 push edx */
  push32((uint32_t)(EDX));
  /* 10b07625 call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b0762bu);
  /* 10b0762b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0762e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07631 mov dword ptr [eax*4 + 0x10b2db40], ecx */
  w32((uint32_t)(EAX*4 + 0x10b2db40), (ECX));
  /* 10b07638 jmp 0x10b07648 */
  goto L_10b07648;
L_10b0763a:;
  /* 10b0763a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0763c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0763f push edx */
  push32((uint32_t)(EDX));
  /* 10b07640 call 0x10b04660 */
  push32(0x10b07645u); f_10b04660();
  /* 10b07645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07648:;
  /* 10b07648 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0764a call 0x10b07670 */
  push32(0x10b0764fu); f_10b07670();
  /* 10b0764f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07652:;
  /* 10b07652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07655 mov ecx, dword ptr [eax*4 + 0x10b2db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2db40)));
  /* 10b0765c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0765d call dword ptr [0x10b32314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32314))), 0x10b07663u);
  /* 10b07663 mov esp, ebp */
  ESP = (EBP);
  /* 10b07665 pop ebp */
  EBP = (pop32());
  /* 10b07666 ret  */
  ESPCHK(0x10b075d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007670 @ 0x10b07670 (22 bytes, 8 insns) */
void f_10b07670(void) {
  FTRACE(0x10b07670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07670 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07671 mov ebp, esp */
  EBP = (ESP);
  /* 10b07673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07676 mov ecx, dword ptr [eax*4 + 0x10b2db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2db40)));
  /* 10b0767d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0767e call dword ptr [0x10b32310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32310))), 0x10b07684u);
  /* 10b07684 pop ebp */
  EBP = (pop32());
  /* 10b07685 ret  */
  ESPCHK(0x10b07670u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x10b07690 (26 bytes, 10 insns) */
void f_10b07690(void) {
  FTRACE(0x10b07690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07690 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07691 mov ebp, esp */
  EBP = (ESP);
  /* 10b07693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07696 push eax */
  push32((uint32_t)(EAX));
  /* 10b07697 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07699 call dword ptr [0x10b32318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32318))), 0x10b0769fu);
  /* 10b0769f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b076a4 call dword ptr [0x10b3234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3234c))), 0x10b076aau);
  /* 10b076aa pop ebp */
  EBP = (pop32());
  /* 10b076ab ret  */
  ESPCHK(0x10b07690u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10b076b0 (446 bytes, 130 insns) */
void f_10b076b0(void) {
  FTRACE(0x10b076b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b076b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b076b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b076b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b076b6 call 0x10b03610 */
  push32(0x10b076bbu); f_10b03610();
  /* 10b076bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b076be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b076c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10b076c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b076c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b076c8 push edx */
  push32((uint32_t)(EDX));
  /* 10b076c9 call 0x10b07870 */
  push32(0x10b076ceu); f_10b07870();
  /* 10b076ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b076d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b076d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b076d8 je 0x10b076e3 */
  if (C.zf) goto L_10b076e3;
  /* 10b076da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b076dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b076e1 jne 0x10b076f2 */
  if (!C.zf) goto L_10b076f2;
L_10b076e3:;
  /* 10b076e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b076e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b076e7 call dword ptr [0x10b32308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32308))), 0x10b076edu);
  /* 10b076ed jmp 0x10b0786a */
  goto L_10b0786a;
L_10b076f2:;
  /* 10b076f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b076f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b076f9 jne 0x10b0770f */
  if (!C.zf) goto L_10b0770f;
  /* 10b076fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b076fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b07705 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0770a jmp 0x10b0786a */
  goto L_10b0786a;
L_10b0770f:;
  /* 10b0770f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07712 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07716 jne 0x10b07720 */
  if (!C.zf) goto L_10b07720;
  /* 10b07718 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0771b jmp 0x10b0786a */
  goto L_10b0786a;
L_10b07720:;
  /* 10b07720 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07723 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b07726 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b07729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0772c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10b0772f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b07732 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07735 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07738 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10b0773b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0773e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07742 jne 0x10b07847 */
  if (!C.zf) goto L_10b07847;
  /* 10b07748 mov eax, dword ptr [0x10b2dc78] */
  EAX = (r32((uint32_t)(0x10b2dc78)));
  /* 10b0774d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b07750 jmp 0x10b0775b */
  goto L_10b0775b;
L_10b07752:;
  /* 10b07752 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b07755 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07758 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b0775b:;
  /* 10b0775b mov edx, dword ptr [0x10b2dc78] */
  EDX = (r32((uint32_t)(0x10b2dc78)));
  /* 10b07761 add edx, dword ptr [0x10b2dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07767 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0776a jge 0x10b07782 */
  if ((C.sf==C.of)) goto L_10b07782;
  /* 10b0776c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0776f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b07772 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07775 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b07778 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10b07780 jmp 0x10b07752 */
  goto L_10b07752;
L_10b07782:;
  /* 10b07782 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07785 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10b07788 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0778b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0778e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07794 jne 0x10b077a5 */
  if (!C.zf) goto L_10b077a5;
  /* 10b07796 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07799 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10b077a0 jmp 0x10b0782d */
  goto L_10b0782d;
L_10b077a5:;
  /* 10b077a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b077a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b077ae jne 0x10b077bc */
  if (!C.zf) goto L_10b077bc;
  /* 10b077b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b077b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10b077ba jmp 0x10b0782d */
  goto L_10b0782d;
L_10b077bc:;
  /* 10b077bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b077bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b077c5 jne 0x10b077d3 */
  if (!C.zf) goto L_10b077d3;
  /* 10b077c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b077ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10b077d1 jmp 0x10b0782d */
  goto L_10b0782d;
L_10b077d3:;
  /* 10b077d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b077d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b077dc jne 0x10b077ea */
  if (!C.zf) goto L_10b077ea;
  /* 10b077de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b077e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10b077e8 jmp 0x10b0782d */
  goto L_10b0782d;
L_10b077ea:;
  /* 10b077ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b077ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b077f3 jne 0x10b07801 */
  if (!C.zf) goto L_10b07801;
  /* 10b077f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b077f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10b077ff jmp 0x10b0782d */
  goto L_10b0782d;
L_10b07801:;
  /* 10b07801 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07804 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0780a jne 0x10b07818 */
  if (!C.zf) goto L_10b07818;
  /* 10b0780c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0780f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10b07816 jmp 0x10b0782d */
  goto L_10b0782d;
L_10b07818:;
  /* 10b07818 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0781b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07821 jne 0x10b0782d */
  if (!C.zf) goto L_10b0782d;
  /* 10b07823 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07826 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10b0782d:;
  /* 10b0782d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07830 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10b07833 push edx */
  push32((uint32_t)(EDX));
  /* 10b07834 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b07836 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b07839u);
  /* 10b07839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0783c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0783f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b07842 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10b07845 jmp 0x10b0785e */
  goto L_10b0785e;
L_10b07847:;
  /* 10b07847 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0784a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b07851 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07854 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b07857 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07858 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b0785bu);
  /* 10b0785b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0785e:;
  /* 10b0785e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07861 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b07864 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10b07867 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b0786a:;
  /* 10b0786a mov esp, ebp */
  ESP = (EBP);
  /* 10b0786c pop ebp */
  EBP = (pop32());
  /* 10b0786d ret  */
  ESPCHK(0x10b076b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x10b07870 (89 bytes, 35 insns) */
void f_10b07870(void) {
  FTRACE(0x10b07870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07870 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07871 mov ebp, esp */
  EBP = (ESP);
  /* 10b07873 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07874 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07877 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0787a:;
  /* 10b0787a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0787d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0787f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07882 je 0x10b078a2 */
  if (C.zf) goto L_10b078a2;
  /* 10b07884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07887 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0788a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0788d mov ecx, dword ptr [0x10b2dc84] */
  ECX = (r32((uint32_t)(0x10b2dc84)));
  /* 10b07893 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b07896 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07899 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0789b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0789e jae 0x10b078a2 */
  if (!C.cf) goto L_10b078a2;
  /* 10b078a0 jmp 0x10b0787a */
  goto L_10b0787a;
L_10b078a2:;
  /* 10b078a2 mov eax, dword ptr [0x10b2dc84] */
  EAX = (r32((uint32_t)(0x10b2dc84)));
  /* 10b078a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b078aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b078ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b078af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b078b2 jae 0x10b078be */
  if (!C.cf) goto L_10b078be;
  /* 10b078b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b078b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b078b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b078bc je 0x10b078c2 */
  if (C.zf) goto L_10b078c2;
L_10b078be:;
  /* 10b078be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b078c0 jmp 0x10b078c5 */
  goto L_10b078c5;
L_10b078c2:;
  /* 10b078c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b078c5:;
  /* 10b078c5 mov esp, ebp */
  ESP = (EBP);
  /* 10b078c7 pop ebp */
  EBP = (pop32());
  /* 10b078c8 ret  */
  ESPCHK(0x10b07870u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10b078d0 (48 bytes, 17 insns) */
void f_10b078d0(void) {
  FTRACE(0x10b078d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b078d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b078d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b078d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b078d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b078d6 call 0x10b075d0 */
  push32(0x10b078dbu); f_10b075d0();
  /* 10b078db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b078de mov eax, dword ptr [0x10b2f6fc] */
  EAX = (r32((uint32_t)(0x10b2f6fc)));
  /* 10b078e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b078e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b078e9 mov dword ptr [0x10b2f6fc], ecx */
  w32((uint32_t)(0x10b2f6fc), (ECX));
  /* 10b078ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10b078f1 call 0x10b07670 */
  push32(0x10b078f6u); f_10b07670();
  /* 10b078f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b078f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b078fc mov esp, ebp */
  ESP = (EBP);
  /* 10b078fe pop ebp */
  EBP = (pop32());
  /* 10b078ff ret  */
  ESPCHK(0x10b078d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x10b07900 (10 bytes, 5 insns) */
void f_10b07900(void) {
  FTRACE(0x10b07900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07900 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07901 mov ebp, esp */
  EBP = (ESP);
  /* 10b07903 mov eax, dword ptr [0x10b2f6fc] */
  EAX = (r32((uint32_t)(0x10b2f6fc)));
  /* 10b07908 pop ebp */
  EBP = (pop32());
  /* 10b07909 ret  */
  ESPCHK(0x10b07900u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10b07910 (45 bytes, 19 insns) */
void f_10b07910(void) {
  FTRACE(0x10b07910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07910 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07911 mov ebp, esp */
  EBP = (ESP);
  /* 10b07913 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07914 mov eax, dword ptr [0x10b2f6fc] */
  EAX = (r32((uint32_t)(0x10b2f6fc)));
  /* 10b07919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0791c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07920 je 0x10b07930 */
  if (C.zf) goto L_10b07930;
  /* 10b07922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07925 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07926 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10b07929u);
  /* 10b07929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0792c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0792e jne 0x10b07934 */
  if (!C.zf) goto L_10b07934;
L_10b07930:;
  /* 10b07930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07932 jmp 0x10b07939 */
  goto L_10b07939;
L_10b07934:;
  /* 10b07934 mov eax, 1 */
  EAX = (0x1u);
L_10b07939:;
  /* 10b07939 mov esp, ebp */
  ESP = (EBP);
  /* 10b0793b pop ebp */
  EBP = (pop32());
  /* 10b0793c ret  */
  ESPCHK(0x10b07910u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10b07940 (88 bytes, 40 insns) */
void f_10b07940(void) {
  FTRACE(0x10b07940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07940 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b07944 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b07948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0794a je 0x10b07993 */
  if (C.zf) goto L_10b07993;
  /* 10b0794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0794e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b07952 push edi */
  push32((uint32_t)(EDI));
  /* 10b07953 mov edi, ecx */
  EDI = (ECX);
  /* 10b07955 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07958 jb 0x10b07987 */
  if (C.cf) goto L_10b07987;
  /* 10b0795a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0795c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0795f je 0x10b07969 */
  if (C.zf) goto L_10b07969;
  /* 10b07961 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b07963:;
  /* 10b07963 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b07965 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b07966 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b07967 jne 0x10b07963 */
  if (!C.zf) goto L_10b07963;
L_10b07969:;
  /* 10b07969 mov ecx, eax */
  ECX = (EAX);
  /* 10b0796b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b0796e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07970 mov ecx, eax */
  ECX = (EAX);
  /* 10b07972 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b07975 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07977 mov ecx, edx */
  ECX = (EDX);
  /* 10b07979 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0797c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0797f je 0x10b07987 */
  if (C.zf) goto L_10b07987;
  /* 10b07981 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b07983 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b07985 je 0x10b0798d */
  if (C.zf) goto L_10b0798d;
L_10b07987:;
  /* 10b07987 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b07989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b0798a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b0798b jne 0x10b07987 */
  if (!C.zf) goto L_10b07987;
L_10b0798d:;
  /* 10b0798d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b07991 pop edi */
  EDI = (pop32());
  /* 10b07992 ret  */
  ESPCHK(0x10b07940u, _esp0);
  ESP += 4; return;
L_10b07993:;
  /* 10b07993 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b07997 ret  */
  ESPCHK(0x10b07940u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x10b079a0 (23 bytes, 10 insns) */
void f_10b079a0(void) {
  FTRACE(0x10b079a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b079a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b079a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b079a3 mov eax, dword ptr [0x10b2f6f8] */
  EAX = (r32((uint32_t)(0x10b2f6f8)));
  /* 10b079a8 push eax */
  push32((uint32_t)(EAX));
  /* 10b079a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b079ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b079ad call 0x10b079c0 */
  push32(0x10b079b2u); f_10b079c0();
  /* 10b079b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b079b5 pop ebp */
  EBP = (pop32());
  /* 10b079b6 ret  */
  ESPCHK(0x10b079a0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10b079c0 (87 bytes, 34 insns) */
void f_10b079c0(void) {
  FTRACE(0x10b079c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b079c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b079c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b079c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b079c4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b079c8 jbe 0x10b079ce */
  if ((C.cf||C.zf)) goto L_10b079ce;
  /* 10b079ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b079cc jmp 0x10b07a13 */
  goto L_10b07a13;
L_10b079ce:;
  /* 10b079ce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b079d2 ja 0x10b079e5 */
  if ((!C.cf&&!C.zf)) goto L_10b079e5;
  /* 10b079d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b079d7 push eax */
  push32((uint32_t)(EAX));
  /* 10b079d8 call 0x10b07a20 */
  push32(0x10b079ddu); f_10b07a20();
  /* 10b079dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b079e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b079e3 jmp 0x10b079ec */
  goto L_10b079ec;
L_10b079e5:;
  /* 10b079e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b079ec:;
  /* 10b079ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b079f0 jne 0x10b079f8 */
  if (!C.zf) goto L_10b079f8;
  /* 10b079f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b079f6 jne 0x10b079fd */
  if (!C.zf) goto L_10b079fd;
L_10b079f8:;
  /* 10b079f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b079fb jmp 0x10b07a13 */
  goto L_10b07a13;
L_10b079fd:;
  /* 10b079fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07a01 call 0x10b07910 */
  push32(0x10b07a06u); f_10b07910();
  /* 10b07a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07a0b jne 0x10b07a11 */
  if (!C.zf) goto L_10b07a11;
  /* 10b07a0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07a0f jmp 0x10b07a13 */
  goto L_10b07a13;
L_10b07a11:;
  /* 10b07a11 jmp 0x10b079ce */
  goto L_10b079ce;
L_10b07a13:;
  /* 10b07a13 mov esp, ebp */
  ESP = (EBP);
  /* 10b07a15 pop ebp */
  EBP = (pop32());
  /* 10b07a16 ret  */
  ESPCHK(0x10b079c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x10b07a20 (109 bytes, 37 insns) */
void f_10b07a20(void) {
  FTRACE(0x10b07a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07a21 mov ebp, esp */
  EBP = (ESP);
  /* 10b07a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07a27 cmp eax, dword ptr [0x10b2dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07a2d ja 0x10b07a5d */
  if ((!C.cf&&!C.zf)) goto L_10b07a5d;
  /* 10b07a2f push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07a31 call 0x10b075d0 */
  push32(0x10b07a36u); f_10b075d0();
  /* 10b07a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07a39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10b07a3d call 0x10b08560 */
  push32(0x10b07a42u); f_10b08560();
  /* 10b07a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b07a48 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07a4a call 0x10b07670 */
  push32(0x10b07a4fu); f_10b07670();
  /* 10b07a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07a52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07a56 je 0x10b07a5d */
  if (C.zf) goto L_10b07a5d;
  /* 10b07a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07a5b jmp 0x10b07a89 */
  goto L_10b07a89;
L_10b07a5d:;
  /* 10b07a5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07a61 jne 0x10b07a6a */
  if (!C.zf) goto L_10b07a6a;
  /* 10b07a63 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10b07a6a:;
  /* 10b07a6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07a6d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07a70 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b07a73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b07a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07a79 push eax */
  push32((uint32_t)(EAX));
  /* 10b07a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07a7c mov ecx, dword ptr [0x10b30eac] */
  ECX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07a83 call dword ptr [0x10b32304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32304))), 0x10b07a89u);
L_10b07a89:;
  /* 10b07a89 mov esp, ebp */
  ESP = (EBP);
  /* 10b07a8b pop ebp */
  EBP = (pop32());
  /* 10b07a8c ret  */
  ESPCHK(0x10b07a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x10b07a90 (10 bytes, 5 insns) */
void f_10b07a90(void) {
  FTRACE(0x10b07a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07a91 mov ebp, esp */
  EBP = (ESP);
  /* 10b07a93 mov eax, 1 */
  EAX = (0x1u);
  /* 10b07a98 pop ebp */
  EBP = (pop32());
  /* 10b07a99 ret  */
  ESPCHK(0x10b07a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa0 @ 0x10b07aa0 (173 bytes, 59 insns) */
void f_10b07aa0(void) {
  FTRACE(0x10b07aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b07aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07aa6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07aaa jbe 0x10b07ab3 */
  if ((C.cf||C.zf)) goto L_10b07ab3;
  /* 10b07aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07aae jmp 0x10b07b49 */
  goto L_10b07b49;
L_10b07ab3:;
  /* 10b07ab3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07ab5 call 0x10b075d0 */
  push32(0x10b07abau); f_10b075d0();
  /* 10b07aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07abd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07ac0 push eax */
  push32((uint32_t)(EAX));
  /* 10b07ac1 call 0x10b07ed0 */
  push32(0x10b07ac6u); f_10b07ed0();
  /* 10b07ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07ac9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b07acc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07ad0 je 0x10b07b11 */
  if (C.zf) goto L_10b07b11;
  /* 10b07ad2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b07ad9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07adc cmp ecx, dword ptr [0x10b2dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07ae2 ja 0x10b07b02 */
  if ((!C.cf&&!C.zf)) goto L_10b07b02;
  /* 10b07ae4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10b07ae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07aeb push eax */
  push32((uint32_t)(EAX));
  /* 10b07aec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07aef push ecx */
  push32((uint32_t)(ECX));
  /* 10b07af0 call 0x10b08da0 */
  push32(0x10b07af5u); f_10b08da0();
  /* 10b07af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07afa je 0x10b07b02 */
  if (C.zf) goto L_10b07b02;
  /* 10b07afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07aff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b07b02:;
  /* 10b07b02 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07b04 call 0x10b07670 */
  push32(0x10b07b09u); f_10b07670();
  /* 10b07b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07b0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07b0f jmp 0x10b07b49 */
  goto L_10b07b49;
L_10b07b11:;
  /* 10b07b11 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07b13 call 0x10b07670 */
  push32(0x10b07b18u); f_10b07670();
  /* 10b07b18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07b1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07b1f jne 0x10b07b28 */
  if (!C.zf) goto L_10b07b28;
  /* 10b07b21 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b07b28:;
  /* 10b07b28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07b2b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07b2e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10b07b30 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b07b33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07b36 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07b3a push edx */
  push32((uint32_t)(EDX));
  /* 10b07b3b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b07b3d mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07b42 push eax */
  push32((uint32_t)(EAX));
  /* 10b07b43 call dword ptr [0x10b3230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3230c))), 0x10b07b49u);
L_10b07b49:;
  /* 10b07b49 mov esp, ebp */
  ESP = (EBP);
  /* 10b07b4b pop ebp */
  EBP = (pop32());
  /* 10b07b4c ret  */
  ESPCHK(0x10b07aa0u, _esp0);
  ESP += 4; return;
}

