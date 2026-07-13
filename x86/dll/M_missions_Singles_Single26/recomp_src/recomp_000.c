#include "recomp.h"

/* OnInit @ 0x11391005 (5 bytes, 1 insns) */
void f_11391005(void) {
  FTRACE(0x11391005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11391005 jmp 0x11391030 */
  f_11391030(); return;
}

/* thunk_FUN_10001d40 @ 0x1139100a (5 bytes, 1 insns) */
void f_1139100a(void) {
  FTRACE(0x1139100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139100a jmp 0x11391d40 */
  f_11391d40(); return;
}

/* ProcessScenary @ 0x1139100f (5 bytes, 1 insns) */
void f_1139100f(void) {
  FTRACE(0x1139100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139100f jmp 0x11391da0 */
  f_11391da0(); return;
}

/* FUN_10001030 @ 0x11391030 (2674 bytes, 701 insns) */
void f_11391030(void) {
  FTRACE(0x11391030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11391030 push ebp */
  push32((uint32_t)(EBP));
  /* 11391031 mov ebp, esp */
  EBP = (ESP);
  /* 11391033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11391036 push ebx */
  push32((uint32_t)(EBX));
  /* 11391037 push esi */
  push32((uint32_t)(ESI));
  /* 11391038 push edi */
  push32((uint32_t)(EDI));
  /* 11391039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1139103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11391041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11391046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11391048 mov esi, esp */
  ESI = (ESP);
  /* 1139104a push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 1139104f push 0x113c2468 */
  push32((uint32_t)(0x113c2468u));
  /* 11391054 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139105au);
  /* 1139105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139105f call 0x11395030 */
  push32(0x11391064u); f_11395030();
  /* 11391064 mov esi, esp */
  ESI = (ESP);
  /* 11391066 push 0x113bd31c */
  push32((uint32_t)(0x113bd31cu));
  /* 1139106b push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11391070 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391076u);
  /* 11391076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139107b call 0x11395030 */
  push32(0x11391080u); f_11395030();
  /* 11391080 mov esi, esp */
  ESI = (ESP);
  /* 11391082 push 0x113bd314 */
  push32((uint32_t)(0x113bd314u));
  /* 11391087 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 1139108c call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391092u);
  /* 11391092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391097 call 0x11395030 */
  push32(0x1139109cu); f_11395030();
  /* 1139109c mov esi, esp */
  ESI = (ESP);
  /* 1139109e push 0x113bd308 */
  push32((uint32_t)(0x113bd308u));
  /* 113910a3 push 0x113c24e0 */
  push32((uint32_t)(0x113c24e0u));
  /* 113910a8 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113910aeu);
  /* 113910ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113910b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113910b3 call 0x11395030 */
  push32(0x113910b8u); f_11395030();
  /* 113910b8 mov esi, esp */
  ESI = (ESP);
  /* 113910ba push 0x113bd2fc */
  push32((uint32_t)(0x113bd2fcu));
  /* 113910bf push 0x113c24d8 */
  push32((uint32_t)(0x113c24d8u));
  /* 113910c4 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113910cau);
  /* 113910ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113910cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113910cf call 0x11395030 */
  push32(0x113910d4u); f_11395030();
  /* 113910d4 mov esi, esp */
  ESI = (ESP);
  /* 113910d6 push 0x113bd2f0 */
  push32((uint32_t)(0x113bd2f0u));
  /* 113910db push 0x113c24d0 */
  push32((uint32_t)(0x113c24d0u));
  /* 113910e0 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113910e6u);
  /* 113910e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113910e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113910eb call 0x11395030 */
  push32(0x113910f0u); f_11395030();
  /* 113910f0 mov esi, esp */
  ESI = (ESP);
  /* 113910f2 push 0x113bd2e4 */
  push32((uint32_t)(0x113bd2e4u));
  /* 113910f7 push 0x113c24c8 */
  push32((uint32_t)(0x113c24c8u));
  /* 113910fc call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391102u);
  /* 11391102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391107 call 0x11395030 */
  push32(0x1139110cu); f_11395030();
  /* 1139110c mov esi, esp */
  ESI = (ESP);
  /* 1139110e push 0x113bd2d8 */
  push32((uint32_t)(0x113bd2d8u));
  /* 11391113 push 0x113c24c0 */
  push32((uint32_t)(0x113c24c0u));
  /* 11391118 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139111eu);
  /* 1139111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391123 call 0x11395030 */
  push32(0x11391128u); f_11395030();
  /* 11391128 mov esi, esp */
  ESI = (ESP);
  /* 1139112a push 0x113bd2cc */
  push32((uint32_t)(0x113bd2ccu));
  /* 1139112f push 0x113c24e8 */
  push32((uint32_t)(0x113c24e8u));
  /* 11391134 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139113au);
  /* 1139113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139113f call 0x11395030 */
  push32(0x11391144u); f_11395030();
  /* 11391144 mov esi, esp */
  ESI = (ESP);
  /* 11391146 push 0x113bd2bc */
  push32((uint32_t)(0x113bd2bcu));
  /* 1139114b push 0x113c25b8 */
  push32((uint32_t)(0x113c25b8u));
  /* 11391150 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391156u);
  /* 11391156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139115b call 0x11395030 */
  push32(0x11391160u); f_11395030();
  /* 11391160 mov esi, esp */
  ESI = (ESP);
  /* 11391162 push 0x113bd2b0 */
  push32((uint32_t)(0x113bd2b0u));
  /* 11391167 push 0x113c2498 */
  push32((uint32_t)(0x113c2498u));
  /* 1139116c call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391172u);
  /* 11391172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391177 call 0x11395030 */
  push32(0x1139117cu); f_11395030();
  /* 1139117c mov esi, esp */
  ESI = (ESP);
  /* 1139117e push 0x113bd2a0 */
  push32((uint32_t)(0x113bd2a0u));
  /* 11391183 push 0x113c25c0 */
  push32((uint32_t)(0x113c25c0u));
  /* 11391188 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139118eu);
  /* 1139118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391193 call 0x11395030 */
  push32(0x11391198u); f_11395030();
  /* 11391198 mov esi, esp */
  ESI = (ESP);
  /* 1139119a push 0x113bd294 */
  push32((uint32_t)(0x113bd294u));
  /* 1139119f push 0x113c2490 */
  push32((uint32_t)(0x113c2490u));
  /* 113911a4 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113911aau);
  /* 113911aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113911ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113911af call 0x11395030 */
  push32(0x113911b4u); f_11395030();
  /* 113911b4 mov esi, esp */
  ESI = (ESP);
  /* 113911b6 push 0x113bd28c */
  push32((uint32_t)(0x113bd28cu));
  /* 113911bb push 0x113c2620 */
  push32((uint32_t)(0x113c2620u));
  /* 113911c0 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113911c6u);
  /* 113911c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113911c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113911cb call 0x11395030 */
  push32(0x113911d0u); f_11395030();
  /* 113911d0 mov esi, esp */
  ESI = (ESP);
  /* 113911d2 push 0x113bd280 */
  push32((uint32_t)(0x113bd280u));
  /* 113911d7 push 0x113c2540 */
  push32((uint32_t)(0x113c2540u));
  /* 113911dc call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113911e2u);
  /* 113911e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113911e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113911e7 call 0x11395030 */
  push32(0x113911ecu); f_11395030();
  /* 113911ec mov esi, esp */
  ESI = (ESP);
  /* 113911ee push 0x113bd278 */
  push32((uint32_t)(0x113bd278u));
  /* 113911f3 push 0x113c2560 */
  push32((uint32_t)(0x113c2560u));
  /* 113911f8 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113911feu);
  /* 113911fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391203 call 0x11395030 */
  push32(0x11391208u); f_11395030();
  /* 11391208 mov esi, esp */
  ESI = (ESP);
  /* 1139120a push 0x113bd270 */
  push32((uint32_t)(0x113bd270u));
  /* 1139120f push 0x113c2568 */
  push32((uint32_t)(0x113c2568u));
  /* 11391214 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139121au);
  /* 1139121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139121f call 0x11395030 */
  push32(0x11391224u); f_11395030();
  /* 11391224 mov esi, esp */
  ESI = (ESP);
  /* 11391226 push 0x113bd268 */
  push32((uint32_t)(0x113bd268u));
  /* 1139122b push 0x113c2570 */
  push32((uint32_t)(0x113c2570u));
  /* 11391230 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391236u);
  /* 11391236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139123b call 0x11395030 */
  push32(0x11391240u); f_11395030();
  /* 11391240 mov esi, esp */
  ESI = (ESP);
  /* 11391242 push 0x113bd260 */
  push32((uint32_t)(0x113bd260u));
  /* 11391247 push 0x113c2578 */
  push32((uint32_t)(0x113c2578u));
  /* 1139124c call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391252u);
  /* 11391252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391257 call 0x11395030 */
  push32(0x1139125cu); f_11395030();
  /* 1139125c mov esi, esp */
  ESI = (ESP);
  /* 1139125e push 0x113bd258 */
  push32((uint32_t)(0x113bd258u));
  /* 11391263 push 0x113c2580 */
  push32((uint32_t)(0x113c2580u));
  /* 11391268 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139126eu);
  /* 1139126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391273 call 0x11395030 */
  push32(0x11391278u); f_11395030();
  /* 11391278 mov esi, esp */
  ESI = (ESP);
  /* 1139127a push 0x113bd250 */
  push32((uint32_t)(0x113bd250u));
  /* 1139127f push 0x113c2588 */
  push32((uint32_t)(0x113c2588u));
  /* 11391284 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139128au);
  /* 1139128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139128f call 0x11395030 */
  push32(0x11391294u); f_11395030();
  /* 11391294 mov esi, esp */
  ESI = (ESP);
  /* 11391296 push 0x113bd248 */
  push32((uint32_t)(0x113bd248u));
  /* 1139129b push 0x113c2668 */
  push32((uint32_t)(0x113c2668u));
  /* 113912a0 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113912a6u);
  /* 113912a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113912a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113912ab call 0x11395030 */
  push32(0x113912b0u); f_11395030();
  /* 113912b0 mov esi, esp */
  ESI = (ESP);
  /* 113912b2 push 0x113bd240 */
  push32((uint32_t)(0x113bd240u));
  /* 113912b7 push 0x113c23e0 */
  push32((uint32_t)(0x113c23e0u));
  /* 113912bc call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113912c2u);
  /* 113912c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113912c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113912c7 call 0x11395030 */
  push32(0x113912ccu); f_11395030();
  /* 113912cc mov esi, esp */
  ESI = (ESP);
  /* 113912ce push 0x113bd238 */
  push32((uint32_t)(0x113bd238u));
  /* 113912d3 push 0x113c2480 */
  push32((uint32_t)(0x113c2480u));
  /* 113912d8 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113912deu);
  /* 113912de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113912e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113912e3 call 0x11395030 */
  push32(0x113912e8u); f_11395030();
  /* 113912e8 mov esi, esp */
  ESI = (ESP);
  /* 113912ea push 0x113bd22c */
  push32((uint32_t)(0x113bd22cu));
  /* 113912ef push 0x113c2630 */
  push32((uint32_t)(0x113c2630u));
  /* 113912f4 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113912fau);
  /* 113912fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113912fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113912ff call 0x11395030 */
  push32(0x11391304u); f_11395030();
  /* 11391304 mov esi, esp */
  ESI = (ESP);
  /* 11391306 push 0x113bd220 */
  push32((uint32_t)(0x113bd220u));
  /* 1139130b push 0x113c2628 */
  push32((uint32_t)(0x113c2628u));
  /* 11391310 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391316u);
  /* 11391316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139131b call 0x11395030 */
  push32(0x11391320u); f_11395030();
  /* 11391320 mov esi, esp */
  ESI = (ESP);
  /* 11391322 push 0x113bd218 */
  push32((uint32_t)(0x113bd218u));
  /* 11391327 push 0x113c24b0 */
  push32((uint32_t)(0x113c24b0u));
  /* 1139132c call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391332u);
  /* 11391332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391337 call 0x11395030 */
  push32(0x1139133cu); f_11395030();
  /* 1139133c mov esi, esp */
  ESI = (ESP);
  /* 1139133e push 0x113bd210 */
  push32((uint32_t)(0x113bd210u));
  /* 11391343 push 0x113c2638 */
  push32((uint32_t)(0x113c2638u));
  /* 11391348 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139134eu);
  /* 1139134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391353 call 0x11395030 */
  push32(0x11391358u); f_11395030();
  /* 11391358 mov esi, esp */
  ESI = (ESP);
  /* 1139135a push 0x113bd208 */
  push32((uint32_t)(0x113bd208u));
  /* 1139135f push 0x113c2618 */
  push32((uint32_t)(0x113c2618u));
  /* 11391364 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x1139136au);
  /* 1139136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139136f call 0x11395030 */
  push32(0x11391374u); f_11395030();
  /* 11391374 mov esi, esp */
  ESI = (ESP);
  /* 11391376 push 0x113bd200 */
  push32((uint32_t)(0x113bd200u));
  /* 1139137b push 0x113c2610 */
  push32((uint32_t)(0x113c2610u));
  /* 11391380 call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x11391386u);
  /* 11391386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139138b call 0x11395030 */
  push32(0x11391390u); f_11395030();
  /* 11391390 mov esi, esp */
  ESI = (ESP);
  /* 11391392 push 0x113bd1f8 */
  push32((uint32_t)(0x113bd1f8u));
  /* 11391397 push 0x113c2460 */
  push32((uint32_t)(0x113c2460u));
  /* 1139139c call dword ptr [0x113c5504] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5504))), 0x113913a2u);
  /* 113913a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113913a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113913a7 call 0x11395030 */
  push32(0x113913acu); f_11395030();
  /* 113913ac mov esi, esp */
  ESI = (ESP);
  /* 113913ae push 0x113bd1f0 */
  push32((uint32_t)(0x113bd1f0u));
  /* 113913b3 push 0x113c2598 */
  push32((uint32_t)(0x113c2598u));
  /* 113913b8 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113913beu);
  /* 113913be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113913c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113913c3 call 0x11395030 */
  push32(0x113913c8u); f_11395030();
  /* 113913c8 mov esi, esp */
  ESI = (ESP);
  /* 113913ca push 0x113bd1e8 */
  push32((uint32_t)(0x113bd1e8u));
  /* 113913cf push 0x113c24f8 */
  push32((uint32_t)(0x113c24f8u));
  /* 113913d4 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113913dau);
  /* 113913da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113913dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113913df call 0x11395030 */
  push32(0x113913e4u); f_11395030();
  /* 113913e4 mov esi, esp */
  ESI = (ESP);
  /* 113913e6 push 0x113bd1dc */
  push32((uint32_t)(0x113bd1dcu));
  /* 113913eb push 0x113c2640 */
  push32((uint32_t)(0x113c2640u));
  /* 113913f0 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113913f6u);
  /* 113913f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113913f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113913fb call 0x11395030 */
  push32(0x11391400u); f_11395030();
  /* 11391400 mov esi, esp */
  ESI = (ESP);
  /* 11391402 push 0x113bd1d0 */
  push32((uint32_t)(0x113bd1d0u));
  /* 11391407 push 0x113c2648 */
  push32((uint32_t)(0x113c2648u));
  /* 1139140c call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x11391412u);
  /* 11391412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391417 call 0x11395030 */
  push32(0x1139141cu); f_11395030();
  /* 1139141c mov esi, esp */
  ESI = (ESP);
  /* 1139141e push 0x113bd1c8 */
  push32((uint32_t)(0x113bd1c8u));
  /* 11391423 push 0x113c25a0 */
  push32((uint32_t)(0x113c25a0u));
  /* 11391428 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139142eu);
  /* 1139142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391433 call 0x11395030 */
  push32(0x11391438u); f_11395030();
  /* 11391438 mov esi, esp */
  ESI = (ESP);
  /* 1139143a push 0x113bd1bc */
  push32((uint32_t)(0x113bd1bcu));
  /* 1139143f push 0x113c2650 */
  push32((uint32_t)(0x113c2650u));
  /* 11391444 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139144au);
  /* 1139144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139144f call 0x11395030 */
  push32(0x11391454u); f_11395030();
  /* 11391454 mov esi, esp */
  ESI = (ESP);
  /* 11391456 push 0x113bd1b0 */
  push32((uint32_t)(0x113bd1b0u));
  /* 1139145b push 0x113c2658 */
  push32((uint32_t)(0x113c2658u));
  /* 11391460 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x11391466u);
  /* 11391466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139146b call 0x11395030 */
  push32(0x11391470u); f_11395030();
  /* 11391470 mov esi, esp */
  ESI = (ESP);
  /* 11391472 push 0x113bd1a8 */
  push32((uint32_t)(0x113bd1a8u));
  /* 11391477 push 0x113c2550 */
  push32((uint32_t)(0x113c2550u));
  /* 1139147c call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x11391482u);
  /* 11391482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391487 call 0x11395030 */
  push32(0x1139148cu); f_11395030();
  /* 1139148c mov esi, esp */
  ESI = (ESP);
  /* 1139148e push 0x113bd1a0 */
  push32((uint32_t)(0x113bd1a0u));
  /* 11391493 push 0x113c2558 */
  push32((uint32_t)(0x113c2558u));
  /* 11391498 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139149eu);
  /* 1139149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113914a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113914a3 call 0x11395030 */
  push32(0x113914a8u); f_11395030();
  /* 113914a8 mov esi, esp */
  ESI = (ESP);
  /* 113914aa push 0x113bd198 */
  push32((uint32_t)(0x113bd198u));
  /* 113914af push 0x113c25d8 */
  push32((uint32_t)(0x113c25d8u));
  /* 113914b4 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113914bau);
  /* 113914ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113914bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113914bf call 0x11395030 */
  push32(0x113914c4u); f_11395030();
  /* 113914c4 mov esi, esp */
  ESI = (ESP);
  /* 113914c6 push 0x113bd190 */
  push32((uint32_t)(0x113bd190u));
  /* 113914cb push 0x113c25e0 */
  push32((uint32_t)(0x113c25e0u));
  /* 113914d0 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113914d6u);
  /* 113914d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113914d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113914db call 0x11395030 */
  push32(0x113914e0u); f_11395030();
  /* 113914e0 mov esi, esp */
  ESI = (ESP);
  /* 113914e2 push 0x113bd188 */
  push32((uint32_t)(0x113bd188u));
  /* 113914e7 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 113914ec call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113914f2u);
  /* 113914f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113914f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113914f7 call 0x11395030 */
  push32(0x113914fcu); f_11395030();
  /* 113914fc mov esi, esp */
  ESI = (ESP);
  /* 113914fe push 0x113bd180 */
  push32((uint32_t)(0x113bd180u));
  /* 11391503 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11391508 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139150eu);
  /* 1139150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391513 call 0x11395030 */
  push32(0x11391518u); f_11395030();
  /* 11391518 mov esi, esp */
  ESI = (ESP);
  /* 1139151a push 0x113bd174 */
  push32((uint32_t)(0x113bd174u));
  /* 1139151f push 0x113c25b0 */
  push32((uint32_t)(0x113c25b0u));
  /* 11391524 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139152au);
  /* 1139152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139152f call 0x11395030 */
  push32(0x11391534u); f_11395030();
  /* 11391534 mov esi, esp */
  ESI = (ESP);
  /* 11391536 push 0x113bd168 */
  push32((uint32_t)(0x113bd168u));
  /* 1139153b push 0x113c25a8 */
  push32((uint32_t)(0x113c25a8u));
  /* 11391540 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x11391546u);
  /* 11391546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139154b call 0x11395030 */
  push32(0x11391550u); f_11395030();
  /* 11391550 mov esi, esp */
  ESI = (ESP);
  /* 11391552 push 0x113bd15c */
  push32((uint32_t)(0x113bd15cu));
  /* 11391557 push 0x113c25c8 */
  push32((uint32_t)(0x113c25c8u));
  /* 1139155c call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x11391562u);
  /* 11391562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391567 call 0x11395030 */
  push32(0x1139156cu); f_11395030();
  /* 1139156c mov esi, esp */
  ESI = (ESP);
  /* 1139156e push 0x113bd150 */
  push32((uint32_t)(0x113bd150u));
  /* 11391573 push 0x113c25d0 */
  push32((uint32_t)(0x113c25d0u));
  /* 11391578 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139157eu);
  /* 1139157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391583 call 0x11395030 */
  push32(0x11391588u); f_11395030();
  /* 11391588 mov esi, esp */
  ESI = (ESP);
  /* 1139158a push 0x113bd148 */
  push32((uint32_t)(0x113bd148u));
  /* 1139158f push 0x113c24b8 */
  push32((uint32_t)(0x113c24b8u));
  /* 11391594 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x1139159au);
  /* 1139159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139159f call 0x11395030 */
  push32(0x113915a4u); f_11395030();
  /* 113915a4 mov esi, esp */
  ESI = (ESP);
  /* 113915a6 push 0x113bd13c */
  push32((uint32_t)(0x113bd13cu));
  /* 113915ab push 0x113c2450 */
  push32((uint32_t)(0x113c2450u));
  /* 113915b0 call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113915b6u);
  /* 113915b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113915b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113915bb call 0x11395030 */
  push32(0x113915c0u); f_11395030();
  /* 113915c0 mov esi, esp */
  ESI = (ESP);
  /* 113915c2 push 0x113bd130 */
  push32((uint32_t)(0x113bd130u));
  /* 113915c7 push 0x113c2458 */
  push32((uint32_t)(0x113c2458u));
  /* 113915cc call dword ptr [0x113c5508] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5508))), 0x113915d2u);
  /* 113915d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113915d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113915d7 call 0x11395030 */
  push32(0x113915dcu); f_11395030();
  /* 113915dc mov esi, esp */
  ESI = (ESP);
  /* 113915de push 0x113bd11c */
  push32((uint32_t)(0x113bd11cu));
  /* 113915e3 push 0x113c2470 */
  push32((uint32_t)(0x113c2470u));
  /* 113915e8 call dword ptr [0x113c550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c550c))), 0x113915eeu);
  /* 113915ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113915f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113915f3 call 0x11395030 */
  push32(0x113915f8u); f_11395030();
  /* 113915f8 mov esi, esp */
  ESI = (ESP);
  /* 113915fa push 0x113bd104 */
  push32((uint32_t)(0x113bd104u));
  /* 113915ff push 0x113c2508 */
  push32((uint32_t)(0x113c2508u));
  /* 11391604 call dword ptr [0x113c550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c550c))), 0x1139160au);
  /* 1139160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139160f call 0x11395030 */
  push32(0x11391614u); f_11395030();
  /* 11391614 mov esi, esp */
  ESI = (ESP);
  /* 11391616 push 0x113bd0f8 */
  push32((uint32_t)(0x113bd0f8u));
  /* 1139161b push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11391620 call dword ptr [0x113c550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c550c))), 0x11391626u);
  /* 11391626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139162b call 0x11395030 */
  push32(0x11391630u); f_11395030();
  /* 11391630 mov esi, esp */
  ESI = (ESP);
  /* 11391632 push 0x113bd0e8 */
  push32((uint32_t)(0x113bd0e8u));
  /* 11391637 push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 1139163c call dword ptr [0x113c550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c550c))), 0x11391642u);
  /* 11391642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391647 call 0x11395030 */
  push32(0x1139164cu); f_11395030();
  /* 1139164c mov esi, esp */
  ESI = (ESP);
  /* 1139164e push 0x113bd0d8 */
  push32((uint32_t)(0x113bd0d8u));
  /* 11391653 push 0x113c23f8 */
  push32((uint32_t)(0x113c23f8u));
  /* 11391658 call dword ptr [0x113c550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c550c))), 0x1139165eu);
  /* 1139165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391663 call 0x11395030 */
  push32(0x11391668u); f_11395030();
  /* 11391668 mov esi, esp */
  ESI = (ESP);
  /* 1139166a push 8 */
  push32((uint32_t)(0x8u));
  /* 1139166c push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 11391671 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x11391677u);
  /* 11391677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139167c call 0x11395030 */
  push32(0x11391681u); f_11395030();
  /* 11391681 mov esi, esp */
  ESI = (ESP);
  /* 11391683 push 8 */
  push32((uint32_t)(0x8u));
  /* 11391685 push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 1139168a call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x11391690u);
  /* 11391690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391695 call 0x11395030 */
  push32(0x1139169au); f_11395030();
  /* 1139169a mov esi, esp */
  ESI = (ESP);
  /* 1139169c push 8 */
  push32((uint32_t)(0x8u));
  /* 1139169e push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 113916a3 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x113916a9u);
  /* 113916a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113916ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113916ae call 0x11395030 */
  push32(0x113916b3u); f_11395030();
  /* 113916b3 mov esi, esp */
  ESI = (ESP);
  /* 113916b5 push 8 */
  push32((uint32_t)(0x8u));
  /* 113916b7 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 113916bc call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x113916c2u);
  /* 113916c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113916c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113916c7 call 0x11395030 */
  push32(0x113916ccu); f_11395030();
  /* 113916cc mov esi, esp */
  ESI = (ESP);
  /* 113916ce push 8 */
  push32((uint32_t)(0x8u));
  /* 113916d0 push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 113916d5 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x113916dbu);
  /* 113916db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113916de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113916e0 call 0x11395030 */
  push32(0x113916e5u); f_11395030();
  /* 113916e5 mov esi, esp */
  ESI = (ESP);
  /* 113916e7 push 8 */
  push32((uint32_t)(0x8u));
  /* 113916e9 push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 113916ee call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x113916f4u);
  /* 113916f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113916f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113916f9 call 0x11395030 */
  push32(0x113916feu); f_11395030();
  /* 113916fe mov esi, esp */
  ESI = (ESP);
  /* 11391700 push 8 */
  push32((uint32_t)(0x8u));
  /* 11391702 push 0x113c2420 */
  push32((uint32_t)(0x113c2420u));
  /* 11391707 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x1139170du);
  /* 1139170d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391712 call 0x11395030 */
  push32(0x11391717u); f_11395030();
  /* 11391717 mov esi, esp */
  ESI = (ESP);
  /* 11391719 push 8 */
  push32((uint32_t)(0x8u));
  /* 1139171b push 0x113c2418 */
  push32((uint32_t)(0x113c2418u));
  /* 11391720 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x11391726u);
  /* 11391726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139172b call 0x11395030 */
  push32(0x11391730u); f_11395030();
  /* 11391730 mov esi, esp */
  ESI = (ESP);
  /* 11391732 push 8 */
  push32((uint32_t)(0x8u));
  /* 11391734 push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 11391739 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x1139173fu);
  /* 1139173f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391744 call 0x11395030 */
  push32(0x11391749u); f_11395030();
  /* 11391749 mov esi, esp */
  ESI = (ESP);
  /* 1139174b push 8 */
  push32((uint32_t)(0x8u));
  /* 1139174d push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 11391752 call dword ptr [0x113c5510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5510))), 0x11391758u);
  /* 11391758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139175b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139175d call 0x11395030 */
  push32(0x11391762u); f_11395030();
  /* 11391762 mov esi, esp */
  ESI = (ESP);
  /* 11391764 push 0x113bd0d0 */
  push32((uint32_t)(0x113bd0d0u));
  /* 11391769 push 0x113c2608 */
  push32((uint32_t)(0x113c2608u));
  /* 1139176e call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391774u);
  /* 11391774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391779 call 0x11395030 */
  push32(0x1139177eu); f_11395030();
  /* 1139177e mov esi, esp */
  ESI = (ESP);
  /* 11391780 push 0x113bd0c0 */
  push32((uint32_t)(0x113bd0c0u));
  /* 11391785 push 0x113c2510 */
  push32((uint32_t)(0x113c2510u));
  /* 1139178a call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391790u);
  /* 11391790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391795 call 0x11395030 */
  push32(0x1139179au); f_11395030();
  /* 1139179a mov esi, esp */
  ESI = (ESP);
  /* 1139179c push 0x113bd0b0 */
  push32((uint32_t)(0x113bd0b0u));
  /* 113917a1 push 0x113c2520 */
  push32((uint32_t)(0x113c2520u));
  /* 113917a6 call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x113917acu);
  /* 113917ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113917af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113917b1 call 0x11395030 */
  push32(0x113917b6u); f_11395030();
  /* 113917b6 mov esi, esp */
  ESI = (ESP);
  /* 113917b8 push 0x113bd0a0 */
  push32((uint32_t)(0x113bd0a0u));
  /* 113917bd push 0x113c2528 */
  push32((uint32_t)(0x113c2528u));
  /* 113917c2 call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x113917c8u);
  /* 113917c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113917cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113917cd call 0x11395030 */
  push32(0x113917d2u); f_11395030();
  /* 113917d2 mov esi, esp */
  ESI = (ESP);
  /* 113917d4 push 0x113bd090 */
  push32((uint32_t)(0x113bd090u));
  /* 113917d9 push 0x113c2518 */
  push32((uint32_t)(0x113c2518u));
  /* 113917de call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x113917e4u);
  /* 113917e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113917e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113917e9 call 0x11395030 */
  push32(0x113917eeu); f_11395030();
  /* 113917ee mov esi, esp */
  ESI = (ESP);
  /* 113917f0 push 0x113bd080 */
  push32((uint32_t)(0x113bd080u));
  /* 113917f5 push 0x113c2500 */
  push32((uint32_t)(0x113c2500u));
  /* 113917fa call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391800u);
  /* 11391800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391805 call 0x11395030 */
  push32(0x1139180au); f_11395030();
  /* 1139180a mov esi, esp */
  ESI = (ESP);
  /* 1139180c push 0x113bd078 */
  push32((uint32_t)(0x113bd078u));
  /* 11391811 push 0x113c2600 */
  push32((uint32_t)(0x113c2600u));
  /* 11391816 call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x1139181cu);
  /* 1139181c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139181f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391821 call 0x11395030 */
  push32(0x11391826u); f_11395030();
  /* 11391826 mov esi, esp */
  ESI = (ESP);
  /* 11391828 push 0x113bd06c */
  push32((uint32_t)(0x113bd06cu));
  /* 1139182d push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11391832 call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391838u);
  /* 11391838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139183b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139183d call 0x11395030 */
  push32(0x11391842u); f_11395030();
  /* 11391842 mov esi, esp */
  ESI = (ESP);
  /* 11391844 push 0x113bd060 */
  push32((uint32_t)(0x113bd060u));
  /* 11391849 push 0x113c23f0 */
  push32((uint32_t)(0x113c23f0u));
  /* 1139184e call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391854u);
  /* 11391854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391859 call 0x11395030 */
  push32(0x1139185eu); f_11395030();
  /* 1139185e mov esi, esp */
  ESI = (ESP);
  /* 11391860 push 0x113bd058 */
  push32((uint32_t)(0x113bd058u));
  /* 11391865 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 1139186a call dword ptr [0x113c5514] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5514))), 0x11391870u);
  /* 11391870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391875 call 0x11395030 */
  push32(0x1139187au); f_11395030();
  /* 1139187a mov esi, esp */
  ESI = (ESP);
  /* 1139187c push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 11391881 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x11391887u);
  /* 11391887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139188a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139188c call 0x11395030 */
  push32(0x11391891u); f_11395030();
  /* 11391891 mov esi, esp */
  ESI = (ESP);
  /* 11391893 push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 11391898 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x1139189eu);
  /* 1139189e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113918a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113918a3 call 0x11395030 */
  push32(0x113918a8u); f_11395030();
  /* 113918a8 mov esi, esp */
  ESI = (ESP);
  /* 113918aa push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 113918af call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x113918b5u);
  /* 113918b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113918b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113918ba call 0x11395030 */
  push32(0x113918bfu); f_11395030();
  /* 113918bf mov esi, esp */
  ESI = (ESP);
  /* 113918c1 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 113918c6 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x113918ccu);
  /* 113918cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113918cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113918d1 call 0x11395030 */
  push32(0x113918d6u); f_11395030();
  /* 113918d6 mov esi, esp */
  ESI = (ESP);
  /* 113918d8 push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 113918dd call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x113918e3u);
  /* 113918e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113918e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113918e8 call 0x11395030 */
  push32(0x113918edu); f_11395030();
  /* 113918ed mov esi, esp */
  ESI = (ESP);
  /* 113918ef push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 113918f4 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x113918fau);
  /* 113918fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113918fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113918ff call 0x11395030 */
  push32(0x11391904u); f_11395030();
  /* 11391904 mov esi, esp */
  ESI = (ESP);
  /* 11391906 push 0x113c2420 */
  push32((uint32_t)(0x113c2420u));
  /* 1139190b call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x11391911u);
  /* 11391911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391914 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391916 call 0x11395030 */
  push32(0x1139191bu); f_11395030();
  /* 1139191b mov esi, esp */
  ESI = (ESP);
  /* 1139191d push 0x113c2418 */
  push32((uint32_t)(0x113c2418u));
  /* 11391922 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x11391928u);
  /* 11391928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139192b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139192d call 0x11395030 */
  push32(0x11391932u); f_11395030();
  /* 11391932 mov esi, esp */
  ESI = (ESP);
  /* 11391934 push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 11391939 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x1139193fu);
  /* 1139193f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391944 call 0x11395030 */
  push32(0x11391949u); f_11395030();
  /* 11391949 mov esi, esp */
  ESI = (ESP);
  /* 1139194b push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 11391950 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x11391956u);
  /* 11391956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139195b call 0x11395030 */
  push32(0x11391960u); f_11395030();
  /* 11391960 mov esi, esp */
  ESI = (ESP);
  /* 11391962 push 0x113c25f8 */
  push32((uint32_t)(0x113c25f8u));
  /* 11391967 call dword ptr [0x113c5518] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5518))), 0x1139196du);
  /* 1139196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391972 call 0x11395030 */
  push32(0x11391977u); f_11395030();
  /* 11391977 mov esi, esp */
  ESI = (ESP);
  /* 11391979 push 0x113bd050 */
  push32((uint32_t)(0x113bd050u));
  /* 1139197e push 1 */
  push32((uint32_t)(0x1u));
  /* 11391980 call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x11391986u);
  /* 11391986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391989 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139198b call 0x11395030 */
  push32(0x11391990u); f_11395030();
  /* 11391990 mov esi, esp */
  ESI = (ESP);
  /* 11391992 push 0x113bd044 */
  push32((uint32_t)(0x113bd044u));
  /* 11391997 push 2 */
  push32((uint32_t)(0x2u));
  /* 11391999 call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x1139199fu);
  /* 1139199f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113919a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113919a4 call 0x11395030 */
  push32(0x113919a9u); f_11395030();
  /* 113919a9 mov esi, esp */
  ESI = (ESP);
  /* 113919ab push 0x113bd03c */
  push32((uint32_t)(0x113bd03cu));
  /* 113919b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 113919b2 call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x113919b8u);
  /* 113919b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113919bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113919bd call 0x11395030 */
  push32(0x113919c2u); f_11395030();
  /* 113919c2 mov esi, esp */
  ESI = (ESP);
  /* 113919c4 push 0x113bd030 */
  push32((uint32_t)(0x113bd030u));
  /* 113919c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 113919cb call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x113919d1u);
  /* 113919d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113919d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113919d6 call 0x11395030 */
  push32(0x113919dbu); f_11395030();
  /* 113919db mov esi, esp */
  ESI = (ESP);
  /* 113919dd push 0x113bd024 */
  push32((uint32_t)(0x113bd024u));
  /* 113919e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 113919e4 call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x113919eau);
  /* 113919ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113919ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113919ef call 0x11395030 */
  push32(0x113919f4u); f_11395030();
  /* 113919f4 mov esi, esp */
  ESI = (ESP);
  /* 113919f6 push 0x113bd01c */
  push32((uint32_t)(0x113bd01cu));
  /* 113919fb push 6 */
  push32((uint32_t)(0x6u));
  /* 113919fd call dword ptr [0x113c551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c551c))), 0x11391a03u);
  /* 11391a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a08 call 0x11395030 */
  push32(0x11391a0du); f_11395030();
  /* 11391a0d mov esi, esp */
  ESI = (ESP);
  /* 11391a0f push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11391a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11391a13 call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a19u);
  /* 11391a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a1e call 0x11395030 */
  push32(0x11391a23u); f_11395030();
  /* 11391a23 mov esi, esp */
  ESI = (ESP);
  /* 11391a25 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11391a27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11391a29 call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a2fu);
  /* 11391a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a34 call 0x11395030 */
  push32(0x11391a39u); f_11395030();
  /* 11391a39 mov esi, esp */
  ESI = (ESP);
  /* 11391a3b push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11391a3d push 3 */
  push32((uint32_t)(0x3u));
  /* 11391a3f call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a45u);
  /* 11391a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a4a call 0x11395030 */
  push32(0x11391a4fu); f_11395030();
  /* 11391a4f mov esi, esp */
  ESI = (ESP);
  /* 11391a51 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11391a53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11391a55 call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a5bu);
  /* 11391a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a60 call 0x11395030 */
  push32(0x11391a65u); f_11395030();
  /* 11391a65 mov esi, esp */
  ESI = (ESP);
  /* 11391a67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11391a69 push 5 */
  push32((uint32_t)(0x5u));
  /* 11391a6b call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a71u);
  /* 11391a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a76 call 0x11395030 */
  push32(0x11391a7bu); f_11395030();
  /* 11391a7b mov esi, esp */
  ESI = (ESP);
  /* 11391a7d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11391a7f push 6 */
  push32((uint32_t)(0x6u));
  /* 11391a81 call dword ptr [0x113c5520] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5520))), 0x11391a87u);
  /* 11391a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a8c call 0x11395030 */
  push32(0x11391a91u); f_11395030();
  /* 11391a91 pop edi */
  EDI = (pop32());
  /* 11391a92 pop esi */
  ESI = (pop32());
  /* 11391a93 pop ebx */
  EBX = (pop32());
  /* 11391a94 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391a97 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391a99 call 0x11395030 */
  push32(0x11391a9eu); f_11395030();
  /* 11391a9e mov esp, ebp */
  ESP = (EBP);
  /* 11391aa0 pop ebp */
  EBP = (pop32());
  /* 11391aa1 ret  */
  ESPCHK(0x11391030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d40 @ 0x11391d40 (67 bytes, 26 insns) */
void f_11391d40(void) {
  FTRACE(0x11391d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11391d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11391d41 mov ebp, esp */
  EBP = (ESP);
  /* 11391d43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11391d46 push ebx */
  push32((uint32_t)(EBX));
  /* 11391d47 push esi */
  push32((uint32_t)(ESI));
  /* 11391d48 push edi */
  push32((uint32_t)(EDI));
  /* 11391d49 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11391d4c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11391d51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11391d56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11391d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11391d5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11391d5e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391d62 je 0x11391d66 */
  if (C.zf) goto L_11391d66;
  /* 11391d64 jmp 0x11391d6b */
  goto L_11391d6b;
L_11391d66:;
  /* 11391d66 call 0x11391005 */
  push32(0x11391d6bu); f_11391005();
L_11391d6b:;
  /* 11391d6b mov eax, 1 */
  EAX = (0x1u);
  /* 11391d70 pop edi */
  EDI = (pop32());
  /* 11391d71 pop esi */
  ESI = (pop32());
  /* 11391d72 pop ebx */
  EBX = (pop32());
  /* 11391d73 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391d76 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391d78 call 0x11395030 */
  push32(0x11391d7du); f_11395030();
  /* 11391d7d mov esp, ebp */
  ESP = (EBP);
  /* 11391d7f pop ebp */
  EBP = (pop32());
  /* 11391d80 ret 0xc */
  ESPCHK(0x11391d40u, _esp0);
  ESP += 16; return;
}

/* FUN_10001da0 @ 0x11391da0 (10067 bytes, 2886 insns) [3 switch table(s)] */
void f_11391da0(void) {
  FTRACE(0x11391da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11391da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11391da1 mov ebp, esp */
  EBP = (ESP);
  /* 11391da3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11391da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11391da7 push esi */
  push32((uint32_t)(ESI));
  /* 11391da8 push edi */
  push32((uint32_t)(EDI));
  /* 11391da9 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11391dac mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11391db1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11391db6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11391db8 mov esi, esp */
  ESI = (ESP);
  /* 11391dba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11391dbc call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11391dc2u);
  /* 11391dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391dc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391dc7 call 0x11395030 */
  push32(0x11391dccu); f_11395030();
  /* 11391dcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11391dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11391dd3 je 0x1139282f */
  if (C.zf) goto L_1139282f;
  /* 11391dd9 mov esi, esp */
  ESI = (ESP);
  /* 11391ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 11391ddd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11391ddf call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11391de5u);
  /* 11391de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391dea call 0x11395030 */
  push32(0x11391defu); f_11395030();
  /* 11391def mov esi, esp */
  ESI = (ESP);
  /* 11391df1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11391df3 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11391df9u);
  /* 11391df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391dfe call 0x11395030 */
  push32(0x11391e03u); f_11395030();
  /* 11391e03 mov esi, esp */
  ESI = (ESP);
  /* 11391e05 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11391e07 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e0du);
  /* 11391e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e12 call 0x11395030 */
  push32(0x11391e17u); f_11395030();
  /* 11391e17 mov esi, esp */
  ESI = (ESP);
  /* 11391e19 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11391e1b call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e21u);
  /* 11391e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e26 call 0x11395030 */
  push32(0x11391e2bu); f_11395030();
  /* 11391e2b mov esi, esp */
  ESI = (ESP);
  /* 11391e2d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11391e2f call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e35u);
  /* 11391e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e3a call 0x11395030 */
  push32(0x11391e3fu); f_11395030();
  /* 11391e3f mov esi, esp */
  ESI = (ESP);
  /* 11391e41 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11391e43 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e49u);
  /* 11391e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e4e call 0x11395030 */
  push32(0x11391e53u); f_11395030();
  /* 11391e53 mov esi, esp */
  ESI = (ESP);
  /* 11391e55 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11391e57 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e5du);
  /* 11391e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e62 call 0x11395030 */
  push32(0x11391e67u); f_11395030();
  /* 11391e67 mov esi, esp */
  ESI = (ESP);
  /* 11391e69 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11391e6b call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e71u);
  /* 11391e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e76 call 0x11395030 */
  push32(0x11391e7bu); f_11395030();
  /* 11391e7b mov esi, esp */
  ESI = (ESP);
  /* 11391e7d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11391e7f call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e85u);
  /* 11391e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e8a call 0x11395030 */
  push32(0x11391e8fu); f_11395030();
  /* 11391e8f mov esi, esp */
  ESI = (ESP);
  /* 11391e91 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11391e93 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391e99u);
  /* 11391e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391e9e call 0x11395030 */
  push32(0x11391ea3u); f_11395030();
  /* 11391ea3 mov esi, esp */
  ESI = (ESP);
  /* 11391ea5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11391ea7 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391eadu);
  /* 11391ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391eb2 call 0x11395030 */
  push32(0x11391eb7u); f_11395030();
  /* 11391eb7 mov esi, esp */
  ESI = (ESP);
  /* 11391eb9 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11391ebb call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11391ec1u);
  /* 11391ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391ec4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391ec6 call 0x11395030 */
  push32(0x11391ecbu); f_11395030();
  /* 11391ecb mov esi, esp */
  ESI = (ESP);
  /* 11391ecd push 0x113c24e0 */
  push32((uint32_t)(0x113c24e0u));
  /* 11391ed2 call dword ptr [0x113c5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5474))), 0x11391ed8u);
  /* 11391ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391edb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391edd call 0x11395030 */
  push32(0x11391ee2u); f_11395030();
  /* 11391ee2 mov esi, esp */
  ESI = (ESP);
  /* 11391ee4 push 0x113c24c0 */
  push32((uint32_t)(0x113c24c0u));
  /* 11391ee9 call dword ptr [0x113c5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5474))), 0x11391eefu);
  /* 11391eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391ef2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391ef4 call 0x11395030 */
  push32(0x11391ef9u); f_11395030();
  /* 11391ef9 mov esi, esp */
  ESI = (ESP);
  /* 11391efb push 0x113c24d8 */
  push32((uint32_t)(0x113c24d8u));
  /* 11391f00 call dword ptr [0x113c5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5478))), 0x11391f06u);
  /* 11391f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f0b call 0x11395030 */
  push32(0x11391f10u); f_11395030();
  /* 11391f10 mov esi, esp */
  ESI = (ESP);
  /* 11391f12 push 0x113c24c8 */
  push32((uint32_t)(0x113c24c8u));
  /* 11391f17 call dword ptr [0x113c5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5478))), 0x11391f1du);
  /* 11391f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f22 call 0x11395030 */
  push32(0x11391f27u); f_11395030();
  /* 11391f27 mov esi, esp */
  ESI = (ESP);
  /* 11391f29 push 0x113c24e8 */
  push32((uint32_t)(0x113c24e8u));
  /* 11391f2e call dword ptr [0x113c547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c547c))), 0x11391f34u);
  /* 11391f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f39 call 0x11395030 */
  push32(0x11391f3eu); f_11395030();
  /* 11391f3e mov esi, esp */
  ESI = (ESP);
  /* 11391f40 push 0x113c24d0 */
  push32((uint32_t)(0x113c24d0u));
  /* 11391f45 call dword ptr [0x113c547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c547c))), 0x11391f4bu);
  /* 11391f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f50 call 0x11395030 */
  push32(0x11391f55u); f_11395030();
  /* 11391f55 mov esi, esp */
  ESI = (ESP);
  /* 11391f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11391f59 push 0x113c2620 */
  push32((uint32_t)(0x113c2620u));
  /* 11391f5e call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11391f64u);
  /* 11391f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f69 call 0x11395030 */
  push32(0x11391f6eu); f_11395030();
  /* 11391f6e mov esi, esp */
  ESI = (ESP);
  /* 11391f70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11391f72 push 0x113c2540 */
  push32((uint32_t)(0x113c2540u));
  /* 11391f77 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11391f7du);
  /* 11391f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f82 call 0x11395030 */
  push32(0x11391f87u); f_11395030();
  /* 11391f87 mov esi, esp */
  ESI = (ESP);
  /* 11391f89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11391f8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11391f8d call dword ptr [0x113c5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5484))), 0x11391f93u);
  /* 11391f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391f98 call 0x11395030 */
  push32(0x11391f9du); f_11395030();
  /* 11391f9d mov esi, esp */
  ESI = (ESP);
  /* 11391f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11391fa1 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11391fa7u);
  /* 11391fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391fac call 0x11395030 */
  push32(0x11391fb1u); f_11395030();
  /* 11391fb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11391fb4 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391fb8 ja 0x11392467 */
  if ((!C.cf&&!C.zf)) goto L_11392467;
  /* 11391fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11391fc1 jmp dword ptr [eax*4 + 0x113944f3] */
  switch (EAX) {
    case 0: goto L_11391fc8;
    case 1: goto L_1139215f;
    case 2: goto L_113922ab;
    case 3: goto L_113923c5;
    case 4: goto L_11393743;
    case 5: goto L_1139379c;
    case 6: goto L_113937f5;
    case 7: goto L_1139384b;
    case 8: goto L_11393a82;
    case 9: goto L_11393ae1;
    case 10: goto L_11393b40;
    case 11: goto L_11393b9c;
    default: x86_unimpl("switch@0x11391fc1 out of table"); return;
  }
L_11391fc8:;
  /* 11391fc8 mov esi, esp */
  ESI = (ESP);
  /* 11391fca push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11391fcf push 3 */
  push32((uint32_t)(0x3u));
  /* 11391fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11391fd3 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11391fd9u);
  /* 11391fd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391fde call 0x11395030 */
  push32(0x11391fe3u); f_11395030();
  /* 11391fe3 mov esi, esp */
  ESI = (ESP);
  /* 11391fe5 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11391fea push 0 */
  push32((uint32_t)(0x0u));
  /* 11391fec push 0 */
  push32((uint32_t)(0x0u));
  /* 11391fee call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11391ff4u);
  /* 11391ff4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11391ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11391ff9 call 0x11395030 */
  push32(0x11391ffeu); f_11395030();
  /* 11391ffe mov esi, esp */
  ESI = (ESP);
  /* 11392000 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11392005 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392009 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139200fu);
  /* 1139200f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392014 call 0x11395030 */
  push32(0x11392019u); f_11395030();
  /* 11392019 mov esi, esp */
  ESI = (ESP);
  /* 1139201b push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11392020 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392022 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392024 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139202au);
  /* 1139202a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139202d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139202f call 0x11395030 */
  push32(0x11392034u); f_11395030();
  /* 11392034 mov esi, esp */
  ESI = (ESP);
  /* 11392036 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1139203b push 5 */
  push32((uint32_t)(0x5u));
  /* 1139203d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139203f call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392045u);
  /* 11392045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392048 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139204a call 0x11395030 */
  push32(0x1139204fu); f_11395030();
  /* 1139204f mov esi, esp */
  ESI = (ESP);
  /* 11392051 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 11392056 push 4 */
  push32((uint32_t)(0x4u));
  /* 11392058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139205a call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392060u);
  /* 11392060 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392063 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392065 call 0x11395030 */
  push32(0x1139206au); f_11395030();
  /* 1139206a mov esi, esp */
  ESI = (ESP);
  /* 1139206c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139206e push 0x113c2560 */
  push32((uint32_t)(0x113c2560u));
  /* 11392073 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392079u);
  /* 11392079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139207c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139207e call 0x11395030 */
  push32(0x11392083u); f_11395030();
  /* 11392083 mov esi, esp */
  ESI = (ESP);
  /* 11392085 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392087 push 0x113c2568 */
  push32((uint32_t)(0x113c2568u));
  /* 1139208c call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392092u);
  /* 11392092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392097 call 0x11395030 */
  push32(0x1139209cu); f_11395030();
  /* 1139209c mov esi, esp */
  ESI = (ESP);
  /* 1139209e push 1 */
  push32((uint32_t)(0x1u));
  /* 113920a0 push 0x113c2570 */
  push32((uint32_t)(0x113c2570u));
  /* 113920a5 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113920abu);
  /* 113920ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113920ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113920b0 call 0x11395030 */
  push32(0x113920b5u); f_11395030();
  /* 113920b5 mov esi, esp */
  ESI = (ESP);
  /* 113920b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113920b9 push 0x113c2578 */
  push32((uint32_t)(0x113c2578u));
  /* 113920be call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113920c4u);
  /* 113920c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113920c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113920c9 call 0x11395030 */
  push32(0x113920ceu); f_11395030();
  /* 113920ce mov esi, esp */
  ESI = (ESP);
  /* 113920d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113920d2 push 0x113c2580 */
  push32((uint32_t)(0x113c2580u));
  /* 113920d7 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113920ddu);
  /* 113920dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113920e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113920e2 call 0x11395030 */
  push32(0x113920e7u); f_11395030();
  /* 113920e7 mov esi, esp */
  ESI = (ESP);
  /* 113920e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 113920eb push 0x113c2588 */
  push32((uint32_t)(0x113c2588u));
  /* 113920f0 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113920f6u);
  /* 113920f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113920f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113920fb call 0x11395030 */
  push32(0x11392100u); f_11395030();
  /* 11392100 mov esi, esp */
  ESI = (ESP);
  /* 11392102 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392104 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x1139210au);
  /* 1139210a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139210d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139210f call 0x11395030 */
  push32(0x11392114u); f_11395030();
  /* 11392114 mov esi, esp */
  ESI = (ESP);
  /* 11392116 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392118 push 0x113c2638 */
  push32((uint32_t)(0x113c2638u));
  /* 1139211d call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392123u);
  /* 11392123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392128 call 0x11395030 */
  push32(0x1139212du); f_11395030();
  /* 1139212d mov esi, esp */
  ESI = (ESP);
  /* 1139212f push 1 */
  push32((uint32_t)(0x1u));
  /* 11392131 push 0x113c2610 */
  push32((uint32_t)(0x113c2610u));
  /* 11392136 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139213cu);
  /* 1139213c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392141 call 0x11395030 */
  push32(0x11392146u); f_11395030();
  /* 11392146 mov esi, esp */
  ESI = (ESP);
  /* 11392148 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139214a call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x11392150u);
  /* 11392150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392155 call 0x11395030 */
  push32(0x1139215au); f_11395030();
  /* 1139215a jmp 0x11392467 */
  goto L_11392467;
L_1139215f:;
  /* 1139215f mov esi, esp */
  ESI = (ESP);
  /* 11392161 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11392166 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139216a call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392170u);
  /* 11392170 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392175 call 0x11395030 */
  push32(0x1139217au); f_11395030();
  /* 1139217a mov esi, esp */
  ESI = (ESP);
  /* 1139217c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11392181 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392183 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392185 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139218bu);
  /* 1139218b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139218e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392190 call 0x11395030 */
  push32(0x11392195u); f_11395030();
  /* 11392195 mov esi, esp */
  ESI = (ESP);
  /* 11392197 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 1139219c push 2 */
  push32((uint32_t)(0x2u));
  /* 1139219e push 0 */
  push32((uint32_t)(0x0u));
  /* 113921a0 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113921a6u);
  /* 113921a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113921a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113921ab call 0x11395030 */
  push32(0x113921b0u); f_11395030();
  /* 113921b0 mov esi, esp */
  ESI = (ESP);
  /* 113921b2 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 113921b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113921b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113921bb call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113921c1u);
  /* 113921c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113921c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113921c6 call 0x11395030 */
  push32(0x113921cbu); f_11395030();
  /* 113921cb mov esi, esp */
  ESI = (ESP);
  /* 113921cd push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 113921d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 113921d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113921d6 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113921dcu);
  /* 113921dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113921df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113921e1 call 0x11395030 */
  push32(0x113921e6u); f_11395030();
  /* 113921e6 mov esi, esp */
  ESI = (ESP);
  /* 113921e8 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 113921ed push 4 */
  push32((uint32_t)(0x4u));
  /* 113921ef push 0 */
  push32((uint32_t)(0x0u));
  /* 113921f1 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113921f7u);
  /* 113921f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113921fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113921fc call 0x11395030 */
  push32(0x11392201u); f_11395030();
  /* 11392201 mov esi, esp */
  ESI = (ESP);
  /* 11392203 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392205 push 0x113c2560 */
  push32((uint32_t)(0x113c2560u));
  /* 1139220a call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392210u);
  /* 11392210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392215 call 0x11395030 */
  push32(0x1139221au); f_11395030();
  /* 1139221a mov esi, esp */
  ESI = (ESP);
  /* 1139221c push 1 */
  push32((uint32_t)(0x1u));
  /* 1139221e push 0x113c2570 */
  push32((uint32_t)(0x113c2570u));
  /* 11392223 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392229u);
  /* 11392229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139222c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139222e call 0x11395030 */
  push32(0x11392233u); f_11395030();
  /* 11392233 mov esi, esp */
  ESI = (ESP);
  /* 11392235 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392237 push 0x113c2580 */
  push32((uint32_t)(0x113c2580u));
  /* 1139223c call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392242u);
  /* 11392242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392247 call 0x11395030 */
  push32(0x1139224cu); f_11395030();
  /* 1139224c mov esi, esp */
  ESI = (ESP);
  /* 1139224e push 1 */
  push32((uint32_t)(0x1u));
  /* 11392250 push 0x113c2578 */
  push32((uint32_t)(0x113c2578u));
  /* 11392255 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139225bu);
  /* 1139225b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139225e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392260 call 0x11395030 */
  push32(0x11392265u); f_11395030();
  /* 11392265 mov esi, esp */
  ESI = (ESP);
  /* 11392267 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392269 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x1139226fu);
  /* 1139226f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392274 call 0x11395030 */
  push32(0x11392279u); f_11395030();
  /* 11392279 mov esi, esp */
  ESI = (ESP);
  /* 1139227b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139227d push 0x113c2638 */
  push32((uint32_t)(0x113c2638u));
  /* 11392282 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392288u);
  /* 11392288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139228b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139228d call 0x11395030 */
  push32(0x11392292u); f_11395030();
  /* 11392292 mov esi, esp */
  ESI = (ESP);
  /* 11392294 push 4 */
  push32((uint32_t)(0x4u));
  /* 11392296 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x1139229cu);
  /* 1139229c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139229f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113922a1 call 0x11395030 */
  push32(0x113922a6u); f_11395030();
  /* 113922a6 jmp 0x11392467 */
  goto L_11392467;
L_113922ab:;
  /* 113922ab mov esi, esp */
  ESI = (ESP);
  /* 113922ad push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 113922b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 113922b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113922b6 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113922bcu);
  /* 113922bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113922bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113922c1 call 0x11395030 */
  push32(0x113922c6u); f_11395030();
  /* 113922c6 mov esi, esp */
  ESI = (ESP);
  /* 113922c8 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 113922cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113922cf push 0 */
  push32((uint32_t)(0x0u));
  /* 113922d1 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113922d7u);
  /* 113922d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113922da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113922dc call 0x11395030 */
  push32(0x113922e1u); f_11395030();
  /* 113922e1 mov esi, esp */
  ESI = (ESP);
  /* 113922e3 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 113922e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113922ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113922ec call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113922f2u);
  /* 113922f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113922f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113922f7 call 0x11395030 */
  push32(0x113922fcu); f_11395030();
  /* 113922fc mov esi, esp */
  ESI = (ESP);
  /* 113922fe push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11392303 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392307 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139230du);
  /* 1139230d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392310 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392312 call 0x11395030 */
  push32(0x11392317u); f_11395030();
  /* 11392317 mov esi, esp */
  ESI = (ESP);
  /* 11392319 push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 1139231e push 5 */
  push32((uint32_t)(0x5u));
  /* 11392320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392322 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392328u);
  /* 11392328 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139232b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139232d call 0x11395030 */
  push32(0x11392332u); f_11395030();
  /* 11392332 mov esi, esp */
  ESI = (ESP);
  /* 11392334 push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 11392339 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139233b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139233d call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392343u);
  /* 11392343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392346 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392348 call 0x11395030 */
  push32(0x1139234du); f_11395030();
  /* 1139234d mov esi, esp */
  ESI = (ESP);
  /* 1139234f push 0 */
  push32((uint32_t)(0x0u));
  /* 11392351 push 0x113c2560 */
  push32((uint32_t)(0x113c2560u));
  /* 11392356 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139235cu);
  /* 1139235c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139235f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392361 call 0x11395030 */
  push32(0x11392366u); f_11395030();
  /* 11392366 mov esi, esp */
  ESI = (ESP);
  /* 11392368 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139236a push 0x113c2588 */
  push32((uint32_t)(0x113c2588u));
  /* 1139236f call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392375u);
  /* 11392375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139237a call 0x11395030 */
  push32(0x1139237fu); f_11395030();
  /* 1139237f mov esi, esp */
  ESI = (ESP);
  /* 11392381 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392383 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x11392389u);
  /* 11392389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139238c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139238e call 0x11395030 */
  push32(0x11392393u); f_11395030();
  /* 11392393 mov esi, esp */
  ESI = (ESP);
  /* 11392395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392397 push 0x113c2618 */
  push32((uint32_t)(0x113c2618u));
  /* 1139239c call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113923a2u);
  /* 113923a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113923a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113923a7 call 0x11395030 */
  push32(0x113923acu); f_11395030();
  /* 113923ac mov esi, esp */
  ESI = (ESP);
  /* 113923ae push 4 */
  push32((uint32_t)(0x4u));
  /* 113923b0 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x113923b6u);
  /* 113923b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113923b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113923bb call 0x11395030 */
  push32(0x113923c0u); f_11395030();
  /* 113923c0 jmp 0x11392467 */
  goto L_11392467;
L_113923c5:;
  /* 113923c5 mov esi, esp */
  ESI = (ESP);
  /* 113923c7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113923cc push 3 */
  push32((uint32_t)(0x3u));
  /* 113923ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113923d0 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113923d6u);
  /* 113923d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113923d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113923db call 0x11395030 */
  push32(0x113923e0u); f_11395030();
  /* 113923e0 mov esi, esp */
  ESI = (ESP);
  /* 113923e2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113923e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113923e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113923eb call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113923f1u);
  /* 113923f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113923f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113923f6 call 0x11395030 */
  push32(0x113923fbu); f_11395030();
  /* 113923fb mov esi, esp */
  ESI = (ESP);
  /* 113923fd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11392402 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392406 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139240cu);
  /* 1139240c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139240f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392411 call 0x11395030 */
  push32(0x11392416u); f_11395030();
  /* 11392416 mov esi, esp */
  ESI = (ESP);
  /* 11392418 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1139241d push 1 */
  push32((uint32_t)(0x1u));
  /* 1139241f push 0 */
  push32((uint32_t)(0x0u));
  /* 11392421 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392427u);
  /* 11392427 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139242a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139242c call 0x11395030 */
  push32(0x11392431u); f_11395030();
  /* 11392431 mov esi, esp */
  ESI = (ESP);
  /* 11392433 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11392438 push 5 */
  push32((uint32_t)(0x5u));
  /* 1139243a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139243c call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392442u);
  /* 11392442 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392447 call 0x11395030 */
  push32(0x1139244cu); f_11395030();
  /* 1139244c mov esi, esp */
  ESI = (ESP);
  /* 1139244e push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 11392453 push 4 */
  push32((uint32_t)(0x4u));
  /* 11392455 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392457 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139245du);
  /* 1139245d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392462 call 0x11395030 */
  push32(0x11392467u); f_11395030();
L_11392467:;
  /* 11392467 mov esi, esp */
  ESI = (ESP);
  /* 11392469 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 1139246e push 6 */
  push32((uint32_t)(0x6u));
  /* 11392470 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x11392476u);
  /* 11392476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139247b call 0x11395030 */
  push32(0x11392480u); f_11395030();
  /* 11392480 mov esi, esp */
  ESI = (ESP);
  /* 11392482 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11392487 push 7 */
  push32((uint32_t)(0x7u));
  /* 11392489 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x1139248fu);
  /* 1139248f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392492 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392494 call 0x11395030 */
  push32(0x11392499u); f_11395030();
  /* 11392499 mov esi, esp */
  ESI = (ESP);
  /* 1139249b push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 113924a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113924a2 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x113924a8u);
  /* 113924a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113924ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113924ad call 0x11395030 */
  push32(0x113924b2u); f_11395030();
  /* 113924b2 mov esi, esp */
  ESI = (ESP);
  /* 113924b4 push 0x113bd470 */
  push32((uint32_t)(0x113bd470u));
  /* 113924b9 push 0x113bd238 */
  push32((uint32_t)(0x113bd238u));
  /* 113924be call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x113924c4u);
  /* 113924c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113924c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113924c9 call 0x11395030 */
  push32(0x113924ceu); f_11395030();
  /* 113924ce mov esi, esp */
  ESI = (ESP);
  /* 113924d0 push 0x113bd464 */
  push32((uint32_t)(0x113bd464u));
  /* 113924d5 push 0x113bd238 */
  push32((uint32_t)(0x113bd238u));
  /* 113924da call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x113924e0u);
  /* 113924e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113924e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113924e5 call 0x11395030 */
  push32(0x113924eau); f_11395030();
  /* 113924ea mov esi, esp */
  ESI = (ESP);
  /* 113924ec push 0x113bd458 */
  push32((uint32_t)(0x113bd458u));
  /* 113924f1 push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 113924f6 call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x113924fcu);
  /* 113924fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113924ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392501 call 0x11395030 */
  push32(0x11392506u); f_11395030();
  /* 11392506 mov esi, esp */
  ESI = (ESP);
  /* 11392508 push 0x113bd44c */
  push32((uint32_t)(0x113bd44cu));
  /* 1139250d push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 11392512 call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x11392518u);
  /* 11392518 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139251b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139251d call 0x11395030 */
  push32(0x11392522u); f_11395030();
  /* 11392522 mov esi, esp */
  ESI = (ESP);
  /* 11392524 push 0x113bd440 */
  push32((uint32_t)(0x113bd440u));
  /* 11392529 push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 1139252e call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x11392534u);
  /* 11392534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392539 call 0x11395030 */
  push32(0x1139253eu); f_11395030();
  /* 1139253e mov esi, esp */
  ESI = (ESP);
  /* 11392540 push 0x113bd434 */
  push32((uint32_t)(0x113bd434u));
  /* 11392545 push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 1139254a call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x11392550u);
  /* 11392550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392553 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392555 call 0x11395030 */
  push32(0x1139255au); f_11395030();
  /* 1139255a mov esi, esp */
  ESI = (ESP);
  /* 1139255c push 0x113bd428 */
  push32((uint32_t)(0x113bd428u));
  /* 11392561 push 0x113bd324 */
  push32((uint32_t)(0x113bd324u));
  /* 11392566 call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x1139256cu);
  /* 1139256c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139256f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392571 call 0x11395030 */
  push32(0x11392576u); f_11395030();
  /* 11392576 mov esi, esp */
  ESI = (ESP);
  /* 11392578 push 0x113bd41c */
  push32((uint32_t)(0x113bd41cu));
  /* 1139257d push 0x113bd248 */
  push32((uint32_t)(0x113bd248u));
  /* 11392582 call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x11392588u);
  /* 11392588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139258b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139258d call 0x11395030 */
  push32(0x11392592u); f_11395030();
  /* 11392592 mov esi, esp */
  ESI = (ESP);
  /* 11392594 push 0x113bd410 */
  push32((uint32_t)(0x113bd410u));
  /* 11392599 push 0x113bd248 */
  push32((uint32_t)(0x113bd248u));
  /* 1139259e call dword ptr [0x113c5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5498))), 0x113925a4u);
  /* 113925a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113925a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113925a9 call 0x11395030 */
  push32(0x113925aeu); f_11395030();
  /* 113925ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113925b0 call 0x113950c0 */
  push32(0x113925b5u); f_113950c0();
  /* 113925b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113925b8 push eax */
  push32((uint32_t)(EAX));
  /* 113925b9 call 0x11395070 */
  push32(0x113925beu); f_11395070();
  /* 113925be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113925c1 call 0x11395080 */
  push32(0x113925c6u); f_11395080();
  /* 113925c6 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113925c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113925cb je 0x11392629 */
  if (C.zf) goto L_11392629;
  /* 113925cd mov esi, esp */
  ESI = (ESP);
  /* 113925cf push 0 */
  push32((uint32_t)(0x0u));
  /* 113925d1 push 0x113c25b8 */
  push32((uint32_t)(0x113c25b8u));
  /* 113925d6 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113925dcu);
  /* 113925dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113925df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113925e1 call 0x11395030 */
  push32(0x113925e6u); f_11395030();
  /* 113925e6 mov esi, esp */
  ESI = (ESP);
  /* 113925e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 113925ea call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x113925f0u);
  /* 113925f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113925f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113925f5 call 0x11395030 */
  push32(0x113925fau); f_11395030();
  /* 113925fa mov esi, esp */
  ESI = (ESP);
  /* 113925fc push 0 */
  push32((uint32_t)(0x0u));
  /* 113925fe push 0x113c2490 */
  push32((uint32_t)(0x113c2490u));
  /* 11392603 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392609u);
  /* 11392609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139260c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139260e call 0x11395030 */
  push32(0x11392613u); f_11395030();
  /* 11392613 mov esi, esp */
  ESI = (ESP);
  /* 11392615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392617 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x1139261du);
  /* 1139261d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392622 call 0x11395030 */
  push32(0x11392627u); f_11395030();
  /* 11392627 jmp 0x11392683 */
  goto L_11392683;
L_11392629:;
  /* 11392629 mov esi, esp */
  ESI = (ESP);
  /* 1139262b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139262d push 0x113c25c0 */
  push32((uint32_t)(0x113c25c0u));
  /* 11392632 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392638u);
  /* 11392638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139263b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139263d call 0x11395030 */
  push32(0x11392642u); f_11395030();
  /* 11392642 mov esi, esp */
  ESI = (ESP);
  /* 11392644 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392646 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x1139264cu);
  /* 1139264c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139264f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392651 call 0x11395030 */
  push32(0x11392656u); f_11395030();
  /* 11392656 mov esi, esp */
  ESI = (ESP);
  /* 11392658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139265a push 0x113c2498 */
  push32((uint32_t)(0x113c2498u));
  /* 1139265f call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392665u);
  /* 11392665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139266a call 0x11395030 */
  push32(0x1139266fu); f_11395030();
  /* 1139266f mov esi, esp */
  ESI = (ESP);
  /* 11392671 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392673 call dword ptr [0x113c5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5490))), 0x11392679u);
  /* 11392679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139267c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139267e call 0x11395030 */
  push32(0x11392683u); f_11395030();
L_11392683:;
  /* 11392683 mov esi, esp */
  ESI = (ESP);
  /* 11392685 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1139268a push 3 */
  push32((uint32_t)(0x3u));
  /* 1139268c push 2 */
  push32((uint32_t)(0x2u));
  /* 1139268e call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392694u);
  /* 11392694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392699 call 0x11395030 */
  push32(0x1139269eu); f_11395030();
  /* 1139269e mov esi, esp */
  ESI = (ESP);
  /* 113926a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113926a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113926a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113926a9 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113926afu);
  /* 113926af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113926b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113926b4 call 0x11395030 */
  push32(0x113926b9u); f_11395030();
  /* 113926b9 mov esi, esp */
  ESI = (ESP);
  /* 113926bb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113926c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113926c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113926c4 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113926cau);
  /* 113926ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113926cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113926cf call 0x11395030 */
  push32(0x113926d4u); f_11395030();
  /* 113926d4 mov esi, esp */
  ESI = (ESP);
  /* 113926d6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113926db push 1 */
  push32((uint32_t)(0x1u));
  /* 113926dd push 2 */
  push32((uint32_t)(0x2u));
  /* 113926df call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113926e5u);
  /* 113926e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113926e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113926ea call 0x11395030 */
  push32(0x113926efu); f_11395030();
  /* 113926ef mov esi, esp */
  ESI = (ESP);
  /* 113926f1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113926f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 113926f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113926fa call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392700u);
  /* 11392700 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392705 call 0x11395030 */
  push32(0x1139270au); f_11395030();
  /* 1139270a mov esi, esp */
  ESI = (ESP);
  /* 1139270c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11392711 push 4 */
  push32((uint32_t)(0x4u));
  /* 11392713 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392715 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139271bu);
  /* 1139271b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139271e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392720 call 0x11395030 */
  push32(0x11392725u); f_11395030();
  /* 11392725 mov esi, esp */
  ESI = (ESP);
  /* 11392727 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392729 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x1139272fu);
  /* 1139272f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392734 call 0x11395030 */
  push32(0x11392739u); f_11395030();
  /* 11392739 mov esi, esp */
  ESI = (ESP);
  /* 1139273b push eax */
  push32((uint32_t)(EAX));
  /* 1139273c push 2 */
  push32((uint32_t)(0x2u));
  /* 1139273e push 1 */
  push32((uint32_t)(0x1u));
  /* 11392740 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392742 push 0x113bd404 */
  push32((uint32_t)(0x113bd404u));
  /* 11392747 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392749 call dword ptr [0x113c549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c549c))), 0x1139274fu);
  /* 1139274f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392754 call 0x11395030 */
  push32(0x11392759u); f_11395030();
  /* 11392759 mov esi, esp */
  ESI = (ESP);
  /* 1139275b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11392760 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392762 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392764 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139276au);
  /* 1139276a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139276d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139276f call 0x11395030 */
  push32(0x11392774u); f_11395030();
  /* 11392774 mov esi, esp */
  ESI = (ESP);
  /* 11392776 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1139277b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139277d push 3 */
  push32((uint32_t)(0x3u));
  /* 1139277f call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11392785u);
  /* 11392785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139278a call 0x11395030 */
  push32(0x1139278fu); f_11395030();
  /* 1139278f mov esi, esp */
  ESI = (ESP);
  /* 11392791 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11392796 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392798 push 3 */
  push32((uint32_t)(0x3u));
  /* 1139279a call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113927a0u);
  /* 113927a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113927a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113927a5 call 0x11395030 */
  push32(0x113927aau); f_11395030();
  /* 113927aa mov esi, esp */
  ESI = (ESP);
  /* 113927ac push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113927b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113927b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 113927b5 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113927bbu);
  /* 113927bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113927be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113927c0 call 0x11395030 */
  push32(0x113927c5u); f_11395030();
  /* 113927c5 mov esi, esp */
  ESI = (ESP);
  /* 113927c7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113927cc push 5 */
  push32((uint32_t)(0x5u));
  /* 113927ce push 3 */
  push32((uint32_t)(0x3u));
  /* 113927d0 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113927d6u);
  /* 113927d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113927d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113927db call 0x11395030 */
  push32(0x113927e0u); f_11395030();
  /* 113927e0 mov esi, esp */
  ESI = (ESP);
  /* 113927e2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113927e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 113927e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113927eb call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113927f1u);
  /* 113927f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113927f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113927f6 call 0x11395030 */
  push32(0x113927fbu); f_11395030();
  /* 113927fb mov esi, esp */
  ESI = (ESP);
  /* 113927fd push 0 */
  push32((uint32_t)(0x0u));
  /* 113927ff call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11392805u);
  /* 11392805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139280a call 0x11395030 */
  push32(0x1139280fu); f_11395030();
  /* 1139280f mov esi, esp */
  ESI = (ESP);
  /* 11392811 push eax */
  push32((uint32_t)(EAX));
  /* 11392812 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392814 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392816 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392818 push 0x113bd3f8 */
  push32((uint32_t)(0x113bd3f8u));
  /* 1139281d push 3 */
  push32((uint32_t)(0x3u));
  /* 1139281f call dword ptr [0x113c549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c549c))), 0x11392825u);
  /* 11392825 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139282a call 0x11395030 */
  push32(0x1139282fu); f_11395030();
L_1139282f:;
  /* 1139282f mov esi, esp */
  ESI = (ESP);
  /* 11392831 push 6 */
  push32((uint32_t)(0x6u));
  /* 11392833 call dword ptr [0x113c54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a0))), 0x11392839u);
  /* 11392839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139283c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139283e call 0x11395030 */
  push32(0x11392843u); f_11395030();
  /* 11392843 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139284a je 0x11392903 */
  if (C.zf) goto L_11392903;
  /* 11392850 mov esi, esp */
  ESI = (ESP);
  /* 11392852 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11392854 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139285au);
  /* 1139285a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139285d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139285f call 0x11395030 */
  push32(0x11392864u); f_11395030();
  /* 11392864 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139286b je 0x11392903 */
  if (C.zf) goto L_11392903;
  /* 11392871 mov esi, esp */
  ESI = (ESP);
  /* 11392873 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392875 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11392877 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x1139287du);
  /* 1139287d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392880 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392882 call 0x11395030 */
  push32(0x11392887u); f_11395030();
  /* 11392887 mov esi, esp */
  ESI = (ESP);
  /* 11392889 push 0x113bd3ec */
  push32((uint32_t)(0x113bd3ecu));
  /* 1139288e call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11392894u);
  /* 11392894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392899 call 0x11395030 */
  push32(0x1139289eu); f_11395030();
  /* 1139289e mov esi, esp */
  ESI = (ESP);
  /* 113928a0 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 113928a2 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x113928a8u);
  /* 113928a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113928ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113928ad call 0x11395030 */
  push32(0x113928b2u); f_11395030();
  /* 113928b2 mov esi, esp */
  ESI = (ESP);
  /* 113928b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113928b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113928b8 push 0x113c25b0 */
  push32((uint32_t)(0x113c25b0u));
  /* 113928bd call dword ptr [0x113c54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a8))), 0x113928c3u);
  /* 113928c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113928c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113928c8 call 0x11395030 */
  push32(0x113928cdu); f_11395030();
  /* 113928cd mov esi, esp */
  ESI = (ESP);
  /* 113928cf push 2 */
  push32((uint32_t)(0x2u));
  /* 113928d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113928d3 push 0x113c25a8 */
  push32((uint32_t)(0x113c25a8u));
  /* 113928d8 call dword ptr [0x113c54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a8))), 0x113928deu);
  /* 113928de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113928e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113928e3 call 0x11395030 */
  push32(0x113928e8u); f_11395030();
  /* 113928e8 mov esi, esp */
  ESI = (ESP);
  /* 113928ea push 3 */
  push32((uint32_t)(0x3u));
  /* 113928ec push 1 */
  push32((uint32_t)(0x1u));
  /* 113928ee push 0x113c2550 */
  push32((uint32_t)(0x113c2550u));
  /* 113928f3 call dword ptr [0x113c54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a8))), 0x113928f9u);
  /* 113928f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113928fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113928fe call 0x11395030 */
  push32(0x11392903u); f_11395030();
L_11392903:;
  /* 11392903 mov esi, esp */
  ESI = (ESP);
  /* 11392905 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392907 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139290du);
  /* 1139290d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392912 call 0x11395030 */
  push32(0x11392917u); f_11395030();
  /* 11392917 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139291c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139291e je 0x113929b3 */
  if (C.zf) goto L_113929b3;
  /* 11392924 mov esi, esp */
  ESI = (ESP);
  /* 11392926 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392928 push 0x113c24f8 */
  push32((uint32_t)(0x113c24f8u));
  /* 1139292d call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x11392933u);
  /* 11392933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392938 call 0x11395030 */
  push32(0x1139293du); f_11395030();
  /* 1139293d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139293f jg 0x1139295e */
  if ((!C.zf&&C.sf==C.of)) goto L_1139295e;
  /* 11392941 mov esi, esp */
  ESI = (ESP);
  /* 11392943 push 7 */
  push32((uint32_t)(0x7u));
  /* 11392945 call dword ptr [0x113c54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a0))), 0x1139294bu);
  /* 1139294b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139294e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392950 call 0x11395030 */
  push32(0x11392955u); f_11395030();
  /* 11392955 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139295a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139295c je 0x113929b3 */
  if (C.zf) goto L_113929b3;
L_1139295e:;
  /* 1139295e mov esi, esp */
  ESI = (ESP);
  /* 11392960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392962 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392964 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x1139296au);
  /* 1139296a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139296d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139296f call 0x11395030 */
  push32(0x11392974u); f_11395030();
  /* 11392974 mov esi, esp */
  ESI = (ESP);
  /* 11392976 push 0x113bd3e4 */
  push32((uint32_t)(0x113bd3e4u));
  /* 1139297b call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11392981u);
  /* 11392981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392986 call 0x11395030 */
  push32(0x1139298bu); f_11395030();
  /* 1139298b mov esi, esp */
  ESI = (ESP);
  /* 1139298d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1139298f call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11392995u);
  /* 11392995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139299a call 0x11395030 */
  push32(0x1139299fu); f_11395030();
  /* 1139299f mov esi, esp */
  ESI = (ESP);
  /* 113929a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 113929a3 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x113929a9u);
  /* 113929a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113929ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113929ae call 0x11395030 */
  push32(0x113929b3u); f_11395030();
L_113929b3:;
  /* 113929b3 mov esi, esp */
  ESI = (ESP);
  /* 113929b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113929b7 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113929bdu);
  /* 113929bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113929c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113929c2 call 0x11395030 */
  push32(0x113929c7u); f_11395030();
  /* 113929c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113929cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113929ce jne 0x11392a59 */
  if (!C.zf) goto L_11392a59;
  /* 113929d4 mov esi, esp */
  ESI = (ESP);
  /* 113929d6 push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 113929db push 0x113c2598 */
  push32((uint32_t)(0x113c2598u));
  /* 113929e0 call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x113929e6u);
  /* 113929e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113929e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113929eb call 0x11395030 */
  push32(0x113929f0u); f_11395030();
  /* 113929f0 mov esi, eax */
  ESI = (EAX);
  /* 113929f2 mov edi, esp */
  EDI = (ESP);
  /* 113929f4 push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 113929f9 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x113929ffu);
  /* 113929ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a02 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a04 call 0x11395030 */
  push32(0x11392a09u); f_11395030();
  /* 11392a09 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a0b jge 0x11392a59 */
  if ((C.sf==C.of)) goto L_11392a59;
  /* 11392a0d mov esi, esp */
  ESI = (ESP);
  /* 11392a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11392a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392a13 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392a19u);
  /* 11392a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a1e call 0x11395030 */
  push32(0x11392a23u); f_11395030();
  /* 11392a23 mov esi, esp */
  ESI = (ESP);
  /* 11392a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392a27 push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11392a2c call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392a32u);
  /* 11392a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a37 call 0x11395030 */
  push32(0x11392a3cu); f_11395030();
  /* 11392a3c mov esi, esp */
  ESI = (ESP);
  /* 11392a3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11392a40 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11392a42 push 0x113c2648 */
  push32((uint32_t)(0x113c2648u));
  /* 11392a47 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392a49 call dword ptr [0x113c54b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b8))), 0x11392a4fu);
  /* 11392a4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a54 call 0x11395030 */
  push32(0x11392a59u); f_11395030();
L_11392a59:;
  /* 11392a59 mov esi, esp */
  ESI = (ESP);
  /* 11392a5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11392a5d call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392a63u);
  /* 11392a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a68 call 0x11395030 */
  push32(0x11392a6du); f_11395030();
  /* 11392a6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392a74 je 0x11392afd */
  if (C.zf) goto L_11392afd;
  /* 11392a7a mov esi, esp */
  ESI = (ESP);
  /* 11392a7c push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11392a81 push 0x113c2598 */
  push32((uint32_t)(0x113c2598u));
  /* 11392a86 call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x11392a8cu);
  /* 11392a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392a91 call 0x11395030 */
  push32(0x11392a96u); f_11395030();
  /* 11392a96 mov esi, eax */
  ESI = (EAX);
  /* 11392a98 mov edi, esp */
  EDI = (ESP);
  /* 11392a9a push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11392a9f call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392aa5u);
  /* 11392aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392aa8 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392aaa call 0x11395030 */
  push32(0x11392aafu); f_11395030();
  /* 11392aaf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ab1 jne 0x11392afd */
  if (!C.zf) goto L_11392afd;
  /* 11392ab3 mov esi, esp */
  ESI = (ESP);
  /* 11392ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392ab9 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392abfu);
  /* 11392abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ac4 call 0x11395030 */
  push32(0x11392ac9u); f_11395030();
  /* 11392ac9 mov esi, esp */
  ESI = (ESP);
  /* 11392acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11392acd push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11392ad2 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392ad8u);
  /* 11392ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392adb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392add call 0x11395030 */
  push32(0x11392ae2u); f_11395030();
  /* 11392ae2 mov esi, esp */
  ESI = (ESP);
  /* 11392ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392ae6 push 0x113c2640 */
  push32((uint32_t)(0x113c2640u));
  /* 11392aeb push 5 */
  push32((uint32_t)(0x5u));
  /* 11392aed call dword ptr [0x113c54bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54bc))), 0x11392af3u);
  /* 11392af3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392af8 call 0x11395030 */
  push32(0x11392afdu); f_11395030();
L_11392afd:;
  /* 11392afd mov esi, esp */
  ESI = (ESP);
  /* 11392aff push 2 */
  push32((uint32_t)(0x2u));
  /* 11392b01 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392b07u);
  /* 11392b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392b0c call 0x11395030 */
  push32(0x11392b11u); f_11395030();
  /* 11392b11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392b18 je 0x11392c0d */
  if (C.zf) goto L_11392c0d;
  /* 11392b1e mov esi, esp */
  ESI = (ESP);
  /* 11392b20 push 0x113c24a8 */
  push32((uint32_t)(0x113c24a8u));
  /* 11392b25 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392b2bu);
  /* 11392b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392b30 call 0x11395030 */
  push32(0x11392b35u); f_11395030();
  /* 11392b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392b37 jne 0x11392c0d */
  if (!C.zf) goto L_11392c0d;
  /* 11392b3d mov esi, esp */
  ESI = (ESP);
  /* 11392b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11392b41 push 0x113c2598 */
  push32((uint32_t)(0x113c2598u));
  /* 11392b46 call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x11392b4cu);
  /* 11392b4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392b51 call 0x11395030 */
  push32(0x11392b56u); f_11395030();
  /* 11392b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392b58 jle 0x11392c0d */
  if ((C.zf||C.sf!=C.of)) goto L_11392c0d;
  /* 11392b5e mov esi, esp */
  ESI = (ESP);
  /* 11392b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11392b64 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392b6au);
  /* 11392b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392b6f call 0x11395030 */
  push32(0x11392b74u); f_11395030();
  /* 11392b74 mov esi, esp */
  ESI = (ESP);
  /* 11392b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392b78 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11392b7eu);
  /* 11392b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392b83 call 0x11395030 */
  push32(0x11392b88u); f_11395030();
  /* 11392b88 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11392b8e mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 11392b93 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11392b95 mov esi, esp */
  ESI = (ESP);
  /* 11392b97 push ecx */
  push32((uint32_t)(ECX));
  /* 11392b98 push 0x113bd3dc */
  push32((uint32_t)(0x113bd3dcu));
  /* 11392b9d call dword ptr [0x113c54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c0))), 0x11392ba3u);
  /* 11392ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ba8 call 0x11395030 */
  push32(0x11392badu); f_11395030();
  /* 11392bad mov esi, esp */
  ESI = (ESP);
  /* 11392baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11392bb1 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11392bb7u);
  /* 11392bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392bbc call 0x11395030 */
  push32(0x11392bc1u); f_11395030();
  /* 11392bc1 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11392bc7 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 11392bcc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11392bce mov esi, esp */
  ESI = (ESP);
  /* 11392bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11392bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392bd5 call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x11392bdbu);
  /* 11392bdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392be0 call 0x11395030 */
  push32(0x11392be5u); f_11395030();
  /* 11392be5 mov esi, esp */
  ESI = (ESP);
  /* 11392be7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11392be9 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11392befu);
  /* 11392bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392bf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392bf4 call 0x11395030 */
  push32(0x11392bf9u); f_11395030();
  /* 11392bf9 mov esi, esp */
  ESI = (ESP);
  /* 11392bfb push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11392bfd call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11392c03u);
  /* 11392c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c08 call 0x11395030 */
  push32(0x11392c0du); f_11395030();
L_11392c0d:;
  /* 11392c0d mov esi, esp */
  ESI = (ESP);
  /* 11392c0f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11392c11 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392c17u);
  /* 11392c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c1c call 0x11395030 */
  push32(0x11392c21u); f_11395030();
  /* 11392c21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392c28 jne 0x11392cb3 */
  if (!C.zf) goto L_11392cb3;
  /* 11392c2e mov esi, esp */
  ESI = (ESP);
  /* 11392c30 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392c35 push 0x113c25a0 */
  push32((uint32_t)(0x113c25a0u));
  /* 11392c3a call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x11392c40u);
  /* 11392c40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c45 call 0x11395030 */
  push32(0x11392c4au); f_11395030();
  /* 11392c4a mov esi, eax */
  ESI = (EAX);
  /* 11392c4c mov edi, esp */
  EDI = (ESP);
  /* 11392c4e push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392c53 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392c59u);
  /* 11392c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c5c cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c5e call 0x11395030 */
  push32(0x11392c63u); f_11395030();
  /* 11392c63 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c65 jge 0x11392cb3 */
  if ((C.sf==C.of)) goto L_11392cb3;
  /* 11392c67 mov esi, esp */
  ESI = (ESP);
  /* 11392c69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392c6b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11392c6d call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392c73u);
  /* 11392c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c78 call 0x11395030 */
  push32(0x11392c7du); f_11395030();
  /* 11392c7d mov esi, esp */
  ESI = (ESP);
  /* 11392c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11392c81 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392c86 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392c8cu);
  /* 11392c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392c91 call 0x11395030 */
  push32(0x11392c96u); f_11395030();
  /* 11392c96 mov esi, esp */
  ESI = (ESP);
  /* 11392c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392c9a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11392c9c push 0x113c2658 */
  push32((uint32_t)(0x113c2658u));
  /* 11392ca1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392ca3 call dword ptr [0x113c54b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b8))), 0x11392ca9u);
  /* 11392ca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392cae call 0x11395030 */
  push32(0x11392cb3u); f_11395030();
L_11392cb3:;
  /* 11392cb3 mov esi, esp */
  ESI = (ESP);
  /* 11392cb5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11392cb7 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392cbdu);
  /* 11392cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392cc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392cc2 call 0x11395030 */
  push32(0x11392cc7u); f_11395030();
  /* 11392cc7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392cce je 0x11392d57 */
  if (C.zf) goto L_11392d57;
  /* 11392cd4 mov esi, esp */
  ESI = (ESP);
  /* 11392cd6 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392cdb push 0x113c25a0 */
  push32((uint32_t)(0x113c25a0u));
  /* 11392ce0 call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x11392ce6u);
  /* 11392ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ce9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ceb call 0x11395030 */
  push32(0x11392cf0u); f_11395030();
  /* 11392cf0 mov esi, eax */
  ESI = (EAX);
  /* 11392cf2 mov edi, esp */
  EDI = (ESP);
  /* 11392cf4 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392cf9 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392cffu);
  /* 11392cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d02 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d04 call 0x11395030 */
  push32(0x11392d09u); f_11395030();
  /* 11392d09 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d0b jne 0x11392d57 */
  if (!C.zf) goto L_11392d57;
  /* 11392d0d mov esi, esp */
  ESI = (ESP);
  /* 11392d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11392d11 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11392d13 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392d19u);
  /* 11392d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d1e call 0x11395030 */
  push32(0x11392d23u); f_11395030();
  /* 11392d23 mov esi, esp */
  ESI = (ESP);
  /* 11392d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392d27 push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392d2c call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11392d32u);
  /* 11392d32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d37 call 0x11395030 */
  push32(0x11392d3cu); f_11395030();
  /* 11392d3c mov esi, esp */
  ESI = (ESP);
  /* 11392d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11392d40 push 0x113c2650 */
  push32((uint32_t)(0x113c2650u));
  /* 11392d45 push 5 */
  push32((uint32_t)(0x5u));
  /* 11392d47 call dword ptr [0x113c54bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54bc))), 0x11392d4du);
  /* 11392d4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d52 call 0x11395030 */
  push32(0x11392d57u); f_11395030();
L_11392d57:;
  /* 11392d57 mov esi, esp */
  ESI = (ESP);
  /* 11392d59 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11392d5b call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392d61u);
  /* 11392d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d66 call 0x11395030 */
  push32(0x11392d6bu); f_11395030();
  /* 11392d6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392d72 je 0x11392e67 */
  if (C.zf) goto L_11392e67;
  /* 11392d78 mov esi, esp */
  ESI = (ESP);
  /* 11392d7a push 0x113c24a0 */
  push32((uint32_t)(0x113c24a0u));
  /* 11392d7f call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392d85u);
  /* 11392d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392d8a call 0x11395030 */
  push32(0x11392d8fu); f_11395030();
  /* 11392d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392d91 jne 0x11392e67 */
  if (!C.zf) goto L_11392e67;
  /* 11392d97 mov esi, esp */
  ESI = (ESP);
  /* 11392d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392d9b push 0x113c25a0 */
  push32((uint32_t)(0x113c25a0u));
  /* 11392da0 call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x11392da6u);
  /* 11392da6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392dab call 0x11395030 */
  push32(0x11392db0u); f_11395030();
  /* 11392db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392db2 jle 0x11392e67 */
  if ((C.zf||C.sf!=C.of)) goto L_11392e67;
  /* 11392db8 mov esi, esp */
  ESI = (ESP);
  /* 11392dba push 0 */
  push32((uint32_t)(0x0u));
  /* 11392dbc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11392dbe call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392dc4u);
  /* 11392dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392dc9 call 0x11395030 */
  push32(0x11392dceu); f_11395030();
  /* 11392dce mov esi, esp */
  ESI = (ESP);
  /* 11392dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392dd2 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11392dd8u);
  /* 11392dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ddd call 0x11395030 */
  push32(0x11392de2u); f_11395030();
  /* 11392de2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11392de8 mov ecx, 0xfa0 */
  ECX = (0xfa0u);
  /* 11392ded sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11392def mov esi, esp */
  ESI = (ESP);
  /* 11392df1 push ecx */
  push32((uint32_t)(ECX));
  /* 11392df2 push 0x113bd3dc */
  push32((uint32_t)(0x113bd3dcu));
  /* 11392df7 call dword ptr [0x113c54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c0))), 0x11392dfdu);
  /* 11392dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e02 call 0x11395030 */
  push32(0x11392e07u); f_11395030();
  /* 11392e07 mov esi, esp */
  ESI = (ESP);
  /* 11392e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392e0b call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11392e11u);
  /* 11392e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e16 call 0x11395030 */
  push32(0x11392e1bu); f_11395030();
  /* 11392e1b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11392e21 mov edx, 0xfa0 */
  EDX = (0xfa0u);
  /* 11392e26 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11392e28 mov esi, esp */
  ESI = (ESP);
  /* 11392e2a push edx */
  push32((uint32_t)(EDX));
  /* 11392e2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11392e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11392e2f call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x11392e35u);
  /* 11392e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e3a call 0x11395030 */
  push32(0x11392e3fu); f_11395030();
  /* 11392e3f mov esi, esp */
  ESI = (ESP);
  /* 11392e41 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11392e43 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11392e49u);
  /* 11392e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e4e call 0x11395030 */
  push32(0x11392e53u); f_11395030();
  /* 11392e53 mov esi, esp */
  ESI = (ESP);
  /* 11392e55 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11392e57 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11392e5du);
  /* 11392e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e62 call 0x11395030 */
  push32(0x11392e67u); f_11395030();
L_11392e67:;
  /* 11392e67 mov esi, esp */
  ESI = (ESP);
  /* 11392e69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11392e6b call dword ptr [0x113c54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a0))), 0x11392e71u);
  /* 11392e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e76 call 0x11395030 */
  push32(0x11392e7bu); f_11395030();
  /* 11392e7b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392e82 je 0x11392f15 */
  if (C.zf) goto L_11392f15;
  /* 11392e88 mov esi, esp */
  ESI = (ESP);
  /* 11392e8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11392e8c call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392e92u);
  /* 11392e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392e95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392e97 call 0x11395030 */
  push32(0x11392e9cu); f_11395030();
  /* 11392e9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392ea3 je 0x11392f15 */
  if (C.zf) goto L_11392f15;
  /* 11392ea5 mov esi, esp */
  ESI = (ESP);
  /* 11392ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392ea9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11392eab call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392eb1u);
  /* 11392eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392eb6 call 0x11395030 */
  push32(0x11392ebbu); f_11395030();
  /* 11392ebb mov esi, esp */
  ESI = (ESP);
  /* 11392ebd push 0x113bd3d0 */
  push32((uint32_t)(0x113bd3d0u));
  /* 11392ec2 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11392ec8u);
  /* 11392ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ecd call 0x11395030 */
  push32(0x11392ed2u); f_11395030();
  /* 11392ed2 mov esi, esp */
  ESI = (ESP);
  /* 11392ed4 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11392ed6 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11392edcu);
  /* 11392edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392edf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ee1 call 0x11395030 */
  push32(0x11392ee6u); f_11395030();
  /* 11392ee6 mov esi, esp */
  ESI = (ESP);
  /* 11392ee8 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11392eea call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11392ef0u);
  /* 11392ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392ef5 call 0x11395030 */
  push32(0x11392efau); f_11395030();
  /* 11392efa mov esi, esp */
  ESI = (ESP);
  /* 11392efc push 4 */
  push32((uint32_t)(0x4u));
  /* 11392efe push 1 */
  push32((uint32_t)(0x1u));
  /* 11392f00 push 0x113c2558 */
  push32((uint32_t)(0x113c2558u));
  /* 11392f05 call dword ptr [0x113c54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a8))), 0x11392f0bu);
  /* 11392f0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f10 call 0x11395030 */
  push32(0x11392f15u); f_11395030();
L_11392f15:;
  /* 11392f15 mov esi, esp */
  ESI = (ESP);
  /* 11392f17 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11392f19 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392f1fu);
  /* 11392f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f24 call 0x11395030 */
  push32(0x11392f29u); f_11395030();
  /* 11392f29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392f30 je 0x11392fc0 */
  if (C.zf) goto L_11392fc0;
  /* 11392f36 mov esi, esp */
  ESI = (ESP);
  /* 11392f38 push 0x113c2468 */
  push32((uint32_t)(0x113c2468u));
  /* 11392f3d call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11392f43u);
  /* 11392f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f48 call 0x11395030 */
  push32(0x11392f4du); f_11395030();
  /* 11392f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392f4f jne 0x11392fc0 */
  if (!C.zf) goto L_11392fc0;
  /* 11392f51 mov esi, esp */
  ESI = (ESP);
  /* 11392f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11392f55 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11392f57 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11392f5du);
  /* 11392f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f62 call 0x11395030 */
  push32(0x11392f67u); f_11395030();
  /* 11392f67 mov esi, esp */
  ESI = (ESP);
  /* 11392f69 push 3 */
  push32((uint32_t)(0x3u));
  /* 11392f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11392f6d call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11392f73u);
  /* 11392f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f78 call 0x11395030 */
  push32(0x11392f7du); f_11395030();
  /* 11392f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392f7f jle 0x11392f9a */
  if ((C.zf||C.sf!=C.of)) goto L_11392f9a;
  /* 11392f81 mov esi, esp */
  ESI = (ESP);
  /* 11392f83 push 0x113bd3c8 */
  push32((uint32_t)(0x113bd3c8u));
  /* 11392f88 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11392f8eu);
  /* 11392f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392f93 call 0x11395030 */
  push32(0x11392f98u); f_11395030();
  /* 11392f98 jmp 0x11392fb1 */
  goto L_11392fb1;
L_11392f9a:;
  /* 11392f9a mov esi, esp */
  ESI = (ESP);
  /* 11392f9c push 0x113bd3bc */
  push32((uint32_t)(0x113bd3bcu));
  /* 11392fa1 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11392fa7u);
  /* 11392fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392fac call 0x11395030 */
  push32(0x11392fb1u); f_11395030();
L_11392fb1:;
  /* 11392fb1 mov esi, esp */
  ESI = (ESP);
  /* 11392fb3 call dword ptr [0x113c54cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54cc))), 0x11392fb9u);
  /* 11392fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392fbb call 0x11395030 */
  push32(0x11392fc0u); f_11395030();
L_11392fc0:;
  /* 11392fc0 mov esi, esp */
  ESI = (ESP);
  /* 11392fc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11392fc4 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11392fcau);
  /* 11392fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392fcf call 0x11395030 */
  push32(0x11392fd4u); f_11395030();
  /* 11392fd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392fdb je 0x11393036 */
  if (C.zf) goto L_11393036;
  /* 11392fdd mov esi, esp */
  ESI = (ESP);
  /* 11392fdf push 6 */
  push32((uint32_t)(0x6u));
  /* 11392fe1 call dword ptr [0x113c54d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54d0))), 0x11392fe7u);
  /* 11392fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11392fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11392fec call 0x11395030 */
  push32(0x11392ff1u); f_11395030();
  /* 11392ff1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11392ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11392ff8 je 0x11393036 */
  if (C.zf) goto L_11393036;
  /* 11392ffa mov esi, esp */
  ESI = (ESP);
  /* 11392ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 11392ffe push 9 */
  push32((uint32_t)(0x9u));
  /* 11393000 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393006u);
  /* 11393006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139300b call 0x11395030 */
  push32(0x11393010u); f_11395030();
  /* 11393010 mov esi, esp */
  ESI = (ESP);
  /* 11393012 push 0x113bd3b0 */
  push32((uint32_t)(0x113bd3b0u));
  /* 11393017 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x1139301du);
  /* 1139301d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393020 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393022 call 0x11395030 */
  push32(0x11393027u); f_11395030();
  /* 11393027 mov esi, esp */
  ESI = (ESP);
  /* 11393029 call dword ptr [0x113c54cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54cc))), 0x1139302fu);
  /* 1139302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393031 call 0x11395030 */
  push32(0x11393036u); f_11395030();
L_11393036:;
  /* 11393036 mov esi, esp */
  ESI = (ESP);
  /* 11393038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139303a call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393040u);
  /* 11393040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393045 call 0x11395030 */
  push32(0x1139304au); f_11395030();
  /* 1139304a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139304f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393051 jne 0x1139310b */
  if (!C.zf) goto L_1139310b;
  /* 11393057 mov esi, esp */
  ESI = (ESP);
  /* 11393059 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1139305b call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393061u);
  /* 11393061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393066 call 0x11395030 */
  push32(0x1139306bu); f_11395030();
  /* 1139306b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393072 jne 0x1139310b */
  if (!C.zf) goto L_1139310b;
  /* 11393078 mov esi, esp */
  ESI = (ESP);
  /* 1139307a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1139307c call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393082u);
  /* 11393082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393087 call 0x11395030 */
  push32(0x1139308cu); f_11395030();
  /* 1139308c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393093 jne 0x1139310b */
  if (!C.zf) goto L_1139310b;
  /* 11393095 mov esi, esp */
  ESI = (ESP);
  /* 11393097 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11393099 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139309fu);
  /* 1139309f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113930a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113930a4 call 0x11395030 */
  push32(0x113930a9u); f_11395030();
  /* 113930a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113930ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113930b0 jne 0x1139310b */
  if (!C.zf) goto L_1139310b;
  /* 113930b2 mov esi, esp */
  ESI = (ESP);
  /* 113930b4 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 113930b6 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113930bcu);
  /* 113930bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113930bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113930c1 call 0x11395030 */
  push32(0x113930c6u); f_11395030();
  /* 113930c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113930cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113930cd je 0x1139310b */
  if (C.zf) goto L_1139310b;
  /* 113930cf mov esi, esp */
  ESI = (ESP);
  /* 113930d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113930d3 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 113930d5 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113930dbu);
  /* 113930db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113930de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113930e0 call 0x11395030 */
  push32(0x113930e5u); f_11395030();
  /* 113930e5 mov esi, esp */
  ESI = (ESP);
  /* 113930e7 push 0x113bd3a8 */
  push32((uint32_t)(0x113bd3a8u));
  /* 113930ec call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x113930f2u);
  /* 113930f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113930f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113930f7 call 0x11395030 */
  push32(0x113930fcu); f_11395030();
  /* 113930fc mov esi, esp */
  ESI = (ESP);
  /* 113930fe call dword ptr [0x113c54d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54d4))), 0x11393104u);
  /* 11393104 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393106 call 0x11395030 */
  push32(0x1139310bu); f_11395030();
L_1139310b:;
  /* 1139310b mov esi, esp */
  ESI = (ESP);
  /* 1139310d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1139310f call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393115u);
  /* 11393115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393118 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139311a call 0x11395030 */
  push32(0x1139311fu); f_11395030();
  /* 1139311f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393126 je 0x11393188 */
  if (C.zf) goto L_11393188;
  /* 11393128 mov esi, esp */
  ESI = (ESP);
  /* 1139312a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139312c push 0x113c2458 */
  push32((uint32_t)(0x113c2458u));
  /* 11393131 call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x11393137u);
  /* 11393137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139313a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139313c call 0x11395030 */
  push32(0x11393141u); f_11395030();
  /* 11393141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393143 jle 0x11393188 */
  if ((C.zf||C.sf!=C.of)) goto L_11393188;
  /* 11393145 mov esi, esp */
  ESI = (ESP);
  /* 11393147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393149 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1139314b call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393151u);
  /* 11393151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393156 call 0x11395030 */
  push32(0x1139315bu); f_11395030();
  /* 1139315b mov esi, esp */
  ESI = (ESP);
  /* 1139315d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139315f push 0x113c2628 */
  push32((uint32_t)(0x113c2628u));
  /* 11393164 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139316au);
  /* 1139316a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139316d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139316f call 0x11395030 */
  push32(0x11393174u); f_11395030();
  /* 11393174 mov esi, esp */
  ESI = (ESP);
  /* 11393176 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393178 call dword ptr [0x113c54d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54d8))), 0x1139317eu);
  /* 1139317e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393183 call 0x11395030 */
  push32(0x11393188u); f_11395030();
L_11393188:;
  /* 11393188 mov esi, esp */
  ESI = (ESP);
  /* 1139318a push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1139318c call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393192u);
  /* 11393192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393197 call 0x11395030 */
  push32(0x1139319cu); f_11395030();
  /* 1139319c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113931a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113931a3 jne 0x11393205 */
  if (!C.zf) goto L_11393205;
  /* 113931a5 mov esi, esp */
  ESI = (ESP);
  /* 113931a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113931a9 push 0x113c2458 */
  push32((uint32_t)(0x113c2458u));
  /* 113931ae call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x113931b4u);
  /* 113931b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113931b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113931b9 call 0x11395030 */
  push32(0x113931beu); f_11395030();
  /* 113931be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113931c0 jne 0x11393205 */
  if (!C.zf) goto L_11393205;
  /* 113931c2 mov esi, esp */
  ESI = (ESP);
  /* 113931c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113931c6 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 113931c8 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113931ceu);
  /* 113931ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113931d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113931d3 call 0x11395030 */
  push32(0x113931d8u); f_11395030();
  /* 113931d8 mov esi, esp */
  ESI = (ESP);
  /* 113931da push 0 */
  push32((uint32_t)(0x0u));
  /* 113931dc push 0x113c2628 */
  push32((uint32_t)(0x113c2628u));
  /* 113931e1 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113931e7u);
  /* 113931e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113931ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113931ec call 0x11395030 */
  push32(0x113931f1u); f_11395030();
  /* 113931f1 mov esi, esp */
  ESI = (ESP);
  /* 113931f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113931f5 call dword ptr [0x113c54dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54dc))), 0x113931fbu);
  /* 113931fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113931fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393200 call 0x11395030 */
  push32(0x11393205u); f_11395030();
L_11393205:;
  /* 11393205 mov esi, esp */
  ESI = (ESP);
  /* 11393207 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11393209 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139320fu);
  /* 1139320f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393212 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393214 call 0x11395030 */
  push32(0x11393219u); f_11395030();
  /* 11393219 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139321e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393220 je 0x11393282 */
  if (C.zf) goto L_11393282;
  /* 11393222 mov esi, esp */
  ESI = (ESP);
  /* 11393224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393226 push 0x113c2450 */
  push32((uint32_t)(0x113c2450u));
  /* 1139322b call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x11393231u);
  /* 11393231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393236 call 0x11395030 */
  push32(0x1139323bu); f_11395030();
  /* 1139323b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139323d jle 0x11393282 */
  if ((C.zf||C.sf!=C.of)) goto L_11393282;
  /* 1139323f mov esi, esp */
  ESI = (ESP);
  /* 11393241 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393243 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11393245 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x1139324bu);
  /* 1139324b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139324e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393250 call 0x11395030 */
  push32(0x11393255u); f_11395030();
  /* 11393255 mov esi, esp */
  ESI = (ESP);
  /* 11393257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393259 push 0x113c2630 */
  push32((uint32_t)(0x113c2630u));
  /* 1139325e call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393264u);
  /* 11393264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393269 call 0x11395030 */
  push32(0x1139326eu); f_11395030();
  /* 1139326e mov esi, esp */
  ESI = (ESP);
  /* 11393270 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393272 call dword ptr [0x113c54d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54d8))), 0x11393278u);
  /* 11393278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139327b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139327d call 0x11395030 */
  push32(0x11393282u); f_11395030();
L_11393282:;
  /* 11393282 mov esi, esp */
  ESI = (ESP);
  /* 11393284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11393286 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139328cu);
  /* 1139328c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139328f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393291 call 0x11395030 */
  push32(0x11393296u); f_11395030();
  /* 11393296 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139329b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139329d jne 0x113932ff */
  if (!C.zf) goto L_113932ff;
  /* 1139329f mov esi, esp */
  ESI = (ESP);
  /* 113932a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113932a3 push 0x113c2450 */
  push32((uint32_t)(0x113c2450u));
  /* 113932a8 call dword ptr [0x113c54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ac))), 0x113932aeu);
  /* 113932ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113932b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113932b3 call 0x11395030 */
  push32(0x113932b8u); f_11395030();
  /* 113932b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113932ba jne 0x113932ff */
  if (!C.zf) goto L_113932ff;
  /* 113932bc mov esi, esp */
  ESI = (ESP);
  /* 113932be push 1 */
  push32((uint32_t)(0x1u));
  /* 113932c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 113932c2 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113932c8u);
  /* 113932c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113932cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113932cd call 0x11395030 */
  push32(0x113932d2u); f_11395030();
  /* 113932d2 mov esi, esp */
  ESI = (ESP);
  /* 113932d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113932d6 push 0x113c2630 */
  push32((uint32_t)(0x113c2630u));
  /* 113932db call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113932e1u);
  /* 113932e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113932e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113932e6 call 0x11395030 */
  push32(0x113932ebu); f_11395030();
  /* 113932eb mov esi, esp */
  ESI = (ESP);
  /* 113932ed push 1 */
  push32((uint32_t)(0x1u));
  /* 113932ef call dword ptr [0x113c54dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54dc))), 0x113932f5u);
  /* 113932f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113932f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113932fa call 0x11395030 */
  push32(0x113932ffu); f_11395030();
L_113932ff:;
  /* 113932ff mov esi, esp */
  ESI = (ESP);
  /* 11393301 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11393303 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393309u);
  /* 11393309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139330c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139330e call 0x11395030 */
  push32(0x11393313u); f_11395030();
  /* 11393313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139331a jne 0x1139348d */
  if (!C.zf) goto L_1139348d;
  /* 11393320 mov esi, esp */
  ESI = (ESP);
  /* 11393322 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393324 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139332au);
  /* 1139332a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139332d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139332f call 0x11395030 */
  push32(0x11393334u); f_11395030();
  /* 11393334 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139333b je 0x1139348d */
  if (C.zf) goto L_1139348d;
  /* 11393341 mov esi, esp */
  ESI = (ESP);
  /* 11393343 push 0x113c2468 */
  push32((uint32_t)(0x113c2468u));
  /* 11393348 push 0x113c2550 */
  push32((uint32_t)(0x113c2550u));
  /* 1139334d call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x11393353u);
  /* 11393353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393358 call 0x11395030 */
  push32(0x1139335du); f_11395030();
  /* 1139335d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139335f jle 0x1139348d */
  if ((C.zf||C.sf!=C.of)) goto L_1139348d;
  /* 11393365 mov esi, esp */
  ESI = (ESP);
  /* 11393367 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393369 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139336b call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393371u);
  /* 11393371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393374 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393376 call 0x11395030 */
  push32(0x1139337bu); f_11395030();
  /* 1139337b mov esi, esp */
  ESI = (ESP);
  /* 1139337d push 0x113bd3a0 */
  push32((uint32_t)(0x113bd3a0u));
  /* 11393382 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11393388u);
  /* 11393388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139338b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139338d call 0x11395030 */
  push32(0x11393392u); f_11395030();
  /* 11393392 mov esi, esp */
  ESI = (ESP);
  /* 11393394 push 0x113bd398 */
  push32((uint32_t)(0x113bd398u));
  /* 11393399 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x1139339fu);
  /* 1139339f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113933a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113933a4 call 0x11395030 */
  push32(0x113933a9u); f_11395030();
  /* 113933a9 mov esi, esp */
  ESI = (ESP);
  /* 113933ab push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113933ad push 0x113c25d8 */
  push32((uint32_t)(0x113c25d8u));
  /* 113933b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113933b4 push 0x113c23f8 */
  push32((uint32_t)(0x113c23f8u));
  /* 113933b9 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 113933be push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 113933c3 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x113933c9u);
  /* 113933c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113933cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113933ce call 0x11395030 */
  push32(0x113933d3u); f_11395030();
  /* 113933d3 mov esi, esp */
  ESI = (ESP);
  /* 113933d5 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113933d7 push 0x113c25e0 */
  push32((uint32_t)(0x113c25e0u));
  /* 113933dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113933de push 0x113c23f8 */
  push32((uint32_t)(0x113c23f8u));
  /* 113933e3 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 113933e8 push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 113933ed call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x113933f3u);
  /* 113933f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113933f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113933f8 call 0x11395030 */
  push32(0x113933fdu); f_11395030();
  /* 113933fd mov esi, esp */
  ESI = (ESP);
  /* 113933ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11393401 push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 11393406 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139340cu);
  /* 1139340c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139340f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393411 call 0x11395030 */
  push32(0x11393416u); f_11395030();
  /* 11393416 mov esi, esp */
  ESI = (ESP);
  /* 11393418 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139341a push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 1139341f call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393425u);
  /* 11393425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139342a call 0x11395030 */
  push32(0x1139342fu); f_11395030();
  /* 1139342f mov esi, esp */
  ESI = (ESP);
  /* 11393431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393433 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393435 call dword ptr [0x113c54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e4))), 0x1139343bu);
  /* 1139343b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139343e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393440 call 0x11395030 */
  push32(0x11393445u); f_11395030();
  /* 11393445 mov esi, esp */
  ESI = (ESP);
  /* 11393447 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393449 push 0x113c2540 */
  push32((uint32_t)(0x113c2540u));
  /* 1139344e call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393454u);
  /* 11393454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393459 call 0x11395030 */
  push32(0x1139345eu); f_11395030();
  /* 1139345e mov esi, esp */
  ESI = (ESP);
  /* 11393460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393462 push 0x113c2460 */
  push32((uint32_t)(0x113c2460u));
  /* 11393467 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139346du);
  /* 1139346d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393472 call 0x11395030 */
  push32(0x11393477u); f_11395030();
  /* 11393477 mov esi, esp */
  ESI = (ESP);
  /* 11393479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139347b push 1 */
  push32((uint32_t)(0x1u));
  /* 1139347d call dword ptr [0x113c54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e4))), 0x11393483u);
  /* 11393483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393488 call 0x11395030 */
  push32(0x1139348du); f_11395030();
L_1139348d:;
  /* 1139348d mov esi, esp */
  ESI = (ESP);
  /* 1139348f push 4 */
  push32((uint32_t)(0x4u));
  /* 11393491 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393497u);
  /* 11393497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139349a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139349c call 0x11395030 */
  push32(0x113934a1u); f_11395030();
  /* 113934a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113934a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113934a8 jne 0x1139359a */
  if (!C.zf) goto L_1139359a;
  /* 113934ae mov esi, esp */
  ESI = (ESP);
  /* 113934b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 113934b2 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113934b8u);
  /* 113934b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113934bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113934bd call 0x11395030 */
  push32(0x113934c2u); f_11395030();
  /* 113934c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113934c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113934c9 je 0x1139359a */
  if (C.zf) goto L_1139359a;
  /* 113934cf mov esi, esp */
  ESI = (ESP);
  /* 113934d1 push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 113934d6 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x113934dcu);
  /* 113934dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113934df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113934e1 call 0x11395030 */
  push32(0x113934e6u); f_11395030();
  /* 113934e6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113934e9 jge 0x1139359a */
  if ((C.sf==C.of)) goto L_1139359a;
  /* 113934ef mov esi, esp */
  ESI = (ESP);
  /* 113934f1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113934f3 push 0x113c25d8 */
  push32((uint32_t)(0x113c25d8u));
  /* 113934f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113934fa push 0x113c23f8 */
  push32((uint32_t)(0x113c23f8u));
  /* 113934ff push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393504 push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 11393509 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x1139350fu);
  /* 1139350f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393514 call 0x11395030 */
  push32(0x11393519u); f_11395030();
  /* 11393519 mov esi, esp */
  ESI = (ESP);
  /* 1139351b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139351d push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 11393522 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393528u);
  /* 11393528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139352b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139352d call 0x11395030 */
  push32(0x11393532u); f_11395030();
  /* 11393532 mov esi, esp */
  ESI = (ESP);
  /* 11393534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393538 push 0x113c25c8 */
  push32((uint32_t)(0x113c25c8u));
  /* 1139353d push 1 */
  push32((uint32_t)(0x1u));
  /* 1139353f call dword ptr [0x113c54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e8))), 0x11393545u);
  /* 11393545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139354a call 0x11395030 */
  push32(0x1139354fu); f_11395030();
  /* 1139354f mov esi, esp */
  ESI = (ESP);
  /* 11393551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393553 push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 11393558 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139355eu);
  /* 1139355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393563 call 0x11395030 */
  push32(0x11393568u); f_11395030();
  /* 11393568 mov esi, esp */
  ESI = (ESP);
  /* 1139356a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139356c push 1 */
  push32((uint32_t)(0x1u));
  /* 1139356e call dword ptr [0x113c54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e4))), 0x11393574u);
  /* 11393574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393579 call 0x11395030 */
  push32(0x1139357eu); f_11395030();
  /* 1139357e mov esi, esp */
  ESI = (ESP);
  /* 11393580 push 0x113c2410 */
  push32((uint32_t)(0x113c2410u));
  /* 11393585 push 0x113c2428 */
  push32((uint32_t)(0x113c2428u));
  /* 1139358a call dword ptr [0x113c54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ec))), 0x11393590u);
  /* 11393590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393595 call 0x11395030 */
  push32(0x1139359au); f_11395030();
L_1139359a:;
  /* 1139359a mov esi, esp */
  ESI = (ESP);
  /* 1139359c push 4 */
  push32((uint32_t)(0x4u));
  /* 1139359e call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113935a4u);
  /* 113935a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113935a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113935a9 call 0x11395030 */
  push32(0x113935aeu); f_11395030();
  /* 113935ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113935b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113935b5 jne 0x113936a7 */
  if (!C.zf) goto L_113936a7;
  /* 113935bb mov esi, esp */
  ESI = (ESP);
  /* 113935bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 113935bf call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113935c5u);
  /* 113935c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113935c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113935ca call 0x11395030 */
  push32(0x113935cfu); f_11395030();
  /* 113935cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113935d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113935d6 je 0x113936a7 */
  if (C.zf) goto L_113936a7;
  /* 113935dc mov esi, esp */
  ESI = (ESP);
  /* 113935de push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 113935e3 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x113935e9u);
  /* 113935e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113935ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113935ee call 0x11395030 */
  push32(0x113935f3u); f_11395030();
  /* 113935f3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113935f6 jge 0x113936a7 */
  if ((C.sf==C.of)) goto L_113936a7;
  /* 113935fc mov esi, esp */
  ESI = (ESP);
  /* 113935fe push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11393600 push 0x113c25e0 */
  push32((uint32_t)(0x113c25e0u));
  /* 11393605 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393607 push 0x113c23f8 */
  push32((uint32_t)(0x113c23f8u));
  /* 1139360c push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393611 push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 11393616 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x1139361cu);
  /* 1139361c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139361f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393621 call 0x11395030 */
  push32(0x11393626u); f_11395030();
  /* 11393626 mov esi, esp */
  ESI = (ESP);
  /* 11393628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139362a push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 1139362f call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393635u);
  /* 11393635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139363a call 0x11395030 */
  push32(0x1139363fu); f_11395030();
  /* 1139363f mov esi, esp */
  ESI = (ESP);
  /* 11393641 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393643 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393645 push 0x113c25d0 */
  push32((uint32_t)(0x113c25d0u));
  /* 1139364a push 1 */
  push32((uint32_t)(0x1u));
  /* 1139364c call dword ptr [0x113c54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e8))), 0x11393652u);
  /* 11393652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393657 call 0x11395030 */
  push32(0x1139365cu); f_11395030();
  /* 1139365c mov esi, esp */
  ESI = (ESP);
  /* 1139365e push 0 */
  push32((uint32_t)(0x0u));
  /* 11393660 push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 11393665 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x1139366bu);
  /* 1139366b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393670 call 0x11395030 */
  push32(0x11393675u); f_11395030();
  /* 11393675 mov esi, esp */
  ESI = (ESP);
  /* 11393677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393679 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139367b call dword ptr [0x113c54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e4))), 0x11393681u);
  /* 11393681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393684 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393686 call 0x11395030 */
  push32(0x1139368bu); f_11395030();
  /* 1139368b mov esi, esp */
  ESI = (ESP);
  /* 1139368d push 0x113c2408 */
  push32((uint32_t)(0x113c2408u));
  /* 11393692 push 0x113c24f0 */
  push32((uint32_t)(0x113c24f0u));
  /* 11393697 call dword ptr [0x113c54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54ec))), 0x1139369du);
  /* 1139369d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113936a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113936a2 call 0x11395030 */
  push32(0x113936a7u); f_11395030();
L_113936a7:;
  /* 113936a7 mov esi, esp */
  ESI = (ESP);
  /* 113936a9 push 8 */
  push32((uint32_t)(0x8u));
  /* 113936ab call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113936b1u);
  /* 113936b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113936b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113936b6 call 0x11395030 */
  push32(0x113936bbu); f_11395030();
  /* 113936bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113936c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113936c2 je 0x11393902 */
  if (C.zf) goto L_11393902;
  /* 113936c8 mov esi, esp */
  ESI = (ESP);
  /* 113936ca push 5 */
  push32((uint32_t)(0x5u));
  /* 113936cc call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113936d2u);
  /* 113936d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113936d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113936d7 call 0x11395030 */
  push32(0x113936dcu); f_11395030();
  /* 113936dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113936e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113936e3 je 0x11393902 */
  if (C.zf) goto L_11393902;
  /* 113936e9 mov esi, esp */
  ESI = (ESP);
  /* 113936eb push 0 */
  push32((uint32_t)(0x0u));
  /* 113936ed push 5 */
  push32((uint32_t)(0x5u));
  /* 113936ef call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113936f5u);
  /* 113936f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113936f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113936fa call 0x11395030 */
  push32(0x113936ffu); f_11395030();
  /* 113936ff mov esi, esp */
  ESI = (ESP);
  /* 11393701 push 0x32c8 */
  push32((uint32_t)(0x32c8u));
  /* 11393706 push 2 */
  push32((uint32_t)(0x2u));
  /* 11393708 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x1139370eu);
  /* 1139370e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393713 call 0x11395030 */
  push32(0x11393718u); f_11395030();
  /* 11393718 mov esi, esp */
  ESI = (ESP);
  /* 1139371a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139371c call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11393722u);
  /* 11393722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393727 call 0x11395030 */
  push32(0x1139372cu); f_11395030();
  /* 1139372c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139372f cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393733 ja 0x1139389f */
  if ((!C.cf&&!C.zf)) goto L_1139389f;
  /* 11393739 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139373c jmp dword ptr [eax*4 + 0x11394503] */
  switch (EAX) {
    case 0: goto L_11393743;
    case 1: goto L_1139379c;
    case 2: goto L_113937f5;
    case 3: goto L_1139384b;
    case 4: goto L_11393a82;
    case 5: goto L_11393ae1;
    case 6: goto L_11393b40;
    case 7: goto L_11393b9c;
    default: x86_unimpl("switch@0x1139373c out of table"); return;
  }
L_11393743:;
  /* 11393743 mov esi, esp */
  ESI = (ESP);
  /* 11393745 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11393747 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 1139374c push 4 */
  push32((uint32_t)(0x4u));
  /* 1139374e push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393753 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393758 push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 1139375d call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393763u);
  /* 11393763 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393768 call 0x11395030 */
  push32(0x1139376du); f_11395030();
  /* 1139376d mov esi, esp */
  ESI = (ESP);
  /* 1139376f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11393771 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 11393776 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393778 push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 1139377d push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393782 push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 11393787 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x1139378du);
  /* 1139378d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393792 call 0x11395030 */
  push32(0x11393797u); f_11395030();
  /* 11393797 jmp 0x1139389f */
  goto L_1139389f;
L_1139379c:;
  /* 1139379c mov esi, esp */
  ESI = (ESP);
  /* 1139379e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 113937a0 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 113937a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 113937a7 push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 113937ac push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 113937b1 push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 113937b6 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x113937bcu);
  /* 113937bc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113937bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113937c1 call 0x11395030 */
  push32(0x113937c6u); f_11395030();
  /* 113937c6 mov esi, esp */
  ESI = (ESP);
  /* 113937c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 113937ca push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 113937cf push 4 */
  push32((uint32_t)(0x4u));
  /* 113937d1 push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 113937d6 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 113937db push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 113937e0 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x113937e6u);
  /* 113937e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113937e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113937eb call 0x11395030 */
  push32(0x113937f0u); f_11395030();
  /* 113937f0 jmp 0x1139389f */
  goto L_1139389f;
L_113937f5:;
  /* 113937f5 mov esi, esp */
  ESI = (ESP);
  /* 113937f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 113937f9 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 113937fe push 4 */
  push32((uint32_t)(0x4u));
  /* 11393800 push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393805 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 1139380a push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 1139380f call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393815u);
  /* 11393815 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139381a call 0x11395030 */
  push32(0x1139381fu); f_11395030();
  /* 1139381f mov esi, esp */
  ESI = (ESP);
  /* 11393821 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11393823 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 11393828 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139382a push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 1139382f push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11393834 push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 11393839 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x1139383fu);
  /* 1139383f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393842 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393844 call 0x11395030 */
  push32(0x11393849u); f_11395030();
  /* 11393849 jmp 0x1139389f */
  goto L_1139389f;
L_1139384b:;
  /* 1139384b mov esi, esp */
  ESI = (ESP);
  /* 1139384d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1139384f push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 11393854 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393856 push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 1139385b push 0x113c23f0 */
  push32((uint32_t)(0x113c23f0u));
  /* 11393860 push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 11393865 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x1139386bu);
  /* 1139386b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139386e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393870 call 0x11395030 */
  push32(0x11393875u); f_11395030();
  /* 11393875 mov esi, esp */
  ESI = (ESP);
  /* 11393877 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11393879 push 0x113c25e8 */
  push32((uint32_t)(0x113c25e8u));
  /* 1139387e push 4 */
  push32((uint32_t)(0x4u));
  /* 11393880 push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 11393885 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 1139388a push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 1139388f call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393895u);
  /* 11393895 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139389a call 0x11395030 */
  push32(0x1139389fu); f_11395030();
L_1139389f:;
  /* 1139389f mov esi, esp */
  ESI = (ESP);
  /* 113938a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113938a3 push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 113938a8 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113938aeu);
  /* 113938ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113938b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113938b3 call 0x11395030 */
  push32(0x113938b8u); f_11395030();
  /* 113938b8 mov esi, esp */
  ESI = (ESP);
  /* 113938ba push 1 */
  push32((uint32_t)(0x1u));
  /* 113938bc push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 113938c1 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x113938c7u);
  /* 113938c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113938ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113938cc call 0x11395030 */
  push32(0x113938d1u); f_11395030();
  /* 113938d1 mov esi, esp */
  ESI = (ESP);
  /* 113938d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113938d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 113938d7 push 0x113c25c8 */
  push32((uint32_t)(0x113c25c8u));
  /* 113938dc push 4 */
  push32((uint32_t)(0x4u));
  /* 113938de call dword ptr [0x113c54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e8))), 0x113938e4u);
  /* 113938e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113938e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113938e9 call 0x11395030 */
  push32(0x113938eeu); f_11395030();
  /* 113938ee mov esi, esp */
  ESI = (ESP);
  /* 113938f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 113938f2 call dword ptr [0x113c54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f0))), 0x113938f8u);
  /* 113938f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113938fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113938fd call 0x11395030 */
  push32(0x11393902u); f_11395030();
L_11393902:;
  /* 11393902 mov esi, esp */
  ESI = (ESP);
  /* 11393904 push 3 */
  push32((uint32_t)(0x3u));
  /* 11393906 call dword ptr [0x113c54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f4))), 0x1139390cu);
  /* 1139390c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139390f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393911 call 0x11395030 */
  push32(0x11393916u); f_11395030();
  /* 11393916 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139391b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139391d je 0x1139398b */
  if (C.zf) goto L_1139398b;
  /* 1139391f mov esi, esp */
  ESI = (ESP);
  /* 11393921 push 0x113c2438 */
  push32((uint32_t)(0x113c2438u));
  /* 11393926 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x1139392cu);
  /* 1139392c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139392f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393931 call 0x11395030 */
  push32(0x11393936u); f_11395030();
  /* 11393936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393938 jne 0x11393955 */
  if (!C.zf) goto L_11393955;
  /* 1139393a mov esi, esp */
  ESI = (ESP);
  /* 1139393c push 0x113c2430 */
  push32((uint32_t)(0x113c2430u));
  /* 11393941 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11393947u);
  /* 11393947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139394a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139394c call 0x11395030 */
  push32(0x11393951u); f_11395030();
  /* 11393951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393953 je 0x11393972 */
  if (C.zf) goto L_11393972;
L_11393955:;
  /* 11393955 mov esi, esp */
  ESI = (ESP);
  /* 11393957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11393959 call dword ptr [0x113c54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a0))), 0x1139395fu);
  /* 1139395f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393964 call 0x11395030 */
  push32(0x11393969u); f_11395030();
  /* 11393969 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139396e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393970 je 0x1139398b */
  if (C.zf) goto L_1139398b;
L_11393972:;
  /* 11393972 mov esi, esp */
  ESI = (ESP);
  /* 11393974 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11393979 push 3 */
  push32((uint32_t)(0x3u));
  /* 1139397b call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x11393981u);
  /* 11393981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393986 call 0x11395030 */
  push32(0x1139398bu); f_11395030();
L_1139398b:;
  /* 1139398b mov esi, esp */
  ESI = (ESP);
  /* 1139398d push 3 */
  push32((uint32_t)(0x3u));
  /* 1139398f call dword ptr [0x113c54f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f8))), 0x11393995u);
  /* 11393995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139399a call 0x11395030 */
  push32(0x1139399fu); f_11395030();
  /* 1139399f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113939a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113939a6 je 0x113939e6 */
  if (C.zf) goto L_113939e6;
  /* 113939a8 mov esi, esp */
  ESI = (ESP);
  /* 113939aa push 3 */
  push32((uint32_t)(0x3u));
  /* 113939ac call dword ptr [0x113c54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54fc))), 0x113939b2u);
  /* 113939b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113939b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113939b7 call 0x11395030 */
  push32(0x113939bcu); f_11395030();
  /* 113939bc mov esi, esp */
  ESI = (ESP);
  /* 113939be push 2 */
  push32((uint32_t)(0x2u));
  /* 113939c0 call dword ptr [0x113c54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54fc))), 0x113939c6u);
  /* 113939c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113939c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113939cb call 0x11395030 */
  push32(0x113939d0u); f_11395030();
  /* 113939d0 mov esi, esp */
  ESI = (ESP);
  /* 113939d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113939d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 113939d6 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113939dcu);
  /* 113939dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113939df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113939e1 call 0x11395030 */
  push32(0x113939e6u); f_11395030();
L_113939e6:;
  /* 113939e6 mov esi, esp */
  ESI = (ESP);
  /* 113939e8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 113939ea call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113939f0u);
  /* 113939f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113939f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113939f5 call 0x11395030 */
  push32(0x113939fau); f_11395030();
  /* 113939fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113939ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393a01 je 0x11393c5c */
  if (C.zf) goto L_11393c5c;
  /* 11393a07 mov esi, esp */
  ESI = (ESP);
  /* 11393a09 push 7 */
  push32((uint32_t)(0x7u));
  /* 11393a0b call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393a11u);
  /* 11393a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393a16 call 0x11395030 */
  push32(0x11393a1bu); f_11395030();
  /* 11393a1b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393a22 je 0x11393c5c */
  if (C.zf) goto L_11393c5c;
  /* 11393a28 mov esi, esp */
  ESI = (ESP);
  /* 11393a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11393a2c push 7 */
  push32((uint32_t)(0x7u));
  /* 11393a2e call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393a34u);
  /* 11393a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393a39 call 0x11395030 */
  push32(0x11393a3eu); f_11395030();
  /* 11393a3e mov esi, esp */
  ESI = (ESP);
  /* 11393a40 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11393a45 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393a47 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x11393a4du);
  /* 11393a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393a50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393a52 call 0x11395030 */
  push32(0x11393a57u); f_11395030();
  /* 11393a57 mov esi, esp */
  ESI = (ESP);
  /* 11393a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393a5b call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11393a61u);
  /* 11393a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393a66 call 0x11395030 */
  push32(0x11393a6bu); f_11395030();
  /* 11393a6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11393a6e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393a72 ja 0x11393bf6 */
  if ((!C.cf&&!C.zf)) goto L_11393bf6;
  /* 11393a78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11393a7b jmp dword ptr [ecx*4 + 0x11394513] */
  switch (ECX) {
    case 0: goto L_11393a82;
    case 1: goto L_11393ae1;
    case 2: goto L_11393b40;
    case 3: goto L_11393b9c;
    default: x86_unimpl("switch@0x11393a7b out of table"); return;
  }
L_11393a82:;
  /* 11393a82 mov esi, esp */
  ESI = (ESP);
  /* 11393a84 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393a89 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393a8e push 4 */
  push32((uint32_t)(0x4u));
  /* 11393a90 push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393a95 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393a9a push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393a9f call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393aa5u);
  /* 11393aa5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393aaa call 0x11395030 */
  push32(0x11393aafu); f_11395030();
  /* 11393aaf mov esi, esp */
  ESI = (ESP);
  /* 11393ab1 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393ab6 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393abb push 4 */
  push32((uint32_t)(0x4u));
  /* 11393abd push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 11393ac2 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393ac7 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393acc call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393ad2u);
  /* 11393ad2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393ad5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ad7 call 0x11395030 */
  push32(0x11393adcu); f_11395030();
  /* 11393adc jmp 0x11393bf6 */
  goto L_11393bf6;
L_11393ae1:;
  /* 11393ae1 mov esi, esp */
  ESI = (ESP);
  /* 11393ae3 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393ae8 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393aed push 4 */
  push32((uint32_t)(0x4u));
  /* 11393aef push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393af4 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11393af9 push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393afe call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393b04u);
  /* 11393b04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393b09 call 0x11395030 */
  push32(0x11393b0eu); f_11395030();
  /* 11393b0e mov esi, esp */
  ESI = (ESP);
  /* 11393b10 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393b15 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393b1a push 4 */
  push32((uint32_t)(0x4u));
  /* 11393b1c push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 11393b21 push 0x113c2488 */
  push32((uint32_t)(0x113c2488u));
  /* 11393b26 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393b2b call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393b31u);
  /* 11393b31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393b34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393b36 call 0x11395030 */
  push32(0x11393b3bu); f_11395030();
  /* 11393b3b jmp 0x11393bf6 */
  goto L_11393bf6;
L_11393b40:;
  /* 11393b40 mov esi, esp */
  ESI = (ESP);
  /* 11393b42 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393b47 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393b4c push 4 */
  push32((uint32_t)(0x4u));
  /* 11393b4e push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393b53 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11393b58 push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393b5d call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393b63u);
  /* 11393b63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393b68 call 0x11395030 */
  push32(0x11393b6du); f_11395030();
  /* 11393b6d mov esi, esp */
  ESI = (ESP);
  /* 11393b6f push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393b74 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393b79 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393b7b push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 11393b80 push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11393b85 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393b8a call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393b90u);
  /* 11393b90 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393b93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393b95 call 0x11395030 */
  push32(0x11393b9au); f_11395030();
  /* 11393b9a jmp 0x11393bf6 */
  goto L_11393bf6;
L_11393b9c:;
  /* 11393b9c mov esi, esp */
  ESI = (ESP);
  /* 11393b9e push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393ba3 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393ba8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393baa push 0x113c2670 */
  push32((uint32_t)(0x113c2670u));
  /* 11393baf push 0x113c23f0 */
  push32((uint32_t)(0x113c23f0u));
  /* 11393bb4 push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393bb9 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393bbfu);
  /* 11393bbf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393bc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393bc4 call 0x11395030 */
  push32(0x11393bc9u); f_11395030();
  /* 11393bc9 mov esi, esp */
  ESI = (ESP);
  /* 11393bcb push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393bd0 push 0x113c25f0 */
  push32((uint32_t)(0x113c25f0u));
  /* 11393bd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393bd7 push 0x113c2478 */
  push32((uint32_t)(0x113c2478u));
  /* 11393bdc push 0x113c23e8 */
  push32((uint32_t)(0x113c23e8u));
  /* 11393be1 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393be6 call dword ptr [0x113c54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e0))), 0x11393becu);
  /* 11393bec add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393bf1 call 0x11395030 */
  push32(0x11393bf6u); f_11395030();
L_11393bf6:;
  /* 11393bf6 mov esi, esp */
  ESI = (ESP);
  /* 11393bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393bfa push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393bff call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393c05u);
  /* 11393c05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c0a call 0x11395030 */
  push32(0x11393c0fu); f_11395030();
  /* 11393c0f mov esi, esp */
  ESI = (ESP);
  /* 11393c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11393c13 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393c18 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11393c1eu);
  /* 11393c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c23 call 0x11395030 */
  push32(0x11393c28u); f_11395030();
  /* 11393c28 mov esi, esp */
  ESI = (ESP);
  /* 11393c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11393c2c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11393c31 push 0x113c25d0 */
  push32((uint32_t)(0x113c25d0u));
  /* 11393c36 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393c38 call dword ptr [0x113c54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e8))), 0x11393c3eu);
  /* 11393c3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c43 call 0x11395030 */
  push32(0x11393c48u); f_11395030();
  /* 11393c48 mov esi, esp */
  ESI = (ESP);
  /* 11393c4a push 4 */
  push32((uint32_t)(0x4u));
  /* 11393c4c call dword ptr [0x113c54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f0))), 0x11393c52u);
  /* 11393c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c57 call 0x11395030 */
  push32(0x11393c5cu); f_11395030();
L_11393c5c:;
  /* 11393c5c mov esi, esp */
  ESI = (ESP);
  /* 11393c5e push 5 */
  push32((uint32_t)(0x5u));
  /* 11393c60 call dword ptr [0x113c54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f4))), 0x11393c66u);
  /* 11393c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c6b call 0x11395030 */
  push32(0x11393c70u); f_11395030();
  /* 11393c70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393c77 je 0x11393ce5 */
  if (C.zf) goto L_11393ce5;
  /* 11393c79 mov esi, esp */
  ESI = (ESP);
  /* 11393c7b push 0x113c2448 */
  push32((uint32_t)(0x113c2448u));
  /* 11393c80 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11393c86u);
  /* 11393c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393c89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393c8b call 0x11395030 */
  push32(0x11393c90u); f_11395030();
  /* 11393c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393c92 jne 0x11393caf */
  if (!C.zf) goto L_11393caf;
  /* 11393c94 mov esi, esp */
  ESI = (ESP);
  /* 11393c96 push 0x113c2440 */
  push32((uint32_t)(0x113c2440u));
  /* 11393c9b call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11393ca1u);
  /* 11393ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ca6 call 0x11395030 */
  push32(0x11393cabu); f_11395030();
  /* 11393cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393cad je 0x11393ccc */
  if (C.zf) goto L_11393ccc;
L_11393caf:;
  /* 11393caf mov esi, esp */
  ESI = (ESP);
  /* 11393cb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393cb3 call dword ptr [0x113c54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a0))), 0x11393cb9u);
  /* 11393cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393cbe call 0x11395030 */
  push32(0x11393cc3u); f_11395030();
  /* 11393cc3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393cca je 0x11393ce5 */
  if (C.zf) goto L_11393ce5;
L_11393ccc:;
  /* 11393ccc mov esi, esp */
  ESI = (ESP);
  /* 11393cce push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11393cd3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11393cd5 call dword ptr [0x113c5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5494))), 0x11393cdbu);
  /* 11393cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ce0 call 0x11395030 */
  push32(0x11393ce5u); f_11395030();
L_11393ce5:;
  /* 11393ce5 mov esi, esp */
  ESI = (ESP);
  /* 11393ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11393ce9 call dword ptr [0x113c54f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f8))), 0x11393cefu);
  /* 11393cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393cf4 call 0x11395030 */
  push32(0x11393cf9u); f_11395030();
  /* 11393cf9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393d00 je 0x11393d40 */
  if (C.zf) goto L_11393d40;
  /* 11393d02 mov esi, esp */
  ESI = (ESP);
  /* 11393d04 push 5 */
  push32((uint32_t)(0x5u));
  /* 11393d06 call dword ptr [0x113c54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54fc))), 0x11393d0cu);
  /* 11393d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d11 call 0x11395030 */
  push32(0x11393d16u); f_11395030();
  /* 11393d16 mov esi, esp */
  ESI = (ESP);
  /* 11393d18 push 4 */
  push32((uint32_t)(0x4u));
  /* 11393d1a call dword ptr [0x113c54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54fc))), 0x11393d20u);
  /* 11393d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d25 call 0x11395030 */
  push32(0x11393d2au); f_11395030();
  /* 11393d2a mov esi, esp */
  ESI = (ESP);
  /* 11393d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11393d2e push 7 */
  push32((uint32_t)(0x7u));
  /* 11393d30 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393d36u);
  /* 11393d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d3b call 0x11395030 */
  push32(0x11393d40u); f_11395030();
L_11393d40:;
  /* 11393d40 mov esi, esp */
  ESI = (ESP);
  /* 11393d42 push 8 */
  push32((uint32_t)(0x8u));
  /* 11393d44 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393d4au);
  /* 11393d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d4f call 0x11395030 */
  push32(0x11393d54u); f_11395030();
  /* 11393d54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393d5b je 0x11393da5 */
  if (C.zf) goto L_11393da5;
  /* 11393d5d mov esi, esp */
  ESI = (ESP);
  /* 11393d5f push 0x113c2668 */
  push32((uint32_t)(0x113c2668u));
  /* 11393d64 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11393d6au);
  /* 11393d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d6f call 0x11395030 */
  push32(0x11393d74u); f_11395030();
  /* 11393d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393d76 jne 0x11393da5 */
  if (!C.zf) goto L_11393da5;
  /* 11393d78 mov esi, esp */
  ESI = (ESP);
  /* 11393d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11393d7c push 8 */
  push32((uint32_t)(0x8u));
  /* 11393d7e call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393d84u);
  /* 11393d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393d89 call 0x11395030 */
  push32(0x11393d8eu); f_11395030();
  /* 11393d8e mov esi, esp */
  ESI = (ESP);
  /* 11393d90 push 0x113bd38c */
  push32((uint32_t)(0x113bd38cu));
  /* 11393d95 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11393d9bu);
  /* 11393d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393d9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393da0 call 0x11395030 */
  push32(0x11393da5u); f_11395030();
L_11393da5:;
  /* 11393da5 mov esi, esp */
  ESI = (ESP);
  /* 11393da7 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11393da9 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393dafu);
  /* 11393daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393db2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393db4 call 0x11395030 */
  push32(0x11393db9u); f_11395030();
  /* 11393db9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393dc0 je 0x11393e0a */
  if (C.zf) goto L_11393e0a;
  /* 11393dc2 mov esi, esp */
  ESI = (ESP);
  /* 11393dc4 push 0x113c23e0 */
  push32((uint32_t)(0x113c23e0u));
  /* 11393dc9 call dword ptr [0x113c54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b4))), 0x11393dcfu);
  /* 11393dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393dd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393dd4 call 0x11395030 */
  push32(0x11393dd9u); f_11395030();
  /* 11393dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393ddb jne 0x11393e0a */
  if (!C.zf) goto L_11393e0a;
  /* 11393ddd mov esi, esp */
  ESI = (ESP);
  /* 11393ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 11393de1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11393de3 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393de9u);
  /* 11393de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393dee call 0x11395030 */
  push32(0x11393df3u); f_11395030();
  /* 11393df3 mov esi, esp */
  ESI = (ESP);
  /* 11393df5 push 0x113bd380 */
  push32((uint32_t)(0x113bd380u));
  /* 11393dfa call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11393e00u);
  /* 11393e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e05 call 0x11395030 */
  push32(0x11393e0au); f_11395030();
L_11393e0a:;
  /* 11393e0a mov esi, esp */
  ESI = (ESP);
  /* 11393e0c push 8 */
  push32((uint32_t)(0x8u));
  /* 11393e0e call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393e14u);
  /* 11393e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e19 call 0x11395030 */
  push32(0x11393e1eu); f_11395030();
  /* 11393e1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393e23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393e25 jne 0x11393eba */
  if (!C.zf) goto L_11393eba;
  /* 11393e2b mov esi, esp */
  ESI = (ESP);
  /* 11393e2d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11393e2f call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393e35u);
  /* 11393e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e3a call 0x11395030 */
  push32(0x11393e3fu); f_11395030();
  /* 11393e3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393e46 jne 0x11393eba */
  if (!C.zf) goto L_11393eba;
  /* 11393e48 mov esi, esp */
  ESI = (ESP);
  /* 11393e4a push 0xc */
  push32((uint32_t)(0xcu));
  /* 11393e4c call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393e52u);
  /* 11393e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e57 call 0x11395030 */
  push32(0x11393e5cu); f_11395030();
  /* 11393e5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393e63 je 0x11393eba */
  if (C.zf) goto L_11393eba;
  /* 11393e65 mov esi, esp */
  ESI = (ESP);
  /* 11393e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393e69 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11393e6b call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393e71u);
  /* 11393e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e76 call 0x11395030 */
  push32(0x11393e7bu); f_11395030();
  /* 11393e7b mov esi, esp */
  ESI = (ESP);
  /* 11393e7d push 0x113bd378 */
  push32((uint32_t)(0x113bd378u));
  /* 11393e82 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11393e88u);
  /* 11393e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393e8d call 0x11395030 */
  push32(0x11393e92u); f_11395030();
  /* 11393e92 mov esi, esp */
  ESI = (ESP);
  /* 11393e94 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11393e96 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x11393e9cu);
  /* 11393e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ea1 call 0x11395030 */
  push32(0x11393ea6u); f_11395030();
  /* 11393ea6 mov esi, esp */
  ESI = (ESP);
  /* 11393ea8 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11393eaa call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11393eb0u);
  /* 11393eb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393eb5 call 0x11395030 */
  push32(0x11393ebau); f_11395030();
L_11393eba:;
  /* 11393eba mov esi, esp */
  ESI = (ESP);
  /* 11393ebc push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11393ebe call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393ec4u);
  /* 11393ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ec9 call 0x11395030 */
  push32(0x11393eceu); f_11395030();
  /* 11393ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393ed5 jne 0x11393fe3 */
  if (!C.zf) goto L_11393fe3;
  /* 11393edb mov esi, esp */
  ESI = (ESP);
  /* 11393edd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11393edf call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393ee5u);
  /* 11393ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393eea call 0x11395030 */
  push32(0x11393eefu); f_11395030();
  /* 11393eef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393ef6 je 0x11393fe3 */
  if (C.zf) goto L_11393fe3;
  /* 11393efc mov esi, esp */
  ESI = (ESP);
  /* 11393efe push 1 */
  push32((uint32_t)(0x1u));
  /* 11393f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f02 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393f08u);
  /* 11393f08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393f0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f0d call 0x11395030 */
  push32(0x11393f12u); f_11395030();
  /* 11393f12 cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f17 jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393f1d mov esi, esp */
  ESI = (ESP);
  /* 11393f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f23 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393f29u);
  /* 11393f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f2e call 0x11395030 */
  push32(0x11393f33u); f_11395030();
  /* 11393f33 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f38 jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393f3e mov esi, esp */
  ESI = (ESP);
  /* 11393f40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11393f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f44 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393f4au);
  /* 11393f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f4f call 0x11395030 */
  push32(0x11393f54u); f_11395030();
  /* 11393f54 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f59 jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393f5f mov esi, esp */
  ESI = (ESP);
  /* 11393f61 push 5 */
  push32((uint32_t)(0x5u));
  /* 11393f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f65 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393f6bu);
  /* 11393f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f70 call 0x11395030 */
  push32(0x11393f75u); f_11395030();
  /* 11393f75 cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f7a jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393f7c mov esi, esp */
  ESI = (ESP);
  /* 11393f7e push 4 */
  push32((uint32_t)(0x4u));
  /* 11393f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f82 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393f88u);
  /* 11393f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393f8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f8d call 0x11395030 */
  push32(0x11393f92u); f_11395030();
  /* 11393f92 cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393f97 jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393f99 mov esi, esp */
  ESI = (ESP);
  /* 11393f9b push 3 */
  push32((uint32_t)(0x3u));
  /* 11393f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11393f9f call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11393fa5u);
  /* 11393fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393faa call 0x11395030 */
  push32(0x11393fafu); f_11395030();
  /* 11393faf cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393fb4 jle 0x11393fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_11393fe3;
  /* 11393fb6 mov esi, esp */
  ESI = (ESP);
  /* 11393fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11393fba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11393fbc call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11393fc2u);
  /* 11393fc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393fc7 call 0x11395030 */
  push32(0x11393fccu); f_11395030();
  /* 11393fcc mov esi, esp */
  ESI = (ESP);
  /* 11393fce push 0x113bd36c */
  push32((uint32_t)(0x113bd36cu));
  /* 11393fd3 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11393fd9u);
  /* 11393fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393fde call 0x11395030 */
  push32(0x11393fe3u); f_11395030();
L_11393fe3:;
  /* 11393fe3 mov esi, esp */
  ESI = (ESP);
  /* 11393fe5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11393fe7 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11393fedu);
  /* 11393fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11393ff0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11393ff2 call 0x11395030 */
  push32(0x11393ff7u); f_11395030();
  /* 11393ff7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11393ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11393ffe jne 0x113941df */
  if (!C.zf) goto L_113941df;
  /* 11394004 mov esi, esp */
  ESI = (ESP);
  /* 11394006 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11394008 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139400eu);
  /* 1139400e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394013 call 0x11395030 */
  push32(0x11394018u); f_11395030();
  /* 11394018 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139401d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139401f je 0x113941df */
  if (C.zf) goto L_113941df;
  /* 11394025 mov esi, esp */
  ESI = (ESP);
  /* 11394027 push 1 */
  push32((uint32_t)(0x1u));
  /* 11394029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139402b call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11394031u);
  /* 11394031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394036 call 0x11395030 */
  push32(0x1139403bu); f_11395030();
  /* 1139403b cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394040 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 11394046 mov esi, esp */
  ESI = (ESP);
  /* 11394048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139404a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139404c call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11394052u);
  /* 11394052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394057 call 0x11395030 */
  push32(0x1139405cu); f_11395030();
  /* 1139405c cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394061 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 11394067 mov esi, esp */
  ESI = (ESP);
  /* 11394069 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139406b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139406d call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11394073u);
  /* 11394073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394076 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394078 call 0x11395030 */
  push32(0x1139407du); f_11395030();
  /* 1139407d cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394082 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 11394088 mov esi, esp */
  ESI = (ESP);
  /* 1139408a push 5 */
  push32((uint32_t)(0x5u));
  /* 1139408c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139408e call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x11394094u);
  /* 11394094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394097 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394099 call 0x11395030 */
  push32(0x1139409eu); f_11395030();
  /* 1139409e cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113940a3 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 113940a9 mov esi, esp */
  ESI = (ESP);
  /* 113940ab push 4 */
  push32((uint32_t)(0x4u));
  /* 113940ad push 0 */
  push32((uint32_t)(0x0u));
  /* 113940af call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x113940b5u);
  /* 113940b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113940b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113940ba call 0x11395030 */
  push32(0x113940bfu); f_11395030();
  /* 113940bf cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113940c4 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 113940ca mov esi, esp */
  ESI = (ESP);
  /* 113940cc push 3 */
  push32((uint32_t)(0x3u));
  /* 113940ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113940d0 call dword ptr [0x113c54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c8))), 0x113940d6u);
  /* 113940d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113940d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113940db call 0x11395030 */
  push32(0x113940e0u); f_11395030();
  /* 113940e0 cmp eax, 0x13ec */
  { uint32_t _a=(EAX),_b=(0x13ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113940e5 jle 0x113941df */
  if ((C.zf||C.sf!=C.of)) goto L_113941df;
  /* 113940eb mov esi, esp */
  ESI = (ESP);
  /* 113940ed push 0x113c24b0 */
  push32((uint32_t)(0x113c24b0u));
  /* 113940f2 push 0x113c24b8 */
  push32((uint32_t)(0x113c24b8u));
  /* 113940f7 call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x113940fdu);
  /* 113940fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394102 call 0x11395030 */
  push32(0x11394107u); f_11395030();
  /* 11394107 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139410a jne 0x113941df */
  if (!C.zf) goto L_113941df;
  /* 11394110 mov esi, esp */
  ESI = (ESP);
  /* 11394112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394114 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11394116 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x1139411cu);
  /* 1139411c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139411f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394121 call 0x11395030 */
  push32(0x11394126u); f_11395030();
  /* 11394126 mov esi, esp */
  ESI = (ESP);
  /* 11394128 push 0x113bd360 */
  push32((uint32_t)(0x113bd360u));
  /* 1139412d call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11394133u);
  /* 11394133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394136 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394138 call 0x11395030 */
  push32(0x1139413du); f_11395030();
  /* 1139413d mov esi, esp */
  ESI = (ESP);
  /* 1139413f push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 11394144 push 1 */
  push32((uint32_t)(0x1u));
  /* 11394146 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394148 call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x1139414eu);
  /* 1139414e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394153 call 0x11395030 */
  push32(0x11394158u); f_11395030();
  /* 11394158 mov esi, esp */
  ESI = (ESP);
  /* 1139415a push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 1139415f push 0 */
  push32((uint32_t)(0x0u));
  /* 11394161 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394163 call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x11394169u);
  /* 11394169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139416c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139416e call 0x11395030 */
  push32(0x11394173u); f_11395030();
  /* 11394173 mov esi, esp */
  ESI = (ESP);
  /* 11394175 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 1139417a push 2 */
  push32((uint32_t)(0x2u));
  /* 1139417c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139417e call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x11394184u);
  /* 11394184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394189 call 0x11395030 */
  push32(0x1139418eu); f_11395030();
  /* 1139418e mov esi, esp */
  ESI = (ESP);
  /* 11394190 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 11394195 push 5 */
  push32((uint32_t)(0x5u));
  /* 11394197 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394199 call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x1139419fu);
  /* 1139419f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113941a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113941a4 call 0x11395030 */
  push32(0x113941a9u); f_11395030();
  /* 113941a9 mov esi, esp */
  ESI = (ESP);
  /* 113941ab push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 113941b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 113941b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113941b4 call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x113941bau);
  /* 113941ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113941bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113941bf call 0x11395030 */
  push32(0x113941c4u); f_11395030();
  /* 113941c4 mov esi, esp */
  ESI = (ESP);
  /* 113941c6 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 113941cb push 3 */
  push32((uint32_t)(0x3u));
  /* 113941cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113941cf call dword ptr [0x113c54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54c4))), 0x113941d5u);
  /* 113941d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113941d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113941da call 0x11395030 */
  push32(0x113941dfu); f_11395030();
L_113941df:;
  /* 113941df mov esi, esp */
  ESI = (ESP);
  /* 113941e1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113941e3 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x113941e9u);
  /* 113941e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113941ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113941ee call 0x11395030 */
  push32(0x113941f3u); f_11395030();
  /* 113941f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113941f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113941fa je 0x11394247 */
  if (C.zf) goto L_11394247;
  /* 113941fc mov esi, esp */
  ESI = (ESP);
  /* 113941fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11394200 push 0x113c24b0 */
  push32((uint32_t)(0x113c24b0u));
  /* 11394205 call dword ptr [0x113c5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5500))), 0x1139420bu);
  /* 1139420b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139420e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394210 call 0x11395030 */
  push32(0x11394215u); f_11395030();
  /* 11394215 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394218 jge 0x11394247 */
  if ((C.sf==C.of)) goto L_11394247;
  /* 1139421a mov esi, esp */
  ESI = (ESP);
  /* 1139421c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139421e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11394220 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11394226u);
  /* 11394226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139422b call 0x11395030 */
  push32(0x11394230u); f_11395030();
  /* 11394230 mov esi, esp */
  ESI = (ESP);
  /* 11394232 push 0x113bd354 */
  push32((uint32_t)(0x113bd354u));
  /* 11394237 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x1139423du);
  /* 1139423d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394242 call 0x11395030 */
  push32(0x11394247u); f_11395030();
L_11394247:;
  /* 11394247 mov esi, esp */
  ESI = (ESP);
  /* 11394249 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1139424b call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11394251u);
  /* 11394251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394254 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394256 call 0x11395030 */
  push32(0x1139425bu); f_11395030();
  /* 1139425b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11394260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11394262 jne 0x11394453 */
  if (!C.zf) goto L_11394453;
  /* 11394268 mov esi, esp */
  ESI = (ESP);
  /* 1139426a push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1139426c call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11394272u);
  /* 11394272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394277 call 0x11395030 */
  push32(0x1139427cu); f_11395030();
  /* 1139427c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11394281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11394283 je 0x11394453 */
  if (C.zf) goto L_11394453;
  /* 11394289 mov esi, esp */
  ESI = (ESP);
  /* 1139428b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1139428d call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x11394293u);
  /* 11394293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394298 call 0x11395030 */
  push32(0x1139429du); f_11395030();
  /* 1139429d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113942a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113942a4 je 0x11394453 */
  if (C.zf) goto L_11394453;
  /* 113942aa mov esi, esp */
  ESI = (ESP);
  /* 113942ac push 0x113c24b0 */
  push32((uint32_t)(0x113c24b0u));
  /* 113942b1 push 0x113c2558 */
  push32((uint32_t)(0x113c2558u));
  /* 113942b6 call dword ptr [0x113c54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54b0))), 0x113942bcu);
  /* 113942bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113942bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113942c1 call 0x11395030 */
  push32(0x113942c6u); f_11395030();
  /* 113942c6 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113942c9 jne 0x11394453 */
  if (!C.zf) goto L_11394453;
  /* 113942cf mov esi, esp */
  ESI = (ESP);
  /* 113942d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113942d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113942d5 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113942dbu);
  /* 113942db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113942de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113942e0 call 0x11395030 */
  push32(0x113942e5u); f_11395030();
  /* 113942e5 mov esi, esp */
  ESI = (ESP);
  /* 113942e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113942e9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113942eb call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x113942f1u);
  /* 113942f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113942f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113942f6 call 0x11395030 */
  push32(0x113942fbu); f_11395030();
  /* 113942fb mov esi, esp */
  ESI = (ESP);
  /* 113942fd push 0x113bd348 */
  push32((uint32_t)(0x113bd348u));
  /* 11394302 call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x11394308u);
  /* 11394308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139430b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139430d call 0x11395030 */
  push32(0x11394312u); f_11395030();
  /* 11394312 mov esi, esp */
  ESI = (ESP);
  /* 11394314 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11394316 call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x1139431cu);
  /* 1139431c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139431f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394321 call 0x11395030 */
  push32(0x11394326u); f_11395030();
  /* 11394326 mov esi, esp */
  ESI = (ESP);
  /* 11394328 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1139432a call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x11394330u);
  /* 11394330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394335 call 0x11395030 */
  push32(0x1139433au); f_11395030();
  /* 1139433a mov esi, esp */
  ESI = (ESP);
  /* 1139433c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139433e push 0x113c24b0 */
  push32((uint32_t)(0x113c24b0u));
  /* 11394343 call dword ptr [0x113c5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5480))), 0x11394349u);
  /* 11394349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139434c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139434e call 0x11395030 */
  push32(0x11394353u); f_11395030();
  /* 11394353 mov esi, esp */
  ESI = (ESP);
  /* 11394355 push 6 */
  push32((uint32_t)(0x6u));
  /* 11394357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394359 call dword ptr [0x113c54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54e4))), 0x1139435fu);
  /* 1139435f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394364 call 0x11395030 */
  push32(0x11394369u); f_11395030();
  /* 11394369 mov esi, esp */
  ESI = (ESP);
  /* 1139436b push 6 */
  push32((uint32_t)(0x6u));
  /* 1139436d call dword ptr [0x113c54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54f0))), 0x11394373u);
  /* 11394373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394378 call 0x11395030 */
  push32(0x1139437du); f_11395030();
  /* 1139437d mov esi, esp */
  ESI = (ESP);
  /* 1139437f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11394384 push 3 */
  push32((uint32_t)(0x3u));
  /* 11394386 push 6 */
  push32((uint32_t)(0x6u));
  /* 11394388 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x1139438eu);
  /* 1139438e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394391 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394393 call 0x11395030 */
  push32(0x11394398u); f_11395030();
  /* 11394398 mov esi, esp */
  ESI = (ESP);
  /* 1139439a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1139439f push 0 */
  push32((uint32_t)(0x0u));
  /* 113943a1 push 6 */
  push32((uint32_t)(0x6u));
  /* 113943a3 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113943a9u);
  /* 113943a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113943ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113943ae call 0x11395030 */
  push32(0x113943b3u); f_11395030();
  /* 113943b3 mov esi, esp */
  ESI = (ESP);
  /* 113943b5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 113943ba push 2 */
  push32((uint32_t)(0x2u));
  /* 113943bc push 6 */
  push32((uint32_t)(0x6u));
  /* 113943be call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113943c4u);
  /* 113943c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113943c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113943c9 call 0x11395030 */
  push32(0x113943ceu); f_11395030();
  /* 113943ce mov esi, esp */
  ESI = (ESP);
  /* 113943d0 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 113943d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113943d7 push 6 */
  push32((uint32_t)(0x6u));
  /* 113943d9 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113943dfu);
  /* 113943df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113943e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113943e4 call 0x11395030 */
  push32(0x113943e9u); f_11395030();
  /* 113943e9 mov esi, esp */
  ESI = (ESP);
  /* 113943eb push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 113943f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 113943f2 push 6 */
  push32((uint32_t)(0x6u));
  /* 113943f4 call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x113943fau);
  /* 113943fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113943fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113943ff call 0x11395030 */
  push32(0x11394404u); f_11395030();
  /* 11394404 mov esi, esp */
  ESI = (ESP);
  /* 11394406 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1139440b push 4 */
  push32((uint32_t)(0x4u));
  /* 1139440d push 6 */
  push32((uint32_t)(0x6u));
  /* 1139440f call dword ptr [0x113c548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c548c))), 0x11394415u);
  /* 11394415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139441a call 0x11395030 */
  push32(0x1139441fu); f_11395030();
  /* 1139441f mov esi, esp */
  ESI = (ESP);
  /* 11394421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11394423 call dword ptr [0x113c5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5488))), 0x11394429u);
  /* 11394429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139442c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139442e call 0x11395030 */
  push32(0x11394433u); f_11395030();
  /* 11394433 mov esi, esp */
  ESI = (ESP);
  /* 11394435 push eax */
  push32((uint32_t)(EAX));
  /* 11394436 push 2 */
  push32((uint32_t)(0x2u));
  /* 11394438 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139443a push 2 */
  push32((uint32_t)(0x2u));
  /* 1139443c push 0x113bd33c */
  push32((uint32_t)(0x113bd33cu));
  /* 11394441 push 6 */
  push32((uint32_t)(0x6u));
  /* 11394443 call dword ptr [0x113c549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c549c))), 0x11394449u);
  /* 11394449 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139444c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139444e call 0x11395030 */
  push32(0x11394453u); f_11395030();
L_11394453:;
  /* 11394453 mov esi, esp */
  ESI = (ESP);
  /* 11394455 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11394457 call dword ptr [0x113c5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5464))), 0x1139445du);
  /* 1139445d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11394460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11394462 call 0x11395030 */
  push32(0x11394467u); f_11395030();
  /* 11394467 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139446c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139446e je 0x113944e2 */
  if (C.zf) goto L_113944e2;
  /* 11394470 mov esi, esp */
  ESI = (ESP);
  /* 11394472 push 2 */
  push32((uint32_t)(0x2u));
  /* 11394474 call dword ptr [0x113c54d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54d0))), 0x1139447au);
  /* 1139447a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139447d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139447f call 0x11395030 */
  push32(0x11394484u); f_11395030();
  /* 11394484 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11394489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139448b je 0x113944e2 */
  if (C.zf) goto L_113944e2;
  /* 1139448d mov esi, esp */
  ESI = (ESP);
  /* 1139448f push 0 */
  push32((uint32_t)(0x0u));
  /* 11394491 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11394493 call dword ptr [0x113c5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5468))), 0x11394499u);
  /* 11394499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139449c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139449e call 0x11395030 */
  push32(0x113944a3u); f_11395030();
  /* 113944a3 mov esi, esp */
  ESI = (ESP);
  /* 113944a5 push 0x113bd330 */
  push32((uint32_t)(0x113bd330u));
  /* 113944aa call dword ptr [0x113c54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c54a4))), 0x113944b0u);
  /* 113944b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113944b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113944b5 call 0x11395030 */
  push32(0x113944bau); f_11395030();
  /* 113944ba mov esi, esp */
  ESI = (ESP);
  /* 113944bc push 0x42 */
  push32((uint32_t)(0x42u));
  /* 113944be call dword ptr [0x113c5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5470))), 0x113944c4u);
  /* 113944c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113944c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113944c9 call 0x11395030 */
  push32(0x113944ceu); f_11395030();
  /* 113944ce mov esi, esp */
  ESI = (ESP);
  /* 113944d0 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 113944d2 call dword ptr [0x113c546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c546c))), 0x113944d8u);
  /* 113944d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113944db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113944dd call 0x11395030 */
  push32(0x113944e2u); f_11395030();
L_113944e2:;
  /* 113944e2 pop edi */
  EDI = (pop32());
  /* 113944e3 pop esi */
  ESI = (pop32());
  /* 113944e4 pop ebx */
  EBX = (pop32());
  /* 113944e5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113944e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113944ea call 0x11395030 */
  push32(0x113944efu); f_11395030();
  /* 113944ef mov esp, ebp */
  ESP = (EBP);
  /* 113944f1 pop ebp */
  EBP = (pop32());
  /* 113944f2 ret  */
  ESPCHK(0x11391da0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11395030 (56 bytes, 28 insns) */
void f_11395030(void) {
  FTRACE(0x11395030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395030 jne 0x11395033 */
  if (!C.zf) goto L_11395033;
  /* 11395032 ret  */
  ESPCHK(0x11395030u, _esp0);
  ESP += 4; return;
L_11395033:;
  /* 11395033 push ebp */
  push32((uint32_t)(EBP));
  /* 11395034 mov ebp, esp */
  EBP = (ESP);
  /* 11395036 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395039 push eax */
  push32((uint32_t)(EAX));
  /* 1139503a push edx */
  push32((uint32_t)(EDX));
  /* 1139503b push ebx */
  push32((uint32_t)(EBX));
  /* 1139503c push esi */
  push32((uint32_t)(ESI));
  /* 1139503d push edi */
  push32((uint32_t)(EDI));
  /* 1139503e push 0x113bd490 */
  push32((uint32_t)(0x113bd490u));
  /* 11395043 push 0x113bd48c */
  push32((uint32_t)(0x113bd48cu));
  /* 11395048 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1139504a push 0x113bd47c */
  push32((uint32_t)(0x113bd47cu));
  /* 1139504f push 1 */
  push32((uint32_t)(0x1u));
  /* 11395051 call 0x113955e0 */
  push32(0x11395056u); f_113955e0();
  /* 11395056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395059 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139505c jne 0x1139505f */
  if (!C.zf) goto L_1139505f;
  /* 1139505e int3  */
  x86_unimpl("int3 @ 0x1139505e");
L_1139505f:;
  /* 1139505f pop edi */
  EDI = (pop32());
  /* 11395060 pop esi */
  ESI = (pop32());
  /* 11395061 pop ebx */
  EBX = (pop32());
  /* 11395062 pop edx */
  EDX = (pop32());
  /* 11395063 pop eax */
  EAX = (pop32());
  /* 11395064 mov esp, ebp */
  ESP = (EBP);
  /* 11395066 pop ebp */
  EBP = (pop32());
  /* 11395067 ret  */
  ESPCHK(0x11395030u, _esp0);
  ESP += 4; return;
}

/* FUN_10005070 @ 0x11395070 (16 bytes, 7 insns) */
void f_11395070(void) {
  FTRACE(0x11395070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395070 push ebp */
  push32((uint32_t)(EBP));
  /* 11395071 mov ebp, esp */
  EBP = (ESP);
  /* 11395073 call 0x11395d60 */
  push32(0x11395078u); f_11395d60();
  /* 11395078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139507b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1139507e pop ebp */
  EBP = (pop32());
  /* 1139507f ret  */
  ESPCHK(0x11395070u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11395080 (54 bytes, 18 insns) */
void f_11395080(void) {
  FTRACE(0x11395080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395080 push ebp */
  push32((uint32_t)(EBP));
  /* 11395081 mov ebp, esp */
  EBP = (ESP);
  /* 11395083 push ecx */
  push32((uint32_t)(ECX));
  /* 11395084 call 0x11395d60 */
  push32(0x11395089u); f_11395d60();
  /* 11395089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139508c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139508f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11395092 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11395098 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139509e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113950a1 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 113950a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113950a7 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 113950aa shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113950ad and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 113950b2 mov esp, ebp */
  ESP = (EBP);
  /* 113950b4 pop ebp */
  EBP = (pop32());
  /* 113950b5 ret  */
  ESPCHK(0x11395080u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x113950c0 (385 bytes, 103 insns) */
void f_113950c0(void) {
  FTRACE(0x113950c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113950c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113950c1 mov ebp, esp */
  EBP = (ESP);
  /* 113950c3 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113950c9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 113950cc push eax */
  push32((uint32_t)(EAX));
  /* 113950cd call dword ptr [0x113c53a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53a0))), 0x113950d3u);
  /* 113950d3 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 113950d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113950d7 call dword ptr [0x113c539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c539c))), 0x113950ddu);
  /* 113950dd mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 113950e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113950e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113950e8 mov ax, word ptr [0x113c271a] */
  AX = (r16((uint32_t)(0x113c271a)));
  /* 113950ee cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113950f0 jne 0x11395158 */
  if (!C.zf) goto L_11395158;
  /* 113950f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113950f5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113950fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113950fd mov dx, word ptr [0x113c2718] */
  DX = (r16((uint32_t)(0x113c2718)));
  /* 11395104 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395106 jne 0x11395158 */
  if (!C.zf) goto L_11395158;
  /* 11395108 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 1139510b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11395110 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11395112 mov cx, word ptr [0x113c2716] */
  CX = (r16((uint32_t)(0x113c2716)));
  /* 11395119 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139511b jne 0x11395158 */
  if (!C.zf) goto L_11395158;
  /* 1139511d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11395120 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11395126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11395128 mov ax, word ptr [0x113c2712] */
  AX = (r16((uint32_t)(0x113c2712)));
  /* 1139512e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395130 jne 0x11395158 */
  if (!C.zf) goto L_11395158;
  /* 11395132 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11395135 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139513b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139513d mov dx, word ptr [0x113c2710] */
  DX = (r16((uint32_t)(0x113c2710)));
  /* 11395144 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395146 jne 0x11395158 */
  if (!C.zf) goto L_11395158;
  /* 11395148 mov eax, dword ptr [0x113c2708] */
  EAX = (r32((uint32_t)(0x113c2708)));
  /* 1139514d mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11395153 jmp 0x113951e0 */
  goto L_113951e0;
L_11395158:;
  /* 11395158 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 1139515e push ecx */
  push32((uint32_t)(ECX));
  /* 1139515f call dword ptr [0x113c5398] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5398))), 0x11395165u);
  /* 11395165 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 1139516b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395172 je 0x113951a8 */
  if (C.zf) goto L_113951a8;
  /* 11395174 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139517b jne 0x1139519c */
  if (!C.zf) goto L_1139519c;
  /* 1139517d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11395180 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11395186 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11395188 je 0x1139519c */
  if (C.zf) goto L_1139519c;
  /* 1139518a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139518e je 0x1139519c */
  if (C.zf) goto L_1139519c;
  /* 11395190 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 1139519a jmp 0x113951a6 */
  goto L_113951a6;
L_1139519c:;
  /* 1139519c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_113951a6:;
  /* 113951a6 jmp 0x113951b2 */
  goto L_113951b2;
L_113951a8:;
  /* 113951a8 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_113951b2:;
  /* 113951b2 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 113951b8 mov dword ptr [0x113c2708], eax */
  w32((uint32_t)(0x113c2708), (EAX));
  /* 113951bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113951c0 mov dword ptr [0x113c2710], ecx */
  w32((uint32_t)(0x113c2710), (ECX));
  /* 113951c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113951c9 mov dword ptr [0x113c2714], edx */
  w32((uint32_t)(0x113c2714), (EDX));
  /* 113951cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113951d2 mov dword ptr [0x113c2718], eax */
  w32((uint32_t)(0x113c2718), (EAX));
  /* 113951d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113951da mov dword ptr [0x113c271c], ecx */
  w32((uint32_t)(0x113c271c), (ECX));
L_113951e0:;
  /* 113951e0 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 113951e6 push edx */
  push32((uint32_t)(EDX));
  /* 113951e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113951ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113951ef push eax */
  push32((uint32_t)(EAX));
  /* 113951f0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 113951f3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113951f9 push ecx */
  push32((uint32_t)(ECX));
  /* 113951fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113951fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11395203 push edx */
  push32((uint32_t)(EDX));
  /* 11395204 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11395207 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139520c push eax */
  push32((uint32_t)(EAX));
  /* 1139520d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11395210 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11395216 push ecx */
  push32((uint32_t)(ECX));
  /* 11395217 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139521a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11395220 push edx */
  push32((uint32_t)(EDX));
  /* 11395221 call 0x11395f30 */
  push32(0x11395226u); f_11395f30();
  /* 11395226 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395229 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1139522c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395230 je 0x1139523a */
  if (C.zf) goto L_1139523a;
  /* 11395232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395235 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11395238 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1139523a:;
  /* 1139523a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139523d mov esp, ebp */
  ESP = (EBP);
  /* 1139523f pop ebp */
  EBP = (pop32());
  /* 11395240 ret  */
  ESPCHK(0x113950c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x11395250 (313 bytes, 78 insns) */
void f_11395250(void) {
  FTRACE(0x11395250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395250 push ebp */
  push32((uint32_t)(EBP));
  /* 11395251 mov ebp, esp */
  EBP = (ESP);
  /* 11395253 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395257 jne 0x11395317 */
  if (!C.zf) goto L_11395317;
  /* 1139525d call dword ptr [0x113c53a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53a8))), 0x11395263u);
  /* 11395263 mov dword ptr [0x113c273c], eax */
  w32((uint32_t)(0x113c273c), (EAX));
  /* 11395268 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139526a call 0x11398e00 */
  push32(0x1139526fu); f_11398e00();
  /* 1139526f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395274 jne 0x1139527d */
  if (!C.zf) goto L_1139527d;
  /* 11395276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11395278 jmp 0x11395385 */
  goto L_11395385;
L_1139527d:;
  /* 1139527d mov eax, dword ptr [0x113c273c] */
  EAX = (r32((uint32_t)(0x113c273c)));
  /* 11395282 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11395285 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139528a mov dword ptr [0x113c2748], eax */
  w32((uint32_t)(0x113c2748), (EAX));
  /* 1139528f mov ecx, dword ptr [0x113c273c] */
  ECX = (r32((uint32_t)(0x113c273c)));
  /* 11395295 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139529b mov dword ptr [0x113c2744], ecx */
  w32((uint32_t)(0x113c2744), (ECX));
  /* 113952a1 mov edx, dword ptr [0x113c2744] */
  EDX = (r32((uint32_t)(0x113c2744)));
  /* 113952a7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113952aa add edx, dword ptr [0x113c2748] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c2748))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113952b0 mov dword ptr [0x113c2740], edx */
  w32((uint32_t)(0x113c2740), (EDX));
  /* 113952b6 mov eax, dword ptr [0x113c273c] */
  EAX = (r32((uint32_t)(0x113c273c)));
  /* 113952bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113952be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113952c3 mov dword ptr [0x113c273c], eax */
  w32((uint32_t)(0x113c273c), (EAX));
  /* 113952c8 call 0x11395c80 */
  push32(0x113952cdu); f_11395c80();
  /* 113952cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113952cf jne 0x113952dd */
  if (!C.zf) goto L_113952dd;
  /* 113952d1 call 0x11398e50 */
  push32(0x113952d6u); f_11398e50();
  /* 113952d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113952d8 jmp 0x11395385 */
  goto L_11395385;
L_113952dd:;
  /* 113952dd call dword ptr [0x113c53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53a4))), 0x113952e3u);
  /* 113952e3 mov dword ptr [0x113c428c], eax */
  w32((uint32_t)(0x113c428c), (EAX));
  /* 113952e8 call 0x11398be0 */
  push32(0x113952edu); f_11398be0();
  /* 113952ed mov dword ptr [0x113c2724], eax */
  w32((uint32_t)(0x113c2724), (EAX));
  /* 113952f2 call 0x11396220 */
  push32(0x113952f7u); f_11396220();
  /* 113952f7 call 0x113986d0 */
  push32(0x113952fcu); f_113986d0();
  /* 113952fc call 0x11398580 */
  push32(0x11395301u); f_11398580();
  /* 11395301 call 0x11396020 */
  push32(0x11395306u); f_11396020();
  /* 11395306 mov ecx, dword ptr [0x113c2720] */
  ECX = (r32((uint32_t)(0x113c2720)));
  /* 1139530c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139530f mov dword ptr [0x113c2720], ecx */
  w32((uint32_t)(0x113c2720), (ECX));
  /* 11395315 jmp 0x11395380 */
  goto L_11395380;
L_11395317:;
  /* 11395317 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139531b jne 0x11395370 */
  if (!C.zf) goto L_11395370;
  /* 1139531d cmp dword ptr [0x113c2720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395324 jle 0x1139536a */
  if ((C.zf||C.sf!=C.of)) goto L_1139536a;
  /* 11395326 mov edx, dword ptr [0x113c2720] */
  EDX = (r32((uint32_t)(0x113c2720)));
  /* 1139532c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139532f mov dword ptr [0x113c2720], edx */
  w32((uint32_t)(0x113c2720), (EDX));
  /* 11395335 cmp dword ptr [0x113c2774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139533c jne 0x11395343 */
  if (!C.zf) goto L_11395343;
  /* 1139533e call 0x113960a0 */
  push32(0x11395343u); f_113960a0();
L_11395343:;
  /* 11395343 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11395345 call 0x11397b20 */
  push32(0x1139534au); f_11397b20();
  /* 1139534a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139534d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11395350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395352 je 0x11395359 */
  if (C.zf) goto L_11395359;
  /* 11395354 call 0x11398430 */
  push32(0x11395359u); f_11398430();
L_11395359:;
  /* 11395359 call 0x11396550 */
  push32(0x1139535eu); f_11396550();
  /* 1139535e call 0x11395d10 */
  push32(0x11395363u); f_11395d10();
  /* 11395363 call 0x11398e50 */
  push32(0x11395368u); f_11398e50();
  /* 11395368 jmp 0x1139536e */
  goto L_1139536e;
L_1139536a:;
  /* 1139536a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139536c jmp 0x11395385 */
  goto L_11395385;
L_1139536e:;
  /* 1139536e jmp 0x11395380 */
  goto L_11395380;
L_11395370:;
  /* 11395370 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395374 jne 0x11395380 */
  if (!C.zf) goto L_11395380;
  /* 11395376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11395378 call 0x11395e00 */
  push32(0x1139537du); f_11395e00();
  /* 1139537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395380:;
  /* 11395380 mov eax, 1 */
  EAX = (0x1u);
L_11395385:;
  /* 11395385 pop ebp */
  EBP = (pop32());
  /* 11395386 ret 0xc */
  ESPCHK(0x11395250u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11395390 (243 bytes, 86 insns) */
void f_11395390(void) {
  FTRACE(0x11395390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395390 push ebp */
  push32((uint32_t)(EBP));
  /* 11395391 mov ebp, esp */
  EBP = (ESP);
  /* 11395393 push ecx */
  push32((uint32_t)(ECX));
  /* 11395394 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1139539b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139539f jne 0x113953b1 */
  if (!C.zf) goto L_113953b1;
  /* 113953a1 cmp dword ptr [0x113c2720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953a8 jne 0x113953b1 */
  if (!C.zf) goto L_113953b1;
  /* 113953aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113953ac jmp 0x1139547d */
  goto L_1139547d;
L_113953b1:;
  /* 113953b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953b5 je 0x113953bd */
  if (C.zf) goto L_113953bd;
  /* 113953b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953bb jne 0x113953ff */
  if (!C.zf) goto L_113953ff;
L_113953bd:;
  /* 113953bd cmp dword ptr [0x113c429c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c429c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953c4 je 0x113953db */
  if (C.zf) goto L_113953db;
  /* 113953c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113953c9 push eax */
  push32((uint32_t)(EAX));
  /* 113953ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113953cd push ecx */
  push32((uint32_t)(ECX));
  /* 113953ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113953d1 push edx */
  push32((uint32_t)(EDX));
  /* 113953d2 call dword ptr [0x113c429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c429c))), 0x113953d8u);
  /* 113953d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113953db:;
  /* 113953db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953df je 0x113953f5 */
  if (C.zf) goto L_113953f5;
  /* 113953e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113953e4 push eax */
  push32((uint32_t)(EAX));
  /* 113953e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113953e8 push ecx */
  push32((uint32_t)(ECX));
  /* 113953e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113953ec push edx */
  push32((uint32_t)(EDX));
  /* 113953ed call 0x11395250 */
  push32(0x113953f2u); f_11395250();
  /* 113953f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113953f5:;
  /* 113953f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113953f9 jne 0x113953ff */
  if (!C.zf) goto L_113953ff;
  /* 113953fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113953fd jmp 0x1139547d */
  goto L_1139547d;
L_113953ff:;
  /* 113953ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11395402 push eax */
  push32((uint32_t)(EAX));
  /* 11395403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395406 push ecx */
  push32((uint32_t)(ECX));
  /* 11395407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139540a push edx */
  push32((uint32_t)(EDX));
  /* 1139540b call 0x1139100a */
  push32(0x11395410u); f_1139100a();
  /* 11395410 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395413 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395417 jne 0x1139542e */
  if (!C.zf) goto L_1139542e;
  /* 11395419 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139541d jne 0x1139542e */
  if (!C.zf) goto L_1139542e;
  /* 1139541f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11395422 push eax */
  push32((uint32_t)(EAX));
  /* 11395423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11395425 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395428 push ecx */
  push32((uint32_t)(ECX));
  /* 11395429 call 0x11395250 */
  push32(0x1139542eu); f_11395250();
L_1139542e:;
  /* 1139542e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395432 je 0x1139543a */
  if (C.zf) goto L_1139543a;
  /* 11395434 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395438 jne 0x1139547a */
  if (!C.zf) goto L_1139547a;
L_1139543a:;
  /* 1139543a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139543d push edx */
  push32((uint32_t)(EDX));
  /* 1139543e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395441 push eax */
  push32((uint32_t)(EAX));
  /* 11395442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395445 push ecx */
  push32((uint32_t)(ECX));
  /* 11395446 call 0x11395250 */
  push32(0x1139544bu); f_11395250();
  /* 1139544b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139544d jne 0x11395456 */
  if (!C.zf) goto L_11395456;
  /* 1139544f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11395456:;
  /* 11395456 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139545a je 0x1139547a */
  if (C.zf) goto L_1139547a;
  /* 1139545c cmp dword ptr [0x113c429c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c429c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395463 je 0x1139547a */
  if (C.zf) goto L_1139547a;
  /* 11395465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11395468 push edx */
  push32((uint32_t)(EDX));
  /* 11395469 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139546c push eax */
  push32((uint32_t)(EAX));
  /* 1139546d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395470 push ecx */
  push32((uint32_t)(ECX));
  /* 11395471 call dword ptr [0x113c429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c429c))), 0x11395477u);
  /* 11395477 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139547a:;
  /* 1139547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139547d:;
  /* 1139547d mov esp, ebp */
  ESP = (EBP);
  /* 1139547f pop ebp */
  EBP = (pop32());
  /* 11395480 ret 0xc */
  ESPCHK(0x11395390u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11395490 (58 bytes, 18 insns) */
void f_11395490(void) {
  FTRACE(0x11395490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395490 push ebp */
  push32((uint32_t)(EBP));
  /* 11395491 mov ebp, esp */
  EBP = (ESP);
  /* 11395493 cmp dword ptr [0x113c272c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139549a je 0x113954ae */
  if (C.zf) goto L_113954ae;
  /* 1139549c cmp dword ptr [0x113c272c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113954a3 jne 0x113954b3 */
  if (!C.zf) goto L_113954b3;
  /* 113954a5 cmp dword ptr [0x113c2730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113954ac jne 0x113954b3 */
  if (!C.zf) goto L_113954b3;
L_113954ae:;
  /* 113954ae call 0x11398ef0 */
  push32(0x113954b3u); f_11398ef0();
L_113954b3:;
  /* 113954b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113954b6 push eax */
  push32((uint32_t)(EAX));
  /* 113954b7 call 0x11398f40 */
  push32(0x113954bcu); f_11398f40();
  /* 113954bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113954bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 113954c4 call dword ptr [0x113c0a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c0a30))), 0x113954cau);
  /* 113954ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113954cd pop ebp */
  EBP = (pop32());
  /* 113954ce ret  */
  ESPCHK(0x11395490u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x113954d0 (11 bytes, 5 insns) */
void f_113954d0(void) {
  FTRACE(0x113954d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113954d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113954d1 mov ebp, esp */
  EBP = (ESP);
  /* 113954d3 call dword ptr [0x113c53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53ac))), 0x113954d9u);
  /* 113954d9 pop ebp */
  EBP = (pop32());
  /* 113954da ret  */
  ESPCHK(0x113954d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x113954e0 (87 bytes, 30 insns) */
void f_113954e0(void) {
  FTRACE(0x113954e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113954e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113954e1 mov ebp, esp */
  EBP = (ESP);
  /* 113954e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113954e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113954e8 jl 0x113954f0 */
  if ((C.sf!=C.of)) goto L_113954f0;
  /* 113954ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113954ee jl 0x113954f5 */
  if ((C.sf!=C.of)) goto L_113954f5;
L_113954f0:;
  /* 113954f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113954f3 jmp 0x11395533 */
  goto L_11395533;
L_113954f5:;
  /* 113954f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113954f9 jne 0x11395507 */
  if (!C.zf) goto L_11395507;
  /* 113954fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113954fe mov eax, dword ptr [eax*4 + 0x113c0a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x113c0a38)));
  /* 11395505 jmp 0x11395533 */
  goto L_11395533;
L_11395507:;
  /* 11395507 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139550a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1139550d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139550f je 0x11395516 */
  if (C.zf) goto L_11395516;
  /* 11395511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11395514 jmp 0x11395533 */
  goto L_11395533;
L_11395516:;
  /* 11395516 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395519 mov eax, dword ptr [edx*4 + 0x113c0a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c0a38)));
  /* 11395520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395529 mov dword ptr [ecx*4 + 0x113c0a38], edx */
  w32((uint32_t)(ECX*4 + 0x113c0a38), (EDX));
  /* 11395530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11395533:;
  /* 11395533 mov esp, ebp */
  ESP = (EBP);
  /* 11395535 pop ebp */
  EBP = (pop32());
  /* 11395536 ret  */
  ESPCHK(0x113954e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11395540 (126 bytes, 38 insns) */
void f_11395540(void) {
  FTRACE(0x11395540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395540 push ebp */
  push32((uint32_t)(EBP));
  /* 11395541 mov ebp, esp */
  EBP = (ESP);
  /* 11395543 push ecx */
  push32((uint32_t)(ECX));
  /* 11395544 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395548 jl 0x11395550 */
  if ((C.sf!=C.of)) goto L_11395550;
  /* 1139554a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139554e jl 0x11395557 */
  if ((C.sf!=C.of)) goto L_11395557;
L_11395550:;
  /* 11395550 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11395555 jmp 0x113955ba */
  goto L_113955ba;
L_11395557:;
  /* 11395557 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139555b jne 0x11395569 */
  if (!C.zf) goto L_11395569;
  /* 1139555d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395560 mov eax, dword ptr [eax*4 + 0x113c0a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x113c0a44)));
  /* 11395567 jmp 0x113955ba */
  goto L_113955ba;
L_11395569:;
  /* 11395569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139556c mov edx, dword ptr [ecx*4 + 0x113c0a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a44)));
  /* 11395573 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11395576 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139557a jne 0x11395590 */
  if (!C.zf) goto L_11395590;
  /* 1139557c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1139557e call dword ptr [0x113c53b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b0))), 0x11395584u);
  /* 11395584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395587 mov dword ptr [ecx*4 + 0x113c0a44], eax */
  w32((uint32_t)(ECX*4 + 0x113c0a44), (EAX));
  /* 1139558e jmp 0x113955b7 */
  goto L_113955b7;
L_11395590:;
  /* 11395590 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395594 jne 0x113955aa */
  if (!C.zf) goto L_113955aa;
  /* 11395596 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11395598 call dword ptr [0x113c53b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b0))), 0x1139559eu);
  /* 1139559e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113955a1 mov dword ptr [edx*4 + 0x113c0a44], eax */
  w32((uint32_t)(EDX*4 + 0x113c0a44), (EAX));
  /* 113955a8 jmp 0x113955b7 */
  goto L_113955b7;
L_113955aa:;
  /* 113955aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113955ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113955b0 mov dword ptr [eax*4 + 0x113c0a44], ecx */
  w32((uint32_t)(EAX*4 + 0x113c0a44), (ECX));
L_113955b7:;
  /* 113955b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113955ba:;
  /* 113955ba mov esp, ebp */
  ESP = (EBP);
  /* 113955bc pop ebp */
  EBP = (pop32());
  /* 113955bd ret  */
  ESPCHK(0x11395540u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x113955c0 (28 bytes, 11 insns) */
void f_113955c0(void) {
  FTRACE(0x113955c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113955c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113955c1 mov ebp, esp */
  EBP = (ESP);
  /* 113955c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113955c4 mov eax, dword ptr [0x113c4280] */
  EAX = (r32((uint32_t)(0x113c4280)));
  /* 113955c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113955cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113955cf mov dword ptr [0x113c4280], ecx */
  w32((uint32_t)(0x113c4280), (ECX));
  /* 113955d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113955d8 mov esp, ebp */
  ESP = (EBP);
  /* 113955da pop ebp */
  EBP = (pop32());
  /* 113955db ret  */
  ESPCHK(0x113955c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e0 @ 0x113955e0 (912 bytes, 248 insns) */
void f_113955e0(void) {
  FTRACE(0x113955e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113955e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113955e1 mov ebp, esp */
  EBP = (ESP);
  /* 113955e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 113955e8 call 0x113997b0 */
  push32(0x113955edu); f_113997b0();
  /* 113955ed push edi */
  push32((uint32_t)(EDI));
  /* 113955ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 113955f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113955fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113955fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11395602 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11395604 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11395606 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11395607 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1139560e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11395613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11395615 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1139561b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1139561d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1139561f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11395620 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11395627 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1139562c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139562e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11395634 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11395636 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11395638 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11395639 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1139563c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11395642 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395646 jl 0x1139564e */
  if ((C.sf!=C.of)) goto L_1139564e;
  /* 11395648 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139564c jl 0x11395656 */
  if ((C.sf!=C.of)) goto L_11395656;
L_1139564e:;
  /* 1139564e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11395651 jmp 0x1139596b */
  goto L_1139596b;
L_11395656:;
  /* 11395656 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139565a jne 0x11395700 */
  if (!C.zf) goto L_11395700;
  /* 11395660 push 0x113c0a34 */
  push32((uint32_t)(0x113c0a34u));
  /* 11395665 call dword ptr [0x113c52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52dc))), 0x1139566bu);
  /* 1139566b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139566d jle 0x11395700 */
  if ((C.zf||C.sf!=C.of)) goto L_11395700;
  /* 11395673 cmp dword ptr [0x113c2734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139567a jne 0x113956be */
  if (!C.zf) goto L_113956be;
  /* 1139567c push 0x113bd638 */
  push32((uint32_t)(0x113bd638u));
  /* 11395681 call dword ptr [0x113c53c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c4))), 0x11395687u);
  /* 11395687 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1139568d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395694 je 0x113956b6 */
  if (C.zf) goto L_113956b6;
  /* 11395696 push 0x113bd62c */
  push32((uint32_t)(0x113bd62cu));
  /* 1139569b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 113956a1 push ecx */
  push32((uint32_t)(ECX));
  /* 113956a2 call dword ptr [0x113c53c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c0))), 0x113956a8u);
  /* 113956a8 mov dword ptr [0x113c2734], eax */
  w32((uint32_t)(0x113c2734), (EAX));
  /* 113956ad cmp dword ptr [0x113c2734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113956b4 jne 0x113956be */
  if (!C.zf) goto L_113956be;
L_113956b6:;
  /* 113956b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113956b9 jmp 0x1139596b */
  goto L_1139596b;
L_113956be:;
  /* 113956be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113956c1 push edx */
  push32((uint32_t)(EDX));
  /* 113956c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113956c5 push eax */
  push32((uint32_t)(EAX));
  /* 113956c6 push 0x113bd5f8 */
  push32((uint32_t)(0x113bd5f8u));
  /* 113956cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 113956d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113956d2 call dword ptr [0x113c2734] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2734))), 0x113956d8u);
  /* 113956d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113956db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113956e1 push edx */
  push32((uint32_t)(EDX));
  /* 113956e2 call dword ptr [0x113c53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53bc))), 0x113956e8u);
  /* 113956e8 push 0x113c0a34 */
  push32((uint32_t)(0x113c0a34u));
  /* 113956ed call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113956f3u);
  /* 113956f3 call 0x113954d0 */
  push32(0x113956f8u); f_113954d0();
  /* 113956f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113956fb jmp 0x1139596b */
  goto L_1139596b;
L_11395700:;
  /* 11395700 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395704 je 0x1139573d */
  if (C.zf) goto L_1139573d;
  /* 11395706 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1139570c push eax */
  push32((uint32_t)(EAX));
  /* 1139570d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11395710 push ecx */
  push32((uint32_t)(ECX));
  /* 11395711 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11395716 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1139571c push edx */
  push32((uint32_t)(EDX));
  /* 1139571d call 0x113996b0 */
  push32(0x11395722u); f_113996b0();
  /* 11395722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395727 jge 0x1139573d */
  if ((C.sf==C.of)) goto L_1139573d;
  /* 11395729 push 0x113bd5cc */
  push32((uint32_t)(0x113bd5ccu));
  /* 1139572e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11395734 push eax */
  push32((uint32_t)(EAX));
  /* 11395735 call 0x113995c0 */
  push32(0x1139573au); f_113995c0();
  /* 1139573a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139573d:;
  /* 1139573d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395741 jne 0x11395775 */
  if (!C.zf) goto L_11395775;
  /* 11395743 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395747 je 0x11395755 */
  if (C.zf) goto L_11395755;
  /* 11395749 mov dword ptr [ebp - 0x3028], 0x113bd5b8 */
  w32((uint32_t)(EBP + -0x3028), (0x113bd5b8u));
  /* 11395753 jmp 0x1139575f */
  goto L_1139575f;
L_11395755:;
  /* 11395755 mov dword ptr [ebp - 0x3028], 0x113bd5a4 */
  w32((uint32_t)(EBP + -0x3028), (0x113bd5a4u));
L_1139575f:;
  /* 1139575f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11395765 push ecx */
  push32((uint32_t)(ECX));
  /* 11395766 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1139576c push edx */
  push32((uint32_t)(EDX));
  /* 1139576d call 0x113995c0 */
  push32(0x11395772u); f_113995c0();
  /* 11395772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395775:;
  /* 11395775 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1139577b push eax */
  push32((uint32_t)(EAX));
  /* 1139577c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11395782 push ecx */
  push32((uint32_t)(ECX));
  /* 11395783 call 0x113995d0 */
  push32(0x11395788u); f_113995d0();
  /* 11395788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139578b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139578f jne 0x113957ca */
  if (!C.zf) goto L_113957ca;
  /* 11395791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395794 mov eax, dword ptr [edx*4 + 0x113c0a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c0a38)));
  /* 1139579b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1139579e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113957a0 je 0x113957b6 */
  if (C.zf) goto L_113957b6;
  /* 113957a2 push 0x113bd5a0 */
  push32((uint32_t)(0x113bd5a0u));
  /* 113957a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 113957ad push ecx */
  push32((uint32_t)(ECX));
  /* 113957ae call 0x113995d0 */
  push32(0x113957b3u); f_113995d0();
  /* 113957b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113957b6:;
  /* 113957b6 push 0x113bd59c */
  push32((uint32_t)(0x113bd59cu));
  /* 113957bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113957c1 push edx */
  push32((uint32_t)(EDX));
  /* 113957c2 call 0x113995d0 */
  push32(0x113957c7u); f_113995d0();
  /* 113957c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113957ca:;
  /* 113957ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113957ce je 0x11395812 */
  if (C.zf) goto L_11395812;
  /* 113957d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 113957d6 push eax */
  push32((uint32_t)(EAX));
  /* 113957d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113957da push ecx */
  push32((uint32_t)(ECX));
  /* 113957db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113957de push edx */
  push32((uint32_t)(EDX));
  /* 113957df push 0x113bd590 */
  push32((uint32_t)(0x113bd590u));
  /* 113957e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113957e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113957ef push eax */
  push32((uint32_t)(EAX));
  /* 113957f0 call 0x113994c0 */
  push32(0x113957f5u); f_113994c0();
  /* 113957f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113957f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113957fa jge 0x11395810 */
  if ((C.sf==C.of)) goto L_11395810;
  /* 113957fc push 0x113bd5cc */
  push32((uint32_t)(0x113bd5ccu));
  /* 11395801 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11395807 push ecx */
  push32((uint32_t)(ECX));
  /* 11395808 call 0x113995c0 */
  push32(0x1139580du); f_113995c0();
  /* 1139580d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395810:;
  /* 11395810 jmp 0x11395828 */
  goto L_11395828;
L_11395812:;
  /* 11395812 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11395818 push edx */
  push32((uint32_t)(EDX));
  /* 11395819 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1139581f push eax */
  push32((uint32_t)(EAX));
  /* 11395820 call 0x113995c0 */
  push32(0x11395825u); f_113995c0();
  /* 11395825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395828:;
  /* 11395828 cmp dword ptr [0x113c4280], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139582f je 0x1139586c */
  if (C.zf) goto L_1139586c;
  /* 11395831 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11395837 push ecx */
  push32((uint32_t)(ECX));
  /* 11395838 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1139583e push edx */
  push32((uint32_t)(EDX));
  /* 1139583f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395842 push eax */
  push32((uint32_t)(EAX));
  /* 11395843 call dword ptr [0x113c4280] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c4280))), 0x11395849u);
  /* 11395849 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139584c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139584e je 0x1139586c */
  if (C.zf) goto L_1139586c;
  /* 11395850 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395854 jne 0x11395861 */
  if (!C.zf) goto L_11395861;
  /* 11395856 push 0x113c0a34 */
  push32((uint32_t)(0x113c0a34u));
  /* 1139585b call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x11395861u);
L_11395861:;
  /* 11395861 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11395867 jmp 0x1139596b */
  goto L_1139596b;
L_1139586c:;
  /* 1139586c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139586f mov edx, dword ptr [ecx*4 + 0x113c0a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a38)));
  /* 11395876 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11395879 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139587b je 0x113958bb */
  if (C.zf) goto L_113958bb;
  /* 1139587d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395880 cmp dword ptr [eax*4 + 0x113c0a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x113c0a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395888 je 0x113958bb */
  if (C.zf) goto L_113958bb;
  /* 1139588a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139588c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11395892 push ecx */
  push32((uint32_t)(ECX));
  /* 11395893 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11395899 push edx */
  push32((uint32_t)(EDX));
  /* 1139589a call 0x11399440 */
  push32(0x1139589fu); f_11399440();
  /* 1139589f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113958a2 push eax */
  push32((uint32_t)(EAX));
  /* 113958a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113958a9 push eax */
  push32((uint32_t)(EAX));
  /* 113958aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113958ad mov edx, dword ptr [ecx*4 + 0x113c0a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a44)));
  /* 113958b4 push edx */
  push32((uint32_t)(EDX));
  /* 113958b5 call dword ptr [0x113c53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b4))), 0x113958bbu);
L_113958bb:;
  /* 113958bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113958be mov ecx, dword ptr [eax*4 + 0x113c0a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0a38)));
  /* 113958c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113958c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113958ca je 0x113958d9 */
  if (C.zf) goto L_113958d9;
  /* 113958cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113958d2 push edx */
  push32((uint32_t)(EDX));
  /* 113958d3 call dword ptr [0x113c53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53bc))), 0x113958d9u);
L_113958d9:;
  /* 113958d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113958dc mov ecx, dword ptr [eax*4 + 0x113c0a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0a38)));
  /* 113958e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113958e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113958e8 je 0x11395958 */
  if (C.zf) goto L_11395958;
  /* 113958ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113958ee je 0x1139590d */
  if (C.zf) goto L_1139590d;
  /* 113958f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 113958f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 113958f8 push edx */
  push32((uint32_t)(EDX));
  /* 113958f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113958fc push eax */
  push32((uint32_t)(EAX));
  /* 113958fd call 0x11399150 */
  push32(0x11395902u); f_11399150();
  /* 11395902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395905 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1139590b jmp 0x11395917 */
  goto L_11395917;
L_1139590d:;
  /* 1139590d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11395917:;
  /* 11395917 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1139591d push ecx */
  push32((uint32_t)(ECX));
  /* 1139591e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11395921 push edx */
  push32((uint32_t)(EDX));
  /* 11395922 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11395928 push eax */
  push32((uint32_t)(EAX));
  /* 11395929 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139592c push ecx */
  push32((uint32_t)(ECX));
  /* 1139592d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395930 push edx */
  push32((uint32_t)(EDX));
  /* 11395931 call 0x11395970 */
  push32(0x11395936u); f_11395970();
  /* 11395936 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395939 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1139593f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395943 jne 0x11395950 */
  if (!C.zf) goto L_11395950;
  /* 11395945 push 0x113c0a34 */
  push32((uint32_t)(0x113c0a34u));
  /* 1139594a call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x11395950u);
L_11395950:;
  /* 11395950 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11395956 jmp 0x1139596b */
  goto L_1139596b;
L_11395958:;
  /* 11395958 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139595c jne 0x11395969 */
  if (!C.zf) goto L_11395969;
  /* 1139595e push 0x113c0a34 */
  push32((uint32_t)(0x113c0a34u));
  /* 11395963 call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x11395969u);
L_11395969:;
  /* 11395969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139596b:;
  /* 1139596b pop edi */
  EDI = (pop32());
  /* 1139596c mov esp, ebp */
  ESP = (EBP);
  /* 1139596e pop ebp */
  EBP = (pop32());
  /* 1139596f ret  */
  ESPCHK(0x113955e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005970 @ 0x11395970 (780 bytes, 197 insns) */
void f_11395970(void) {
  FTRACE(0x11395970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395970 push ebp */
  push32((uint32_t)(EBP));
  /* 11395971 mov ebp, esp */
  EBP = (ESP);
  /* 11395973 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11395978 call 0x113997b0 */
  push32(0x1139597du); f_113997b0();
L_1139597d:;
  /* 1139597d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395981 jne 0x113959a8 */
  if (!C.zf) goto L_113959a8;
  /* 11395983 push 0x113bd788 */
  push32((uint32_t)(0x113bd788u));
  /* 11395988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139598a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1139598f push 0x113bd77c */
  push32((uint32_t)(0x113bd77cu));
  /* 11395994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395996 call 0x113955e0 */
  push32(0x1139599bu); f_113955e0();
  /* 1139599b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139599e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113959a1 jne 0x113959a8 */
  if (!C.zf) goto L_113959a8;
  /* 113959a3 call 0x113954d0 */
  push32(0x113959a8u); f_113954d0();
L_113959a8:;
  /* 113959a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113959aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113959ac jne 0x1139597d */
  if (!C.zf) goto L_1139597d;
  /* 113959ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113959b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 113959b9 push ecx */
  push32((uint32_t)(ECX));
  /* 113959ba push 0 */
  push32((uint32_t)(0x0u));
  /* 113959bc call dword ptr [0x113c52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52d8))), 0x113959c2u);
  /* 113959c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113959c4 jne 0x113959da */
  if (!C.zf) goto L_113959da;
  /* 113959c6 push 0x113bd764 */
  push32((uint32_t)(0x113bd764u));
  /* 113959cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 113959d1 push edx */
  push32((uint32_t)(EDX));
  /* 113959d2 call 0x113995c0 */
  push32(0x113959d7u); f_113995c0();
  /* 113959d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113959da:;
  /* 113959da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 113959e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113959e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113959e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113959e7 call 0x11399440 */
  push32(0x113959ecu); f_11399440();
  /* 113959ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113959ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113959f2 jbe 0x11395a1d */
  if ((C.cf||C.zf)) goto L_11395a1d;
  /* 113959f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113959f7 push edx */
  push32((uint32_t)(EDX));
  /* 113959f8 call 0x11399440 */
  push32(0x113959fdu); f_11399440();
  /* 113959fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395a00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395a03 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11395a07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11395a0a push 3 */
  push32((uint32_t)(0x3u));
  /* 11395a0c push 0x113bd760 */
  push32((uint32_t)(0x113bd760u));
  /* 11395a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395a14 push eax */
  push32((uint32_t)(EAX));
  /* 11395a15 call 0x11399e30 */
  push32(0x11395a1au); f_11399e30();
  /* 11395a1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395a1d:;
  /* 11395a1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11395a20 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11395a26 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395a2d je 0x11395a78 */
  if (C.zf) goto L_11395a78;
  /* 11395a2f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11395a35 push edx */
  push32((uint32_t)(EDX));
  /* 11395a36 call 0x11399440 */
  push32(0x11395a3bu); f_11399440();
  /* 11395a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395a3e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395a41 jbe 0x11395a78 */
  if ((C.cf||C.zf)) goto L_11395a78;
  /* 11395a43 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11395a49 push eax */
  push32((uint32_t)(EAX));
  /* 11395a4a call 0x11399440 */
  push32(0x11395a4fu); f_11399440();
  /* 11395a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395a52 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11395a58 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11395a5c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11395a62 push 3 */
  push32((uint32_t)(0x3u));
  /* 11395a64 push 0x113bd760 */
  push32((uint32_t)(0x113bd760u));
  /* 11395a69 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11395a6f push eax */
  push32((uint32_t)(EAX));
  /* 11395a70 call 0x11399e30 */
  push32(0x11395a75u); f_11399e30();
  /* 11395a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395a78:;
  /* 11395a78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395a7c jne 0x11395a8a */
  if (!C.zf) goto L_11395a8a;
  /* 11395a7e mov dword ptr [ebp - 0x1114], 0x113bd6ec */
  w32((uint32_t)(EBP + -0x1114), (0x113bd6ecu));
  /* 11395a88 jmp 0x11395a94 */
  goto L_11395a94;
L_11395a8a:;
  /* 11395a8a mov dword ptr [ebp - 0x1114], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1114), (0x113bd48cu));
L_11395a94:;
  /* 11395a94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11395a97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11395a9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11395a9c je 0x11395aa9 */
  if (C.zf) goto L_11395aa9;
  /* 11395a9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11395aa1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11395aa7 jmp 0x11395ab3 */
  goto L_11395ab3;
L_11395aa9:;
  /* 11395aa9 mov dword ptr [ebp - 0x1118], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1118), (0x113bd48cu));
L_11395ab3:;
  /* 11395ab3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11395ab6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11395ab9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11395abb je 0x11395acf */
  if (C.zf) goto L_11395acf;
  /* 11395abd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395ac1 jne 0x11395acf */
  if (!C.zf) goto L_11395acf;
  /* 11395ac3 mov dword ptr [ebp - 0x111c], 0x113bd6dc */
  w32((uint32_t)(EBP + -0x111c), (0x113bd6dcu));
  /* 11395acd jmp 0x11395ad9 */
  goto L_11395ad9;
L_11395acf:;
  /* 11395acf mov dword ptr [ebp - 0x111c], 0x113bd48c */
  w32((uint32_t)(EBP + -0x111c), (0x113bd48cu));
L_11395ad9:;
  /* 11395ad9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11395adc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11395adf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11395ae1 je 0x11395aef */
  if (C.zf) goto L_11395aef;
  /* 11395ae3 mov dword ptr [ebp - 0x1120], 0x113bd6d8 */
  w32((uint32_t)(EBP + -0x1120), (0x113bd6d8u));
  /* 11395aed jmp 0x11395af9 */
  goto L_11395af9;
L_11395aef:;
  /* 11395aef mov dword ptr [ebp - 0x1120], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1120), (0x113bd48cu));
L_11395af9:;
  /* 11395af9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395afd je 0x11395b0a */
  if (C.zf) goto L_11395b0a;
  /* 11395aff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11395b02 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11395b08 jmp 0x11395b14 */
  goto L_11395b14;
L_11395b0a:;
  /* 11395b0a mov dword ptr [ebp - 0x1124], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1124), (0x113bd48cu));
L_11395b14:;
  /* 11395b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395b18 je 0x11395b26 */
  if (C.zf) goto L_11395b26;
  /* 11395b1a mov dword ptr [ebp - 0x1128], 0x113bd6d0 */
  w32((uint32_t)(EBP + -0x1128), (0x113bd6d0u));
  /* 11395b24 jmp 0x11395b30 */
  goto L_11395b30;
L_11395b26:;
  /* 11395b26 mov dword ptr [ebp - 0x1128], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1128), (0x113bd48cu));
L_11395b30:;
  /* 11395b30 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395b34 je 0x11395b41 */
  if (C.zf) goto L_11395b41;
  /* 11395b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395b39 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11395b3f jmp 0x11395b4b */
  goto L_11395b4b;
L_11395b41:;
  /* 11395b41 mov dword ptr [ebp - 0x112c], 0x113bd48c */
  w32((uint32_t)(EBP + -0x112c), (0x113bd48cu));
L_11395b4b:;
  /* 11395b4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395b4f je 0x11395b5d */
  if (C.zf) goto L_11395b5d;
  /* 11395b51 mov dword ptr [ebp - 0x1130], 0x113bd6c8 */
  w32((uint32_t)(EBP + -0x1130), (0x113bd6c8u));
  /* 11395b5b jmp 0x11395b67 */
  goto L_11395b67;
L_11395b5d:;
  /* 11395b5d mov dword ptr [ebp - 0x1130], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1130), (0x113bd48cu));
L_11395b67:;
  /* 11395b67 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395b6e je 0x11395b7e */
  if (C.zf) goto L_11395b7e;
  /* 11395b70 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11395b76 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11395b7c jmp 0x11395b88 */
  goto L_11395b88;
L_11395b7e:;
  /* 11395b7e mov dword ptr [ebp - 0x1134], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1134), (0x113bd48cu));
L_11395b88:;
  /* 11395b88 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395b8f je 0x11395b9d */
  if (C.zf) goto L_11395b9d;
  /* 11395b91 mov dword ptr [ebp - 0x1138], 0x113bd6bc */
  w32((uint32_t)(EBP + -0x1138), (0x113bd6bcu));
  /* 11395b9b jmp 0x11395ba7 */
  goto L_11395ba7;
L_11395b9d:;
  /* 11395b9d mov dword ptr [ebp - 0x1138], 0x113bd48c */
  w32((uint32_t)(EBP + -0x1138), (0x113bd48cu));
L_11395ba7:;
  /* 11395ba7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11395bad push edx */
  push32((uint32_t)(EDX));
  /* 11395bae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11395bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11395bb5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11395bbb push ecx */
  push32((uint32_t)(ECX));
  /* 11395bbc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11395bc2 push edx */
  push32((uint32_t)(EDX));
  /* 11395bc3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11395bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11395bca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11395bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11395bd1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11395bd7 push edx */
  push32((uint32_t)(EDX));
  /* 11395bd8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11395bde push eax */
  push32((uint32_t)(EAX));
  /* 11395bdf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11395be5 push ecx */
  push32((uint32_t)(ECX));
  /* 11395be6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11395bec push edx */
  push32((uint32_t)(EDX));
  /* 11395bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395bf0 push eax */
  push32((uint32_t)(EAX));
  /* 11395bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395bf4 mov edx, dword ptr [ecx*4 + 0x113c0a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a50)));
  /* 11395bfb push edx */
  push32((uint32_t)(EDX));
  /* 11395bfc push 0x113bd668 */
  push32((uint32_t)(0x113bd668u));
  /* 11395c01 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11395c06 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11395c0c push eax */
  push32((uint32_t)(EAX));
  /* 11395c0d call 0x113994c0 */
  push32(0x11395c12u); f_113994c0();
  /* 11395c12 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395c17 jge 0x11395c2d */
  if ((C.sf==C.of)) goto L_11395c2d;
  /* 11395c19 push 0x113bd5cc */
  push32((uint32_t)(0x113bd5ccu));
  /* 11395c1e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11395c24 push ecx */
  push32((uint32_t)(ECX));
  /* 11395c25 call 0x113995c0 */
  push32(0x11395c2au); f_113995c0();
  /* 11395c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395c2d:;
  /* 11395c2d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11395c32 push 0x113bd644 */
  push32((uint32_t)(0x113bd644u));
  /* 11395c37 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11395c3d push edx */
  push32((uint32_t)(EDX));
  /* 11395c3e call 0x11399d70 */
  push32(0x11395c43u); f_11399d70();
  /* 11395c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395c46 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11395c4c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395c53 jne 0x11395c66 */
  if (!C.zf) goto L_11395c66;
  /* 11395c55 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11395c57 call 0x11399ab0 */
  push32(0x11395c5cu); f_11399ab0();
  /* 11395c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395c5f push 3 */
  push32((uint32_t)(0x3u));
  /* 11395c61 call 0x11396080 */
  push32(0x11395c66u); f_11396080();
L_11395c66:;
  /* 11395c66 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395c6d jne 0x11395c76 */
  if (!C.zf) goto L_11395c76;
  /* 11395c6f mov eax, 1 */
  EAX = (0x1u);
  /* 11395c74 jmp 0x11395c78 */
  goto L_11395c78;
L_11395c76:;
  /* 11395c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11395c78:;
  /* 11395c78 mov esp, ebp */
  ESP = (EBP);
  /* 11395c7a pop ebp */
  EBP = (pop32());
  /* 11395c7b ret  */
  ESPCHK(0x11395970u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c80 @ 0x11395c80 (130 bytes, 42 insns) */
void f_11395c80(void) {
  FTRACE(0x11395c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11395c81 mov ebp, esp */
  EBP = (ESP);
  /* 11395c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11395c84 call 0x11399f30 */
  push32(0x11395c89u); f_11399f30();
  /* 11395c89 call dword ptr [0x113c53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d8))), 0x11395c8fu);
  /* 11395c8f mov dword ptr [0x113c0a5c], eax */
  w32((uint32_t)(0x113c0a5c), (EAX));
  /* 11395c94 cmp dword ptr [0x113c0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395c9b jne 0x11395ca1 */
  if (!C.zf) goto L_11395ca1;
  /* 11395c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11395c9f jmp 0x11395cfe */
  goto L_11395cfe;
L_11395ca1:;
  /* 11395ca1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11395ca3 push 0x113bd7a0 */
  push32((uint32_t)(0x113bd7a0u));
  /* 11395ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395caa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11395cac push 1 */
  push32((uint32_t)(0x1u));
  /* 11395cae call 0x11396a20 */
  push32(0x11395cb3u); f_11396a20();
  /* 11395cb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395cb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395cb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395cbd je 0x11395cd4 */
  if (C.zf) goto L_11395cd4;
  /* 11395cbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395cc2 push eax */
  push32((uint32_t)(EAX));
  /* 11395cc3 mov ecx, dword ptr [0x113c0a5c] */
  ECX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11395cca call dword ptr [0x113c53d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d4))), 0x11395cd0u);
  /* 11395cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395cd2 jne 0x11395cd8 */
  if (!C.zf) goto L_11395cd8;
L_11395cd4:;
  /* 11395cd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11395cd6 jmp 0x11395cfe */
  goto L_11395cfe;
L_11395cd8:;
  /* 11395cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395cdb push edx */
  push32((uint32_t)(EDX));
  /* 11395cdc call 0x11395d40 */
  push32(0x11395ce1u); f_11395d40();
  /* 11395ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395ce4 call dword ptr [0x113c53d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d0))), 0x11395ceau);
  /* 11395cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395ced mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11395cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395cf2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11395cf9 mov eax, 1 */
  EAX = (0x1u);
L_11395cfe:;
  /* 11395cfe mov esp, ebp */
  ESP = (EBP);
  /* 11395d00 pop ebp */
  EBP = (pop32());
  /* 11395d01 ret  */
  ESPCHK(0x11395c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x11395d10 (41 bytes, 11 insns) */
void f_11395d10(void) {
  FTRACE(0x11395d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11395d11 mov ebp, esp */
  EBP = (ESP);
  /* 11395d13 call 0x11399f70 */
  push32(0x11395d18u); f_11399f70();
  /* 11395d18 cmp dword ptr [0x113c0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395d1f je 0x11395d37 */
  if (C.zf) goto L_11395d37;
  /* 11395d21 mov eax, dword ptr [0x113c0a5c] */
  EAX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395d26 push eax */
  push32((uint32_t)(EAX));
  /* 11395d27 call dword ptr [0x113c53dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53dc))), 0x11395d2du);
  /* 11395d2d mov dword ptr [0x113c0a5c], 0xffffffff */
  w32((uint32_t)(0x113c0a5c), (0xffffffffu));
L_11395d37:;
  /* 11395d37 pop ebp */
  EBP = (pop32());
  /* 11395d38 ret  */
  ESPCHK(0x11395d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x11395d40 (25 bytes, 8 insns) */
void f_11395d40(void) {
  FTRACE(0x11395d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11395d41 mov ebp, esp */
  EBP = (ESP);
  /* 11395d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395d46 mov dword ptr [eax + 0x50], 0x113c0c00 */
  w32((uint32_t)(EAX + 0x50), (0x113c0c00u));
  /* 11395d4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395d50 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11395d57 pop ebp */
  EBP = (pop32());
  /* 11395d58 ret  */
  ESPCHK(0x11395d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d60 @ 0x11395d60 (152 bytes, 48 insns) */
void f_11395d60(void) {
  FTRACE(0x11395d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11395d61 mov ebp, esp */
  EBP = (ESP);
  /* 11395d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395d66 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x11395d6cu);
  /* 11395d6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11395d6f mov eax, dword ptr [0x113c0a5c] */
  EAX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395d74 push eax */
  push32((uint32_t)(EAX));
  /* 11395d75 call dword ptr [0x113c53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53e4))), 0x11395d7bu);
  /* 11395d7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395d7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395d82 jne 0x11395de7 */
  if (!C.zf) goto L_11395de7;
  /* 11395d84 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11395d89 push 0x113bd7a0 */
  push32((uint32_t)(0x113bd7a0u));
  /* 11395d8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11395d90 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11395d92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11395d94 call 0x11396a20 */
  push32(0x11395d99u); f_11396a20();
  /* 11395d99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395d9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395d9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395da3 je 0x11395ddd */
  if (C.zf) goto L_11395ddd;
  /* 11395da5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395da8 push ecx */
  push32((uint32_t)(ECX));
  /* 11395da9 mov edx, dword ptr [0x113c0a5c] */
  EDX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395daf push edx */
  push32((uint32_t)(EDX));
  /* 11395db0 call dword ptr [0x113c53d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d4))), 0x11395db6u);
  /* 11395db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395db8 je 0x11395ddd */
  if (C.zf) goto L_11395ddd;
  /* 11395dba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395dbd push eax */
  push32((uint32_t)(EAX));
  /* 11395dbe call 0x11395d40 */
  push32(0x11395dc3u); f_11395d40();
  /* 11395dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11395dc6 call dword ptr [0x113c53d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d0))), 0x11395dccu);
  /* 11395dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395dcf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11395dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395dd4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11395ddb jmp 0x11395de7 */
  goto L_11395de7;
L_11395ddd:;
  /* 11395ddd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11395ddf call 0x11395490 */
  push32(0x11395de4u); f_11395490();
  /* 11395de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395de7:;
  /* 11395de7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11395dea push eax */
  push32((uint32_t)(EAX));
  /* 11395deb call dword ptr [0x113c53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53e0))), 0x11395df1u);
  /* 11395df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395df4 mov esp, ebp */
  ESP = (EBP);
  /* 11395df6 pop ebp */
  EBP = (pop32());
  /* 11395df7 ret  */
  ESPCHK(0x11395d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e00 @ 0x11395e00 (263 bytes, 86 insns) */
void f_11395e00(void) {
  FTRACE(0x11395e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11395e01 mov ebp, esp */
  EBP = (ESP);
  /* 11395e03 cmp dword ptr [0x113c0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e0a je 0x11395f05 */
  if (C.zf) goto L_11395f05;
  /* 11395e10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e14 jne 0x11395e25 */
  if (!C.zf) goto L_11395e25;
  /* 11395e16 mov eax, dword ptr [0x113c0a5c] */
  EAX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395e1b push eax */
  push32((uint32_t)(EAX));
  /* 11395e1c call dword ptr [0x113c53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53e4))), 0x11395e22u);
  /* 11395e22 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11395e25:;
  /* 11395e25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e29 je 0x11395ef6 */
  if (C.zf) goto L_11395ef6;
  /* 11395e2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e32 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e36 je 0x11395e49 */
  if (C.zf) goto L_11395e49;
  /* 11395e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395e3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e3d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11395e40 push eax */
  push32((uint32_t)(EAX));
  /* 11395e41 call 0x113970a0 */
  push32(0x11395e46u); f_113970a0();
  /* 11395e46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395e49:;
  /* 11395e49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e4c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e50 je 0x11395e63 */
  if (C.zf) goto L_11395e63;
  /* 11395e52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e57 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11395e5a push eax */
  push32((uint32_t)(EAX));
  /* 11395e5b call 0x113970a0 */
  push32(0x11395e60u); f_113970a0();
  /* 11395e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395e63:;
  /* 11395e63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e66 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e6a je 0x11395e7d */
  if (C.zf) goto L_11395e7d;
  /* 11395e6c push 2 */
  push32((uint32_t)(0x2u));
  /* 11395e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e71 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11395e74 push eax */
  push32((uint32_t)(EAX));
  /* 11395e75 call 0x113970a0 */
  push32(0x11395e7au); f_113970a0();
  /* 11395e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395e7d:;
  /* 11395e7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e80 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e84 je 0x11395e97 */
  if (C.zf) goto L_11395e97;
  /* 11395e86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395e88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e8b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11395e8e push eax */
  push32((uint32_t)(EAX));
  /* 11395e8f call 0x113970a0 */
  push32(0x11395e94u); f_113970a0();
  /* 11395e94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395e97:;
  /* 11395e97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395e9a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395e9e je 0x11395eb1 */
  if (C.zf) goto L_11395eb1;
  /* 11395ea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395ea5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11395ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11395ea9 call 0x113970a0 */
  push32(0x11395eaeu); f_113970a0();
  /* 11395eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395eb1:;
  /* 11395eb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395eb4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395eb8 je 0x11395ecb */
  if (C.zf) goto L_11395ecb;
  /* 11395eba push 2 */
  push32((uint32_t)(0x2u));
  /* 11395ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395ebf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11395ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11395ec3 call 0x113970a0 */
  push32(0x11395ec8u); f_113970a0();
  /* 11395ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395ecb:;
  /* 11395ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395ece cmp dword ptr [ecx + 0x50], 0x113c0c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x113c0c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395ed5 je 0x11395ee8 */
  if (C.zf) goto L_11395ee8;
  /* 11395ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395edc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11395edf push eax */
  push32((uint32_t)(EAX));
  /* 11395ee0 call 0x113970a0 */
  push32(0x11395ee5u); f_113970a0();
  /* 11395ee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395ee8:;
  /* 11395ee8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11395eea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395eed push ecx */
  push32((uint32_t)(ECX));
  /* 11395eee call 0x113970a0 */
  push32(0x11395ef3u); f_113970a0();
  /* 11395ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11395ef6:;
  /* 11395ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11395ef8 mov edx, dword ptr [0x113c0a5c] */
  EDX = (r32((uint32_t)(0x113c0a5c)));
  /* 11395efe push edx */
  push32((uint32_t)(EDX));
  /* 11395eff call dword ptr [0x113c53d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d4))), 0x11395f05u);
L_11395f05:;
  /* 11395f05 pop ebp */
  EBP = (pop32());
  /* 11395f06 ret  */
  ESPCHK(0x11395e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11395f10 (11 bytes, 5 insns) */
void f_11395f10(void) {
  FTRACE(0x11395f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11395f11 mov ebp, esp */
  EBP = (ESP);
  /* 11395f13 call dword ptr [0x113c53d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53d0))), 0x11395f19u);
  /* 11395f19 pop ebp */
  EBP = (pop32());
  /* 11395f1a ret  */
  ESPCHK(0x11395f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x11395f20 (11 bytes, 5 insns) */
void f_11395f20(void) {
  FTRACE(0x11395f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11395f21 mov ebp, esp */
  EBP = (ESP);
  /* 11395f23 call dword ptr [0x113c53e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53e8))), 0x11395f29u);
  /* 11395f29 pop ebp */
  EBP = (pop32());
  /* 11395f2a ret  */
  ESPCHK(0x11395f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f30 @ 0x11395f30 (238 bytes, 75 insns) */
void f_11395f30(void) {
  FTRACE(0x11395f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11395f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11395f31 mov ebp, esp */
  EBP = (ESP);
  /* 11395f33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395f39 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395f3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11395f41 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395f45 jl 0x11395f50 */
  if ((C.sf!=C.of)) goto L_11395f50;
  /* 11395f47 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395f4e jle 0x11395f58 */
  if ((C.zf||C.sf!=C.of)) goto L_11395f58;
L_11395f50:;
  /* 11395f50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11395f53 jmp 0x1139601a */
  goto L_1139601a;
L_11395f58:;
  /* 11395f58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395f5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11395f5e add edx, dword ptr [ecx*4 + 0x113c0d6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x113c0d6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395f65 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11395f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395f6b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11395f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11395f70 jne 0x11395f81 */
  if (!C.zf) goto L_11395f81;
  /* 11395f72 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395f76 jle 0x11395f81 */
  if ((C.zf||C.sf!=C.of)) goto L_11395f81;
  /* 11395f78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11395f7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395f7e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11395f81:;
  /* 11395f81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395f84 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395f87 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11395f8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395f90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395f93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11395f96 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11395f99 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395f9b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11395f9f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11395fa2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395fa5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11395fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395fab imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11395fae add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395fb1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11395fb4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395fb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11395fba call 0x1139a310 */
  push32(0x11395fbfu); f_1139a310();
  /* 11395fbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11395fc2 add ecx, dword ptr [0x113c0c88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0c88))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11395fc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11395fcb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11395fce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11395fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11395fd4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11395fd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11395fda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11395fdd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11395fe0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11395fe3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11395fe6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395fea je 0x1139600b */
  if (C.zf) goto L_1139600b;
  /* 11395fec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395ff0 jne 0x11396017 */
  if (!C.zf) goto L_11396017;
  /* 11395ff2 cmp dword ptr [0x113c0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11395ff9 je 0x11396017 */
  if (C.zf) goto L_11396017;
  /* 11395ffb lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11395ffe push eax */
  push32((uint32_t)(EAX));
  /* 11395fff call 0x1139a720 */
  push32(0x11396004u); f_1139a720();
  /* 11396004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396009 je 0x11396017 */
  if (C.zf) goto L_11396017;
L_1139600b:;
  /* 1139600b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139600e add ecx, dword ptr [0x113c0c90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0c90))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396014 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11396017:;
  /* 11396017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139601a:;
  /* 1139601a mov esp, ebp */
  ESP = (EBP);
  /* 1139601c pop ebp */
  EBP = (pop32());
  /* 1139601d ret  */
  ESPCHK(0x11395f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x11396020 (56 bytes, 15 insns) */
void f_11396020(void) {
  FTRACE(0x11396020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396020 push ebp */
  push32((uint32_t)(EBP));
  /* 11396021 mov ebp, esp */
  EBP = (ESP);
  /* 11396023 cmp dword ptr [0x113c427c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c427c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139602a je 0x11396032 */
  if (C.zf) goto L_11396032;
  /* 1139602c call dword ptr [0x113c427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c427c))), 0x11396032u);
L_11396032:;
  /* 11396032 push 0x113c0418 */
  push32((uint32_t)(0x113c0418u));
  /* 11396037 push 0x113c0208 */
  push32((uint32_t)(0x113c0208u));
  /* 1139603c call 0x113961f0 */
  push32(0x11396041u); f_113961f0();
  /* 11396041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396044 push 0x113c0104 */
  push32((uint32_t)(0x113c0104u));
  /* 11396049 push 0x113c0000 */
  push32((uint32_t)(0x113c0000u));
  /* 1139604e call 0x113961f0 */
  push32(0x11396053u); f_113961f0();
  /* 11396053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396056 pop ebp */
  EBP = (pop32());
  /* 11396057 ret  */
  ESPCHK(0x11396020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x11396060 (21 bytes, 10 insns) */
void f_11396060(void) {
  FTRACE(0x11396060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396060 push ebp */
  push32((uint32_t)(EBP));
  /* 11396061 mov ebp, esp */
  EBP = (ESP);
  /* 11396063 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396065 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139606a push eax */
  push32((uint32_t)(EAX));
  /* 1139606b call 0x113960e0 */
  push32(0x11396070u); f_113960e0();
  /* 11396070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396073 pop ebp */
  EBP = (pop32());
  /* 11396074 ret  */
  ESPCHK(0x11396060u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11396080 (21 bytes, 10 insns) */
void f_11396080(void) {
  FTRACE(0x11396080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396080 push ebp */
  push32((uint32_t)(EBP));
  /* 11396081 mov ebp, esp */
  EBP = (ESP);
  /* 11396083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396085 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139608a push eax */
  push32((uint32_t)(EAX));
  /* 1139608b call 0x113960e0 */
  push32(0x11396090u); f_113960e0();
  /* 11396090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396093 pop ebp */
  EBP = (pop32());
  /* 11396094 ret  */
  ESPCHK(0x11396080u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a0 @ 0x113960a0 (19 bytes, 9 insns) */
void f_113960a0(void) {
  FTRACE(0x113960a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113960a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113960a1 mov ebp, esp */
  EBP = (ESP);
  /* 113960a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113960a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113960a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113960a9 call 0x113960e0 */
  push32(0x113960aeu); f_113960e0();
  /* 113960ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113960b1 pop ebp */
  EBP = (pop32());
  /* 113960b2 ret  */
  ESPCHK(0x113960a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x113960c0 (19 bytes, 9 insns) */
void f_113960c0(void) {
  FTRACE(0x113960c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113960c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113960c1 mov ebp, esp */
  EBP = (ESP);
  /* 113960c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113960c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113960c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113960c9 call 0x113960e0 */
  push32(0x113960ceu); f_113960e0();
  /* 113960ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113960d1 pop ebp */
  EBP = (pop32());
  /* 113960d2 ret  */
  ESPCHK(0x113960c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x113960e0 (227 bytes, 61 insns) */
void f_113960e0(void) {
  FTRACE(0x113960e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113960e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113960e1 mov ebp, esp */
  EBP = (ESP);
  /* 113960e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113960e4 call 0x113961d0 */
  push32(0x113960e9u); f_113961d0();
  /* 113960e9 cmp dword ptr [0x113c2778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113960f0 jne 0x11396103 */
  if (!C.zf) goto L_11396103;
  /* 113960f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113960f5 push eax */
  push32((uint32_t)(EAX));
  /* 113960f6 call dword ptr [0x113c53f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53f4))), 0x113960fcu);
  /* 113960fc push eax */
  push32((uint32_t)(EAX));
  /* 113960fd call dword ptr [0x113c53f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53f0))), 0x11396103u);
L_11396103:;
  /* 11396103 mov dword ptr [0x113c2774], 1 */
  w32((uint32_t)(0x113c2774), (0x1u));
  /* 1139610d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11396110 mov byte ptr [0x113c2770], cl */
  w8((uint32_t)(0x113c2770), (CL));
  /* 11396116 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139611a jne 0x11396163 */
  if (!C.zf) goto L_11396163;
  /* 1139611c cmp dword ptr [0x113c4278], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396123 je 0x11396151 */
  if (C.zf) goto L_11396151;
  /* 11396125 mov edx, dword ptr [0x113c4274] */
  EDX = (r32((uint32_t)(0x113c4274)));
  /* 1139612b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139612e:;
  /* 1139612e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396131 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396134 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11396137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139613a cmp ecx, dword ptr [0x113c4278] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c4278))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396140 jb 0x11396151 */
  if (C.cf) goto L_11396151;
  /* 11396142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396145 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396148 je 0x1139614f */
  if (C.zf) goto L_1139614f;
  /* 1139614a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139614d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1139614fu);
L_1139614f:;
  /* 1139614f jmp 0x1139612e */
  goto L_1139612e;
L_11396151:;
  /* 11396151 push 0x113c0724 */
  push32((uint32_t)(0x113c0724u));
  /* 11396156 push 0x113c051c */
  push32((uint32_t)(0x113c051cu));
  /* 1139615b call 0x113961f0 */
  push32(0x11396160u); f_113961f0();
  /* 11396160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11396163:;
  /* 11396163 push 0x113c092c */
  push32((uint32_t)(0x113c092cu));
  /* 11396168 push 0x113c0828 */
  push32((uint32_t)(0x113c0828u));
  /* 1139616d call 0x113961f0 */
  push32(0x11396172u); f_113961f0();
  /* 11396172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396175 cmp dword ptr [0x113c277c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c277c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139617c jne 0x1139619e */
  if (!C.zf) goto L_1139619e;
  /* 1139617e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11396180 call 0x11397b20 */
  push32(0x11396185u); f_11397b20();
  /* 11396185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396188 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1139618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139618d je 0x1139619e */
  if (C.zf) goto L_1139619e;
  /* 1139618f mov dword ptr [0x113c277c], 1 */
  w32((uint32_t)(0x113c277c), (0x1u));
  /* 11396199 call 0x11398430 */
  push32(0x1139619eu); f_11398430();
L_1139619e:;
  /* 1139619e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113961a2 je 0x113961ab */
  if (C.zf) goto L_113961ab;
  /* 113961a4 call 0x113961e0 */
  push32(0x113961a9u); f_113961e0();
  /* 113961a9 jmp 0x113961bf */
  goto L_113961bf;
L_113961ab:;
  /* 113961ab mov dword ptr [0x113c2778], 1 */
  w32((uint32_t)(0x113c2778), (0x1u));
  /* 113961b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113961b8 push ecx */
  push32((uint32_t)(ECX));
  /* 113961b9 call dword ptr [0x113c53ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53ec))), 0x113961bfu);
L_113961bf:;
  /* 113961bf mov esp, ebp */
  ESP = (EBP);
  /* 113961c1 pop ebp */
  EBP = (pop32());
  /* 113961c2 ret  */
  ESPCHK(0x113960e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x113961d0 (15 bytes, 7 insns) */
void f_113961d0(void) {
  FTRACE(0x113961d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113961d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113961d1 mov ebp, esp */
  EBP = (ESP);
  /* 113961d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113961d5 call 0x1139a010 */
  push32(0x113961dau); f_1139a010();
  /* 113961da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113961dd pop ebp */
  EBP = (pop32());
  /* 113961de ret  */
  ESPCHK(0x113961d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x113961e0 (15 bytes, 7 insns) */
void f_113961e0(void) {
  FTRACE(0x113961e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113961e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113961e1 mov ebp, esp */
  EBP = (ESP);
  /* 113961e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113961e5 call 0x1139a0b0 */
  push32(0x113961eau); f_1139a0b0();
  /* 113961ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113961ed pop ebp */
  EBP = (pop32());
  /* 113961ee ret  */
  ESPCHK(0x113961e0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x113961f0 (37 bytes, 16 insns) */
void f_113961f0(void) {
  FTRACE(0x113961f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113961f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113961f1 mov ebp, esp */
  EBP = (ESP);
L_113961f3:;
  /* 113961f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113961f6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113961f9 jae 0x11396213 */
  if (!C.cf) goto L_11396213;
  /* 113961fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113961fe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396201 je 0x11396208 */
  if (C.zf) goto L_11396208;
  /* 11396203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396206 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11396208u);
L_11396208:;
  /* 11396208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139620b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139620e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11396211 jmp 0x113961f3 */
  goto L_113961f3;
L_11396213:;
  /* 11396213 pop ebp */
  EBP = (pop32());
  /* 11396214 ret  */
  ESPCHK(0x113961f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x11396220 (804 bytes, 236 insns) */
void f_11396220(void) {
  FTRACE(0x11396220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396220 push ebp */
  push32((uint32_t)(EBP));
  /* 11396221 mov ebp, esp */
  EBP = (ESP);
  /* 11396223 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396226 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1139622b push 0x113bd7ac */
  push32((uint32_t)(0x113bd7acu));
  /* 11396230 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396232 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11396237 call 0x11396610 */
  push32(0x1139623cu); f_11396610();
  /* 1139623c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139623f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11396242 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396246 jne 0x11396252 */
  if (!C.zf) goto L_11396252;
  /* 11396248 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1139624a call 0x11395490 */
  push32(0x1139624fu); f_11395490();
  /* 1139624f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11396252:;
  /* 11396252 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396255 mov dword ptr [0x113c4120], eax */
  w32((uint32_t)(0x113c4120), (EAX));
  /* 1139625a mov dword ptr [0x113c425c], 0x20 */
  w32((uint32_t)(0x113c425c), (0x20u));
  /* 11396264 jmp 0x1139626f */
  goto L_1139626f;
L_11396266:;
  /* 11396266 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396269 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139626c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1139626f:;
  /* 1139626f mov edx, dword ptr [0x113c4120] */
  EDX = (r32((uint32_t)(0x113c4120)));
  /* 11396275 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139627b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139627e jae 0x113962a3 */
  if (!C.cf) goto L_113962a3;
  /* 11396280 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396283 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11396287 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139628a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11396290 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396293 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11396297 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139629a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113962a1 jmp 0x11396266 */
  goto L_11396266;
L_113962a3:;
  /* 113962a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 113962a6 push ecx */
  push32((uint32_t)(ECX));
  /* 113962a7 call dword ptr [0x113c53c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c8))), 0x113962adu);
  /* 113962ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 113962b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113962b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113962b8 je 0x11396445 */
  if (C.zf) goto L_11396445;
  /* 113962be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113962c2 je 0x11396445 */
  if (C.zf) goto L_11396445;
  /* 113962c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113962cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113962cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 113962d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113962d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113962d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113962d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113962dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113962df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 113962e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113962e9 jge 0x113962f3 */
  if ((C.sf==C.of)) goto L_113962f3;
  /* 113962eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 113962ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 113962f1 jmp 0x113962fa */
  goto L_113962fa;
L_113962f3:;
  /* 113962f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_113962fa:;
  /* 113962fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 113962fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11396300 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11396307 jmp 0x11396312 */
  goto L_11396312;
L_11396309:;
  /* 11396309 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1139630c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139630f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11396312:;
  /* 11396312 mov ecx, dword ptr [0x113c425c] */
  ECX = (r32((uint32_t)(0x113c425c)));
  /* 11396318 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139631b jge 0x113963b2 */
  if ((C.sf==C.of)) goto L_113963b2;
  /* 11396321 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11396326 push 0x113bd7ac */
  push32((uint32_t)(0x113bd7acu));
  /* 1139632b push 2 */
  push32((uint32_t)(0x2u));
  /* 1139632d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11396332 call 0x11396610 */
  push32(0x11396337u); f_11396610();
  /* 11396337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139633a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1139633d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396341 jne 0x1139634e */
  if (!C.zf) goto L_1139634e;
  /* 11396343 mov edx, dword ptr [0x113c425c] */
  EDX = (r32((uint32_t)(0x113c425c)));
  /* 11396349 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1139634c jmp 0x113963b2 */
  goto L_113963b2;
L_1139634e:;
  /* 1139634e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11396351 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396354 mov dword ptr [eax*4 + 0x113c4120], ecx */
  w32((uint32_t)(EAX*4 + 0x113c4120), (ECX));
  /* 1139635b mov edx, dword ptr [0x113c425c] */
  EDX = (r32((uint32_t)(0x113c425c)));
  /* 11396361 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396364 mov dword ptr [0x113c425c], edx */
  w32((uint32_t)(0x113c425c), (EDX));
  /* 1139636a jmp 0x11396375 */
  goto L_11396375;
L_1139636c:;
  /* 1139636c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139636f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396372 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11396375:;
  /* 11396375 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11396378 mov edx, dword ptr [ecx*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139637f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396385 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396388 jae 0x113963ad */
  if (!C.cf) goto L_113963ad;
  /* 1139638a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139638d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11396391 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396394 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1139639a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139639d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113963a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113963a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113963ab jmp 0x1139636c */
  goto L_1139636c;
L_113963ad:;
  /* 113963ad jmp 0x11396309 */
  goto L_11396309;
L_113963b2:;
  /* 113963b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 113963b9 jmp 0x113963d6 */
  goto L_113963d6;
L_113963bb:;
  /* 113963bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113963be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113963c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 113963c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113963c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113963ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113963cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 113963d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113963d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_113963d6:;
  /* 113963d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113963d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113963dc jge 0x11396445 */
  if ((C.sf==C.of)) goto L_11396445;
  /* 113963de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 113963e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113963e4 je 0x11396440 */
  if (C.zf) goto L_11396440;
  /* 113963e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113963e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113963ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113963ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113963f1 je 0x11396440 */
  if (C.zf) goto L_11396440;
  /* 113963f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113963f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113963f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 113963fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113963fe jne 0x11396410 */
  if (!C.zf) goto L_11396410;
  /* 11396400 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11396403 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11396405 push edx */
  push32((uint32_t)(EDX));
  /* 11396406 call dword ptr [0x113c53fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53fc))), 0x1139640cu);
  /* 1139640c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139640e je 0x11396440 */
  if (C.zf) goto L_11396440;
L_11396410:;
  /* 11396410 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11396413 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11396416 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11396419 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1139641c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139641f mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 11396426 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396428 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1139642b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139642e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11396431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11396433 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11396435 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139643b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139643d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11396440:;
  /* 11396440 jmp 0x113963bb */
  goto L_113963bb;
L_11396445:;
  /* 11396445 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1139644c jmp 0x11396457 */
  goto L_11396457;
L_1139644e:;
  /* 1139644e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11396451 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396454 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11396457:;
  /* 11396457 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139645b jge 0x11396534 */
  if ((C.sf==C.of)) goto L_11396534;
  /* 11396461 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11396464 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11396467 mov edx, dword ptr [0x113c4120] */
  EDX = (r32((uint32_t)(0x113c4120)));
  /* 1139646d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139646f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11396472 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396475 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396478 jne 0x11396520 */
  if (!C.zf) goto L_11396520;
  /* 1139647e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396481 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11396485 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396489 jne 0x11396494 */
  if (!C.zf) goto L_11396494;
  /* 1139648b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11396492 jmp 0x113964a4 */
  goto L_113964a4;
L_11396494:;
  /* 11396494 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11396497 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139649a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139649c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139649e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113964a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_113964a4:;
  /* 113964a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 113964a7 push eax */
  push32((uint32_t)(EAX));
  /* 113964a8 call dword ptr [0x113c53b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b0))), 0x113964aeu);
  /* 113964ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 113964b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113964b5 je 0x1139650f */
  if (C.zf) goto L_1139650f;
  /* 113964b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113964ba push ecx */
  push32((uint32_t)(ECX));
  /* 113964bb call dword ptr [0x113c53fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53fc))), 0x113964c1u);
  /* 113964c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 113964c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113964c8 je 0x1139650f */
  if (C.zf) goto L_1139650f;
  /* 113964ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113964cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113964d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113964d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 113964d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113964db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113964de jne 0x113964f0 */
  if (!C.zf) goto L_113964f0;
  /* 113964e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113964e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113964e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 113964e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113964eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 113964ee jmp 0x1139650d */
  goto L_1139650d;
L_113964f0:;
  /* 113964f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 113964f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113964f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113964fc jne 0x1139650d */
  if (!C.zf) goto L_1139650d;
  /* 113964fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396501 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11396504 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11396507 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139650a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1139650d:;
  /* 1139650d jmp 0x1139651e */
  goto L_1139651e;
L_1139650f:;
  /* 1139650f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396512 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11396515 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11396518 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139651b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1139651e:;
  /* 1139651e jmp 0x1139652f */
  goto L_1139652f;
L_11396520:;
  /* 11396520 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11396523 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11396526 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11396529 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139652c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1139652f:;
  /* 1139652f jmp 0x1139644e */
  goto L_1139644e;
L_11396534:;
  /* 11396534 mov eax, dword ptr [0x113c425c] */
  EAX = (r32((uint32_t)(0x113c425c)));
  /* 11396539 push eax */
  push32((uint32_t)(EAX));
  /* 1139653a call dword ptr [0x113c53f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53f8))), 0x11396540u);
  /* 11396540 mov esp, ebp */
  ESP = (EBP);
  /* 11396542 pop ebp */
  EBP = (pop32());
  /* 11396543 ret  */
  ESPCHK(0x11396220u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11396550 (155 bytes, 45 insns) */
void f_11396550(void) {
  FTRACE(0x11396550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396550 push ebp */
  push32((uint32_t)(EBP));
  /* 11396551 mov ebp, esp */
  EBP = (ESP);
  /* 11396553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396556 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1139655d jmp 0x11396568 */
  goto L_11396568;
L_1139655f:;
  /* 1139655f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396562 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11396568:;
  /* 11396568 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139656c jge 0x113965e7 */
  if ((C.sf==C.of)) goto L_113965e7;
  /* 1139656e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396571 cmp dword ptr [ecx*4 + 0x113c4120], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113c4120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396579 je 0x113965e2 */
  if (C.zf) goto L_113965e2;
  /* 1139657b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139657e mov eax, dword ptr [edx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 11396585 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11396588 jmp 0x11396593 */
  goto L_11396593;
L_1139658a:;
  /* 1139658a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139658d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396590 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11396593:;
  /* 11396593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396596 mov eax, dword ptr [edx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 1139659d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113965a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113965a5 jae 0x113965bf */
  if (!C.cf) goto L_113965bf;
  /* 113965a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113965aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113965ae je 0x113965bd */
  if (C.zf) goto L_113965bd;
  /* 113965b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113965b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113965b6 push edx */
  push32((uint32_t)(EDX));
  /* 113965b7 call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x113965bdu);
L_113965bd:;
  /* 113965bd jmp 0x1139658a */
  goto L_1139658a;
L_113965bf:;
  /* 113965bf push 2 */
  push32((uint32_t)(0x2u));
  /* 113965c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113965c4 mov ecx, dword ptr [eax*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113965cb push ecx */
  push32((uint32_t)(ECX));
  /* 113965cc call 0x113970a0 */
  push32(0x113965d1u); f_113970a0();
  /* 113965d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113965d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113965d7 mov dword ptr [edx*4 + 0x113c4120], 0 */
  w32((uint32_t)(EDX*4 + 0x113c4120), (0x0u));
L_113965e2:;
  /* 113965e2 jmp 0x1139655f */
  goto L_1139655f;
L_113965e7:;
  /* 113965e7 mov esp, ebp */
  ESP = (EBP);
  /* 113965e9 pop ebp */
  EBP = (pop32());
  /* 113965ea ret  */
  ESPCHK(0x11396550u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x113965f0 (29 bytes, 13 insns) */
void f_113965f0(void) {
  FTRACE(0x113965f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113965f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113965f1 mov ebp, esp */
  EBP = (ESP);
  /* 113965f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113965f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113965f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113965f9 mov eax, dword ptr [0x113c29dc] */
  EAX = (r32((uint32_t)(0x113c29dc)));
  /* 113965fe push eax */
  push32((uint32_t)(EAX));
  /* 113965ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396602 push ecx */
  push32((uint32_t)(ECX));
  /* 11396603 call 0x11396660 */
  push32(0x11396608u); f_11396660();
  /* 11396608 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139660b pop ebp */
  EBP = (pop32());
  /* 1139660c ret  */
  ESPCHK(0x113965f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x11396610 (35 bytes, 16 insns) */
void f_11396610(void) {
  FTRACE(0x11396610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396610 push ebp */
  push32((uint32_t)(EBP));
  /* 11396611 mov ebp, esp */
  EBP = (ESP);
  /* 11396613 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396616 push eax */
  push32((uint32_t)(EAX));
  /* 11396617 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139661a push ecx */
  push32((uint32_t)(ECX));
  /* 1139661b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139661e push edx */
  push32((uint32_t)(EDX));
  /* 1139661f mov eax, dword ptr [0x113c29dc] */
  EAX = (r32((uint32_t)(0x113c29dc)));
  /* 11396624 push eax */
  push32((uint32_t)(EAX));
  /* 11396625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396628 push ecx */
  push32((uint32_t)(ECX));
  /* 11396629 call 0x11396660 */
  push32(0x1139662eu); f_11396660();
  /* 1139662e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396631 pop ebp */
  EBP = (pop32());
  /* 11396632 ret  */
  ESPCHK(0x11396610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x11396640 (27 bytes, 13 insns) */
void f_11396640(void) {
  FTRACE(0x11396640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396640 push ebp */
  push32((uint32_t)(EBP));
  /* 11396641 mov ebp, esp */
  EBP = (ESP);
  /* 11396643 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396649 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139664c push eax */
  push32((uint32_t)(EAX));
  /* 1139664d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396650 push ecx */
  push32((uint32_t)(ECX));
  /* 11396651 call 0x11396660 */
  push32(0x11396656u); f_11396660();
  /* 11396656 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396659 pop ebp */
  EBP = (pop32());
  /* 1139665a ret  */
  ESPCHK(0x11396640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x11396660 (94 bytes, 38 insns) */
void f_11396660(void) {
  FTRACE(0x11396660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396660 push ebp */
  push32((uint32_t)(EBP));
  /* 11396661 mov ebp, esp */
  EBP = (ESP);
  /* 11396663 push ecx */
  push32((uint32_t)(ECX));
L_11396664:;
  /* 11396664 push 9 */
  push32((uint32_t)(0x9u));
  /* 11396666 call 0x1139a010 */
  push32(0x1139666bu); f_1139a010();
  /* 1139666b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139666e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396671 push eax */
  push32((uint32_t)(EAX));
  /* 11396672 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396675 push ecx */
  push32((uint32_t)(ECX));
  /* 11396676 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396679 push edx */
  push32((uint32_t)(EDX));
  /* 1139667a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139667d push eax */
  push32((uint32_t)(EAX));
  /* 1139667e call 0x113966e0 */
  push32(0x11396683u); f_113966e0();
  /* 11396683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396686 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11396689 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139668b call 0x1139a0b0 */
  push32(0x11396690u); f_1139a0b0();
  /* 11396690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396693 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396697 jne 0x1139669f */
  if (!C.zf) goto L_1139669f;
  /* 11396699 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139669d jne 0x113966a4 */
  if (!C.zf) goto L_113966a4;
L_1139669f:;
  /* 1139669f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113966a2 jmp 0x113966ba */
  goto L_113966ba;
L_113966a4:;
  /* 113966a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113966a7 push ecx */
  push32((uint32_t)(ECX));
  /* 113966a8 call 0x1139ac90 */
  push32(0x113966adu); f_1139ac90();
  /* 113966ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113966b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113966b2 jne 0x113966b8 */
  if (!C.zf) goto L_113966b8;
  /* 113966b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113966b6 jmp 0x113966ba */
  goto L_113966ba;
L_113966b8:;
  /* 113966b8 jmp 0x11396664 */
  goto L_11396664;
L_113966ba:;
  /* 113966ba mov esp, ebp */
  ESP = (EBP);
  /* 113966bc pop ebp */
  EBP = (pop32());
  /* 113966bd ret  */
  ESPCHK(0x11396660u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x113966c0 (23 bytes, 11 insns) */
void f_113966c0(void) {
  FTRACE(0x113966c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113966c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113966c1 mov ebp, esp */
  EBP = (ESP);
  /* 113966c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113966c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113966c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113966c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113966cc push eax */
  push32((uint32_t)(EAX));
  /* 113966cd call 0x113966e0 */
  push32(0x113966d2u); f_113966e0();
  /* 113966d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113966d5 pop ebp */
  EBP = (pop32());
  /* 113966d6 ret  */
  ESPCHK(0x113966c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x113966e0 (787 bytes, 254 insns) */
void f_113966e0(void) {
  FTRACE(0x113966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113966e1 mov ebp, esp */
  EBP = (ESP);
  /* 113966e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113966e6 push ebx */
  push32((uint32_t)(EBX));
  /* 113966e7 push esi */
  push32((uint32_t)(ESI));
  /* 113966e8 push edi */
  push32((uint32_t)(EDI));
  /* 113966e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113966f0 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 113966f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113966f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113966fa je 0x1139672c */
  if (C.zf) goto L_1139672c;
L_113966fc:;
  /* 113966fc call 0x113977b0 */
  push32(0x11396701u); f_113977b0();
  /* 11396701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396703 jne 0x11396726 */
  if (!C.zf) goto L_11396726;
  /* 11396705 push 0x113bd8a0 */
  push32((uint32_t)(0x113bd8a0u));
  /* 1139670a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139670c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11396711 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396716 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396718 call 0x113955e0 */
  push32(0x1139671du); f_113955e0();
  /* 1139671d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396720 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396723 jne 0x11396726 */
  if (!C.zf) goto L_11396726;
  /* 11396725 int3  */
  x86_unimpl("int3 @ 0x11396725");
L_11396726:;
  /* 11396726 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396728 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139672a jne 0x113966fc */
  if (!C.zf) goto L_113966fc;
L_1139672c:;
  /* 1139672c mov edx, dword ptr [0x113c0a88] */
  EDX = (r32((uint32_t)(0x113c0a88)));
  /* 11396732 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11396735 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396738 cmp eax, dword ptr [0x113c0a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139673e jne 0x11396741 */
  if (!C.zf) goto L_11396741;
  /* 11396740 int3  */
  x86_unimpl("int3 @ 0x11396740");
L_11396741:;
  /* 11396741 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396744 push ecx */
  push32((uint32_t)(ECX));
  /* 11396745 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396748 push edx */
  push32((uint32_t)(EDX));
  /* 11396749 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139674c push eax */
  push32((uint32_t)(EAX));
  /* 1139674d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396750 push ecx */
  push32((uint32_t)(ECX));
  /* 11396751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396754 push edx */
  push32((uint32_t)(EDX));
  /* 11396755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396757 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396759 call dword ptr [0x113c0db0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c0db0))), 0x1139675fu);
  /* 1139675f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396764 jne 0x113967c4 */
  if (!C.zf) goto L_113967c4;
  /* 11396766 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139676a je 0x11396797 */
  if (C.zf) goto L_11396797;
L_1139676c:;
  /* 1139676c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139676f push eax */
  push32((uint32_t)(EAX));
  /* 11396770 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396773 push ecx */
  push32((uint32_t)(ECX));
  /* 11396774 push 0x113bd85c */
  push32((uint32_t)(0x113bd85cu));
  /* 11396779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139677b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139677d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139677f push 0 */
  push32((uint32_t)(0x0u));
  /* 11396781 call 0x113955e0 */
  push32(0x11396786u); f_113955e0();
  /* 11396786 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396789 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139678c jne 0x1139678f */
  if (!C.zf) goto L_1139678f;
  /* 1139678e int3  */
  x86_unimpl("int3 @ 0x1139678e");
L_1139678f:;
  /* 1139678f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11396793 jne 0x1139676c */
  if (!C.zf) goto L_1139676c;
  /* 11396795 jmp 0x113967bd */
  goto L_113967bd;
L_11396797:;
  /* 11396797 push 0x113bd838 */
  push32((uint32_t)(0x113bd838u));
  /* 1139679c push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 113967a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113967a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113967a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113967a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113967a9 call 0x113955e0 */
  push32(0x113967aeu); f_113955e0();
  /* 113967ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113967b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113967b4 jne 0x113967b7 */
  if (!C.zf) goto L_113967b7;
  /* 113967b6 int3  */
  x86_unimpl("int3 @ 0x113967b6");
L_113967b7:;
  /* 113967b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113967b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113967bb jne 0x11396797 */
  if (!C.zf) goto L_11396797;
L_113967bd:;
  /* 113967bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113967bf jmp 0x113969ec */
  goto L_113969ec;
L_113967c4:;
  /* 113967c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113967c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113967cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113967d0 je 0x113967e6 */
  if (C.zf) goto L_113967e6;
  /* 113967d2 mov edx, dword ptr [0x113c0a84] */
  EDX = (r32((uint32_t)(0x113c0a84)));
  /* 113967d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113967db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113967dd jne 0x113967e6 */
  if (!C.zf) goto L_113967e6;
  /* 113967df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_113967e6:;
  /* 113967e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113967ea ja 0x113967f7 */
  if ((!C.cf&&!C.zf)) goto L_113967f7;
  /* 113967ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113967ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113967f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113967f5 jbe 0x11396823 */
  if ((C.cf||C.zf)) goto L_11396823;
L_113967f7:;
  /* 113967f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113967fa push ecx */
  push32((uint32_t)(ECX));
  /* 113967fb push 0x113bd810 */
  push32((uint32_t)(0x113bd810u));
  /* 11396800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396806 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396808 call 0x113955e0 */
  push32(0x1139680du); f_113955e0();
  /* 1139680d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396810 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396813 jne 0x11396816 */
  if (!C.zf) goto L_11396816;
  /* 11396815 int3  */
  x86_unimpl("int3 @ 0x11396815");
L_11396816:;
  /* 11396816 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396818 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139681a jne 0x113967f7 */
  if (!C.zf) goto L_113967f7;
  /* 1139681c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139681e jmp 0x113969ec */
  goto L_113969ec;
L_11396823:;
  /* 11396823 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396826 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139682b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139682e je 0x11396870 */
  if (C.zf) goto L_11396870;
  /* 11396830 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396834 je 0x11396870 */
  if (C.zf) goto L_11396870;
  /* 11396836 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396839 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139683f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396842 je 0x11396870 */
  if (C.zf) goto L_11396870;
  /* 11396844 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396848 je 0x11396870 */
  if (C.zf) goto L_11396870;
L_1139684a:;
  /* 1139684a push 0x113bd7dc */
  push32((uint32_t)(0x113bd7dcu));
  /* 1139684f push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11396854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139685a push 1 */
  push32((uint32_t)(0x1u));
  /* 1139685c call 0x113955e0 */
  push32(0x11396861u); f_113955e0();
  /* 11396861 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396867 jne 0x1139686a */
  if (!C.zf) goto L_1139686a;
  /* 11396869 int3  */
  x86_unimpl("int3 @ 0x11396869");
L_1139686a:;
  /* 1139686a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139686c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139686e jne 0x1139684a */
  if (!C.zf) goto L_1139684a;
L_11396870:;
  /* 11396870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396873 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396876 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11396879 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139687c push ecx */
  push32((uint32_t)(ECX));
  /* 1139687d call 0x1139ada0 */
  push32(0x11396882u); f_1139ada0();
  /* 11396882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396885 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11396888 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139688c jne 0x11396895 */
  if (!C.zf) goto L_11396895;
  /* 1139688e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396890 jmp 0x113969ec */
  goto L_113969ec;
L_11396895:;
  /* 11396895 mov edx, dword ptr [0x113c0a88] */
  EDX = (r32((uint32_t)(0x113c0a88)));
  /* 1139689b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139689e mov dword ptr [0x113c0a88], edx */
  w32((uint32_t)(0x113c0a88), (EDX));
  /* 113968a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113968a8 je 0x113968f3 */
  if (C.zf) goto L_113968f3;
  /* 113968aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113968b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113968bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113968c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 113968d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113968d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 113968da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 113968e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113968e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 113968ee jmp 0x11396993 */
  goto L_11396993;
L_113968f3:;
  /* 113968f3 mov edx, dword ptr [0x113c2784] */
  EDX = (r32((uint32_t)(0x113c2784)));
  /* 113968f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113968fc mov dword ptr [0x113c2784], edx */
  w32((uint32_t)(0x113c2784), (EDX));
  /* 11396902 mov eax, dword ptr [0x113c278c] */
  EAX = (r32((uint32_t)(0x113c278c)));
  /* 11396907 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139690a mov dword ptr [0x113c278c], eax */
  w32((uint32_t)(0x113c278c), (EAX));
  /* 1139690f mov ecx, dword ptr [0x113c278c] */
  ECX = (r32((uint32_t)(0x113c278c)));
  /* 11396915 cmp ecx, dword ptr [0x113c2790] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c2790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139691b jbe 0x11396929 */
  if ((C.cf||C.zf)) goto L_11396929;
  /* 1139691d mov edx, dword ptr [0x113c278c] */
  EDX = (r32((uint32_t)(0x113c278c)));
  /* 11396923 mov dword ptr [0x113c2790], edx */
  w32((uint32_t)(0x113c2790), (EDX));
L_11396929:;
  /* 11396929 cmp dword ptr [0x113c2788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396930 je 0x1139693f */
  if (C.zf) goto L_1139693f;
  /* 11396932 mov eax, dword ptr [0x113c2788] */
  EAX = (r32((uint32_t)(0x113c2788)));
  /* 11396937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139693a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1139693d jmp 0x11396948 */
  goto L_11396948;
L_1139693f:;
  /* 1139693f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396942 mov dword ptr [0x113c2780], edx */
  w32((uint32_t)(0x113c2780), (EDX));
L_11396948:;
  /* 11396948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139694b mov ecx, dword ptr [0x113c2788] */
  ECX = (r32((uint32_t)(0x113c2788)));
  /* 11396951 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11396953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396956 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1139695d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396960 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396963 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11396966 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396969 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139696c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1139696f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396975 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11396978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139697b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139697e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11396981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396987 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1139698a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139698d mov dword ptr [0x113c2788], ecx */
  w32((uint32_t)(0x113c2788), (ECX));
L_11396993:;
  /* 11396993 push 4 */
  push32((uint32_t)(0x4u));
  /* 11396995 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396997 mov dl, byte ptr [0x113c0a90] */
  DL = (r8((uint32_t)(0x113c0a90)));
  /* 1139699d push edx */
  push32((uint32_t)(EDX));
  /* 1139699e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113969a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113969a4 push eax */
  push32((uint32_t)(EAX));
  /* 113969a5 call 0x1139acc0 */
  push32(0x113969aau); f_1139acc0();
  /* 113969aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113969ad push 4 */
  push32((uint32_t)(0x4u));
  /* 113969af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113969b1 mov cl, byte ptr [0x113c0a90] */
  CL = (r8((uint32_t)(0x113c0a90)));
  /* 113969b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113969b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113969bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113969be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 113969c2 push ecx */
  push32((uint32_t)(ECX));
  /* 113969c3 call 0x1139acc0 */
  push32(0x113969c8u); f_1139acc0();
  /* 113969c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113969cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113969ce push edx */
  push32((uint32_t)(EDX));
  /* 113969cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113969d1 mov al, byte ptr [0x113c0a92] */
  AL = (r8((uint32_t)(0x113c0a92)));
  /* 113969d6 push eax */
  push32((uint32_t)(EAX));
  /* 113969d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113969da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113969dd push ecx */
  push32((uint32_t)(ECX));
  /* 113969de call 0x1139acc0 */
  push32(0x113969e3u); f_1139acc0();
  /* 113969e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113969e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113969e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_113969ec:;
  /* 113969ec pop edi */
  EDI = (pop32());
  /* 113969ed pop esi */
  ESI = (pop32());
  /* 113969ee pop ebx */
  EBX = (pop32());
  /* 113969ef mov esp, ebp */
  ESP = (EBP);
  /* 113969f1 pop ebp */
  EBP = (pop32());
  /* 113969f2 ret  */
  ESPCHK(0x113966e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x11396a00 (27 bytes, 13 insns) */
void f_11396a00(void) {
  FTRACE(0x11396a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11396a01 mov ebp, esp */
  EBP = (ESP);
  /* 11396a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396a09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396a0c push eax */
  push32((uint32_t)(EAX));
  /* 11396a0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396a10 push ecx */
  push32((uint32_t)(ECX));
  /* 11396a11 call 0x11396a20 */
  push32(0x11396a16u); f_11396a20();
  /* 11396a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396a19 pop ebp */
  EBP = (pop32());
  /* 11396a1a ret  */
  ESPCHK(0x11396a00u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11396a20 (96 bytes, 37 insns) */
void f_11396a20(void) {
  FTRACE(0x11396a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11396a21 mov ebp, esp */
  EBP = (ESP);
  /* 11396a23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396a26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396a29 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11396a2d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11396a30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11396a34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396a37 push edx */
  push32((uint32_t)(EDX));
  /* 11396a38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396a3b push eax */
  push32((uint32_t)(EAX));
  /* 11396a3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396a3f push ecx */
  push32((uint32_t)(ECX));
  /* 11396a40 call 0x11396610 */
  push32(0x11396a45u); f_11396610();
  /* 11396a45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396a48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11396a4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396a4f je 0x11396a79 */
  if (C.zf) goto L_11396a79;
  /* 11396a51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396a54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11396a57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396a5a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396a5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11396a60:;
  /* 11396a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396a63 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396a66 jae 0x11396a79 */
  if (!C.cf) goto L_11396a79;
  /* 11396a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396a6b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11396a6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396a71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396a74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11396a77 jmp 0x11396a60 */
  goto L_11396a60;
L_11396a79:;
  /* 11396a79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396a7c mov esp, ebp */
  ESP = (EBP);
  /* 11396a7e pop ebp */
  EBP = (pop32());
  /* 11396a7f ret  */
  ESPCHK(0x11396a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a80 @ 0x11396a80 (27 bytes, 13 insns) */
void f_11396a80(void) {
  FTRACE(0x11396a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11396a81 mov ebp, esp */
  EBP = (ESP);
  /* 11396a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396a8c push eax */
  push32((uint32_t)(EAX));
  /* 11396a8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396a90 push ecx */
  push32((uint32_t)(ECX));
  /* 11396a91 call 0x11396aa0 */
  push32(0x11396a96u); f_11396aa0();
  /* 11396a96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396a99 pop ebp */
  EBP = (pop32());
  /* 11396a9a ret  */
  ESPCHK(0x11396a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006aa0 @ 0x11396aa0 (64 bytes, 27 insns) */
void f_11396aa0(void) {
  FTRACE(0x11396aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11396aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11396aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11396aa4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11396aa6 call 0x1139a010 */
  push32(0x11396aabu); f_1139a010();
  /* 11396aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396aae push 1 */
  push32((uint32_t)(0x1u));
  /* 11396ab0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396ab3 push eax */
  push32((uint32_t)(EAX));
  /* 11396ab4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 11396ab8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396abb push edx */
  push32((uint32_t)(EDX));
  /* 11396abc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396abf push eax */
  push32((uint32_t)(EAX));
  /* 11396ac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11396ac4 call 0x11396ae0 */
  push32(0x11396ac9u); f_11396ae0();
  /* 11396ac9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396acc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11396acf push 9 */
  push32((uint32_t)(0x9u));
  /* 11396ad1 call 0x1139a0b0 */
  push32(0x11396ad6u); f_1139a0b0();
  /* 11396ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396ad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396adc mov esp, ebp */
  ESP = (EBP);
  /* 11396ade pop ebp */
  EBP = (pop32());
  /* 11396adf ret  */
  ESPCHK(0x11396aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x11396ae0 (1297 bytes, 431 insns) */
void f_11396ae0(void) {
  FTRACE(0x11396ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11396ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11396ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11396ae3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11396ae7 push esi */
  push32((uint32_t)(ESI));
  /* 11396ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11396ae9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11396af0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396af4 jne 0x11396b13 */
  if (!C.zf) goto L_11396b13;
  /* 11396af6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396af9 push eax */
  push32((uint32_t)(EAX));
  /* 11396afa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396afd push ecx */
  push32((uint32_t)(ECX));
  /* 11396afe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396b01 push edx */
  push32((uint32_t)(EDX));
  /* 11396b02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396b05 push eax */
  push32((uint32_t)(EAX));
  /* 11396b06 call 0x11396610 */
  push32(0x11396b0bu); f_11396610();
  /* 11396b0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396b0e jmp 0x11396fea */
  goto L_11396fea;
L_11396b13:;
  /* 11396b13 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396b17 je 0x11396b36 */
  if (C.zf) goto L_11396b36;
  /* 11396b19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396b1d jne 0x11396b36 */
  if (!C.zf) goto L_11396b36;
  /* 11396b1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396b22 push ecx */
  push32((uint32_t)(ECX));
  /* 11396b23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396b26 push edx */
  push32((uint32_t)(EDX));
  /* 11396b27 call 0x113970a0 */
  push32(0x11396b2cu); f_113970a0();
  /* 11396b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396b31 jmp 0x11396fea */
  goto L_11396fea;
L_11396b36:;
  /* 11396b36 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 11396b3b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11396b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396b40 je 0x11396b72 */
  if (C.zf) goto L_11396b72;
L_11396b42:;
  /* 11396b42 call 0x113977b0 */
  push32(0x11396b47u); f_113977b0();
  /* 11396b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396b49 jne 0x11396b6c */
  if (!C.zf) goto L_11396b6c;
  /* 11396b4b push 0x113bd8a0 */
  push32((uint32_t)(0x113bd8a0u));
  /* 11396b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396b52 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11396b57 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396b5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11396b5e call 0x113955e0 */
  push32(0x11396b63u); f_113955e0();
  /* 11396b63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396b66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396b69 jne 0x11396b6c */
  if (!C.zf) goto L_11396b6c;
  /* 11396b6b int3  */
  x86_unimpl("int3 @ 0x11396b6b");
L_11396b6c:;
  /* 11396b6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396b6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11396b70 jne 0x11396b42 */
  if (!C.zf) goto L_11396b42;
L_11396b72:;
  /* 11396b72 mov edx, dword ptr [0x113c0a88] */
  EDX = (r32((uint32_t)(0x113c0a88)));
  /* 11396b78 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11396b7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11396b7e cmp eax, dword ptr [0x113c0a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396b84 jne 0x11396b87 */
  if (!C.zf) goto L_11396b87;
  /* 11396b86 int3  */
  x86_unimpl("int3 @ 0x11396b86");
L_11396b87:;
  /* 11396b87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11396b8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396b8e push edx */
  push32((uint32_t)(EDX));
  /* 11396b8f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11396b92 push eax */
  push32((uint32_t)(EAX));
  /* 11396b93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396b96 push ecx */
  push32((uint32_t)(ECX));
  /* 11396b97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396b9a push edx */
  push32((uint32_t)(EDX));
  /* 11396b9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396b9e push eax */
  push32((uint32_t)(EAX));
  /* 11396b9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11396ba1 call dword ptr [0x113c0db0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c0db0))), 0x11396ba7u);
  /* 11396ba7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396bac jne 0x11396c0c */
  if (!C.zf) goto L_11396c0c;
  /* 11396bae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396bb2 je 0x11396bdf */
  if (C.zf) goto L_11396bdf;
L_11396bb4:;
  /* 11396bb4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11396bb8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396bbb push edx */
  push32((uint32_t)(EDX));
  /* 11396bbc push 0x113bda1c */
  push32((uint32_t)(0x113bda1cu));
  /* 11396bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bc9 call 0x113955e0 */
  push32(0x11396bceu); f_113955e0();
  /* 11396bce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396bd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396bd4 jne 0x11396bd7 */
  if (!C.zf) goto L_11396bd7;
  /* 11396bd6 int3  */
  x86_unimpl("int3 @ 0x11396bd6");
L_11396bd7:;
  /* 11396bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396bdb jne 0x11396bb4 */
  if (!C.zf) goto L_11396bb4;
  /* 11396bdd jmp 0x11396c05 */
  goto L_11396c05;
L_11396bdf:;
  /* 11396bdf push 0x113bd9f8 */
  push32((uint32_t)(0x113bd9f8u));
  /* 11396be4 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11396be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396beb push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11396bf1 call 0x113955e0 */
  push32(0x11396bf6u); f_113955e0();
  /* 11396bf6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396bf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396bfc jne 0x11396bff */
  if (!C.zf) goto L_11396bff;
  /* 11396bfe int3  */
  x86_unimpl("int3 @ 0x11396bfe");
L_11396bff:;
  /* 11396bff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11396c03 jne 0x11396bdf */
  if (!C.zf) goto L_11396bdf;
L_11396c05:;
  /* 11396c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396c07 jmp 0x11396fea */
  goto L_11396fea;
L_11396c0c:;
  /* 11396c0c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c10 jbe 0x11396c3e */
  if ((C.cf||C.zf)) goto L_11396c3e;
L_11396c12:;
  /* 11396c12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396c15 push edx */
  push32((uint32_t)(EDX));
  /* 11396c16 push 0x113bd9c8 */
  push32((uint32_t)(0x113bd9c8u));
  /* 11396c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396c23 call 0x113955e0 */
  push32(0x11396c28u); f_113955e0();
  /* 11396c28 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396c2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c2e jne 0x11396c31 */
  if (!C.zf) goto L_11396c31;
  /* 11396c30 int3  */
  x86_unimpl("int3 @ 0x11396c30");
L_11396c31:;
  /* 11396c31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396c35 jne 0x11396c12 */
  if (!C.zf) goto L_11396c12;
  /* 11396c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396c39 jmp 0x11396fea */
  goto L_11396fea;
L_11396c3e:;
  /* 11396c3e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c42 je 0x11396c86 */
  if (C.zf) goto L_11396c86;
  /* 11396c44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396c47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11396c4d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c50 je 0x11396c86 */
  if (C.zf) goto L_11396c86;
  /* 11396c52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396c55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11396c5b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c5e je 0x11396c86 */
  if (C.zf) goto L_11396c86;
L_11396c60:;
  /* 11396c60 push 0x113bd7dc */
  push32((uint32_t)(0x113bd7dcu));
  /* 11396c65 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11396c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11396c72 call 0x113955e0 */
  push32(0x11396c77u); f_113955e0();
  /* 11396c77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396c7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396c7d jne 0x11396c80 */
  if (!C.zf) goto L_11396c80;
  /* 11396c7f int3  */
  x86_unimpl("int3 @ 0x11396c7f");
L_11396c80:;
  /* 11396c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396c84 jne 0x11396c60 */
  if (!C.zf) goto L_11396c60;
L_11396c86:;
  /* 11396c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11396c8a call 0x11397c10 */
  push32(0x11396c8fu); f_11397c10();
  /* 11396c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11396c94 jne 0x11396cb7 */
  if (!C.zf) goto L_11396cb7;
  /* 11396c96 push 0x113bd9a4 */
  push32((uint32_t)(0x113bd9a4u));
  /* 11396c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11396c9d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11396ca2 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396ca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396ca9 call 0x113955e0 */
  push32(0x11396caeu); f_113955e0();
  /* 11396cae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396cb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396cb4 jne 0x11396cb7 */
  if (!C.zf) goto L_11396cb7;
  /* 11396cb6 int3  */
  x86_unimpl("int3 @ 0x11396cb6");
L_11396cb7:;
  /* 11396cb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396cb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11396cbb jne 0x11396c86 */
  if (!C.zf) goto L_11396c86;
  /* 11396cbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11396cc0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396cc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11396cc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396cc9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ccd jne 0x11396cd6 */
  if (!C.zf) goto L_11396cd6;
  /* 11396ccf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11396cd6:;
  /* 11396cd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396cda je 0x11396d1a */
  if (C.zf) goto L_11396d1a;
L_11396cdc:;
  /* 11396cdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396cdf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ce6 jne 0x11396cf1 */
  if (!C.zf) goto L_11396cf1;
  /* 11396ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396ceb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396cef je 0x11396d12 */
  if (C.zf) goto L_11396d12;
L_11396cf1:;
  /* 11396cf1 push 0x113bd95c */
  push32((uint32_t)(0x113bd95cu));
  /* 11396cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11396cf8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11396cfd push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396d02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396d04 call 0x113955e0 */
  push32(0x11396d09u); f_113955e0();
  /* 11396d09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d0f jne 0x11396d12 */
  if (!C.zf) goto L_11396d12;
  /* 11396d11 int3  */
  x86_unimpl("int3 @ 0x11396d11");
L_11396d12:;
  /* 11396d12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396d14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11396d16 jne 0x11396cdc */
  if (!C.zf) goto L_11396cdc;
  /* 11396d18 jmp 0x11396d7e */
  goto L_11396d7e;
L_11396d1a:;
  /* 11396d1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396d1d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11396d20 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11396d25 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d28 jne 0x11396d3f */
  if (!C.zf) goto L_11396d3f;
  /* 11396d2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396d2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11396d33 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d36 jne 0x11396d3f */
  if (!C.zf) goto L_11396d3f;
  /* 11396d38 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11396d3f:;
  /* 11396d3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396d42 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11396d45 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11396d4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11396d4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11396d53 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d55 je 0x11396d78 */
  if (C.zf) goto L_11396d78;
  /* 11396d57 push 0x113bd920 */
  push32((uint32_t)(0x113bd920u));
  /* 11396d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11396d5e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11396d63 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396d68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396d6a call 0x113955e0 */
  push32(0x11396d6fu); f_113955e0();
  /* 11396d6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d75 jne 0x11396d78 */
  if (!C.zf) goto L_11396d78;
  /* 11396d77 int3  */
  x86_unimpl("int3 @ 0x11396d77");
L_11396d78:;
  /* 11396d78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396d7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11396d7c jne 0x11396d3f */
  if (!C.zf) goto L_11396d3f;
L_11396d7e:;
  /* 11396d7e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d82 je 0x11396da9 */
  if (C.zf) goto L_11396da9;
  /* 11396d84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396d87 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396d8a push eax */
  push32((uint32_t)(EAX));
  /* 11396d8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396d8e push ecx */
  push32((uint32_t)(ECX));
  /* 11396d8f call 0x1139aed0 */
  push32(0x11396d94u); f_1139aed0();
  /* 11396d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396d97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11396d9a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396d9e jne 0x11396da7 */
  if (!C.zf) goto L_11396da7;
  /* 11396da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396da2 jmp 0x11396fea */
  goto L_11396fea;
L_11396da7:;
  /* 11396da7 jmp 0x11396dcc */
  goto L_11396dcc;
L_11396da9:;
  /* 11396da9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396dac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396daf push edx */
  push32((uint32_t)(EDX));
  /* 11396db0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11396db3 push eax */
  push32((uint32_t)(EAX));
  /* 11396db4 call 0x1139ae20 */
  push32(0x11396db9u); f_1139ae20();
  /* 11396db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396dbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11396dbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396dc3 jne 0x11396dcc */
  if (!C.zf) goto L_11396dcc;
  /* 11396dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396dc7 jmp 0x11396fea */
  goto L_11396fea;
L_11396dcc:;
  /* 11396dcc mov ecx, dword ptr [0x113c0a88] */
  ECX = (r32((uint32_t)(0x113c0a88)));
  /* 11396dd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396dd5 mov dword ptr [0x113c0a88], ecx */
  w32((uint32_t)(0x113c0a88), (ECX));
  /* 11396ddb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ddf jne 0x11396e37 */
  if (!C.zf) goto L_11396e37;
  /* 11396de1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396de4 mov eax, dword ptr [0x113c2784] */
  EAX = (r32((uint32_t)(0x113c2784)));
  /* 11396de9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396dec mov dword ptr [0x113c2784], eax */
  w32((uint32_t)(0x113c2784), (EAX));
  /* 11396df1 mov ecx, dword ptr [0x113c2784] */
  ECX = (r32((uint32_t)(0x113c2784)));
  /* 11396df7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396dfa mov dword ptr [0x113c2784], ecx */
  w32((uint32_t)(0x113c2784), (ECX));
  /* 11396e00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e03 mov eax, dword ptr [0x113c278c] */
  EAX = (r32((uint32_t)(0x113c278c)));
  /* 11396e08 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396e0b mov dword ptr [0x113c278c], eax */
  w32((uint32_t)(0x113c278c), (EAX));
  /* 11396e10 mov ecx, dword ptr [0x113c278c] */
  ECX = (r32((uint32_t)(0x113c278c)));
  /* 11396e16 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396e19 mov dword ptr [0x113c278c], ecx */
  w32((uint32_t)(0x113c278c), (ECX));
  /* 11396e1f mov edx, dword ptr [0x113c278c] */
  EDX = (r32((uint32_t)(0x113c278c)));
  /* 11396e25 cmp edx, dword ptr [0x113c2790] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c2790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396e2b jbe 0x11396e37 */
  if ((C.cf||C.zf)) goto L_11396e37;
  /* 11396e2d mov eax, dword ptr [0x113c278c] */
  EAX = (r32((uint32_t)(0x113c278c)));
  /* 11396e32 mov dword ptr [0x113c2790], eax */
  w32((uint32_t)(0x113c2790), (EAX));
L_11396e37:;
  /* 11396e37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e3a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396e3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11396e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396e46 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396e49 jbe 0x11396e6f */
  if ((C.cf||C.zf)) goto L_11396e6f;
  /* 11396e4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396e51 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11396e54 push edx */
  push32((uint32_t)(EDX));
  /* 11396e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396e57 mov al, byte ptr [0x113c0a92] */
  AL = (r8((uint32_t)(0x113c0a92)));
  /* 11396e5c push eax */
  push32((uint32_t)(EAX));
  /* 11396e5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396e63 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396e66 push edx */
  push32((uint32_t)(EDX));
  /* 11396e67 call 0x1139acc0 */
  push32(0x11396e6cu); f_1139acc0();
  /* 11396e6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11396e6f:;
  /* 11396e6f push 4 */
  push32((uint32_t)(0x4u));
  /* 11396e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11396e73 mov al, byte ptr [0x113c0a90] */
  AL = (r8((uint32_t)(0x113c0a90)));
  /* 11396e78 push eax */
  push32((uint32_t)(EAX));
  /* 11396e79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396e7c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11396e7f push ecx */
  push32((uint32_t)(ECX));
  /* 11396e80 call 0x1139acc0 */
  push32(0x11396e85u); f_1139acc0();
  /* 11396e85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396e88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396e8c jne 0x11396ea9 */
  if (!C.zf) goto L_11396ea9;
  /* 11396e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e91 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11396e94 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11396e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396e9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11396e9d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11396ea0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396ea3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11396ea6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11396ea9:;
  /* 11396ea9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396eac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11396eaf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11396eb2:;
  /* 11396eb2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396eb6 jne 0x11396ee7 */
  if (!C.zf) goto L_11396ee7;
  /* 11396eb8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ebc jne 0x11396ec6 */
  if (!C.zf) goto L_11396ec6;
  /* 11396ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396ec1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ec4 je 0x11396ee7 */
  if (C.zf) goto L_11396ee7;
L_11396ec6:;
  /* 11396ec6 push 0x113bd8ec */
  push32((uint32_t)(0x113bd8ecu));
  /* 11396ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11396ecd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11396ed2 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396ed9 call 0x113955e0 */
  push32(0x11396edeu); f_113955e0();
  /* 11396ede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ee4 jne 0x11396ee7 */
  if (!C.zf) goto L_11396ee7;
  /* 11396ee6 int3  */
  x86_unimpl("int3 @ 0x11396ee6");
L_11396ee7:;
  /* 11396ee7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11396ee9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11396eeb jne 0x11396eb2 */
  if (!C.zf) goto L_11396eb2;
  /* 11396eed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396ef0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ef3 je 0x11396efb */
  if (C.zf) goto L_11396efb;
  /* 11396ef5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396ef9 je 0x11396f03 */
  if (C.zf) goto L_11396f03;
L_11396efb:;
  /* 11396efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11396efe jmp 0x11396fea */
  goto L_11396fea;
L_11396f03:;
  /* 11396f03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f06 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f09 je 0x11396f1b */
  if (C.zf) goto L_11396f1b;
  /* 11396f0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11396f10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11396f16 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11396f19 jmp 0x11396f57 */
  goto L_11396f57;
L_11396f1b:;
  /* 11396f1b mov eax, dword ptr [0x113c2780] */
  EAX = (r32((uint32_t)(0x113c2780)));
  /* 11396f20 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f23 je 0x11396f46 */
  if (C.zf) goto L_11396f46;
  /* 11396f25 push 0x113bd8d0 */
  push32((uint32_t)(0x113bd8d0u));
  /* 11396f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11396f2c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11396f31 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11396f38 call 0x113955e0 */
  push32(0x11396f3du); f_113955e0();
  /* 11396f3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396f40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f43 jne 0x11396f46 */
  if (!C.zf) goto L_11396f46;
  /* 11396f45 int3  */
  x86_unimpl("int3 @ 0x11396f45");
L_11396f46:;
  /* 11396f46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396f48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11396f4a jne 0x11396f1b */
  if (!C.zf) goto L_11396f1b;
  /* 11396f4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11396f52 mov dword ptr [0x113c2780], eax */
  w32((uint32_t)(0x113c2780), (EAX));
L_11396f57:;
  /* 11396f57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f5a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f5e je 0x11396f6f */
  if (C.zf) goto L_11396f6f;
  /* 11396f60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11396f66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396f69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11396f6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11396f6d jmp 0x11396faa */
  goto L_11396faa;
L_11396f6f:;
  /* 11396f6f mov eax, dword ptr [0x113c2788] */
  EAX = (r32((uint32_t)(0x113c2788)));
  /* 11396f74 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f77 je 0x11396f9a */
  if (C.zf) goto L_11396f9a;
  /* 11396f79 push 0x113bd8b4 */
  push32((uint32_t)(0x113bd8b4u));
  /* 11396f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11396f80 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11396f85 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11396f8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11396f8c call 0x113955e0 */
  push32(0x11396f91u); f_113955e0();
  /* 11396f91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11396f94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396f97 jne 0x11396f9a */
  if (!C.zf) goto L_11396f9a;
  /* 11396f99 int3  */
  x86_unimpl("int3 @ 0x11396f99");
L_11396f9a:;
  /* 11396f9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11396f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11396f9e jne 0x11396f6f */
  if (!C.zf) goto L_11396f6f;
  /* 11396fa0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fa3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11396fa5 mov dword ptr [0x113c2788], eax */
  w32((uint32_t)(0x113c2788), (EAX));
L_11396faa:;
  /* 11396faa cmp dword ptr [0x113c2788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11396fb1 je 0x11396fc1 */
  if (C.zf) goto L_11396fc1;
  /* 11396fb3 mov ecx, dword ptr [0x113c2788] */
  ECX = (r32((uint32_t)(0x113c2788)));
  /* 11396fb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fbc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11396fbf jmp 0x11396fc9 */
  goto L_11396fc9;
L_11396fc1:;
  /* 11396fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fc4 mov dword ptr [0x113c2780], eax */
  w32((uint32_t)(0x113c2780), (EAX));
L_11396fc9:;
  /* 11396fc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fcc mov edx, dword ptr [0x113c2788] */
  EDX = (r32((uint32_t)(0x113c2788)));
  /* 11396fd2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11396fd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fd7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11396fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11396fe1 mov dword ptr [0x113c2788], ecx */
  w32((uint32_t)(0x113c2788), (ECX));
  /* 11396fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11396fea:;
  /* 11396fea pop edi */
  EDI = (pop32());
  /* 11396feb pop esi */
  ESI = (pop32());
  /* 11396fec pop ebx */
  EBX = (pop32());
  /* 11396fed mov esp, ebp */
  ESP = (EBP);
  /* 11396fef pop ebp */
  EBP = (pop32());
  /* 11396ff0 ret  */
  ESPCHK(0x11396ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x11397000 (27 bytes, 13 insns) */
void f_11397000(void) {
  FTRACE(0x11397000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397000 push ebp */
  push32((uint32_t)(EBP));
  /* 11397001 mov ebp, esp */
  EBP = (ESP);
  /* 11397003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397005 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397007 push 1 */
  push32((uint32_t)(0x1u));
  /* 11397009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139700c push eax */
  push32((uint32_t)(EAX));
  /* 1139700d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397010 push ecx */
  push32((uint32_t)(ECX));
  /* 11397011 call 0x11397020 */
  push32(0x11397016u); f_11397020();
  /* 11397016 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397019 pop ebp */
  EBP = (pop32());
  /* 1139701a ret  */
  ESPCHK(0x11397000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x11397020 (64 bytes, 27 insns) */
void f_11397020(void) {
  FTRACE(0x11397020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397020 push ebp */
  push32((uint32_t)(EBP));
  /* 11397021 mov ebp, esp */
  EBP = (ESP);
  /* 11397023 push ecx */
  push32((uint32_t)(ECX));
  /* 11397024 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397026 call 0x1139a010 */
  push32(0x1139702bu); f_1139a010();
  /* 1139702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139702e push 0 */
  push32((uint32_t)(0x0u));
  /* 11397030 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11397033 push eax */
  push32((uint32_t)(EAX));
  /* 11397034 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11397037 push ecx */
  push32((uint32_t)(ECX));
  /* 11397038 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139703b push edx */
  push32((uint32_t)(EDX));
  /* 1139703c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139703f push eax */
  push32((uint32_t)(EAX));
  /* 11397040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397043 push ecx */
  push32((uint32_t)(ECX));
  /* 11397044 call 0x11396ae0 */
  push32(0x11397049u); f_11396ae0();
  /* 11397049 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139704c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139704f push 9 */
  push32((uint32_t)(0x9u));
  /* 11397051 call 0x1139a0b0 */
  push32(0x11397056u); f_1139a0b0();
  /* 11397056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139705c mov esp, ebp */
  ESP = (EBP);
  /* 1139705e pop ebp */
  EBP = (pop32());
  /* 1139705f ret  */
  ESPCHK(0x11397020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x11397060 (19 bytes, 9 insns) */
void f_11397060(void) {
  FTRACE(0x11397060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397060 push ebp */
  push32((uint32_t)(EBP));
  /* 11397061 mov ebp, esp */
  EBP = (ESP);
  /* 11397063 push 1 */
  push32((uint32_t)(0x1u));
  /* 11397065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397068 push eax */
  push32((uint32_t)(EAX));
  /* 11397069 call 0x113970a0 */
  push32(0x1139706eu); f_113970a0();
  /* 1139706e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397071 pop ebp */
  EBP = (pop32());
  /* 11397072 ret  */
  ESPCHK(0x11397060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x11397080 (19 bytes, 9 insns) */
void f_11397080(void) {
  FTRACE(0x11397080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397080 push ebp */
  push32((uint32_t)(EBP));
  /* 11397081 mov ebp, esp */
  EBP = (ESP);
  /* 11397083 push 1 */
  push32((uint32_t)(0x1u));
  /* 11397085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397088 push eax */
  push32((uint32_t)(EAX));
  /* 11397089 call 0x113970d0 */
  push32(0x1139708eu); f_113970d0();
  /* 1139708e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397091 pop ebp */
  EBP = (pop32());
  /* 11397092 ret  */
  ESPCHK(0x11397080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x113970a0 (41 bytes, 16 insns) */
void f_113970a0(void) {
  FTRACE(0x113970a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113970a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113970a1 mov ebp, esp */
  EBP = (ESP);
  /* 113970a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 113970a5 call 0x1139a010 */
  push32(0x113970aau); f_1139a010();
  /* 113970aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113970ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113970b0 push eax */
  push32((uint32_t)(EAX));
  /* 113970b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113970b4 push ecx */
  push32((uint32_t)(ECX));
  /* 113970b5 call 0x113970d0 */
  push32(0x113970bau); f_113970d0();
  /* 113970ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113970bd push 9 */
  push32((uint32_t)(0x9u));
  /* 113970bf call 0x1139a0b0 */
  push32(0x113970c4u); f_1139a0b0();
  /* 113970c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113970c7 pop ebp */
  EBP = (pop32());
  /* 113970c8 ret  */
  ESPCHK(0x113970a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x113970d0 (1004 bytes, 342 insns) */
void f_113970d0(void) {
  FTRACE(0x113970d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113970d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113970d1 mov ebp, esp */
  EBP = (ESP);
  /* 113970d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113970d4 push ebx */
  push32((uint32_t)(EBX));
  /* 113970d5 push esi */
  push32((uint32_t)(ESI));
  /* 113970d6 push edi */
  push32((uint32_t)(EDI));
  /* 113970d7 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 113970dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113970df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113970e1 je 0x11397113 */
  if (C.zf) goto L_11397113;
L_113970e3:;
  /* 113970e3 call 0x113977b0 */
  push32(0x113970e8u); f_113977b0();
  /* 113970e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113970ea jne 0x1139710d */
  if (!C.zf) goto L_1139710d;
  /* 113970ec push 0x113bd8a0 */
  push32((uint32_t)(0x113bd8a0u));
  /* 113970f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113970f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 113970f8 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 113970fd push 2 */
  push32((uint32_t)(0x2u));
  /* 113970ff call 0x113955e0 */
  push32(0x11397104u); f_113955e0();
  /* 11397104 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397107 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139710a jne 0x1139710d */
  if (!C.zf) goto L_1139710d;
  /* 1139710c int3  */
  x86_unimpl("int3 @ 0x1139710c");
L_1139710d:;
  /* 1139710d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139710f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397111 jne 0x113970e3 */
  if (!C.zf) goto L_113970e3;
L_11397113:;
  /* 11397113 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397117 jne 0x1139711e */
  if (!C.zf) goto L_1139711e;
  /* 11397119 jmp 0x113974b5 */
  goto L_113974b5;
L_1139711e:;
  /* 1139711e push 0 */
  push32((uint32_t)(0x0u));
  /* 11397120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397124 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397127 push edx */
  push32((uint32_t)(EDX));
  /* 11397128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139712a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139712d push eax */
  push32((uint32_t)(EAX));
  /* 1139712e push 3 */
  push32((uint32_t)(0x3u));
  /* 11397130 call dword ptr [0x113c0db0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c0db0))), 0x11397136u);
  /* 11397136 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139713b jne 0x11397168 */
  if (!C.zf) goto L_11397168;
L_1139713d:;
  /* 1139713d push 0x113bdb64 */
  push32((uint32_t)(0x113bdb64u));
  /* 11397142 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11397147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139714b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139714d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139714f call 0x113955e0 */
  push32(0x11397154u); f_113955e0();
  /* 11397154 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139715a jne 0x1139715d */
  if (!C.zf) goto L_1139715d;
  /* 1139715c int3  */
  x86_unimpl("int3 @ 0x1139715c");
L_1139715d:;
  /* 1139715d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139715f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397161 jne 0x1139713d */
  if (!C.zf) goto L_1139713d;
  /* 11397163 jmp 0x113974b5 */
  goto L_113974b5;
L_11397168:;
  /* 11397168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139716b push edx */
  push32((uint32_t)(EDX));
  /* 1139716c call 0x11397c10 */
  push32(0x11397171u); f_11397c10();
  /* 11397171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397176 jne 0x11397199 */
  if (!C.zf) goto L_11397199;
  /* 11397178 push 0x113bd9a4 */
  push32((uint32_t)(0x113bd9a4u));
  /* 1139717d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139717f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11397184 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11397189 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139718b call 0x113955e0 */
  push32(0x11397190u); f_113955e0();
  /* 11397190 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397193 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397196 jne 0x11397199 */
  if (!C.zf) goto L_11397199;
  /* 11397198 int3  */
  x86_unimpl("int3 @ 0x11397198");
L_11397199:;
  /* 11397199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139719b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139719d jne 0x11397168 */
  if (!C.zf) goto L_11397168;
  /* 1139719f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113971a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113971a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113971a8:;
  /* 113971a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113971ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113971ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113971b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113971b6 je 0x113971fb */
  if (C.zf) goto L_113971fb;
  /* 113971b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113971bb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113971bf je 0x113971fb */
  if (C.zf) goto L_113971fb;
  /* 113971c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113971c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113971c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113971cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113971cf je 0x113971fb */
  if (C.zf) goto L_113971fb;
  /* 113971d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113971d4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113971d8 je 0x113971fb */
  if (C.zf) goto L_113971fb;
  /* 113971da push 0x113bdb3c */
  push32((uint32_t)(0x113bdb3cu));
  /* 113971df push 0 */
  push32((uint32_t)(0x0u));
  /* 113971e1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 113971e6 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 113971eb push 2 */
  push32((uint32_t)(0x2u));
  /* 113971ed call 0x113955e0 */
  push32(0x113971f2u); f_113955e0();
  /* 113971f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113971f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113971f8 jne 0x113971fb */
  if (!C.zf) goto L_113971fb;
  /* 113971fa int3  */
  x86_unimpl("int3 @ 0x113971fa");
L_113971fb:;
  /* 113971fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113971fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113971ff jne 0x113971a8 */
  if (!C.zf) goto L_113971a8;
  /* 11397201 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 11397206 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11397209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139720b jne 0x113972d6 */
  if (!C.zf) goto L_113972d6;
  /* 11397211 push 4 */
  push32((uint32_t)(0x4u));
  /* 11397213 mov cl, byte ptr [0x113c0a90] */
  CL = (r8((uint32_t)(0x113c0a90)));
  /* 11397219 push ecx */
  push32((uint32_t)(ECX));
  /* 1139721a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139721d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397220 push edx */
  push32((uint32_t)(EDX));
  /* 11397221 call 0x11397720 */
  push32(0x11397226u); f_11397720();
  /* 11397226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139722b jne 0x11397270 */
  if (!C.zf) goto L_11397270;
L_1139722d:;
  /* 1139722d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397230 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397233 push eax */
  push32((uint32_t)(EAX));
  /* 11397234 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397237 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1139723a push edx */
  push32((uint32_t)(EDX));
  /* 1139723b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139723e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11397241 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11397247 mov edx, dword ptr [ecx*4 + 0x113c0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a94)));
  /* 1139724e push edx */
  push32((uint32_t)(EDX));
  /* 1139724f push 0x113bdb10 */
  push32((uint32_t)(0x113bdb10u));
  /* 11397254 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397258 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139725a push 1 */
  push32((uint32_t)(0x1u));
  /* 1139725c call 0x113955e0 */
  push32(0x11397261u); f_113955e0();
  /* 11397261 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397264 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397267 jne 0x1139726a */
  if (!C.zf) goto L_1139726a;
  /* 11397269 int3  */
  x86_unimpl("int3 @ 0x11397269");
L_1139726a:;
  /* 1139726a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139726c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139726e jne 0x1139722d */
  if (!C.zf) goto L_1139722d;
L_11397270:;
  /* 11397270 push 4 */
  push32((uint32_t)(0x4u));
  /* 11397272 mov cl, byte ptr [0x113c0a90] */
  CL = (r8((uint32_t)(0x113c0a90)));
  /* 11397278 push ecx */
  push32((uint32_t)(ECX));
  /* 11397279 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139727c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139727f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397282 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11397286 push edx */
  push32((uint32_t)(EDX));
  /* 11397287 call 0x11397720 */
  push32(0x1139728cu); f_11397720();
  /* 1139728c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139728f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397291 jne 0x113972d6 */
  if (!C.zf) goto L_113972d6;
L_11397293:;
  /* 11397293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397296 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397299 push eax */
  push32((uint32_t)(EAX));
  /* 1139729a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139729d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113972a0 push edx */
  push32((uint32_t)(EDX));
  /* 113972a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113972a4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113972a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113972ad mov edx, dword ptr [ecx*4 + 0x113c0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a94)));
  /* 113972b4 push edx */
  push32((uint32_t)(EDX));
  /* 113972b5 push 0x113bdae4 */
  push32((uint32_t)(0x113bdae4u));
  /* 113972ba push 0 */
  push32((uint32_t)(0x0u));
  /* 113972bc push 0 */
  push32((uint32_t)(0x0u));
  /* 113972be push 0 */
  push32((uint32_t)(0x0u));
  /* 113972c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113972c2 call 0x113955e0 */
  push32(0x113972c7u); f_113955e0();
  /* 113972c7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113972ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113972cd jne 0x113972d0 */
  if (!C.zf) goto L_113972d0;
  /* 113972cf int3  */
  x86_unimpl("int3 @ 0x113972cf");
L_113972d0:;
  /* 113972d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113972d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113972d4 jne 0x11397293 */
  if (!C.zf) goto L_11397293;
L_113972d6:;
  /* 113972d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113972d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113972dd jne 0x1139734b */
  if (!C.zf) goto L_1139734b;
L_113972df:;
  /* 113972df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113972e2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113972e9 jne 0x113972f4 */
  if (!C.zf) goto L_113972f4;
  /* 113972eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113972ee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113972f2 je 0x11397315 */
  if (C.zf) goto L_11397315;
L_113972f4:;
  /* 113972f4 push 0x113bdaa4 */
  push32((uint32_t)(0x113bdaa4u));
  /* 113972f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113972fb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11397300 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11397305 push 2 */
  push32((uint32_t)(0x2u));
  /* 11397307 call 0x113955e0 */
  push32(0x1139730cu); f_113955e0();
  /* 1139730c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139730f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397312 jne 0x11397315 */
  if (!C.zf) goto L_11397315;
  /* 11397314 int3  */
  x86_unimpl("int3 @ 0x11397314");
L_11397315:;
  /* 11397315 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397317 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397319 jne 0x113972df */
  if (!C.zf) goto L_113972df;
  /* 1139731b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139731e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11397321 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397324 push eax */
  push32((uint32_t)(EAX));
  /* 11397325 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397327 mov cl, byte ptr [0x113c0a91] */
  CL = (r8((uint32_t)(0x113c0a91)));
  /* 1139732d push ecx */
  push32((uint32_t)(ECX));
  /* 1139732e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397331 push edx */
  push32((uint32_t)(EDX));
  /* 11397332 call 0x1139acc0 */
  push32(0x11397337u); f_1139acc0();
  /* 11397337 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139733a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139733d push eax */
  push32((uint32_t)(EAX));
  /* 1139733e call 0x1139b0c0 */
  push32(0x11397343u); f_1139b0c0();
  /* 11397343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397346 jmp 0x113974b5 */
  goto L_113974b5;
L_1139734b:;
  /* 1139734b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139734e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397352 jne 0x11397361 */
  if (!C.zf) goto L_11397361;
  /* 11397354 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397358 jne 0x11397361 */
  if (!C.zf) goto L_11397361;
  /* 1139735a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11397361:;
  /* 11397361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397364 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397367 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139736a je 0x1139738d */
  if (C.zf) goto L_1139738d;
  /* 1139736c push 0x113bda84 */
  push32((uint32_t)(0x113bda84u));
  /* 11397371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397373 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11397378 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 1139737d push 2 */
  push32((uint32_t)(0x2u));
  /* 1139737f call 0x113955e0 */
  push32(0x11397384u); f_113955e0();
  /* 11397384 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397387 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139738a jne 0x1139738d */
  if (!C.zf) goto L_1139738d;
  /* 1139738c int3  */
  x86_unimpl("int3 @ 0x1139738c");
L_1139738d:;
  /* 1139738d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139738f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397391 jne 0x11397361 */
  if (!C.zf) goto L_11397361;
  /* 11397393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397396 mov eax, dword ptr [0x113c278c] */
  EAX = (r32((uint32_t)(0x113c278c)));
  /* 1139739b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139739e mov dword ptr [0x113c278c], eax */
  w32((uint32_t)(0x113c278c), (EAX));
  /* 113973a3 mov ecx, dword ptr [0x113c0a84] */
  ECX = (r32((uint32_t)(0x113c0a84)));
  /* 113973a9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113973ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113973ae jne 0x1139748c */
  if (!C.zf) goto L_1139748c;
  /* 113973b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113973b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113973ba je 0x113973cc */
  if (C.zf) goto L_113973cc;
  /* 113973bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113973bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113973c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113973c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113973c7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113973ca jmp 0x1139740a */
  goto L_1139740a;
L_113973cc:;
  /* 113973cc mov ecx, dword ptr [0x113c2780] */
  ECX = (r32((uint32_t)(0x113c2780)));
  /* 113973d2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113973d5 je 0x113973f8 */
  if (C.zf) goto L_113973f8;
  /* 113973d7 push 0x113bda6c */
  push32((uint32_t)(0x113bda6cu));
  /* 113973dc push 0 */
  push32((uint32_t)(0x0u));
  /* 113973de push 0x42a */
  push32((uint32_t)(0x42au));
  /* 113973e3 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 113973e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113973ea call 0x113955e0 */
  push32(0x113973efu); f_113955e0();
  /* 113973ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113973f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113973f5 jne 0x113973f8 */
  if (!C.zf) goto L_113973f8;
  /* 113973f7 int3  */
  x86_unimpl("int3 @ 0x113973f7");
L_113973f8:;
  /* 113973f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113973fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113973fc jne 0x113973cc */
  if (!C.zf) goto L_113973cc;
  /* 113973fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397401 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11397404 mov dword ptr [0x113c2780], ecx */
  w32((uint32_t)(0x113c2780), (ECX));
L_1139740a:;
  /* 1139740a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139740d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397411 je 0x11397422 */
  if (C.zf) goto L_11397422;
  /* 11397413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397416 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11397419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139741c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139741e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11397420 jmp 0x1139745f */
  goto L_1139745f;
L_11397422:;
  /* 11397422 mov ecx, dword ptr [0x113c2788] */
  ECX = (r32((uint32_t)(0x113c2788)));
  /* 11397428 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139742b je 0x1139744e */
  if (C.zf) goto L_1139744e;
  /* 1139742d push 0x113bda54 */
  push32((uint32_t)(0x113bda54u));
  /* 11397432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397434 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11397439 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 1139743e push 2 */
  push32((uint32_t)(0x2u));
  /* 11397440 call 0x113955e0 */
  push32(0x11397445u); f_113955e0();
  /* 11397445 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397448 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139744b jne 0x1139744e */
  if (!C.zf) goto L_1139744e;
  /* 1139744d int3  */
  x86_unimpl("int3 @ 0x1139744d");
L_1139744e:;
  /* 1139744e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11397450 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11397452 jne 0x11397422 */
  if (!C.zf) goto L_11397422;
  /* 11397454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397457 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11397459 mov dword ptr [0x113c2788], ecx */
  w32((uint32_t)(0x113c2788), (ECX));
L_1139745f:;
  /* 1139745f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397462 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11397465 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397468 push eax */
  push32((uint32_t)(EAX));
  /* 11397469 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139746b mov cl, byte ptr [0x113c0a91] */
  CL = (r8((uint32_t)(0x113c0a91)));
  /* 11397471 push ecx */
  push32((uint32_t)(ECX));
  /* 11397472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397475 push edx */
  push32((uint32_t)(EDX));
  /* 11397476 call 0x1139acc0 */
  push32(0x1139747bu); f_1139acc0();
  /* 1139747b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139747e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397481 push eax */
  push32((uint32_t)(EAX));
  /* 11397482 call 0x1139b0c0 */
  push32(0x11397487u); f_1139b0c0();
  /* 11397487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139748a jmp 0x113974b5 */
  goto L_113974b5;
L_1139748c:;
  /* 1139748c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139748f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11397496 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397499 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139749c push eax */
  push32((uint32_t)(EAX));
  /* 1139749d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139749f mov cl, byte ptr [0x113c0a91] */
  CL = (r8((uint32_t)(0x113c0a91)));
  /* 113974a5 push ecx */
  push32((uint32_t)(ECX));
  /* 113974a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113974a9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113974ac push edx */
  push32((uint32_t)(EDX));
  /* 113974ad call 0x1139acc0 */
  push32(0x113974b2u); f_1139acc0();
  /* 113974b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113974b5:;
  /* 113974b5 pop edi */
  EDI = (pop32());
  /* 113974b6 pop esi */
  ESI = (pop32());
  /* 113974b7 pop ebx */
  EBX = (pop32());
  /* 113974b8 mov esp, ebp */
  ESP = (EBP);
  /* 113974ba pop ebp */
  EBP = (pop32());
  /* 113974bb ret  */
  ESPCHK(0x113970d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x113974c0 (19 bytes, 9 insns) */
void f_113974c0(void) {
  FTRACE(0x113974c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113974c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113974c1 mov ebp, esp */
  EBP = (ESP);
  /* 113974c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113974c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113974c8 push eax */
  push32((uint32_t)(EAX));
  /* 113974c9 call 0x113974e0 */
  push32(0x113974ceu); f_113974e0();
  /* 113974ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113974d1 pop ebp */
  EBP = (pop32());
  /* 113974d2 ret  */
  ESPCHK(0x113974c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x113974e0 (342 bytes, 119 insns) */
void f_113974e0(void) {
  FTRACE(0x113974e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113974e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113974e1 mov ebp, esp */
  EBP = (ESP);
  /* 113974e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113974e6 push ebx */
  push32((uint32_t)(EBX));
  /* 113974e7 push esi */
  push32((uint32_t)(ESI));
  /* 113974e8 push edi */
  push32((uint32_t)(EDI));
  /* 113974e9 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 113974ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113974f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113974f3 je 0x11397525 */
  if (C.zf) goto L_11397525;
L_113974f5:;
  /* 113974f5 call 0x113977b0 */
  push32(0x113974fau); f_113977b0();
  /* 113974fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113974fc jne 0x1139751f */
  if (!C.zf) goto L_1139751f;
  /* 113974fe push 0x113bd8a0 */
  push32((uint32_t)(0x113bd8a0u));
  /* 11397503 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397505 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1139750a push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 1139750f push 2 */
  push32((uint32_t)(0x2u));
  /* 11397511 call 0x113955e0 */
  push32(0x11397516u); f_113955e0();
  /* 11397516 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397519 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139751c jne 0x1139751f */
  if (!C.zf) goto L_1139751f;
  /* 1139751e int3  */
  x86_unimpl("int3 @ 0x1139751e");
L_1139751f:;
  /* 1139751f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397521 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397523 jne 0x113974f5 */
  if (!C.zf) goto L_113974f5;
L_11397525:;
  /* 11397525 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397527 call 0x1139a010 */
  push32(0x1139752cu); f_1139a010();
  /* 1139752c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139752f:;
  /* 1139752f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397532 push edx */
  push32((uint32_t)(EDX));
  /* 11397533 call 0x11397c10 */
  push32(0x11397538u); f_11397c10();
  /* 11397538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139753b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139753d jne 0x11397560 */
  if (!C.zf) goto L_11397560;
  /* 1139753f push 0x113bd9a4 */
  push32((uint32_t)(0x113bd9a4u));
  /* 11397544 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397546 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1139754b push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11397550 push 2 */
  push32((uint32_t)(0x2u));
  /* 11397552 call 0x113955e0 */
  push32(0x11397557u); f_113955e0();
  /* 11397557 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139755a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139755d jne 0x11397560 */
  if (!C.zf) goto L_11397560;
  /* 1139755f int3  */
  x86_unimpl("int3 @ 0x1139755f");
L_11397560:;
  /* 11397560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397564 jne 0x1139752f */
  if (!C.zf) goto L_1139752f;
  /* 11397566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397569 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139756c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1139756f:;
  /* 1139756f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397572 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397575 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139757a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139757d je 0x113975c2 */
  if (C.zf) goto L_113975c2;
  /* 1139757f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397582 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397586 je 0x113975c2 */
  if (C.zf) goto L_113975c2;
  /* 11397588 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139758b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1139758e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397593 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397596 je 0x113975c2 */
  if (C.zf) goto L_113975c2;
  /* 11397598 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139759b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139759f je 0x113975c2 */
  if (C.zf) goto L_113975c2;
  /* 113975a1 push 0x113bdb3c */
  push32((uint32_t)(0x113bdb3cu));
  /* 113975a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113975a8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 113975ad push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 113975b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113975b4 call 0x113955e0 */
  push32(0x113975b9u); f_113955e0();
  /* 113975b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113975bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113975bf jne 0x113975c2 */
  if (!C.zf) goto L_113975c2;
  /* 113975c1 int3  */
  x86_unimpl("int3 @ 0x113975c1");
L_113975c2:;
  /* 113975c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113975c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113975c6 jne 0x1139756f */
  if (!C.zf) goto L_1139756f;
  /* 113975c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113975cb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113975cf jne 0x113975de */
  if (!C.zf) goto L_113975de;
  /* 113975d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113975d5 jne 0x113975de */
  if (!C.zf) goto L_113975de;
  /* 113975d7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_113975de:;
  /* 113975de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113975e1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113975e5 je 0x11397619 */
  if (C.zf) goto L_11397619;
L_113975e7:;
  /* 113975e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113975ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113975ed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113975f0 je 0x11397613 */
  if (C.zf) goto L_11397613;
  /* 113975f2 push 0x113bda84 */
  push32((uint32_t)(0x113bda84u));
  /* 113975f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113975f9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 113975fe push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 11397603 push 2 */
  push32((uint32_t)(0x2u));
  /* 11397605 call 0x113955e0 */
  push32(0x1139760au); f_113955e0();
  /* 1139760a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139760d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397610 jne 0x11397613 */
  if (!C.zf) goto L_11397613;
  /* 11397612 int3  */
  x86_unimpl("int3 @ 0x11397612");
L_11397613:;
  /* 11397613 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397615 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397617 jne 0x113975e7 */
  if (!C.zf) goto L_113975e7;
L_11397619:;
  /* 11397619 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139761c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139761f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11397622 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397624 call 0x1139a0b0 */
  push32(0x11397629u); f_1139a0b0();
  /* 11397629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139762c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139762f pop edi */
  EDI = (pop32());
  /* 11397630 pop esi */
  ESI = (pop32());
  /* 11397631 pop ebx */
  EBX = (pop32());
  /* 11397632 mov esp, ebp */
  ESP = (EBP);
  /* 11397634 pop ebp */
  EBP = (pop32());
  /* 11397635 ret  */
  ESPCHK(0x113974e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x11397640 (28 bytes, 11 insns) */
void f_11397640(void) {
  FTRACE(0x11397640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397640 push ebp */
  push32((uint32_t)(EBP));
  /* 11397641 mov ebp, esp */
  EBP = (ESP);
  /* 11397643 push ecx */
  push32((uint32_t)(ECX));
  /* 11397644 mov eax, dword ptr [0x113c0a8c] */
  EAX = (r32((uint32_t)(0x113c0a8c)));
  /* 11397649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139764c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139764f mov dword ptr [0x113c0a8c], ecx */
  w32((uint32_t)(0x113c0a8c), (ECX));
  /* 11397655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397658 mov esp, ebp */
  ESP = (EBP);
  /* 1139765a pop ebp */
  EBP = (pop32());
  /* 1139765b ret  */
  ESPCHK(0x11397640u, _esp0);
  ESP += 4; return;
}

/* FUN_10007660 @ 0x11397660 (157 bytes, 59 insns) */
void f_11397660(void) {
  FTRACE(0x11397660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397660 push ebp */
  push32((uint32_t)(EBP));
  /* 11397661 mov ebp, esp */
  EBP = (ESP);
  /* 11397663 push ecx */
  push32((uint32_t)(ECX));
  /* 11397664 push ebx */
  push32((uint32_t)(EBX));
  /* 11397665 push esi */
  push32((uint32_t)(ESI));
  /* 11397666 push edi */
  push32((uint32_t)(EDI));
  /* 11397667 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397669 call 0x1139a010 */
  push32(0x1139766eu); f_1139a010();
  /* 1139766e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397671 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397674 push eax */
  push32((uint32_t)(EAX));
  /* 11397675 call 0x11397c10 */
  push32(0x1139767au); f_11397c10();
  /* 1139767a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139767d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139767f je 0x113976ec */
  if (C.zf) goto L_113976ec;
  /* 11397681 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397684 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397687 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1139768a:;
  /* 1139768a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139768d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397690 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397695 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397698 je 0x113976dd */
  if (C.zf) goto L_113976dd;
  /* 1139769a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139769d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113976a1 je 0x113976dd */
  if (C.zf) goto L_113976dd;
  /* 113976a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113976a6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113976a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113976ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113976b1 je 0x113976dd */
  if (C.zf) goto L_113976dd;
  /* 113976b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113976b6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113976ba je 0x113976dd */
  if (C.zf) goto L_113976dd;
  /* 113976bc push 0x113bdb3c */
  push32((uint32_t)(0x113bdb3cu));
  /* 113976c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113976c3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 113976c8 push 0x113bd894 */
  push32((uint32_t)(0x113bd894u));
  /* 113976cd push 2 */
  push32((uint32_t)(0x2u));
  /* 113976cf call 0x113955e0 */
  push32(0x113976d4u); f_113955e0();
  /* 113976d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113976d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113976da jne 0x113976dd */
  if (!C.zf) goto L_113976dd;
  /* 113976dc int3  */
  x86_unimpl("int3 @ 0x113976dc");
L_113976dd:;
  /* 113976dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113976df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113976e1 jne 0x1139768a */
  if (!C.zf) goto L_1139768a;
  /* 113976e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113976e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113976e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_113976ec:;
  /* 113976ec push 9 */
  push32((uint32_t)(0x9u));
  /* 113976ee call 0x1139a0b0 */
  push32(0x113976f3u); f_1139a0b0();
  /* 113976f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113976f6 pop edi */
  EDI = (pop32());
  /* 113976f7 pop esi */
  ESI = (pop32());
  /* 113976f8 pop ebx */
  EBX = (pop32());
  /* 113976f9 mov esp, ebp */
  ESP = (EBP);
  /* 113976fb pop ebp */
  EBP = (pop32());
  /* 113976fc ret  */
  ESPCHK(0x11397660u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x11397700 (28 bytes, 11 insns) */
void f_11397700(void) {
  FTRACE(0x11397700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397700 push ebp */
  push32((uint32_t)(EBP));
  /* 11397701 mov ebp, esp */
  EBP = (ESP);
  /* 11397703 push ecx */
  push32((uint32_t)(ECX));
  /* 11397704 mov eax, dword ptr [0x113c0db0] */
  EAX = (r32((uint32_t)(0x113c0db0)));
  /* 11397709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139770c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139770f mov dword ptr [0x113c0db0], ecx */
  w32((uint32_t)(0x113c0db0), (ECX));
  /* 11397715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397718 mov esp, ebp */
  ESP = (EBP);
  /* 1139771a pop ebp */
  EBP = (pop32());
  /* 1139771b ret  */
  ESPCHK(0x11397700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007720 @ 0x11397720 (136 bytes, 55 insns) */
void f_11397720(void) {
  FTRACE(0x11397720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397720 push ebp */
  push32((uint32_t)(EBP));
  /* 11397721 mov ebp, esp */
  EBP = (ESP);
  /* 11397723 push ecx */
  push32((uint32_t)(ECX));
  /* 11397724 push ebx */
  push32((uint32_t)(EBX));
  /* 11397725 push esi */
  push32((uint32_t)(ESI));
  /* 11397726 push edi */
  push32((uint32_t)(EDI));
  /* 11397727 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1139772e:;
  /* 1139772e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11397731 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11397734 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397737 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1139773a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139773c je 0x1139779e */
  if (C.zf) goto L_1139779e;
  /* 1139773e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397741 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397743 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11397745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397748 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139774e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397751 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397754 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11397757 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397759 je 0x1139779c */
  if (C.zf) goto L_1139779c;
L_1139775b:;
  /* 1139775b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139775e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397763 push eax */
  push32((uint32_t)(EAX));
  /* 11397764 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397767 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11397769 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1139776c push edx */
  push32((uint32_t)(EDX));
  /* 1139776d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397770 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397773 push eax */
  push32((uint32_t)(EAX));
  /* 11397774 push 0x113bdb80 */
  push32((uint32_t)(0x113bdb80u));
  /* 11397779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139777b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139777d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139777f push 0 */
  push32((uint32_t)(0x0u));
  /* 11397781 call 0x113955e0 */
  push32(0x11397786u); f_113955e0();
  /* 11397786 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397789 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139778c jne 0x1139778f */
  if (!C.zf) goto L_1139778f;
  /* 1139778e int3  */
  x86_unimpl("int3 @ 0x1139778e");
L_1139778f:;
  /* 1139778f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397791 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397793 jne 0x1139775b */
  if (!C.zf) goto L_1139775b;
  /* 11397795 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1139779c:;
  /* 1139779c jmp 0x1139772e */
  goto L_1139772e;
L_1139779e:;
  /* 1139779e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113977a1 pop edi */
  EDI = (pop32());
  /* 113977a2 pop esi */
  ESI = (pop32());
  /* 113977a3 pop ebx */
  EBX = (pop32());
  /* 113977a4 mov esp, ebp */
  ESP = (EBP);
  /* 113977a6 pop ebp */
  EBP = (pop32());
  /* 113977a7 ret  */
  ESPCHK(0x11397720u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x113977b0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_113977b0(void) {
  FTRACE(0x113977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113977b1 mov ebp, esp */
  EBP = (ESP);
  /* 113977b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113977b6 push ebx */
  push32((uint32_t)(EBX));
  /* 113977b7 push esi */
  push32((uint32_t)(ESI));
  /* 113977b8 push edi */
  push32((uint32_t)(EDI));
  /* 113977b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113977c0 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 113977c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113977c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113977ca jne 0x113977d6 */
  if (!C.zf) goto L_113977d6;
  /* 113977cc mov eax, 1 */
  EAX = (0x1u);
  /* 113977d1 jmp 0x11397b08 */
  goto L_11397b08;
L_113977d6:;
  /* 113977d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 113977d8 call 0x1139a010 */
  push32(0x113977ddu); f_1139a010();
  /* 113977dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113977e0 call 0x1139b130 */
  push32(0x113977e5u); f_1139b130();
  /* 113977e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113977e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113977ec je 0x113978f9 */
  if (C.zf) goto L_113978f9;
  /* 113977f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113977f6 je 0x113978f9 */
  if (C.zf) goto L_113978f9;
  /* 113977fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113977ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11397802 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11397805 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397808 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1139780b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139780f ja 0x113978c2 */
  if ((!C.cf&&!C.zf)) goto L_113978c2;
  /* 11397815 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11397818 jmp dword ptr [eax*4 + 0x11397b0f] */
  switch (EAX) {
    case 0: goto L_1139789a;
    case 1: goto L_11397872;
    case 2: goto L_1139784a;
    case 3: goto L_1139781f;
    default: x86_unimpl("switch@0x11397818 out of table"); return;
  }
L_1139781f:;
  /* 1139781f push 0x113bdcd4 */
  push32((uint32_t)(0x113bdcd4u));
  /* 11397824 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11397829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139782b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139782d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139782f push 0 */
  push32((uint32_t)(0x0u));
  /* 11397831 call 0x113955e0 */
  push32(0x11397836u); f_113955e0();
  /* 11397836 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397839 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139783c jne 0x1139783f */
  if (!C.zf) goto L_1139783f;
  /* 1139783e int3  */
  x86_unimpl("int3 @ 0x1139783e");
L_1139783f:;
  /* 1139783f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397843 jne 0x1139781f */
  if (!C.zf) goto L_1139781f;
  /* 11397845 jmp 0x113978e8 */
  goto L_113978e8;
L_1139784a:;
  /* 1139784a push 0x113bdcb0 */
  push32((uint32_t)(0x113bdcb0u));
  /* 1139784f push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11397854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139785a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139785c call 0x113955e0 */
  push32(0x11397861u); f_113955e0();
  /* 11397861 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397867 jne 0x1139786a */
  if (!C.zf) goto L_1139786a;
  /* 11397869 int3  */
  x86_unimpl("int3 @ 0x11397869");
L_1139786a:;
  /* 1139786a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139786c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139786e jne 0x1139784a */
  if (!C.zf) goto L_1139784a;
  /* 11397870 jmp 0x113978e8 */
  goto L_113978e8;
L_11397872:;
  /* 11397872 push 0x113bdc8c */
  push32((uint32_t)(0x113bdc8cu));
  /* 11397877 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 1139787c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139787e push 0 */
  push32((uint32_t)(0x0u));
  /* 11397880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397882 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397884 call 0x113955e0 */
  push32(0x11397889u); f_113955e0();
  /* 11397889 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139788c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139788f jne 0x11397892 */
  if (!C.zf) goto L_11397892;
  /* 11397891 int3  */
  x86_unimpl("int3 @ 0x11397891");
L_11397892:;
  /* 11397892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397896 jne 0x11397872 */
  if (!C.zf) goto L_11397872;
  /* 11397898 jmp 0x113978e8 */
  goto L_113978e8;
L_1139789a:;
  /* 1139789a push 0x113bdc68 */
  push32((uint32_t)(0x113bdc68u));
  /* 1139789f push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 113978a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113978a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113978a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113978aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113978ac call 0x113955e0 */
  push32(0x113978b1u); f_113955e0();
  /* 113978b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113978b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113978b7 jne 0x113978ba */
  if (!C.zf) goto L_113978ba;
  /* 113978b9 int3  */
  x86_unimpl("int3 @ 0x113978b9");
L_113978ba:;
  /* 113978ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113978bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113978be jne 0x1139789a */
  if (!C.zf) goto L_1139789a;
  /* 113978c0 jmp 0x113978e8 */
  goto L_113978e8;
L_113978c2:;
  /* 113978c2 push 0x113bdc3c */
  push32((uint32_t)(0x113bdc3cu));
  /* 113978c7 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 113978cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113978ce push 0 */
  push32((uint32_t)(0x0u));
  /* 113978d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113978d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113978d4 call 0x113955e0 */
  push32(0x113978d9u); f_113955e0();
  /* 113978d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113978dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113978df jne 0x113978e2 */
  if (!C.zf) goto L_113978e2;
  /* 113978e1 int3  */
  x86_unimpl("int3 @ 0x113978e1");
L_113978e2:;
  /* 113978e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113978e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113978e6 jne 0x113978c2 */
  if (!C.zf) goto L_113978c2;
L_113978e8:;
  /* 113978e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 113978ea call 0x1139a0b0 */
  push32(0x113978efu); f_1139a0b0();
  /* 113978ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113978f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113978f4 jmp 0x11397b08 */
  goto L_11397b08;
L_113978f9:;
  /* 113978f9 mov eax, dword ptr [0x113c2788] */
  EAX = (r32((uint32_t)(0x113c2788)));
  /* 113978fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11397901 jmp 0x1139790b */
  goto L_1139790b;
L_11397903:;
  /* 11397903 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397906 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11397908 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139790b:;
  /* 1139790b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139790f je 0x11397afb */
  if (C.zf) goto L_11397afb;
  /* 11397915 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1139791c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139791f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11397922 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11397928 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139792b je 0x11397950 */
  if (C.zf) goto L_11397950;
  /* 1139792d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397930 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397934 je 0x11397950 */
  if (C.zf) goto L_11397950;
  /* 11397936 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397939 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1139793c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11397942 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397945 je 0x11397950 */
  if (C.zf) goto L_11397950;
  /* 11397947 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139794a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139794e jne 0x11397968 */
  if (!C.zf) goto L_11397968;
L_11397950:;
  /* 11397950 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397953 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11397956 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139795c mov edx, dword ptr [ecx*4 + 0x113c0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a94)));
  /* 11397963 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11397966 jmp 0x1139796f */
  goto L_1139796f;
L_11397968:;
  /* 11397968 mov dword ptr [ebp - 0x14], 0x113bdc34 */
  w32((uint32_t)(EBP + -0x14), (0x113bdc34u));
L_1139796f:;
  /* 1139796f push 4 */
  push32((uint32_t)(0x4u));
  /* 11397971 mov al, byte ptr [0x113c0a90] */
  AL = (r8((uint32_t)(0x113c0a90)));
  /* 11397976 push eax */
  push32((uint32_t)(EAX));
  /* 11397977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139797a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139797d push ecx */
  push32((uint32_t)(ECX));
  /* 1139797e call 0x11397720 */
  push32(0x11397983u); f_11397720();
  /* 11397983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397988 jne 0x113979c4 */
  if (!C.zf) goto L_113979c4;
L_1139798a:;
  /* 1139798a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139798d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397990 push edx */
  push32((uint32_t)(EDX));
  /* 11397991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397994 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11397997 push ecx */
  push32((uint32_t)(ECX));
  /* 11397998 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139799b push edx */
  push32((uint32_t)(EDX));
  /* 1139799c push 0x113bdb10 */
  push32((uint32_t)(0x113bdb10u));
  /* 113979a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113979a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113979a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113979a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113979a9 call 0x113955e0 */
  push32(0x113979aeu); f_113955e0();
  /* 113979ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113979b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113979b4 jne 0x113979b7 */
  if (!C.zf) goto L_113979b7;
  /* 113979b6 int3  */
  x86_unimpl("int3 @ 0x113979b6");
L_113979b7:;
  /* 113979b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113979b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113979bb jne 0x1139798a */
  if (!C.zf) goto L_1139798a;
  /* 113979bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113979c4:;
  /* 113979c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 113979c6 mov cl, byte ptr [0x113c0a90] */
  CL = (r8((uint32_t)(0x113c0a90)));
  /* 113979cc push ecx */
  push32((uint32_t)(ECX));
  /* 113979cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113979d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113979d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113979d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 113979da push edx */
  push32((uint32_t)(EDX));
  /* 113979db call 0x11397720 */
  push32(0x113979e0u); f_11397720();
  /* 113979e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113979e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113979e5 jne 0x11397a21 */
  if (!C.zf) goto L_11397a21;
L_113979e7:;
  /* 113979e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113979ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113979ed push eax */
  push32((uint32_t)(EAX));
  /* 113979ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113979f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113979f4 push edx */
  push32((uint32_t)(EDX));
  /* 113979f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113979f8 push eax */
  push32((uint32_t)(EAX));
  /* 113979f9 push 0x113bdae4 */
  push32((uint32_t)(0x113bdae4u));
  /* 113979fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a06 call 0x113955e0 */
  push32(0x11397a0bu); f_113955e0();
  /* 11397a0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397a0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397a11 jne 0x11397a14 */
  if (!C.zf) goto L_11397a14;
  /* 11397a13 int3  */
  x86_unimpl("int3 @ 0x11397a13");
L_11397a14:;
  /* 11397a14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11397a16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397a18 jne 0x113979e7 */
  if (!C.zf) goto L_113979e7;
  /* 11397a1a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11397a21:;
  /* 11397a21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a24 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397a28 jne 0x11397a7a */
  if (!C.zf) goto L_11397a7a;
  /* 11397a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11397a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11397a31 mov dl, byte ptr [0x113c0a91] */
  DL = (r8((uint32_t)(0x113c0a91)));
  /* 11397a37 push edx */
  push32((uint32_t)(EDX));
  /* 11397a38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a3b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397a3e push eax */
  push32((uint32_t)(EAX));
  /* 11397a3f call 0x11397720 */
  push32(0x11397a44u); f_11397720();
  /* 11397a44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397a49 jne 0x11397a7a */
  if (!C.zf) goto L_11397a7a;
L_11397a4b:;
  /* 11397a4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a4e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397a51 push ecx */
  push32((uint32_t)(ECX));
  /* 11397a52 push 0x113bdc08 */
  push32((uint32_t)(0x113bdc08u));
  /* 11397a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11397a5f call 0x113955e0 */
  push32(0x11397a64u); f_113955e0();
  /* 11397a64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397a67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397a6a jne 0x11397a6d */
  if (!C.zf) goto L_11397a6d;
  /* 11397a6c int3  */
  x86_unimpl("int3 @ 0x11397a6c");
L_11397a6d:;
  /* 11397a6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11397a6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11397a71 jne 0x11397a4b */
  if (!C.zf) goto L_11397a4b;
  /* 11397a73 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11397a7a:;
  /* 11397a7a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397a7e jne 0x11397af6 */
  if (!C.zf) goto L_11397af6;
  /* 11397a80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397a87 je 0x11397abc */
  if (C.zf) goto L_11397abc;
L_11397a89:;
  /* 11397a89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11397a8f push edx */
  push32((uint32_t)(EDX));
  /* 11397a90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397a93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11397a96 push ecx */
  push32((uint32_t)(ECX));
  /* 11397a97 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11397a9a push edx */
  push32((uint32_t)(EDX));
  /* 11397a9b push 0x113bdbe8 */
  push32((uint32_t)(0x113bdbe8u));
  /* 11397aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397aa8 call 0x113955e0 */
  push32(0x11397aadu); f_113955e0();
  /* 11397aad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397ab0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ab3 jne 0x11397ab6 */
  if (!C.zf) goto L_11397ab6;
  /* 11397ab5 int3  */
  x86_unimpl("int3 @ 0x11397ab5");
L_11397ab6:;
  /* 11397ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397aba jne 0x11397a89 */
  if (!C.zf) goto L_11397a89;
L_11397abc:;
  /* 11397abc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397abf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11397ac2 push edx */
  push32((uint32_t)(EDX));
  /* 11397ac3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397ac6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397ac9 push eax */
  push32((uint32_t)(EAX));
  /* 11397aca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11397acd push ecx */
  push32((uint32_t)(ECX));
  /* 11397ace push 0x113bdbbc */
  push32((uint32_t)(0x113bdbbcu));
  /* 11397ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397adb call 0x113955e0 */
  push32(0x11397ae0u); f_113955e0();
  /* 11397ae0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397ae3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ae6 jne 0x11397ae9 */
  if (!C.zf) goto L_11397ae9;
  /* 11397ae8 int3  */
  x86_unimpl("int3 @ 0x11397ae8");
L_11397ae9:;
  /* 11397ae9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11397aeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11397aed jne 0x11397abc */
  if (!C.zf) goto L_11397abc;
  /* 11397aef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11397af6:;
  /* 11397af6 jmp 0x11397903 */
  goto L_11397903;
L_11397afb:;
  /* 11397afb push 9 */
  push32((uint32_t)(0x9u));
  /* 11397afd call 0x1139a0b0 */
  push32(0x11397b02u); f_1139a0b0();
  /* 11397b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11397b08:;
  /* 11397b08 pop edi */
  EDI = (pop32());
  /* 11397b09 pop esi */
  ESI = (pop32());
  /* 11397b0a pop ebx */
  EBX = (pop32());
  /* 11397b0b mov esp, ebp */
  ESP = (EBP);
  /* 11397b0d pop ebp */
  EBP = (pop32());
  /* 11397b0e ret  */
  ESPCHK(0x113977b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b20 @ 0x11397b20 (34 bytes, 13 insns) */
void f_11397b20(void) {
  FTRACE(0x11397b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11397b21 mov ebp, esp */
  EBP = (ESP);
  /* 11397b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11397b24 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 11397b29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11397b2c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397b30 je 0x11397b3b */
  if (C.zf) goto L_11397b3b;
  /* 11397b32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397b35 mov dword ptr [0x113c0a84], ecx */
  w32((uint32_t)(0x113c0a84), (ECX));
L_11397b3b:;
  /* 11397b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397b3e mov esp, ebp */
  ESP = (EBP);
  /* 11397b40 pop ebp */
  EBP = (pop32());
  /* 11397b41 ret  */
  ESPCHK(0x11397b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x11397b50 (103 bytes, 38 insns) */
void f_11397b50(void) {
  FTRACE(0x11397b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11397b51 mov ebp, esp */
  EBP = (ESP);
  /* 11397b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11397b54 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 11397b59 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11397b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397b5e jne 0x11397b62 */
  if (!C.zf) goto L_11397b62;
  /* 11397b60 jmp 0x11397bb3 */
  goto L_11397bb3;
L_11397b62:;
  /* 11397b62 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397b64 call 0x1139a010 */
  push32(0x11397b69u); f_1139a010();
  /* 11397b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397b6c mov ecx, dword ptr [0x113c2788] */
  ECX = (r32((uint32_t)(0x113c2788)));
  /* 11397b72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11397b75 jmp 0x11397b7f */
  goto L_11397b7f;
L_11397b77:;
  /* 11397b77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397b7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11397b7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11397b7f:;
  /* 11397b7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397b83 je 0x11397ba9 */
  if (C.zf) goto L_11397ba9;
  /* 11397b85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397b88 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11397b8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11397b91 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397b94 jne 0x11397ba7 */
  if (!C.zf) goto L_11397ba7;
  /* 11397b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397b99 push eax */
  push32((uint32_t)(EAX));
  /* 11397b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397b9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 11397ba1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11397ba4u);
  /* 11397ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11397ba7:;
  /* 11397ba7 jmp 0x11397b77 */
  goto L_11397b77;
L_11397ba9:;
  /* 11397ba9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397bab call 0x1139a0b0 */
  push32(0x11397bb0u); f_1139a0b0();
  /* 11397bb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11397bb3:;
  /* 11397bb3 mov esp, ebp */
  ESP = (EBP);
  /* 11397bb5 pop ebp */
  EBP = (pop32());
  /* 11397bb6 ret  */
  ESPCHK(0x11397b50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11397bc0 (75 bytes, 28 insns) */
void f_11397bc0(void) {
  FTRACE(0x11397bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11397bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11397bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11397bc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397bc8 je 0x11397bfd */
  if (C.zf) goto L_11397bfd;
  /* 11397bca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397bcd push eax */
  push32((uint32_t)(EAX));
  /* 11397bce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11397bd2 call dword ptr [0x113c538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c538c))), 0x11397bd8u);
  /* 11397bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397bda jne 0x11397bfd */
  if (!C.zf) goto L_11397bfd;
  /* 11397bdc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397be0 je 0x11397bf4 */
  if (C.zf) goto L_11397bf4;
  /* 11397be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397be5 push edx */
  push32((uint32_t)(EDX));
  /* 11397be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397be9 push eax */
  push32((uint32_t)(EAX));
  /* 11397bea call dword ptr [0x113c5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5390))), 0x11397bf0u);
  /* 11397bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397bf2 jne 0x11397bfd */
  if (!C.zf) goto L_11397bfd;
L_11397bf4:;
  /* 11397bf4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11397bfb jmp 0x11397c04 */
  goto L_11397c04;
L_11397bfd:;
  /* 11397bfd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11397c04:;
  /* 11397c04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397c07 mov esp, ebp */
  ESP = (EBP);
  /* 11397c09 pop ebp */
  EBP = (pop32());
  /* 11397c0a ret  */
  ESPCHK(0x11397bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c10 @ 0x11397c10 (134 bytes, 50 insns) */
void f_11397c10(void) {
  FTRACE(0x11397c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11397c11 mov ebp, esp */
  EBP = (ESP);
  /* 11397c13 push ecx */
  push32((uint32_t)(ECX));
  /* 11397c14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397c18 jne 0x11397c1e */
  if (!C.zf) goto L_11397c1e;
  /* 11397c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397c1c jmp 0x11397c92 */
  goto L_11397c92;
L_11397c1e:;
  /* 11397c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11397c20 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11397c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397c25 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397c28 push eax */
  push32((uint32_t)(EAX));
  /* 11397c29 call 0x11397bc0 */
  push32(0x11397c2eu); f_11397bc0();
  /* 11397c2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397c33 jne 0x11397c39 */
  if (!C.zf) goto L_11397c39;
  /* 11397c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397c37 jmp 0x11397c92 */
  goto L_11397c92;
L_11397c39:;
  /* 11397c39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397c3c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397c3f push ecx */
  push32((uint32_t)(ECX));
  /* 11397c40 call 0x1139b250 */
  push32(0x11397c45u); f_1139b250();
  /* 11397c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397c48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11397c4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397c4f je 0x11397c66 */
  if (C.zf) goto L_11397c66;
  /* 11397c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397c54 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397c57 push edx */
  push32((uint32_t)(EDX));
  /* 11397c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397c5b push eax */
  push32((uint32_t)(EAX));
  /* 11397c5c call 0x1139b2b0 */
  push32(0x11397c61u); f_1139b2b0();
  /* 11397c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397c64 jmp 0x11397c92 */
  goto L_11397c92;
L_11397c66:;
  /* 11397c66 mov ecx, dword ptr [0x113c273c] */
  ECX = (r32((uint32_t)(0x113c273c)));
  /* 11397c6c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11397c72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11397c74 je 0x11397c7d */
  if (C.zf) goto L_11397c7d;
  /* 11397c76 mov eax, 1 */
  EAX = (0x1u);
  /* 11397c7b jmp 0x11397c92 */
  goto L_11397c92;
L_11397c7d:;
  /* 11397c7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397c80 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397c83 push edx */
  push32((uint32_t)(EDX));
  /* 11397c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397c86 mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 11397c8b push eax */
  push32((uint32_t)(EAX));
  /* 11397c8c call dword ptr [0x113c5388] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5388))), 0x11397c92u);
L_11397c92:;
  /* 11397c92 mov esp, ebp */
  ESP = (EBP);
  /* 11397c94 pop ebp */
  EBP = (pop32());
  /* 11397c95 ret  */
  ESPCHK(0x11397c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x11397ca0 (227 bytes, 80 insns) */
void f_11397ca0(void) {
  FTRACE(0x11397ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11397ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11397ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11397ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397ca7 push eax */
  push32((uint32_t)(EAX));
  /* 11397ca8 call 0x11397c10 */
  push32(0x11397cadu); f_11397c10();
  /* 11397cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397cb2 jne 0x11397cbb */
  if (!C.zf) goto L_11397cbb;
  /* 11397cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397cb6 jmp 0x11397d7f */
  goto L_11397d7f;
L_11397cbb:;
  /* 11397cbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11397cbd call 0x1139a010 */
  push32(0x11397cc2u); f_1139a010();
  /* 11397cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397cc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397cc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397ccb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11397cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397cd1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397cd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397cd9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397cdc je 0x11397d00 */
  if (C.zf) goto L_11397d00;
  /* 11397cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397ce1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ce5 je 0x11397d00 */
  if (C.zf) goto L_11397d00;
  /* 11397ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397cea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397ced and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397cf2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397cf5 je 0x11397d00 */
  if (C.zf) goto L_11397d00;
  /* 11397cf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397cfa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397cfe jne 0x11397d73 */
  if (!C.zf) goto L_11397d73;
L_11397d00:;
  /* 11397d00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11397d02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11397d05 push edx */
  push32((uint32_t)(EDX));
  /* 11397d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397d09 push eax */
  push32((uint32_t)(EAX));
  /* 11397d0a call 0x11397bc0 */
  push32(0x11397d0fu); f_11397bc0();
  /* 11397d0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397d14 je 0x11397d73 */
  if (C.zf) goto L_11397d73;
  /* 11397d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397d19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11397d1c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397d1f jne 0x11397d73 */
  if (!C.zf) goto L_11397d73;
  /* 11397d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397d24 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11397d27 cmp ecx, dword ptr [0x113c0a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397d2d jg 0x11397d73 */
  if ((!C.zf&&C.sf==C.of)) goto L_11397d73;
  /* 11397d2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397d33 je 0x11397d40 */
  if (C.zf) goto L_11397d40;
  /* 11397d35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11397d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397d3b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11397d3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11397d40:;
  /* 11397d40 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397d44 je 0x11397d51 */
  if (C.zf) goto L_11397d51;
  /* 11397d46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11397d49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397d4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11397d4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11397d51:;
  /* 11397d51 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397d55 je 0x11397d62 */
  if (C.zf) goto L_11397d62;
  /* 11397d57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11397d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397d5d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11397d60 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11397d62:;
  /* 11397d62 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397d64 call 0x1139a0b0 */
  push32(0x11397d69u); f_1139a0b0();
  /* 11397d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397d6c mov eax, 1 */
  EAX = (0x1u);
  /* 11397d71 jmp 0x11397d7f */
  goto L_11397d7f;
L_11397d73:;
  /* 11397d73 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397d75 call 0x1139a0b0 */
  push32(0x11397d7au); f_1139a0b0();
  /* 11397d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11397d7f:;
  /* 11397d7f mov esp, ebp */
  ESP = (EBP);
  /* 11397d81 pop ebp */
  EBP = (pop32());
  /* 11397d82 ret  */
  ESPCHK(0x11397ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x11397d90 (28 bytes, 11 insns) */
void f_11397d90(void) {
  FTRACE(0x11397d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11397d91 mov ebp, esp */
  EBP = (ESP);
  /* 11397d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11397d94 mov eax, dword ptr [0x113c40f8] */
  EAX = (r32((uint32_t)(0x113c40f8)));
  /* 11397d99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11397d9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397d9f mov dword ptr [0x113c40f8], ecx */
  w32((uint32_t)(0x113c40f8), (ECX));
  /* 11397da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397da8 mov esp, ebp */
  ESP = (EBP);
  /* 11397daa pop ebp */
  EBP = (pop32());
  /* 11397dab ret  */
  ESPCHK(0x11397d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x11397db0 (362 bytes, 116 insns) */
void f_11397db0(void) {
  FTRACE(0x11397db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11397db1 mov ebp, esp */
  EBP = (ESP);
  /* 11397db3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11397db7 push esi */
  push32((uint32_t)(ESI));
  /* 11397db8 push edi */
  push32((uint32_t)(EDI));
  /* 11397db9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397dbd jne 0x11397dea */
  if (!C.zf) goto L_11397dea;
L_11397dbf:;
  /* 11397dbf push 0x113bdd1c */
  push32((uint32_t)(0x113bdd1cu));
  /* 11397dc4 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11397dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11397dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11397dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11397dd1 call 0x113955e0 */
  push32(0x11397dd6u); f_113955e0();
  /* 11397dd6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397dd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ddc jne 0x11397ddf */
  if (!C.zf) goto L_11397ddf;
  /* 11397dde int3  */
  x86_unimpl("int3 @ 0x11397dde");
L_11397ddf:;
  /* 11397ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397de3 jne 0x11397dbf */
  if (!C.zf) goto L_11397dbf;
  /* 11397de5 jmp 0x11397f13 */
  goto L_11397f13;
L_11397dea:;
  /* 11397dea push 9 */
  push32((uint32_t)(0x9u));
  /* 11397dec call 0x1139a010 */
  push32(0x11397df1u); f_1139a010();
  /* 11397df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397df4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397df7 mov edx, dword ptr [0x113c2788] */
  EDX = (r32((uint32_t)(0x113c2788)));
  /* 11397dfd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11397dff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11397e06 jmp 0x11397e11 */
  goto L_11397e11;
L_11397e08:;
  /* 11397e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397e0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397e0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11397e11:;
  /* 11397e11 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397e15 jge 0x11397e35 */
  if ((C.sf==C.of)) goto L_11397e35;
  /* 11397e17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397e1d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11397e25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397e28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397e2b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11397e33 jmp 0x11397e08 */
  goto L_11397e08;
L_11397e35:;
  /* 11397e35 mov edx, dword ptr [0x113c2788] */
  EDX = (r32((uint32_t)(0x113c2788)));
  /* 11397e3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11397e3e jmp 0x11397e48 */
  goto L_11397e48;
L_11397e40:;
  /* 11397e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11397e45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11397e48:;
  /* 11397e48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397e4c je 0x11397ef1 */
  if (C.zf) goto L_11397ef1;
  /* 11397e52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397e58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397e5f jl 0x11397ec7 */
  if ((C.sf!=C.of)) goto L_11397ec7;
  /* 11397e61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e64 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11397e67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11397e6d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397e70 jge 0x11397ec7 */
  if ((C.sf==C.of)) goto L_11397ec7;
  /* 11397e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e75 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11397e78 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11397e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397e81 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11397e85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397e88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e8b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11397e8e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11397e94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397e97 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11397e9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397e9e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11397ea1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397ea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397ea9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11397ead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397eb0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397eb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397eb6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11397eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11397ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397ec1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11397ec5 jmp 0x11397eec */
  goto L_11397eec;
L_11397ec7:;
  /* 11397ec7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397eca push edx */
  push32((uint32_t)(EDX));
  /* 11397ecb push 0x113bdcf8 */
  push32((uint32_t)(0x113bdcf8u));
  /* 11397ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397ed8 call 0x113955e0 */
  push32(0x11397eddu); f_113955e0();
  /* 11397edd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397ee0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ee3 jne 0x11397ee6 */
  if (!C.zf) goto L_11397ee6;
  /* 11397ee5 int3  */
  x86_unimpl("int3 @ 0x11397ee5");
L_11397ee6:;
  /* 11397ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397eea jne 0x11397ec7 */
  if (!C.zf) goto L_11397ec7;
L_11397eec:;
  /* 11397eec jmp 0x11397e40 */
  goto L_11397e40;
L_11397ef1:;
  /* 11397ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397ef4 mov edx, dword ptr [0x113c2790] */
  EDX = (r32((uint32_t)(0x113c2790)));
  /* 11397efa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11397efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397f00 mov ecx, dword ptr [0x113c2784] */
  ECX = (r32((uint32_t)(0x113c2784)));
  /* 11397f06 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11397f09 push 9 */
  push32((uint32_t)(0x9u));
  /* 11397f0b call 0x1139a0b0 */
  push32(0x11397f10u); f_1139a0b0();
  /* 11397f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11397f13:;
  /* 11397f13 pop edi */
  EDI = (pop32());
  /* 11397f14 pop esi */
  ESI = (pop32());
  /* 11397f15 pop ebx */
  EBX = (pop32());
  /* 11397f16 mov esp, ebp */
  ESP = (EBP);
  /* 11397f18 pop ebp */
  EBP = (pop32());
  /* 11397f19 ret  */
  ESPCHK(0x11397db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x11397f20 (291 bytes, 95 insns) */
void f_11397f20(void) {
  FTRACE(0x11397f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11397f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11397f21 mov ebp, esp */
  EBP = (ESP);
  /* 11397f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397f26 push ebx */
  push32((uint32_t)(EBX));
  /* 11397f27 push esi */
  push32((uint32_t)(ESI));
  /* 11397f28 push edi */
  push32((uint32_t)(EDI));
  /* 11397f29 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11397f30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397f34 je 0x11397f42 */
  if (C.zf) goto L_11397f42;
  /* 11397f36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397f3a je 0x11397f42 */
  if (C.zf) goto L_11397f42;
  /* 11397f3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397f40 jne 0x11397f70 */
  if (!C.zf) goto L_11397f70;
L_11397f42:;
  /* 11397f42 push 0x113bdd44 */
  push32((uint32_t)(0x113bdd44u));
  /* 11397f47 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11397f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11397f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11397f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11397f54 call 0x113955e0 */
  push32(0x11397f59u); f_113955e0();
  /* 11397f59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11397f5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397f5f jne 0x11397f62 */
  if (!C.zf) goto L_11397f62;
  /* 11397f61 int3  */
  x86_unimpl("int3 @ 0x11397f61");
L_11397f62:;
  /* 11397f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11397f64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397f66 jne 0x11397f42 */
  if (!C.zf) goto L_11397f42;
  /* 11397f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11397f6b jmp 0x1139803c */
  goto L_1139803c;
L_11397f70:;
  /* 11397f70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11397f77 jmp 0x11397f82 */
  goto L_11397f82;
L_11397f79:;
  /* 11397f79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397f7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11397f7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11397f82:;
  /* 11397f82 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397f86 jge 0x1139800c */
  if ((C.sf==C.of)) goto L_1139800c;
  /* 11397f8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397f8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11397f92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397f95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11397f98 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11397f9c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397fa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397fa6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11397faa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11397fb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fb3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11397fb6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11397fba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11397fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397fc4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11397fc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397fce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397fd3 jne 0x11397fe2 */
  if (!C.zf) goto L_11397fe2;
  /* 11397fd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11397fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11397fdb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397fe0 je 0x11398007 */
  if (C.zf) goto L_11398007;
L_11397fe2:;
  /* 11397fe2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397fe6 je 0x11398007 */
  if (C.zf) goto L_11398007;
  /* 11397fe8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397fec jne 0x11398000 */
  if (!C.zf) goto L_11398000;
  /* 11397fee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11397ff2 jne 0x11398007 */
  if (!C.zf) goto L_11398007;
  /* 11397ff4 mov eax, dword ptr [0x113c0a84] */
  EAX = (r32((uint32_t)(0x113c0a84)));
  /* 11397ff9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11397ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11397ffe je 0x11398007 */
  if (C.zf) goto L_11398007;
L_11398000:;
  /* 11398000 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11398007:;
  /* 11398007 jmp 0x11397f79 */
  goto L_11397f79;
L_1139800c:;
  /* 1139800c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139800f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11398012 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11398015 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398018 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139801b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1139801e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398021 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11398024 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11398027 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139802a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139802d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11398030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398033 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11398039 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1139803c:;
  /* 1139803c pop edi */
  EDI = (pop32());
  /* 1139803d pop esi */
  ESI = (pop32());
  /* 1139803e pop ebx */
  EBX = (pop32());
  /* 1139803f mov esp, ebp */
  ESP = (EBP);
  /* 11398041 pop ebp */
  EBP = (pop32());
  /* 11398042 ret  */
  ESPCHK(0x11397f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x11398050 (697 bytes, 253 insns) */
void f_11398050(void) {
  FTRACE(0x11398050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398050 push ebp */
  push32((uint32_t)(EBP));
  /* 11398051 mov ebp, esp */
  EBP = (ESP);
  /* 11398053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398056 push ebx */
  push32((uint32_t)(EBX));
  /* 11398057 push esi */
  push32((uint32_t)(ESI));
  /* 11398058 push edi */
  push32((uint32_t)(EDI));
  /* 11398059 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11398060 push 9 */
  push32((uint32_t)(0x9u));
  /* 11398062 call 0x1139a010 */
  push32(0x11398067u); f_1139a010();
  /* 11398067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139806a:;
  /* 1139806a push 0x113bde3c */
  push32((uint32_t)(0x113bde3cu));
  /* 1139806f push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 11398074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398076 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139807a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139807c call 0x113955e0 */
  push32(0x11398081u); f_113955e0();
  /* 11398081 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398087 jne 0x1139808a */
  if (!C.zf) goto L_1139808a;
  /* 11398089 int3  */
  x86_unimpl("int3 @ 0x11398089");
L_1139808a:;
  /* 1139808a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139808c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139808e jne 0x1139806a */
  if (!C.zf) goto L_1139806a;
  /* 11398090 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398094 je 0x1139809e */
  if (C.zf) goto L_1139809e;
  /* 11398096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398099 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139809b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139809e:;
  /* 1139809e mov eax, dword ptr [0x113c2788] */
  EAX = (r32((uint32_t)(0x113c2788)));
  /* 113980a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113980a6 jmp 0x113980b0 */
  goto L_113980b0;
L_113980a8:;
  /* 113980a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113980ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113980ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113980b0:;
  /* 113980b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113980b4 je 0x113982d2 */
  if (C.zf) goto L_113982d2;
  /* 113980ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113980bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113980c0 je 0x113982d2 */
  if (C.zf) goto L_113982d2;
  /* 113980c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113980c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113980cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113980d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113980d5 je 0x11398104 */
  if (C.zf) goto L_11398104;
  /* 113980d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113980da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113980dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113980e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113980e5 je 0x11398104 */
  if (C.zf) goto L_11398104;
  /* 113980e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113980ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113980ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113980f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113980f5 jne 0x11398109 */
  if (!C.zf) goto L_11398109;
  /* 113980f7 mov ecx, dword ptr [0x113c0a84] */
  ECX = (r32((uint32_t)(0x113c0a84)));
  /* 113980fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11398100 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11398102 jne 0x11398109 */
  if (!C.zf) goto L_11398109;
L_11398104:;
  /* 11398104 jmp 0x113982cd */
  goto L_113982cd;
L_11398109:;
  /* 11398109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139810c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398110 je 0x11398182 */
  if (C.zf) goto L_11398182;
  /* 11398112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398114 push 1 */
  push32((uint32_t)(0x1u));
  /* 11398116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398119 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139811c push ecx */
  push32((uint32_t)(ECX));
  /* 1139811d call 0x11397bc0 */
  push32(0x11398122u); f_11397bc0();
  /* 11398122 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398127 jne 0x11398153 */
  if (!C.zf) goto L_11398153;
L_11398129:;
  /* 11398129 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139812c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1139812f push eax */
  push32((uint32_t)(EAX));
  /* 11398130 push 0x113bde28 */
  push32((uint32_t)(0x113bde28u));
  /* 11398135 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398137 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398139 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139813b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139813d call 0x113955e0 */
  push32(0x11398142u); f_113955e0();
  /* 11398142 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398145 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398148 jne 0x1139814b */
  if (!C.zf) goto L_1139814b;
  /* 1139814a int3  */
  x86_unimpl("int3 @ 0x1139814a");
L_1139814b:;
  /* 1139814b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139814d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139814f jne 0x11398129 */
  if (!C.zf) goto L_11398129;
  /* 11398151 jmp 0x11398182 */
  goto L_11398182;
L_11398153:;
  /* 11398153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398156 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11398159 push eax */
  push32((uint32_t)(EAX));
  /* 1139815a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139815d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11398160 push edx */
  push32((uint32_t)(EDX));
  /* 11398161 push 0x113bde1c */
  push32((uint32_t)(0x113bde1cu));
  /* 11398166 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139816a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139816c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139816e call 0x113955e0 */
  push32(0x11398173u); f_113955e0();
  /* 11398173 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398176 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398179 jne 0x1139817c */
  if (!C.zf) goto L_1139817c;
  /* 1139817b int3  */
  x86_unimpl("int3 @ 0x1139817b");
L_1139817c:;
  /* 1139817c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139817e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398180 jne 0x11398153 */
  if (!C.zf) goto L_11398153;
L_11398182:;
  /* 11398182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398185 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11398188 push edx */
  push32((uint32_t)(EDX));
  /* 11398189 push 0x113bde14 */
  push32((uint32_t)(0x113bde14u));
  /* 1139818e push 0 */
  push32((uint32_t)(0x0u));
  /* 11398190 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398192 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398194 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398196 call 0x113955e0 */
  push32(0x1139819bu); f_113955e0();
  /* 1139819b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139819e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113981a1 jne 0x113981a4 */
  if (!C.zf) goto L_113981a4;
  /* 113981a3 int3  */
  x86_unimpl("int3 @ 0x113981a3");
L_113981a4:;
  /* 113981a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113981a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113981a8 jne 0x11398182 */
  if (!C.zf) goto L_11398182;
  /* 113981aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113981ad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113981b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113981b6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113981b9 jne 0x1139822c */
  if (!C.zf) goto L_1139822c;
L_113981bb:;
  /* 113981bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113981be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113981c1 push ecx */
  push32((uint32_t)(ECX));
  /* 113981c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113981c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113981c8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113981cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113981d0 push eax */
  push32((uint32_t)(EAX));
  /* 113981d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113981d4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113981d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113981d8 push 0x113bdde0 */
  push32((uint32_t)(0x113bdde0u));
  /* 113981dd push 0 */
  push32((uint32_t)(0x0u));
  /* 113981df push 0 */
  push32((uint32_t)(0x0u));
  /* 113981e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113981e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113981e5 call 0x113955e0 */
  push32(0x113981eau); f_113955e0();
  /* 113981ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113981ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113981f0 jne 0x113981f3 */
  if (!C.zf) goto L_113981f3;
  /* 113981f2 int3  */
  x86_unimpl("int3 @ 0x113981f2");
L_113981f3:;
  /* 113981f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113981f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113981f7 jne 0x113981bb */
  if (!C.zf) goto L_113981bb;
  /* 113981f9 cmp dword ptr [0x113c40f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c40f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398200 je 0x1139821b */
  if (C.zf) goto L_1139821b;
  /* 11398202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398205 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11398208 push ecx */
  push32((uint32_t)(ECX));
  /* 11398209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139820c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139820f push edx */
  push32((uint32_t)(EDX));
  /* 11398210 call dword ptr [0x113c40f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c40f8))), 0x11398216u);
  /* 11398216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398219 jmp 0x11398227 */
  goto L_11398227;
L_1139821b:;
  /* 1139821b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139821e push eax */
  push32((uint32_t)(EAX));
  /* 1139821f call 0x11398310 */
  push32(0x11398224u); f_11398310();
  /* 11398224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11398227:;
  /* 11398227 jmp 0x113982cd */
  goto L_113982cd;
L_1139822c:;
  /* 1139822c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139822f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398233 jne 0x11398272 */
  if (!C.zf) goto L_11398272;
L_11398235:;
  /* 11398235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398238 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139823b push eax */
  push32((uint32_t)(EAX));
  /* 1139823c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139823f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398242 push ecx */
  push32((uint32_t)(ECX));
  /* 11398243 push 0x113bddb8 */
  push32((uint32_t)(0x113bddb8u));
  /* 11398248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139824a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139824c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139824e push 0 */
  push32((uint32_t)(0x0u));
  /* 11398250 call 0x113955e0 */
  push32(0x11398255u); f_113955e0();
  /* 11398255 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398258 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139825b jne 0x1139825e */
  if (!C.zf) goto L_1139825e;
  /* 1139825d int3  */
  x86_unimpl("int3 @ 0x1139825d");
L_1139825e:;
  /* 1139825e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398260 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398262 jne 0x11398235 */
  if (!C.zf) goto L_11398235;
  /* 11398264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398267 push eax */
  push32((uint32_t)(EAX));
  /* 11398268 call 0x11398310 */
  push32(0x1139826du); f_11398310();
  /* 1139826d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398270 jmp 0x113982cd */
  goto L_113982cd;
L_11398272:;
  /* 11398272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398275 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11398278 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1139827e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398281 jne 0x113982cd */
  if (!C.zf) goto L_113982cd;
L_11398283:;
  /* 11398283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398286 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11398289 push ecx */
  push32((uint32_t)(ECX));
  /* 1139828a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139828d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11398290 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11398293 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11398298 push eax */
  push32((uint32_t)(EAX));
  /* 11398299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139829c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139829f push ecx */
  push32((uint32_t)(ECX));
  /* 113982a0 push 0x113bdd84 */
  push32((uint32_t)(0x113bdd84u));
  /* 113982a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113982a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113982a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113982ab push 0 */
  push32((uint32_t)(0x0u));
  /* 113982ad call 0x113955e0 */
  push32(0x113982b2u); f_113955e0();
  /* 113982b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113982b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113982b8 jne 0x113982bb */
  if (!C.zf) goto L_113982bb;
  /* 113982ba int3  */
  x86_unimpl("int3 @ 0x113982ba");
L_113982bb:;
  /* 113982bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113982bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113982bf jne 0x11398283 */
  if (!C.zf) goto L_11398283;
  /* 113982c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113982c4 push eax */
  push32((uint32_t)(EAX));
  /* 113982c5 call 0x11398310 */
  push32(0x113982cau); f_11398310();
  /* 113982ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113982cd:;
  /* 113982cd jmp 0x113980a8 */
  goto L_113980a8;
L_113982d2:;
  /* 113982d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 113982d4 call 0x1139a0b0 */
  push32(0x113982d9u); f_1139a0b0();
  /* 113982d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113982dc:;
  /* 113982dc push 0x113bdd6c */
  push32((uint32_t)(0x113bdd6cu));
  /* 113982e1 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 113982e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113982e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113982ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113982ec push 0 */
  push32((uint32_t)(0x0u));
  /* 113982ee call 0x113955e0 */
  push32(0x113982f3u); f_113955e0();
  /* 113982f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113982f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113982f9 jne 0x113982fc */
  if (!C.zf) goto L_113982fc;
  /* 113982fb int3  */
  x86_unimpl("int3 @ 0x113982fb");
L_113982fc:;
  /* 113982fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113982fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11398300 jne 0x113982dc */
  if (!C.zf) goto L_113982dc;
  /* 11398302 pop edi */
  EDI = (pop32());
  /* 11398303 pop esi */
  ESI = (pop32());
  /* 11398304 pop ebx */
  EBX = (pop32());
  /* 11398305 mov esp, ebp */
  ESP = (EBP);
  /* 11398307 pop ebp */
  EBP = (pop32());
  /* 11398308 ret  */
  ESPCHK(0x11398050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x11398310 (276 bytes, 89 insns) */
void f_11398310(void) {
  FTRACE(0x11398310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398310 push ebp */
  push32((uint32_t)(EBP));
  /* 11398311 mov ebp, esp */
  EBP = (ESP);
  /* 11398313 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398316 push ebx */
  push32((uint32_t)(EBX));
  /* 11398317 push esi */
  push32((uint32_t)(ESI));
  /* 11398318 push edi */
  push32((uint32_t)(EDI));
  /* 11398319 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11398320 jmp 0x1139832b */
  goto L_1139832b;
L_11398322:;
  /* 11398322 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11398325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398328 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1139832b:;
  /* 1139832b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139832e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398332 jge 0x1139833f */
  if ((C.sf==C.of)) goto L_1139833f;
  /* 11398334 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398337 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139833a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1139833d jmp 0x11398346 */
  goto L_11398346;
L_1139833f:;
  /* 1139833f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11398346:;
  /* 11398346 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11398349 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139834c jge 0x113983ec */
  if ((C.sf==C.of)) goto L_113983ec;
  /* 11398352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398355 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398358 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1139835b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1139835e cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398365 jle 0x11398383 */
  if ((C.zf||C.sf!=C.of)) goto L_11398383;
  /* 11398367 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1139836c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1139836f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11398375 push ecx */
  push32((uint32_t)(ECX));
  /* 11398376 call 0x1139cf60 */
  push32(0x1139837bu); f_1139cf60();
  /* 1139837b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139837e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11398381 jmp 0x113983a0 */
  goto L_113983a0;
L_11398383:;
  /* 11398383 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11398386 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1139838c mov eax, dword ptr [0x113c0db8] */
  EAX = (r32((uint32_t)(0x113c0db8)));
  /* 11398391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11398393 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11398397 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1139839d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_113983a0:;
  /* 113983a0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113983a4 je 0x113983b4 */
  if (C.zf) goto L_113983b4;
  /* 113983a6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113983a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113983af mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 113983b2 jmp 0x113983bb */
  goto L_113983bb;
L_113983b4:;
  /* 113983b4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_113983bb:;
  /* 113983bb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113983be mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 113983c1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 113983c5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113983c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113983ce push edx */
  push32((uint32_t)(EDX));
  /* 113983cf push 0x113bde60 */
  push32((uint32_t)(0x113bde60u));
  /* 113983d4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113983d7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113983da lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 113983de push ecx */
  push32((uint32_t)(ECX));
  /* 113983df call 0x1139ce60 */
  push32(0x113983e4u); f_1139ce60();
  /* 113983e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113983e7 jmp 0x11398322 */
  goto L_11398322;
L_113983ec:;
  /* 113983ec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113983ef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_113983f4:;
  /* 113983f4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 113983f7 push eax */
  push32((uint32_t)(EAX));
  /* 113983f8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 113983fb push ecx */
  push32((uint32_t)(ECX));
  /* 113983fc push 0x113bde50 */
  push32((uint32_t)(0x113bde50u));
  /* 11398401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398409 call 0x113955e0 */
  push32(0x1139840eu); f_113955e0();
  /* 1139840e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398414 jne 0x11398417 */
  if (!C.zf) goto L_11398417;
  /* 11398416 int3  */
  x86_unimpl("int3 @ 0x11398416");
L_11398417:;
  /* 11398417 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139841b jne 0x113983f4 */
  if (!C.zf) goto L_113983f4;
  /* 1139841d pop edi */
  EDI = (pop32());
  /* 1139841e pop esi */
  ESI = (pop32());
  /* 1139841f pop ebx */
  EBX = (pop32());
  /* 11398420 mov esp, ebp */
  ESP = (EBP);
  /* 11398422 pop ebp */
  EBP = (pop32());
  /* 11398423 ret  */
  ESPCHK(0x11398310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x11398430 (116 bytes, 46 insns) */
void f_11398430(void) {
  FTRACE(0x11398430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398430 push ebp */
  push32((uint32_t)(EBP));
  /* 11398431 mov ebp, esp */
  EBP = (ESP);
  /* 11398433 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398436 push ebx */
  push32((uint32_t)(EBX));
  /* 11398437 push esi */
  push32((uint32_t)(ESI));
  /* 11398438 push edi */
  push32((uint32_t)(EDI));
  /* 11398439 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1139843c push eax */
  push32((uint32_t)(EAX));
  /* 1139843d call 0x11397db0 */
  push32(0x11398442u); f_11397db0();
  /* 11398442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398445 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398449 jne 0x11398464 */
  if (!C.zf) goto L_11398464;
  /* 1139844b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139844f jne 0x11398464 */
  if (!C.zf) goto L_11398464;
  /* 11398451 mov ecx, dword ptr [0x113c0a84] */
  ECX = (r32((uint32_t)(0x113c0a84)));
  /* 11398457 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1139845a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139845c je 0x1139849b */
  if (C.zf) goto L_1139849b;
  /* 1139845e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398462 je 0x1139849b */
  if (C.zf) goto L_1139849b;
L_11398464:;
  /* 11398464 push 0x113bde68 */
  push32((uint32_t)(0x113bde68u));
  /* 11398469 push 0x113bd834 */
  push32((uint32_t)(0x113bd834u));
  /* 1139846e push 0 */
  push32((uint32_t)(0x0u));
  /* 11398470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398472 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398474 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398476 call 0x113955e0 */
  push32(0x1139847bu); f_113955e0();
  /* 1139847b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139847e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398481 jne 0x11398484 */
  if (!C.zf) goto L_11398484;
  /* 11398483 int3  */
  x86_unimpl("int3 @ 0x11398483");
L_11398484:;
  /* 11398484 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398486 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398488 jne 0x11398464 */
  if (!C.zf) goto L_11398464;
  /* 1139848a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139848c call 0x11398050 */
  push32(0x11398491u); f_11398050();
  /* 11398491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398494 mov eax, 1 */
  EAX = (0x1u);
  /* 11398499 jmp 0x1139849d */
  goto L_1139849d;
L_1139849b:;
  /* 1139849b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139849d:;
  /* 1139849d pop edi */
  EDI = (pop32());
  /* 1139849e pop esi */
  ESI = (pop32());
  /* 1139849f pop ebx */
  EBX = (pop32());
  /* 113984a0 mov esp, ebp */
  ESP = (EBP);
  /* 113984a2 pop ebp */
  EBP = (pop32());
  /* 113984a3 ret  */
  ESPCHK(0x11398430u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x113984b0 (197 bytes, 79 insns) */
void f_113984b0(void) {
  FTRACE(0x113984b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113984b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113984b1 mov ebp, esp */
  EBP = (ESP);
  /* 113984b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113984b4 push ebx */
  push32((uint32_t)(EBX));
  /* 113984b5 push esi */
  push32((uint32_t)(ESI));
  /* 113984b6 push edi */
  push32((uint32_t)(EDI));
  /* 113984b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113984bb jne 0x113984c2 */
  if (!C.zf) goto L_113984c2;
  /* 113984bd jmp 0x1139856e */
  goto L_1139856e;
L_113984c2:;
  /* 113984c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113984c9 jmp 0x113984d4 */
  goto L_113984d4;
L_113984cb:;
  /* 113984cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113984ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113984d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113984d4:;
  /* 113984d4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113984d8 jge 0x1139851e */
  if ((C.sf==C.of)) goto L_1139851e;
L_113984da:;
  /* 113984da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113984dd mov edx, dword ptr [ecx*4 + 0x113c0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0a94)));
  /* 113984e4 push edx */
  push32((uint32_t)(EDX));
  /* 113984e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113984e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113984eb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 113984ef push edx */
  push32((uint32_t)(EDX));
  /* 113984f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113984f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113984f6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 113984fa push edx */
  push32((uint32_t)(EDX));
  /* 113984fb push 0x113bdec4 */
  push32((uint32_t)(0x113bdec4u));
  /* 11398500 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398502 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398504 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398506 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398508 call 0x113955e0 */
  push32(0x1139850du); f_113955e0();
  /* 1139850d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398510 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398513 jne 0x11398516 */
  if (!C.zf) goto L_11398516;
  /* 11398515 int3  */
  x86_unimpl("int3 @ 0x11398515");
L_11398516:;
  /* 11398516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139851a jne 0x113984da */
  if (!C.zf) goto L_113984da;
  /* 1139851c jmp 0x113984cb */
  goto L_113984cb;
L_1139851e:;
  /* 1139851e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398521 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11398524 push edx */
  push32((uint32_t)(EDX));
  /* 11398525 push 0x113bdea0 */
  push32((uint32_t)(0x113bdea0u));
  /* 1139852a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139852c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139852e push 0 */
  push32((uint32_t)(0x0u));
  /* 11398530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398532 call 0x113955e0 */
  push32(0x11398537u); f_113955e0();
  /* 11398537 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139853a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139853d jne 0x11398540 */
  if (!C.zf) goto L_11398540;
  /* 1139853f int3  */
  x86_unimpl("int3 @ 0x1139853f");
L_11398540:;
  /* 11398540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398544 jne 0x1139851e */
  if (!C.zf) goto L_1139851e;
L_11398546:;
  /* 11398546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398549 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1139854c push edx */
  push32((uint32_t)(EDX));
  /* 1139854d push 0x113bde80 */
  push32((uint32_t)(0x113bde80u));
  /* 11398552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398556 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139855a call 0x113955e0 */
  push32(0x1139855fu); f_113955e0();
  /* 1139855f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398562 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398565 jne 0x11398568 */
  if (!C.zf) goto L_11398568;
  /* 11398567 int3  */
  x86_unimpl("int3 @ 0x11398567");
L_11398568:;
  /* 11398568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139856a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139856c jne 0x11398546 */
  if (!C.zf) goto L_11398546;
L_1139856e:;
  /* 1139856e pop edi */
  EDI = (pop32());
  /* 1139856f pop esi */
  ESI = (pop32());
  /* 11398570 pop ebx */
  EBX = (pop32());
  /* 11398571 mov esp, ebp */
  ESP = (EBP);
  /* 11398573 pop ebp */
  EBP = (pop32());
  /* 11398574 ret  */
  ESPCHK(0x113984b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x11398580 (329 bytes, 102 insns) */
void f_11398580(void) {
  FTRACE(0x11398580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398580 push ebp */
  push32((uint32_t)(EBP));
  /* 11398581 mov ebp, esp */
  EBP = (ESP);
  /* 11398583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398586 cmp dword ptr [0x113c4270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139858d jne 0x11398594 */
  if (!C.zf) goto L_11398594;
  /* 1139858f call 0x1139d800 */
  push32(0x11398594u); f_1139d800();
L_11398594:;
  /* 11398594 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1139859b mov eax, dword ptr [0x113c2724] */
  EAX = (r32((uint32_t)(0x113c2724)));
  /* 113985a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113985a3:;
  /* 113985a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113985a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113985a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113985ab je 0x113985d9 */
  if (C.zf) goto L_113985d9;
  /* 113985ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113985b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113985b3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113985b6 je 0x113985c1 */
  if (C.zf) goto L_113985c1;
  /* 113985b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113985bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113985be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113985c1:;
  /* 113985c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113985c4 push eax */
  push32((uint32_t)(EAX));
  /* 113985c5 call 0x11399440 */
  push32(0x113985cau); f_11399440();
  /* 113985ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113985cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113985d0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113985d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113985d7 jmp 0x113985a3 */
  goto L_113985a3;
L_113985d9:;
  /* 113985d9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 113985db push 0x113bdee4 */
  push32((uint32_t)(0x113bdee4u));
  /* 113985e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113985e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113985e5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 113985ec push ecx */
  push32((uint32_t)(ECX));
  /* 113985ed call 0x11396610 */
  push32(0x113985f2u); f_11396610();
  /* 113985f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113985f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113985f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113985fb mov dword ptr [0x113c2758], edx */
  w32((uint32_t)(0x113c2758), (EDX));
  /* 11398601 cmp dword ptr [0x113c2758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398608 jne 0x11398614 */
  if (!C.zf) goto L_11398614;
  /* 1139860a push 9 */
  push32((uint32_t)(0x9u));
  /* 1139860c call 0x11395490 */
  push32(0x11398611u); f_11395490();
  /* 11398611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11398614:;
  /* 11398614 mov eax, dword ptr [0x113c2724] */
  EAX = (r32((uint32_t)(0x113c2724)));
  /* 11398619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139861c jmp 0x11398627 */
  goto L_11398627;
L_1139861e:;
  /* 1139861e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398621 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398624 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11398627:;
  /* 11398627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139862a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139862d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139862f je 0x11398697 */
  if (C.zf) goto L_11398697;
  /* 11398631 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398634 push ecx */
  push32((uint32_t)(ECX));
  /* 11398635 call 0x11399440 */
  push32(0x1139863au); f_11399440();
  /* 1139863a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139863d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398640 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11398643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398646 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11398649 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139864c je 0x11398695 */
  if (C.zf) goto L_11398695;
  /* 1139864e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11398650 push 0x113bdee4 */
  push32((uint32_t)(0x113bdee4u));
  /* 11398655 push 2 */
  push32((uint32_t)(0x2u));
  /* 11398657 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139865a push ecx */
  push32((uint32_t)(ECX));
  /* 1139865b call 0x11396610 */
  push32(0x11398660u); f_11396610();
  /* 11398660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398663 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398666 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11398668 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139866b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139866e jne 0x1139867a */
  if (!C.zf) goto L_1139867a;
  /* 11398670 push 9 */
  push32((uint32_t)(0x9u));
  /* 11398672 call 0x11395490 */
  push32(0x11398677u); f_11395490();
  /* 11398677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139867a:;
  /* 1139867a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139867d push ecx */
  push32((uint32_t)(ECX));
  /* 1139867e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398681 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11398683 push eax */
  push32((uint32_t)(EAX));
  /* 11398684 call 0x113995c0 */
  push32(0x11398689u); f_113995c0();
  /* 11398689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139868c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139868f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11398695:;
  /* 11398695 jmp 0x1139861e */
  goto L_1139861e;
L_11398697:;
  /* 11398697 push 2 */
  push32((uint32_t)(0x2u));
  /* 11398699 mov edx, dword ptr [0x113c2724] */
  EDX = (r32((uint32_t)(0x113c2724)));
  /* 1139869f push edx */
  push32((uint32_t)(EDX));
  /* 113986a0 call 0x113970a0 */
  push32(0x113986a5u); f_113970a0();
  /* 113986a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113986a8 mov dword ptr [0x113c2724], 0 */
  w32((uint32_t)(0x113c2724), (0x0u));
  /* 113986b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113986b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113986bb mov dword ptr [0x113c4260], 1 */
  w32((uint32_t)(0x113c4260), (0x1u));
  /* 113986c5 mov esp, ebp */
  ESP = (EBP);
  /* 113986c7 pop ebp */
  EBP = (pop32());
  /* 113986c8 ret  */
  ESPCHK(0x11398580u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x113986d0 (216 bytes, 69 insns) */
void f_113986d0(void) {
  FTRACE(0x113986d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113986d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113986d1 mov ebp, esp */
  EBP = (ESP);
  /* 113986d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113986d6 cmp dword ptr [0x113c4270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113986dd jne 0x113986e4 */
  if (!C.zf) goto L_113986e4;
  /* 113986df call 0x1139d800 */
  push32(0x113986e4u); f_1139d800();
L_113986e4:;
  /* 113986e4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113986e9 push 0x113c2794 */
  push32((uint32_t)(0x113c2794u));
  /* 113986ee push 0 */
  push32((uint32_t)(0x0u));
  /* 113986f0 call dword ptr [0x113c52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52d8))), 0x113986f6u);
  /* 113986f6 mov dword ptr [0x113c2768], 0x113c2794 */
  w32((uint32_t)(0x113c2768), (0x113c2794u));
  /* 11398700 mov eax, dword ptr [0x113c428c] */
  EAX = (r32((uint32_t)(0x113c428c)));
  /* 11398705 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11398708 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139870a jne 0x11398717 */
  if (!C.zf) goto L_11398717;
  /* 1139870c mov edx, dword ptr [0x113c2768] */
  EDX = (r32((uint32_t)(0x113c2768)));
  /* 11398712 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11398715 jmp 0x1139871f */
  goto L_1139871f;
L_11398717:;
  /* 11398717 mov eax, dword ptr [0x113c428c] */
  EAX = (r32((uint32_t)(0x113c428c)));
  /* 1139871c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1139871f:;
  /* 1139871f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398722 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11398725 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11398728 push edx */
  push32((uint32_t)(EDX));
  /* 11398729 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1139872c push eax */
  push32((uint32_t)(EAX));
  /* 1139872d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139872f push 0 */
  push32((uint32_t)(0x0u));
  /* 11398731 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398734 push ecx */
  push32((uint32_t)(ECX));
  /* 11398735 call 0x113987b0 */
  push32(0x1139873au); f_113987b0();
  /* 1139873a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139873d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11398742 push 0x113bdef0 */
  push32((uint32_t)(0x113bdef0u));
  /* 11398747 push 2 */
  push32((uint32_t)(0x2u));
  /* 11398749 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139874c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139874f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11398752 push ecx */
  push32((uint32_t)(ECX));
  /* 11398753 call 0x11396610 */
  push32(0x11398758u); f_11396610();
  /* 11398758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139875b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139875e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398762 jne 0x1139876e */
  if (!C.zf) goto L_1139876e;
  /* 11398764 push 8 */
  push32((uint32_t)(0x8u));
  /* 11398766 call 0x11395490 */
  push32(0x1139876bu); f_11395490();
  /* 1139876b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139876e:;
  /* 1139876e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11398771 push edx */
  push32((uint32_t)(EDX));
  /* 11398772 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11398775 push eax */
  push32((uint32_t)(EAX));
  /* 11398776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398779 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139877c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1139877f push eax */
  push32((uint32_t)(EAX));
  /* 11398780 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398783 push ecx */
  push32((uint32_t)(ECX));
  /* 11398784 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398787 push edx */
  push32((uint32_t)(EDX));
  /* 11398788 call 0x113987b0 */
  push32(0x1139878du); f_113987b0();
  /* 1139878d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398790 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398793 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398796 mov dword ptr [0x113c274c], eax */
  w32((uint32_t)(0x113c274c), (EAX));
  /* 1139879b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139879e mov dword ptr [0x113c2750], ecx */
  w32((uint32_t)(0x113c2750), (ECX));
  /* 113987a4 mov esp, ebp */
  ESP = (EBP);
  /* 113987a6 pop ebp */
  EBP = (pop32());
  /* 113987a7 ret  */
  ESPCHK(0x113986d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x113987b0 (1060 bytes, 360 insns) */
void f_113987b0(void) {
  FTRACE(0x113987b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113987b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113987b1 mov ebp, esp */
  EBP = (ESP);
  /* 113987b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113987b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113987b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113987bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113987c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 113987c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113987cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113987ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113987d2 je 0x113987e5 */
  if (C.zf) goto L_113987e5;
  /* 113987d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113987d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113987da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113987dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113987df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113987e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_113987e5:;
  /* 113987e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113987e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113987eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113987ee jne 0x113988bd */
  if (!C.zf) goto L_113988bd;
L_113987f4:;
  /* 113987f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113987f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113987fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113987fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398800 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11398803 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398806 je 0x11398882 */
  if (C.zf) goto L_11398882;
  /* 11398808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139880b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139880e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398810 je 0x11398882 */
  if (C.zf) goto L_11398882;
  /* 11398812 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398815 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398817 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11398819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139881b mov al, byte ptr [edx + 0x113c3fc1] */
  AL = (r8((uint32_t)(EDX + 0x113c3fc1)));
  /* 11398821 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11398824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398826 je 0x11398857 */
  if (C.zf) goto L_11398857;
  /* 11398828 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139882b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139882d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398830 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398833 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11398835 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398839 je 0x11398857 */
  if (C.zf) goto L_11398857;
  /* 1139883b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139883e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398841 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11398843 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11398845 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398848 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139884b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1139884e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398851 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398854 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11398857:;
  /* 11398857 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139885a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139885c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139885f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398862 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11398864 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398868 je 0x1139887d */
  if (C.zf) goto L_1139887d;
  /* 1139886a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139886d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398870 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11398872 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11398874 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398877 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139887a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1139887d:;
  /* 1139887d jmp 0x113987f4 */
  goto L_113987f4;
L_11398882:;
  /* 11398882 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398885 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11398887 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139888a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139888d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1139888f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398893 je 0x113988a4 */
  if (C.zf) goto L_113988a4;
  /* 11398895 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398898 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1139889b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139889e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113988a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_113988a4:;
  /* 113988a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113988a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113988aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113988ad jne 0x113988b8 */
  if (!C.zf) goto L_113988b8;
  /* 113988af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113988b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113988b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113988b8:;
  /* 113988b8 jmp 0x1139898c */
  goto L_1139898c;
L_113988bd:;
  /* 113988bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113988c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113988c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113988c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113988c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113988ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113988ce je 0x113988e3 */
  if (C.zf) goto L_113988e3;
  /* 113988d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113988d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113988d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113988d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113988da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113988dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113988e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113988e3:;
  /* 113988e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113988e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113988e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 113988eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113988ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113988f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113988f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113988f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113988fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113988ff mov dl, byte ptr [ecx + 0x113c3fc1] */
  DL = (r8((uint32_t)(ECX + 0x113c3fc1)));
  /* 11398905 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11398908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139890a je 0x1139893b */
  if (C.zf) goto L_1139893b;
  /* 1139890c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139890f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11398911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398914 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398917 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11398919 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139891d je 0x11398932 */
  if (C.zf) goto L_11398932;
  /* 1139891f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398925 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11398927 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11398929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139892c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139892f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11398932:;
  /* 11398932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398938 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1139893b:;
  /* 1139893b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139893e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11398944 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398947 je 0x11398967 */
  if (C.zf) goto L_11398967;
  /* 11398949 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139894c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11398951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398953 je 0x11398967 */
  if (C.zf) goto L_11398967;
  /* 11398955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398958 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139895e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398961 jne 0x113988bd */
  if (!C.zf) goto L_113988bd;
L_11398967:;
  /* 11398967 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139896a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11398970 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398972 jne 0x1139897f */
  if (!C.zf) goto L_1139897f;
  /* 11398974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398977 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139897a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139897d jmp 0x1139898c */
  goto L_1139898c;
L_1139897f:;
  /* 1139897f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398983 je 0x1139898c */
  if (C.zf) goto L_1139898c;
  /* 11398985 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398988 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1139898c:;
  /* 1139898c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11398993:;
  /* 11398993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398996 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11398999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139899b je 0x113989be */
  if (C.zf) goto L_113989be;
L_1139899d:;
  /* 1139899d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113989a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113989a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113989a6 je 0x113989b3 */
  if (C.zf) goto L_113989b3;
  /* 113989a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113989ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113989ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113989b1 jne 0x113989be */
  if (!C.zf) goto L_113989be;
L_113989b3:;
  /* 113989b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113989b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113989b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113989bc jmp 0x1139899d */
  goto L_1139899d;
L_113989be:;
  /* 113989be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113989c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113989c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113989c6 jne 0x113989cd */
  if (!C.zf) goto L_113989cd;
  /* 113989c8 jmp 0x11398bab */
  goto L_11398bab;
L_113989cd:;
  /* 113989cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113989d1 je 0x113989e4 */
  if (C.zf) goto L_113989e4;
  /* 113989d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113989d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113989d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113989db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113989de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113989e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113989e4:;
  /* 113989e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113989e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113989e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113989ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113989ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_113989f1:;
  /* 113989f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113989f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113989ff:;
  /* 113989ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398a02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11398a05 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a08 jne 0x11398a1e */
  if (!C.zf) goto L_11398a1e;
  /* 11398a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398a0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11398a13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398a16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398a19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11398a1c jmp 0x113989ff */
  goto L_113989ff;
L_11398a1e:;
  /* 11398a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398a21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11398a24 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a27 jne 0x11398a7a */
  if (!C.zf) goto L_11398a7a;
  /* 11398a29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398a2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398a2e mov ecx, 2 */
  ECX = (0x2u);
  /* 11398a33 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11398a35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398a37 jne 0x11398a72 */
  if (!C.zf) goto L_11398a72;
  /* 11398a39 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a3d je 0x11398a5f */
  if (C.zf) goto L_11398a5f;
  /* 11398a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398a42 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11398a46 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a49 jne 0x11398a56 */
  if (!C.zf) goto L_11398a56;
  /* 11398a4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398a4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398a51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11398a54 jmp 0x11398a5d */
  goto L_11398a5d;
L_11398a56:;
  /* 11398a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11398a5d:;
  /* 11398a5d jmp 0x11398a66 */
  goto L_11398a66;
L_11398a5f:;
  /* 11398a5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11398a66:;
  /* 11398a66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398a68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a6c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11398a6f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11398a72:;
  /* 11398a72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398a75 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11398a77 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11398a7a:;
  /* 11398a7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398a7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398a80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398a83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11398a86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11398a88 je 0x11398aae */
  if (C.zf) goto L_11398aae;
  /* 11398a8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398a8e je 0x11398a9f */
  if (C.zf) goto L_11398a9f;
  /* 11398a90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398a93 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11398a96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398a99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398a9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11398a9f:;
  /* 11398a9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398aa2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11398aa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398aa7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398aaa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11398aac jmp 0x11398a7a */
  goto L_11398a7a;
L_11398aae:;
  /* 11398aae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398ab1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11398ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398ab6 je 0x11398ad4 */
  if (C.zf) goto L_11398ad4;
  /* 11398ab8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398abc jne 0x11398ad9 */
  if (!C.zf) goto L_11398ad9;
  /* 11398abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398ac1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11398ac4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398ac7 je 0x11398ad4 */
  if (C.zf) goto L_11398ad4;
  /* 11398ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398acc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11398acf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398ad2 jne 0x11398ad9 */
  if (!C.zf) goto L_11398ad9;
L_11398ad4:;
  /* 11398ad4 jmp 0x11398b84 */
  goto L_11398b84;
L_11398ad9:;
  /* 11398ad9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398add je 0x11398b76 */
  if (C.zf) goto L_11398b76;
  /* 11398ae3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398ae7 je 0x11398b3d */
  if (C.zf) goto L_11398b3d;
  /* 11398ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398aee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11398af0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11398af2 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 11398af8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11398afb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11398afd je 0x11398b28 */
  if (C.zf) goto L_11398b28;
  /* 11398aff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b05 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11398b07 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11398b09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b0f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11398b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11398b1b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11398b20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b26 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11398b28:;
  /* 11398b28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b2e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11398b30 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11398b32 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b38 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11398b3b jmp 0x11398b69 */
  goto L_11398b69;
L_11398b3d:;
  /* 11398b3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398b42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11398b44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11398b46 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 11398b4c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11398b4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11398b51 je 0x11398b69 */
  if (C.zf) goto L_11398b69;
  /* 11398b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11398b5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11398b61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11398b69:;
  /* 11398b69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11398b6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11398b76:;
  /* 11398b76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398b79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11398b7f jmp 0x113989f1 */
  goto L_113989f1;
L_11398b84:;
  /* 11398b84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398b88 je 0x11398b99 */
  if (C.zf) goto L_11398b99;
  /* 11398b8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b8d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11398b90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11398b93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398b96 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11398b99:;
  /* 11398b99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398b9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11398b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398ba1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11398ba4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11398ba6 jmp 0x11398993 */
  goto L_11398993;
L_11398bab:;
  /* 11398bab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398baf je 0x11398bc3 */
  if (C.zf) goto L_11398bc3;
  /* 11398bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11398bb4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11398bba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11398bbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398bc0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11398bc3:;
  /* 11398bc3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11398bc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11398bc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398bcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11398bce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11398bd0 mov esp, ebp */
  ESP = (EBP);
  /* 11398bd2 pop ebp */
  EBP = (pop32());
  /* 11398bd3 ret  */
  ESPCHK(0x113987b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008be0 @ 0x11398be0 (537 bytes, 173 insns) */
void f_11398be0(void) {
  FTRACE(0x11398be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11398be1 mov ebp, esp */
  EBP = (ESP);
  /* 11398be3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398be6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11398bed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11398bf4 cmp dword ptr [0x113c2898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398bfb jne 0x11398c3a */
  if (!C.zf) goto L_11398c3a;
  /* 11398bfd call dword ptr [0x113c5374] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5374))), 0x11398c03u);
  /* 11398c03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11398c06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398c0a je 0x11398c18 */
  if (C.zf) goto L_11398c18;
  /* 11398c0c mov dword ptr [0x113c2898], 1 */
  w32((uint32_t)(0x113c2898), (0x1u));
  /* 11398c16 jmp 0x11398c3a */
  goto L_11398c3a;
L_11398c18:;
  /* 11398c18 call dword ptr [0x113c5378] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5378))), 0x11398c1eu);
  /* 11398c1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11398c21 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398c25 je 0x11398c33 */
  if (C.zf) goto L_11398c33;
  /* 11398c27 mov dword ptr [0x113c2898], 2 */
  w32((uint32_t)(0x113c2898), (0x2u));
  /* 11398c31 jmp 0x11398c3a */
  goto L_11398c3a;
L_11398c33:;
  /* 11398c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398c35 jmp 0x11398df5 */
  goto L_11398df5;
L_11398c3a:;
  /* 11398c3a cmp dword ptr [0x113c2898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398c41 jne 0x11398d3e */
  if (!C.zf) goto L_11398d3e;
  /* 11398c47 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398c4b jne 0x11398c63 */
  if (!C.zf) goto L_11398c63;
  /* 11398c4d call dword ptr [0x113c5374] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5374))), 0x11398c53u);
  /* 11398c53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11398c56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398c5a jne 0x11398c63 */
  if (!C.zf) goto L_11398c63;
  /* 11398c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398c5e jmp 0x11398df5 */
  goto L_11398df5;
L_11398c63:;
  /* 11398c63 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398c66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11398c69:;
  /* 11398c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398c6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398c6e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11398c71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398c73 je 0x11398c95 */
  if (C.zf) goto L_11398c95;
  /* 11398c75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398c78 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398c7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11398c7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11398c83 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11398c86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398c88 jne 0x11398c93 */
  if (!C.zf) goto L_11398c93;
  /* 11398c8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398c8d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398c90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11398c93:;
  /* 11398c93 jmp 0x11398c69 */
  goto L_11398c69;
L_11398c95:;
  /* 11398c95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398c98 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398c9b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11398c9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398ca0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11398ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398cab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398cae push edx */
  push32((uint32_t)(EDX));
  /* 11398caf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398cb2 push eax */
  push32((uint32_t)(EAX));
  /* 11398cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398cb7 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x11398cbdu);
  /* 11398cbd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11398cc0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398cc4 je 0x11398ce4 */
  if (C.zf) goto L_11398ce4;
  /* 11398cc6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11398cc8 push 0x113bdefc */
  push32((uint32_t)(0x113bdefcu));
  /* 11398ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 11398ccf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11398cd3 call 0x11396610 */
  push32(0x11398cd8u); f_11396610();
  /* 11398cd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11398cde cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398ce2 jne 0x11398cf5 */
  if (!C.zf) goto L_11398cf5;
L_11398ce4:;
  /* 11398ce4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11398ce8 call dword ptr [0x113c5380] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5380))), 0x11398ceeu);
  /* 11398cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398cf0 jmp 0x11398df5 */
  goto L_11398df5;
L_11398cf5:;
  /* 11398cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398cf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398cfc push eax */
  push32((uint32_t)(EAX));
  /* 11398cfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398d00 push ecx */
  push32((uint32_t)(ECX));
  /* 11398d01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398d04 push edx */
  push32((uint32_t)(EDX));
  /* 11398d05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398d08 push eax */
  push32((uint32_t)(EAX));
  /* 11398d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11398d0d call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x11398d13u);
  /* 11398d13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398d15 jne 0x11398d2c */
  if (!C.zf) goto L_11398d2c;
  /* 11398d17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11398d19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398d1c push ecx */
  push32((uint32_t)(ECX));
  /* 11398d1d call 0x113970a0 */
  push32(0x11398d22u); f_113970a0();
  /* 11398d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398d25 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11398d2c:;
  /* 11398d2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11398d2f push edx */
  push32((uint32_t)(EDX));
  /* 11398d30 call dword ptr [0x113c5380] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5380))), 0x11398d36u);
  /* 11398d36 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398d39 jmp 0x11398df5 */
  goto L_11398df5;
L_11398d3e:;
  /* 11398d3e cmp dword ptr [0x113c2898], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2898))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398d45 jne 0x11398df3 */
  if (!C.zf) goto L_11398df3;
  /* 11398d4b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398d4f jne 0x11398d67 */
  if (!C.zf) goto L_11398d67;
  /* 11398d51 call dword ptr [0x113c5378] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5378))), 0x11398d57u);
  /* 11398d57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11398d5a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398d5e jne 0x11398d67 */
  if (!C.zf) goto L_11398d67;
  /* 11398d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398d62 jmp 0x11398df5 */
  goto L_11398df5;
L_11398d67:;
  /* 11398d67 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398d6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11398d6d:;
  /* 11398d6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398d70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11398d73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398d75 je 0x11398d95 */
  if (C.zf) goto L_11398d95;
  /* 11398d77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398d7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398d7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11398d80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398d83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11398d86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11398d88 jne 0x11398d93 */
  if (!C.zf) goto L_11398d93;
  /* 11398d8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398d8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398d90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11398d93:;
  /* 11398d93 jmp 0x11398d6d */
  goto L_11398d6d;
L_11398d95:;
  /* 11398d95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398d98 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398d9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398d9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11398da1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11398da6 push 0x113bdefc */
  push32((uint32_t)(0x113bdefcu));
  /* 11398dab push 2 */
  push32((uint32_t)(0x2u));
  /* 11398dad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398db0 push edx */
  push32((uint32_t)(EDX));
  /* 11398db1 call 0x11396610 */
  push32(0x11398db6u); f_11396610();
  /* 11398db6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398db9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11398dbc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398dc0 jne 0x11398dd0 */
  if (!C.zf) goto L_11398dd0;
  /* 11398dc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11398dc6 call dword ptr [0x113c5384] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5384))), 0x11398dccu);
  /* 11398dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398dce jmp 0x11398df5 */
  goto L_11398df5;
L_11398dd0:;
  /* 11398dd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11398dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11398dd4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11398dd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398ddb push eax */
  push32((uint32_t)(EAX));
  /* 11398ddc call 0x1139d830 */
  push32(0x11398de1u); f_1139d830();
  /* 11398de1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398de4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11398de7 push ecx */
  push32((uint32_t)(ECX));
  /* 11398de8 call dword ptr [0x113c5384] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5384))), 0x11398deeu);
  /* 11398dee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11398df1 jmp 0x11398df5 */
  goto L_11398df5;
L_11398df3:;
  /* 11398df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11398df5:;
  /* 11398df5 mov esp, ebp */
  ESP = (EBP);
  /* 11398df7 pop ebp */
  EBP = (pop32());
  /* 11398df8 ret  */
  ESPCHK(0x11398be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x11398e00 (77 bytes, 25 insns) */
void f_11398e00(void) {
  FTRACE(0x11398e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11398e01 mov ebp, esp */
  EBP = (ESP);
  /* 11398e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398e05 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11398e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398e0c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398e10 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11398e13 push eax */
  push32((uint32_t)(EAX));
  /* 11398e14 call dword ptr [0x113c536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c536c))), 0x11398e1au);
  /* 11398e1a mov dword ptr [0x113c40ec], eax */
  w32((uint32_t)(0x113c40ec), (EAX));
  /* 11398e1f cmp dword ptr [0x113c40ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c40ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398e26 jne 0x11398e2c */
  if (!C.zf) goto L_11398e2c;
  /* 11398e28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398e2a jmp 0x11398e4b */
  goto L_11398e4b;
L_11398e2c:;
  /* 11398e2c call 0x1139b1f0 */
  push32(0x11398e31u); f_1139b1f0();
  /* 11398e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11398e33 jne 0x11398e46 */
  if (!C.zf) goto L_11398e46;
  /* 11398e35 mov ecx, dword ptr [0x113c40ec] */
  ECX = (r32((uint32_t)(0x113c40ec)));
  /* 11398e3b push ecx */
  push32((uint32_t)(ECX));
  /* 11398e3c call dword ptr [0x113c5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5370))), 0x11398e42u);
  /* 11398e42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11398e44 jmp 0x11398e4b */
  goto L_11398e4b;
L_11398e46:;
  /* 11398e46 mov eax, 1 */
  EAX = (0x1u);
L_11398e4b:;
  /* 11398e4b pop ebp */
  EBP = (pop32());
  /* 11398e4c ret  */
  ESPCHK(0x11398e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x11398e50 (156 bytes, 48 insns) */
void f_11398e50(void) {
  FTRACE(0x11398e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11398e51 mov ebp, esp */
  EBP = (ESP);
  /* 11398e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398e56 mov eax, dword ptr [0x113c40e8] */
  EAX = (r32((uint32_t)(0x113c40e8)));
  /* 11398e5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11398e5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11398e65 jmp 0x11398e70 */
  goto L_11398e70;
L_11398e67:;
  /* 11398e67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398e6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398e6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11398e70:;
  /* 11398e70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11398e73 cmp edx, dword ptr [0x113c40e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c40e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398e79 jge 0x11398ec6 */
  if ((C.sf==C.of)) goto L_11398ec6;
  /* 11398e7b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11398e80 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11398e85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398e88 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11398e8b push ecx */
  push32((uint32_t)(ECX));
  /* 11398e8c call dword ptr [0x113c5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5364))), 0x11398e92u);
  /* 11398e92 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11398e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398e99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398e9c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11398e9f push eax */
  push32((uint32_t)(EAX));
  /* 11398ea0 call dword ptr [0x113c5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5364))), 0x11398ea6u);
  /* 11398ea6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398ea9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11398eac push edx */
  push32((uint32_t)(EDX));
  /* 11398ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11398eaf mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 11398eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11398eb5 call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x11398ebbu);
  /* 11398ebb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398ebe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398ec1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11398ec4 jmp 0x11398e67 */
  goto L_11398e67;
L_11398ec6:;
  /* 11398ec6 mov edx, dword ptr [0x113c40e8] */
  EDX = (r32((uint32_t)(0x113c40e8)));
  /* 11398ecc push edx */
  push32((uint32_t)(EDX));
  /* 11398ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11398ecf mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 11398ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11398ed5 call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x11398edbu);
  /* 11398edb mov ecx, dword ptr [0x113c40ec] */
  ECX = (r32((uint32_t)(0x113c40ec)));
  /* 11398ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 11398ee2 call dword ptr [0x113c5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5370))), 0x11398ee8u);
  /* 11398ee8 mov esp, ebp */
  ESP = (EBP);
  /* 11398eea pop ebp */
  EBP = (pop32());
  /* 11398eeb ret  */
  ESPCHK(0x11398e50u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11398ef0 (73 bytes, 19 insns) */
void f_11398ef0(void) {
  FTRACE(0x11398ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11398ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11398ef3 cmp dword ptr [0x113c272c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398efa je 0x11398f0e */
  if (C.zf) goto L_11398f0e;
  /* 11398efc cmp dword ptr [0x113c272c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f03 jne 0x11398f37 */
  if (!C.zf) goto L_11398f37;
  /* 11398f05 cmp dword ptr [0x113c2730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f0c jne 0x11398f37 */
  if (!C.zf) goto L_11398f37;
L_11398f0e:;
  /* 11398f0e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11398f13 call 0x11398f40 */
  push32(0x11398f18u); f_11398f40();
  /* 11398f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398f1b cmp dword ptr [0x113c289c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c289c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f22 je 0x11398f2a */
  if (C.zf) goto L_11398f2a;
  /* 11398f24 call dword ptr [0x113c289c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c289c))), 0x11398f2au);
L_11398f2a:;
  /* 11398f2a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11398f2f call 0x11398f40 */
  push32(0x11398f34u); f_11398f40();
  /* 11398f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11398f37:;
  /* 11398f37 pop ebp */
  EBP = (pop32());
  /* 11398f38 ret  */
  ESPCHK(0x11398ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f40 @ 0x11398f40 (447 bytes, 131 insns) */
void f_11398f40(void) {
  FTRACE(0x11398f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11398f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11398f41 mov ebp, esp */
  EBP = (ESP);
  /* 11398f43 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11398f49 push ebx */
  push32((uint32_t)(EBX));
  /* 11398f4a push esi */
  push32((uint32_t)(ESI));
  /* 11398f4b push edi */
  push32((uint32_t)(EDI));
  /* 11398f4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11398f53 jmp 0x11398f5e */
  goto L_11398f5e;
L_11398f55:;
  /* 11398f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398f58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11398f5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11398f5e:;
  /* 11398f5e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f62 jae 0x11398f77 */
  if (!C.cf) goto L_11398f77;
  /* 11398f64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398f67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398f6a cmp edx, dword ptr [ecx*8 + 0x113c0ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x113c0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f71 jne 0x11398f75 */
  if (!C.zf) goto L_11398f75;
  /* 11398f73 jmp 0x11398f77 */
  goto L_11398f77;
L_11398f75:;
  /* 11398f75 jmp 0x11398f55 */
  goto L_11398f55;
L_11398f77:;
  /* 11398f77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11398f7d cmp ecx, dword ptr [eax*8 + 0x113c0ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113c0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f84 jne 0x113990f8 */
  if (!C.zf) goto L_113990f8;
  /* 11398f8a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398f91 je 0x11398fb4 */
  if (C.zf) goto L_11398fb4;
  /* 11398f93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398f96 mov eax, dword ptr [edx*8 + 0x113c0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113c0ab4)));
  /* 11398f9d push eax */
  push32((uint32_t)(EAX));
  /* 11398f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11398fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11398fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11398fa6 call 0x113955e0 */
  push32(0x11398fabu); f_113955e0();
  /* 11398fab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398fae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398fb1 jne 0x11398fb4 */
  if (!C.zf) goto L_11398fb4;
  /* 11398fb3 int3  */
  x86_unimpl("int3 @ 0x11398fb3");
L_11398fb4:;
  /* 11398fb4 cmp dword ptr [0x113c272c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398fbb je 0x11398fcf */
  if (C.zf) goto L_11398fcf;
  /* 11398fbd cmp dword ptr [0x113c272c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c272c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398fc4 jne 0x11399008 */
  if (!C.zf) goto L_11399008;
  /* 11398fc6 cmp dword ptr [0x113c2730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11398fcd jne 0x11399008 */
  if (!C.zf) goto L_11399008;
L_11398fcf:;
  /* 11398fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11398fd1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11398fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11398fd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398fd8 mov eax, dword ptr [edx*8 + 0x113c0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113c0ab4)));
  /* 11398fdf push eax */
  push32((uint32_t)(EAX));
  /* 11398fe0 call 0x11399440 */
  push32(0x11398fe5u); f_11399440();
  /* 11398fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11398fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11398fe9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11398fec mov edx, dword ptr [ecx*8 + 0x113c0ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x113c0ab4)));
  /* 11398ff3 push edx */
  push32((uint32_t)(EDX));
  /* 11398ff4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11398ff6 call dword ptr [0x113c53b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b0))), 0x11398ffcu);
  /* 11398ffc push eax */
  push32((uint32_t)(EAX));
  /* 11398ffd call dword ptr [0x113c53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b4))), 0x11399003u);
  /* 11399003 jmp 0x113990f8 */
  goto L_113990f8;
L_11399008:;
  /* 11399008 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139900f je 0x113990f8 */
  if (C.zf) goto L_113990f8;
  /* 11399015 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1139901a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11399020 push eax */
  push32((uint32_t)(EAX));
  /* 11399021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11399023 call dword ptr [0x113c52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52d8))), 0x11399029u);
  /* 11399029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139902b jne 0x11399041 */
  if (!C.zf) goto L_11399041;
  /* 1139902d push 0x113bd764 */
  push32((uint32_t)(0x113bd764u));
  /* 11399032 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11399038 push ecx */
  push32((uint32_t)(ECX));
  /* 11399039 call 0x113995c0 */
  push32(0x1139903eu); f_113995c0();
  /* 1139903e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399041:;
  /* 11399041 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11399047 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1139904a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139904d push eax */
  push32((uint32_t)(EAX));
  /* 1139904e call 0x11399440 */
  push32(0x11399053u); f_11399440();
  /* 11399053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399056 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399059 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139905c jbe 0x1139908a */
  if ((C.cf||C.zf)) goto L_1139908a;
  /* 1139905e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11399064 push ecx */
  push32((uint32_t)(ECX));
  /* 11399065 call 0x11399440 */
  push32(0x1139906au); f_11399440();
  /* 1139906a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139906d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399070 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11399074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399077 push 3 */
  push32((uint32_t)(0x3u));
  /* 11399079 push 0x113bd760 */
  push32((uint32_t)(0x113bd760u));
  /* 1139907e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399081 push ecx */
  push32((uint32_t)(ECX));
  /* 11399082 call 0x11399e30 */
  push32(0x11399087u); f_11399e30();
  /* 11399087 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139908a:;
  /* 1139908a push 0x113be1b8 */
  push32((uint32_t)(0x113be1b8u));
  /* 1139908f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11399095 push edx */
  push32((uint32_t)(EDX));
  /* 11399096 call 0x113995c0 */
  push32(0x1139909bu); f_113995c0();
  /* 1139909b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139909e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113990a1 push eax */
  push32((uint32_t)(EAX));
  /* 113990a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 113990a8 push ecx */
  push32((uint32_t)(ECX));
  /* 113990a9 call 0x113995d0 */
  push32(0x113990aeu); f_113995d0();
  /* 113990ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113990b1 push 0x113bd6d8 */
  push32((uint32_t)(0x113bd6d8u));
  /* 113990b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 113990bc push edx */
  push32((uint32_t)(EDX));
  /* 113990bd call 0x113995d0 */
  push32(0x113990c2u); f_113995d0();
  /* 113990c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113990c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113990c8 mov ecx, dword ptr [eax*8 + 0x113c0ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x113c0ab4)));
  /* 113990cf push ecx */
  push32((uint32_t)(ECX));
  /* 113990d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 113990d6 push edx */
  push32((uint32_t)(EDX));
  /* 113990d7 call 0x113995d0 */
  push32(0x113990dcu); f_113995d0();
  /* 113990dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113990df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 113990e4 push 0x113be190 */
  push32((uint32_t)(0x113be190u));
  /* 113990e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 113990ef push eax */
  push32((uint32_t)(EAX));
  /* 113990f0 call 0x11399d70 */
  push32(0x113990f5u); f_11399d70();
  /* 113990f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113990f8:;
  /* 113990f8 pop edi */
  EDI = (pop32());
  /* 113990f9 pop esi */
  ESI = (pop32());
  /* 113990fa pop ebx */
  EBX = (pop32());
  /* 113990fb mov esp, ebp */
  ESP = (EBP);
  /* 113990fd pop ebp */
  EBP = (pop32());
  /* 113990fe ret  */
  ESPCHK(0x11398f40u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11399100 (80 bytes, 27 insns) */
void f_11399100(void) {
  FTRACE(0x11399100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399100 push ebp */
  push32((uint32_t)(EBP));
  /* 11399101 mov ebp, esp */
  EBP = (ESP);
  /* 11399103 push ecx */
  push32((uint32_t)(ECX));
  /* 11399104 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139910b jmp 0x11399116 */
  goto L_11399116;
L_1139910d:;
  /* 1139910d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399110 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399113 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11399116:;
  /* 11399116 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139911a jae 0x1139912f */
  if (!C.cf) goto L_1139912f;
  /* 1139911c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139911f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399122 cmp edx, dword ptr [ecx*8 + 0x113c0ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x113c0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399129 jne 0x1139912d */
  if (!C.zf) goto L_1139912d;
  /* 1139912b jmp 0x1139912f */
  goto L_1139912f;
L_1139912d:;
  /* 1139912d jmp 0x1139910d */
  goto L_1139910d;
L_1139912f:;
  /* 1139912f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399135 cmp ecx, dword ptr [eax*8 + 0x113c0ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113c0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139913c jne 0x1139914a */
  if (!C.zf) goto L_1139914a;
  /* 1139913e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399141 mov eax, dword ptr [edx*8 + 0x113c0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113c0ab4)));
  /* 11399148 jmp 0x1139914c */
  goto L_1139914c;
L_1139914a:;
  /* 1139914a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139914c:;
  /* 1139914c mov esp, ebp */
  ESP = (EBP);
  /* 1139914e pop ebp */
  EBP = (pop32());
  /* 1139914f ret  */
  ESPCHK(0x11399100u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11399150 (66 bytes, 28 insns) */
void f_11399150(void) {
  FTRACE(0x11399150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399150 push ebp */
  push32((uint32_t)(EBP));
  /* 11399151 mov ebp, esp */
  EBP = (ESP);
  /* 11399153 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399157 jne 0x11399177 */
  if (!C.zf) goto L_11399177;
  /* 11399159 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139915d jge 0x11399177 */
  if ((C.sf==C.of)) goto L_11399177;
  /* 1139915f push 1 */
  push32((uint32_t)(0x1u));
  /* 11399161 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399164 push eax */
  push32((uint32_t)(EAX));
  /* 11399165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399168 push ecx */
  push32((uint32_t)(ECX));
  /* 11399169 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139916c push edx */
  push32((uint32_t)(EDX));
  /* 1139916d call 0x113991a0 */
  push32(0x11399172u); f_113991a0();
  /* 11399172 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399175 jmp 0x1139918d */
  goto L_1139918d;
L_11399177:;
  /* 11399177 push 0 */
  push32((uint32_t)(0x0u));
  /* 11399179 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139917c push eax */
  push32((uint32_t)(EAX));
  /* 1139917d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399180 push ecx */
  push32((uint32_t)(ECX));
  /* 11399181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399184 push edx */
  push32((uint32_t)(EDX));
  /* 11399185 call 0x113991a0 */
  push32(0x1139918au); f_113991a0();
  /* 1139918a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139918d:;
  /* 1139918d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399190 pop ebp */
  EBP = (pop32());
  /* 11399191 ret  */
  ESPCHK(0x11399150u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x113991a0 (194 bytes, 71 insns) */
void f_113991a0(void) {
  FTRACE(0x113991a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113991a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113991a1 mov ebp, esp */
  EBP = (ESP);
  /* 113991a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113991a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113991a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113991ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113991b0 je 0x113991c9 */
  if (C.zf) goto L_113991c9;
  /* 113991b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113991b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 113991b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113991bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113991be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113991c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113991c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113991c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113991c9:;
  /* 113991c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113991cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113991cf:;
  /* 113991cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113991d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113991d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113991d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113991da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113991dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113991df div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113991e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113991e5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113991e9 jbe 0x11399201 */
  if ((C.cf||C.zf)) goto L_11399201;
  /* 113991eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113991ee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113991f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113991f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113991f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113991f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113991fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113991ff jmp 0x11399215 */
  goto L_11399215;
L_11399201:;
  /* 11399201 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399204 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139920a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1139920c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139920f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399212 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11399215:;
  /* 11399215 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399219 ja 0x113991cf */
  if ((!C.cf&&!C.zf)) goto L_113991cf;
  /* 1139921b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139921e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11399221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399224 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399227 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139922a:;
  /* 1139922a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139922d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139922f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11399232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399238 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139923a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1139923c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139923f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11399242 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11399244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399247 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139924a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139924d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399250 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399253 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11399256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399259 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139925c jb 0x1139922a */
  if (C.cf) goto L_1139922a;
  /* 1139925e mov esp, ebp */
  ESP = (EBP);
  /* 11399260 pop ebp */
  EBP = (pop32());
  /* 11399261 ret  */
  ESPCHK(0x113991a0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11399270 (63 bytes, 24 insns) */
void f_11399270(void) {
  FTRACE(0x11399270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399270 push ebp */
  push32((uint32_t)(EBP));
  /* 11399271 mov ebp, esp */
  EBP = (ESP);
  /* 11399273 push ecx */
  push32((uint32_t)(ECX));
  /* 11399274 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399278 jne 0x11399289 */
  if (!C.zf) goto L_11399289;
  /* 1139927a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139927e jge 0x11399289 */
  if ((C.sf==C.of)) goto L_11399289;
  /* 11399280 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11399287 jmp 0x11399290 */
  goto L_11399290;
L_11399289:;
  /* 11399289 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11399290:;
  /* 11399290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399293 push eax */
  push32((uint32_t)(EAX));
  /* 11399294 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399297 push ecx */
  push32((uint32_t)(ECX));
  /* 11399298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139929b push edx */
  push32((uint32_t)(EDX));
  /* 1139929c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139929f push eax */
  push32((uint32_t)(EAX));
  /* 113992a0 call 0x113991a0 */
  push32(0x113992a5u); f_113991a0();
  /* 113992a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113992a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113992ab mov esp, ebp */
  ESP = (EBP);
  /* 113992ad pop ebp */
  EBP = (pop32());
  /* 113992ae ret  */
  ESPCHK(0x11399270u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x113992b0 (30 bytes, 14 insns) */
void f_113992b0(void) {
  FTRACE(0x113992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113992b1 mov ebp, esp */
  EBP = (ESP);
  /* 113992b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113992b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113992b8 push eax */
  push32((uint32_t)(EAX));
  /* 113992b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113992bc push ecx */
  push32((uint32_t)(ECX));
  /* 113992bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113992c0 push edx */
  push32((uint32_t)(EDX));
  /* 113992c1 call 0x113991a0 */
  push32(0x113992c6u); f_113991a0();
  /* 113992c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113992c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113992cc pop ebp */
  EBP = (pop32());
  /* 113992cd ret  */
  ESPCHK(0x113992b0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x113992d0 (72 bytes, 28 insns) */
void f_113992d0(void) {
  FTRACE(0x113992d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113992d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113992d1 mov ebp, esp */
  EBP = (ESP);
  /* 113992d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113992d4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113992d8 jne 0x113992f1 */
  if (!C.zf) goto L_113992f1;
  /* 113992da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113992de jg 0x113992f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_113992f1;
  /* 113992e0 jl 0x113992e8 */
  if ((C.sf!=C.of)) goto L_113992e8;
  /* 113992e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113992e6 jae 0x113992f1 */
  if (!C.cf) goto L_113992f1;
L_113992e8:;
  /* 113992e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113992ef jmp 0x113992f8 */
  goto L_113992f8;
L_113992f1:;
  /* 113992f1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113992f8:;
  /* 113992f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113992fb push eax */
  push32((uint32_t)(EAX));
  /* 113992fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113992ff push ecx */
  push32((uint32_t)(ECX));
  /* 11399300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399303 push edx */
  push32((uint32_t)(EDX));
  /* 11399304 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399307 push eax */
  push32((uint32_t)(EAX));
  /* 11399308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139930b push ecx */
  push32((uint32_t)(ECX));
  /* 1139930c call 0x11399320 */
  push32(0x11399311u); f_11399320();
  /* 11399311 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399314 mov esp, ebp */
  ESP = (EBP);
  /* 11399316 pop ebp */
  EBP = (pop32());
  /* 11399317 ret  */
  ESPCHK(0x113992d0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11399320 (242 bytes, 91 insns) */
void f_11399320(void) {
  FTRACE(0x11399320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399320 push ebp */
  push32((uint32_t)(EBP));
  /* 11399321 mov ebp, esp */
  EBP = (ESP);
  /* 11399323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399326 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399329 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139932c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399330 je 0x11399354 */
  if (C.zf) goto L_11399354;
  /* 11399332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399335 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11399338 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139933b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139933e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11399341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399344 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11399346 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399349 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139934c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139934e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11399351 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11399354:;
  /* 11399354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399357 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139935a:;
  /* 1139935a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139935d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139935f push ecx */
  push32((uint32_t)(ECX));
  /* 11399360 push eax */
  push32((uint32_t)(EAX));
  /* 11399361 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399364 push edx */
  push32((uint32_t)(EDX));
  /* 11399365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399368 push eax */
  push32((uint32_t)(EAX));
  /* 11399369 call 0x1139dbe0 */
  push32(0x1139936eu); f_1139dbe0();
  /* 1139936e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399371 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11399374 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11399376 push edx */
  push32((uint32_t)(EDX));
  /* 11399377 push ecx */
  push32((uint32_t)(ECX));
  /* 11399378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139937b push eax */
  push32((uint32_t)(EAX));
  /* 1139937c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139937f push ecx */
  push32((uint32_t)(ECX));
  /* 11399380 call 0x1139db70 */
  push32(0x11399385u); f_1139db70();
  /* 11399385 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11399388 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1139938b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139938f jbe 0x113993a7 */
  if ((C.cf||C.zf)) goto L_113993a7;
  /* 11399391 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399394 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139939a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1139939c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139939f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113993a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113993a5 jmp 0x113993bb */
  goto L_113993bb;
L_113993a7:;
  /* 113993a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113993aa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113993ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113993b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113993b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113993bb:;
  /* 113993bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113993bf ja 0x1139935a */
  if ((!C.cf&&!C.zf)) goto L_1139935a;
  /* 113993c1 jb 0x113993c9 */
  if (C.cf) goto L_113993c9;
  /* 113993c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113993c7 ja 0x1139935a */
  if ((!C.cf&&!C.zf)) goto L_1139935a;
L_113993c9:;
  /* 113993c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993cc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113993cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113993d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113993d8:;
  /* 113993d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113993dd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 113993e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113993e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113993e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113993ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113993ed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 113993f0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113993f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113993f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113993f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113993fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113993fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399401 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11399404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399407 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139940a jb 0x113993d8 */
  if (C.cf) goto L_113993d8;
  /* 1139940c mov esp, ebp */
  ESP = (EBP);
  /* 1139940e pop ebp */
  EBP = (pop32());
  /* 1139940f ret 0x14 */
  ESPCHK(0x11399320u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11399420 (31 bytes, 15 insns) */
void f_11399420(void) {
  FTRACE(0x11399420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399420 push ebp */
  push32((uint32_t)(EBP));
  /* 11399421 mov ebp, esp */
  EBP = (ESP);
  /* 11399423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11399425 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11399428 push eax */
  push32((uint32_t)(EAX));
  /* 11399429 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139942c push ecx */
  push32((uint32_t)(ECX));
  /* 1139942d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399430 push edx */
  push32((uint32_t)(EDX));
  /* 11399431 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399434 push eax */
  push32((uint32_t)(EAX));
  /* 11399435 call 0x11399320 */
  push32(0x1139943au); f_11399320();
  /* 1139943a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139943d pop ebp */
  EBP = (pop32());
  /* 1139943e ret  */
  ESPCHK(0x11399420u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11399440 (123 bytes, 44 insns) */
void f_11399440(void) {
  FTRACE(0x11399440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399440 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11399444 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1139944a je 0x11399460 */
  if (C.zf) goto L_11399460;
L_1139944c:;
  /* 1139944c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1139944e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1139944f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11399451 je 0x11399493 */
  if (C.zf) goto L_11399493;
  /* 11399453 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11399459 jne 0x1139944c */
  if (!C.zf) goto L_1139944c;
  /* 1139945b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11399460:;
  /* 11399460 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11399462 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11399467 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399469 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139946c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139946e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399471 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11399476 je 0x11399460 */
  if (C.zf) goto L_11399460;
  /* 11399478 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1139947b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1139947d je 0x113994b1 */
  if (C.zf) goto L_113994b1;
  /* 1139947f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11399481 je 0x113994a7 */
  if (C.zf) goto L_113994a7;
  /* 11399483 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11399488 je 0x1139949d */
  if (C.zf) goto L_1139949d;
  /* 1139948a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1139948f je 0x11399493 */
  if (C.zf) goto L_11399493;
  /* 11399491 jmp 0x11399460 */
  goto L_11399460;
L_11399493:;
  /* 11399493 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11399496 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1139949a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139949c ret  */
  ESPCHK(0x11399440u, _esp0);
  ESP += 4; return;
L_1139949d:;
  /* 1139949d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 113994a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113994a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113994a6 ret  */
  ESPCHK(0x11399440u, _esp0);
  ESP += 4; return;
L_113994a7:;
  /* 113994a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 113994aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113994ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113994b0 ret  */
  ESPCHK(0x11399440u, _esp0);
  ESP += 4; return;
L_113994b1:;
  /* 113994b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 113994b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113994b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113994ba ret  */
  ESPCHK(0x11399440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x113994c0 (249 bytes, 93 insns) */
void f_113994c0(void) {
  FTRACE(0x113994c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113994c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113994c1 mov ebp, esp */
  EBP = (ESP);
  /* 113994c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113994c6 push ebx */
  push32((uint32_t)(EBX));
  /* 113994c7 push esi */
  push32((uint32_t)(ESI));
  /* 113994c8 push edi */
  push32((uint32_t)(EDI));
  /* 113994c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113994cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113994cf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 113994d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_113994d5:;
  /* 113994d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113994d9 jne 0x113994f9 */
  if (!C.zf) goto L_113994f9;
  /* 113994db push 0x113be1f0 */
  push32((uint32_t)(0x113be1f0u));
  /* 113994e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113994e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 113994e4 push 0x113be1e4 */
  push32((uint32_t)(0x113be1e4u));
  /* 113994e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113994eb call 0x113955e0 */
  push32(0x113994f0u); f_113955e0();
  /* 113994f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113994f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113994f6 jne 0x113994f9 */
  if (!C.zf) goto L_113994f9;
  /* 113994f8 int3  */
  x86_unimpl("int3 @ 0x113994f8");
L_113994f9:;
  /* 113994f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113994fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113994fd jne 0x113994d5 */
  if (!C.zf) goto L_113994d5;
L_113994ff:;
  /* 113994ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399503 jne 0x11399523 */
  if (!C.zf) goto L_11399523;
  /* 11399505 push 0x113be1d4 */
  push32((uint32_t)(0x113be1d4u));
  /* 1139950a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139950c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1139950e push 0x113be1e4 */
  push32((uint32_t)(0x113be1e4u));
  /* 11399513 push 2 */
  push32((uint32_t)(0x2u));
  /* 11399515 call 0x113955e0 */
  push32(0x1139951au); f_113955e0();
  /* 1139951a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139951d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399520 jne 0x11399523 */
  if (!C.zf) goto L_11399523;
  /* 11399522 int3  */
  x86_unimpl("int3 @ 0x11399522");
L_11399523:;
  /* 11399523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11399525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11399527 jne 0x113994ff */
  if (!C.zf) goto L_113994ff;
  /* 11399529 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139952c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11399533 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399539 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139953c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139953f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399542 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11399544 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399547 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139954a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1139954d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11399550 push edx */
  push32((uint32_t)(EDX));
  /* 11399551 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399554 push eax */
  push32((uint32_t)(EAX));
  /* 11399555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399558 push ecx */
  push32((uint32_t)(ECX));
  /* 11399559 call 0x1139dee0 */
  push32(0x1139955eu); f_1139dee0();
  /* 1139955e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399561 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11399564 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399567 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139956a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139956d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399570 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11399573 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399576 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139957a jl 0x1139959e */
  if ((C.sf!=C.of)) goto L_1139959e;
  /* 1139957c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139957f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11399581 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11399584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11399586 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1139958c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1139958f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399592 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11399594 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399597 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139959a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1139959c jmp 0x113995af */
  goto L_113995af;
L_1139959e:;
  /* 1139959e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113995a1 push eax */
  push32((uint32_t)(EAX));
  /* 113995a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113995a4 call 0x1139dc60 */
  push32(0x113995a9u); f_1139dc60();
  /* 113995a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113995ac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_113995af:;
  /* 113995af mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113995b2 pop edi */
  EDI = (pop32());
  /* 113995b3 pop esi */
  ESI = (pop32());
  /* 113995b4 pop ebx */
  EBX = (pop32());
  /* 113995b5 mov esp, ebp */
  ESP = (EBP);
  /* 113995b7 pop ebp */
  EBP = (pop32());
  /* 113995b8 ret  */
  ESPCHK(0x113994c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095c0 @ 0x113995c0 (7 bytes, 3 insns) */
void f_113995c0(void) {
  FTRACE(0x113995c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113995c0 push edi */
  push32((uint32_t)(EDI));
  /* 113995c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 113995c5 jmp 0x11399631 */
  jmp_ind(0x11399631u); return;
}

/* FUN_100095d0 @ 0x113995d0 (224 bytes, 84 insns) */
void f_113995d0(void) {
  FTRACE(0x113995d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113995d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113995d4 push edi */
  push32((uint32_t)(EDI));
  /* 113995d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113995db je 0x113995ec */
  if (C.zf) goto L_113995ec;
L_113995dd:;
  /* 113995dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 113995df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113995e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113995e2 je 0x1139961f */
  if (C.zf) goto L_1139961f;
  /* 113995e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113995ea jne 0x113995dd */
  if (!C.zf) goto L_113995dd;
L_113995ec:;
  /* 113995ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113995ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113995f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113995f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113995f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113995fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113995fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11399602 je 0x113995ec */
  if (C.zf) goto L_113995ec;
  /* 11399604 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11399607 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11399609 je 0x1139962e */
  if (C.zf) goto L_1139962e;
  /* 1139960b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1139960d je 0x11399629 */
  if (C.zf) goto L_11399629;
  /* 1139960f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11399614 je 0x11399624 */
  if (C.zf) goto L_11399624;
  /* 11399616 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1139961b je 0x1139961f */
  if (C.zf) goto L_1139961f;
  /* 1139961d jmp 0x113995ec */
  goto L_113995ec;
L_1139961f:;
  /* 1139961f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11399622 jmp 0x11399631 */
  goto L_11399631;
L_11399624:;
  /* 11399624 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11399627 jmp 0x11399631 */
  goto L_11399631;
L_11399629:;
  /* 11399629 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1139962c jmp 0x11399631 */
  goto L_11399631;
L_1139962e:;
  /* 1139962e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11399631:;
  /* 11399631 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11399635 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1139963b je 0x11399656 */
  if (C.zf) goto L_11399656;
L_1139963d:;
  /* 1139963d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139963f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11399640 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11399642 je 0x113996a8 */
  if (C.zf) goto L_113996a8;
  /* 11399644 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11399646 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11399647 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1139964d jne 0x1139963d */
  if (!C.zf) goto L_1139963d;
  /* 1139964f jmp 0x11399656 */
  goto L_11399656;
L_11399651:;
  /* 11399651 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11399653 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11399656:;
  /* 11399656 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1139965b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1139965d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139965f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11399662 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11399664 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399666 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399669 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1139966e je 0x11399651 */
  if (C.zf) goto L_11399651;
  /* 11399670 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11399672 je 0x113996a8 */
  if (C.zf) goto L_113996a8;
  /* 11399674 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11399676 je 0x1139969f */
  if (C.zf) goto L_1139969f;
  /* 11399678 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1139967e je 0x11399692 */
  if (C.zf) goto L_11399692;
  /* 11399680 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11399686 je 0x1139968a */
  if (C.zf) goto L_1139968a;
  /* 11399688 jmp 0x11399651 */
  goto L_11399651;
L_1139968a:;
  /* 1139968a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1139968c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11399690 pop edi */
  EDI = (pop32());
  /* 11399691 ret  */
  ESPCHK(0x113995d0u, _esp0);
  ESP += 4; return;
L_11399692:;
  /* 11399692 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11399695 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11399699 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1139969d pop edi */
  EDI = (pop32());
  /* 1139969e ret  */
  ESPCHK(0x113995d0u, _esp0);
  ESP += 4; return;
L_1139969f:;
  /* 1139969f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 113996a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113996a6 pop edi */
  EDI = (pop32());
  /* 113996a7 ret  */
  ESPCHK(0x113995d0u, _esp0);
  ESP += 4; return;
L_113996a8:;
  /* 113996a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113996aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113996ae pop edi */
  EDI = (pop32());
  /* 113996af ret  */
  ESPCHK(0x113995d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x113996b0 (243 bytes, 91 insns) */
void f_113996b0(void) {
  FTRACE(0x113996b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113996b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113996b1 mov ebp, esp */
  EBP = (ESP);
  /* 113996b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113996b6 push ebx */
  push32((uint32_t)(EBX));
  /* 113996b7 push esi */
  push32((uint32_t)(ESI));
  /* 113996b8 push edi */
  push32((uint32_t)(EDI));
  /* 113996b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113996bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113996bf:;
  /* 113996bf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113996c3 jne 0x113996e3 */
  if (!C.zf) goto L_113996e3;
  /* 113996c5 push 0x113be1f0 */
  push32((uint32_t)(0x113be1f0u));
  /* 113996ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113996cc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 113996ce push 0x113be200 */
  push32((uint32_t)(0x113be200u));
  /* 113996d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113996d5 call 0x113955e0 */
  push32(0x113996dau); f_113955e0();
  /* 113996da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113996dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113996e0 jne 0x113996e3 */
  if (!C.zf) goto L_113996e3;
  /* 113996e2 int3  */
  x86_unimpl("int3 @ 0x113996e2");
L_113996e3:;
  /* 113996e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113996e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113996e7 jne 0x113996bf */
  if (!C.zf) goto L_113996bf;
L_113996e9:;
  /* 113996e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113996ed jne 0x1139970d */
  if (!C.zf) goto L_1139970d;
  /* 113996ef push 0x113be1d4 */
  push32((uint32_t)(0x113be1d4u));
  /* 113996f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113996f6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 113996f8 push 0x113be200 */
  push32((uint32_t)(0x113be200u));
  /* 113996fd push 2 */
  push32((uint32_t)(0x2u));
  /* 113996ff call 0x113955e0 */
  push32(0x11399704u); f_113955e0();
  /* 11399704 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399707 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139970a jne 0x1139970d */
  if (!C.zf) goto L_1139970d;
  /* 1139970c int3  */
  x86_unimpl("int3 @ 0x1139970c");
L_1139970d:;
  /* 1139970d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139970f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11399711 jne 0x113996e9 */
  if (!C.zf) goto L_113996e9;
  /* 11399713 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399716 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1139971d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399723 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11399726 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139972c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139972e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399731 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399734 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11399737 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139973a push ecx */
  push32((uint32_t)(ECX));
  /* 1139973b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139973e push edx */
  push32((uint32_t)(EDX));
  /* 1139973f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399742 push eax */
  push32((uint32_t)(EAX));
  /* 11399743 call 0x1139dee0 */
  push32(0x11399748u); f_1139dee0();
  /* 11399748 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139974b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139974e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399751 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11399754 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399757 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139975a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139975d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399760 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399764 jl 0x11399788 */
  if ((C.sf!=C.of)) goto L_11399788;
  /* 11399766 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399769 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139976b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1139976e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11399770 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11399776 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11399779 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139977c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139977e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399781 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11399784 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11399786 jmp 0x11399799 */
  goto L_11399799;
L_11399788:;
  /* 11399788 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139978b push edx */
  push32((uint32_t)(EDX));
  /* 1139978c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139978e call 0x1139dc60 */
  push32(0x11399793u); f_1139dc60();
  /* 11399793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399796 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11399799:;
  /* 11399799 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139979c pop edi */
  EDI = (pop32());
  /* 1139979d pop esi */
  ESI = (pop32());
  /* 1139979e pop ebx */
  EBX = (pop32());
  /* 1139979f mov esp, ebp */
  ESP = (EBP);
  /* 113997a1 pop ebp */
  EBP = (pop32());
  /* 113997a2 ret  */
  ESPCHK(0x113996b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x113997b0 (47 bytes, 17 insns) */
void f_113997b0(void) {
  FTRACE(0x113997b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113997b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113997b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113997b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 113997ba jb 0x113997d0 */
  if (C.cf) goto L_113997d0;
L_113997bc:;
  /* 113997bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113997c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113997c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113997c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113997ce jae 0x113997bc */
  if (!C.cf) goto L_113997bc;
L_113997d0:;
  /* 113997d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113997d2 mov eax, esp */
  EAX = (ESP);
  /* 113997d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113997d6 mov esp, ecx */
  ESP = (ECX);
  /* 113997d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113997da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 113997dd push eax */
  push32((uint32_t)(EAX));
  /* 113997de ret  */
  ESPCHK(0x113997b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097e0 @ 0x113997e0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_113997e0(void) {
  FTRACE(0x113997e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113997e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113997e1 mov ebp, esp */
  EBP = (ESP);
  /* 113997e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113997e6 push esi */
  push32((uint32_t)(ESI));
  /* 113997e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113997eb je 0x113997f3 */
  if (C.zf) goto L_113997f3;
  /* 113997ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113997f1 jne 0x113997f8 */
  if (!C.zf) goto L_113997f8;
L_113997f3:;
  /* 113997f3 jmp 0x113999c8 */
  goto L_113999c8;
L_113997f8:;
  /* 113997f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113997fc je 0x11399814 */
  if (C.zf) goto L_11399814;
  /* 113997fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399802 je 0x11399814 */
  if (C.zf) goto L_11399814;
  /* 11399804 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399808 je 0x11399814 */
  if (C.zf) goto L_11399814;
  /* 1139980a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139980e jne 0x113998f1 */
  if (!C.zf) goto L_113998f1;
L_11399814:;
  /* 11399814 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399816 call 0x1139a010 */
  push32(0x1139981bu); f_1139a010();
  /* 1139981b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139981e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399822 je 0x1139982a */
  if (C.zf) goto L_1139982a;
  /* 11399824 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399828 jne 0x1139986f */
  if (!C.zf) goto L_1139986f;
L_1139982a:;
  /* 1139982a cmp dword ptr [0x113c28b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c28b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399831 jne 0x1139986f */
  if (!C.zf) goto L_1139986f;
  /* 11399833 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399835 push 0x11399a10 */
  push32((uint32_t)(0x11399a10u));
  /* 1139983a call dword ptr [0x113c5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5360))), 0x11399840u);
  /* 11399840 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399843 jne 0x11399851 */
  if (!C.zf) goto L_11399851;
  /* 11399845 mov dword ptr [0x113c28b0], 1 */
  w32((uint32_t)(0x113c28b0), (0x1u));
  /* 1139984f jmp 0x1139986f */
  goto L_1139986f;
L_11399851:;
  /* 11399851 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x11399857u);
  /* 11399857 mov esi, eax */
  ESI = (EAX);
  /* 11399859 call 0x1139ee30 */
  push32(0x1139985eu); f_1139ee30();
  /* 1139985e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11399860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399862 call 0x1139a0b0 */
  push32(0x11399867u); f_1139a0b0();
  /* 11399867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139986a jmp 0x113999c8 */
  goto L_113999c8;
L_1139986f:;
  /* 1139986f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399872 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11399875 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11399878 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139987b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139987e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399882 ja 0x113998e2 */
  if ((!C.cf&&!C.zf)) goto L_113998e2;
  /* 11399884 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11399887 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11399889 mov dl, byte ptr [eax + 0x113999ef] */
  DL = (r8((uint32_t)(EAX + 0x113999ef)));
  /* 1139988f jmp dword ptr [edx*4 + 0x113999db] */
  switch (EDX) {
    case 0: goto L_11399896;
    case 1: goto L_113998d0;
    case 2: goto L_113998aa;
    case 3: goto L_113998bd;
    case 4: goto L_113998e2;
    default: x86_unimpl("switch@0x1139988f out of table"); return;
  }
L_11399896:;
  /* 11399896 mov ecx, dword ptr [0x113c28a0] */
  ECX = (r32((uint32_t)(0x113c28a0)));
  /* 1139989c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139989f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113998a2 mov dword ptr [0x113c28a0], edx */
  w32((uint32_t)(0x113c28a0), (EDX));
  /* 113998a8 jmp 0x113998e2 */
  goto L_113998e2;
L_113998aa:;
  /* 113998aa mov eax, dword ptr [0x113c28a4] */
  EAX = (r32((uint32_t)(0x113c28a4)));
  /* 113998af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113998b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113998b5 mov dword ptr [0x113c28a4], ecx */
  w32((uint32_t)(0x113c28a4), (ECX));
  /* 113998bb jmp 0x113998e2 */
  goto L_113998e2;
L_113998bd:;
  /* 113998bd mov edx, dword ptr [0x113c28a8] */
  EDX = (r32((uint32_t)(0x113c28a8)));
  /* 113998c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113998c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113998c9 mov dword ptr [0x113c28a8], eax */
  w32((uint32_t)(0x113c28a8), (EAX));
  /* 113998ce jmp 0x113998e2 */
  goto L_113998e2;
L_113998d0:;
  /* 113998d0 mov ecx, dword ptr [0x113c28ac] */
  ECX = (r32((uint32_t)(0x113c28ac)));
  /* 113998d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113998d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113998dc mov dword ptr [0x113c28ac], edx */
  w32((uint32_t)(0x113c28ac), (EDX));
L_113998e2:;
  /* 113998e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113998e4 call 0x1139a0b0 */
  push32(0x113998e9u); f_1139a0b0();
  /* 113998e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113998ec jmp 0x113999c3 */
  goto L_113999c3;
L_113998f1:;
  /* 113998f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113998f5 je 0x11399908 */
  if (C.zf) goto L_11399908;
  /* 113998f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113998fb je 0x11399908 */
  if (C.zf) goto L_11399908;
  /* 113998fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399901 je 0x11399908 */
  if (C.zf) goto L_11399908;
  /* 11399903 jmp 0x113999c8 */
  goto L_113999c8;
L_11399908:;
  /* 11399908 call 0x11395d60 */
  push32(0x1139990du); f_11395d60();
  /* 1139990d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11399910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399913 cmp dword ptr [eax + 0x50], 0x113c0c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x113c0c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139991a jne 0x11399965 */
  if (!C.zf) goto L_11399965;
  /* 1139991c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11399921 push 0x113be20c */
  push32((uint32_t)(0x113be20cu));
  /* 11399926 push 2 */
  push32((uint32_t)(0x2u));
  /* 11399928 mov ecx, dword ptr [0x113c0c80] */
  ECX = (r32((uint32_t)(0x113c0c80)));
  /* 1139992e push ecx */
  push32((uint32_t)(ECX));
  /* 1139992f call 0x11396610 */
  push32(0x11399934u); f_11396610();
  /* 11399934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139993a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1139993d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399940 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399944 je 0x11399963 */
  if (C.zf) goto L_11399963;
  /* 11399946 mov ecx, dword ptr [0x113c0c80] */
  ECX = (r32((uint32_t)(0x113c0c80)));
  /* 1139994c push ecx */
  push32((uint32_t)(ECX));
  /* 1139994d push 0x113c0c00 */
  push32((uint32_t)(0x113c0c00u));
  /* 11399952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399955 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11399958 push eax */
  push32((uint32_t)(EAX));
  /* 11399959 call 0x1139d830 */
  push32(0x1139995eu); f_1139d830();
  /* 1139995e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399961 jmp 0x11399965 */
  goto L_11399965;
L_11399963:;
  /* 11399963 jmp 0x113999c8 */
  goto L_113999c8;
L_11399965:;
  /* 11399965 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399968 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1139996b push edx */
  push32((uint32_t)(EDX));
  /* 1139996c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139996f push eax */
  push32((uint32_t)(EAX));
  /* 11399970 call 0x11399cf0 */
  push32(0x11399975u); f_11399cf0();
  /* 11399975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399978 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139997b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139997f jne 0x11399983 */
  if (!C.zf) goto L_11399983;
  /* 11399981 jmp 0x113999c8 */
  goto L_113999c8;
L_11399983:;
  /* 11399983 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399986 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11399989 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1139998c:;
  /* 1139998c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139998f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11399992 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399995 jne 0x113999c3 */
  if (!C.zf) goto L_113999c3;
  /* 11399997 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139999a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139999d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113999a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113999a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113999a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113999a9 mov edx, dword ptr [0x113c0c84] */
  EDX = (r32((uint32_t)(0x113c0c84)));
  /* 113999af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113999b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113999b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 113999b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113999ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113999bd jb 0x113999c1 */
  if (C.cf) goto L_113999c1;
  /* 113999bf jmp 0x113999c3 */
  goto L_113999c3;
L_113999c1:;
  /* 113999c1 jmp 0x1139998c */
  goto L_1139998c;
L_113999c3:;
  /* 113999c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113999c6 jmp 0x113999d6 */
  goto L_113999d6;
L_113999c8:;
  /* 113999c8 call 0x1139ee20 */
  push32(0x113999cdu); f_1139ee20();
  /* 113999cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 113999d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113999d6:;
  /* 113999d6 pop esi */
  ESI = (pop32());
  /* 113999d7 mov esp, ebp */
  ESP = (EBP);
  /* 113999d9 pop ebp */
  EBP = (pop32());
  /* 113999da ret  */
  ESPCHK(0x113997e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a10 @ 0x11399a10 (146 bytes, 45 insns) */
void f_11399a10(void) {
  FTRACE(0x11399a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11399a11 mov ebp, esp */
  EBP = (ESP);
  /* 11399a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399a18 call 0x1139a010 */
  push32(0x11399a1du); f_1139a010();
  /* 11399a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399a20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399a24 jne 0x11399a3e */
  if (!C.zf) goto L_11399a3e;
  /* 11399a26 mov dword ptr [ebp - 8], 0x113c28a0 */
  w32((uint32_t)(EBP + -0x8), (0x113c28a0u));
  /* 11399a2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399a30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11399a32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11399a35 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11399a3c jmp 0x11399a54 */
  goto L_11399a54;
L_11399a3e:;
  /* 11399a3e mov dword ptr [ebp - 8], 0x113c28a4 */
  w32((uint32_t)(EBP + -0x8), (0x113c28a4u));
  /* 11399a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399a48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11399a4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399a4d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11399a54:;
  /* 11399a54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399a58 jne 0x11399a68 */
  if (!C.zf) goto L_11399a68;
  /* 11399a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11399a5c call 0x1139a0b0 */
  push32(0x11399a61u); f_1139a0b0();
  /* 11399a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11399a66 jmp 0x11399a9c */
  goto L_11399a9c;
L_11399a68:;
  /* 11399a68 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399a6c je 0x11399a8d */
  if (C.zf) goto L_11399a8d;
  /* 11399a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399a71 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11399a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399a79 call 0x1139a0b0 */
  push32(0x11399a7eu); f_1139a0b0();
  /* 11399a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399a84 push edx */
  push32((uint32_t)(EDX));
  /* 11399a85 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11399a88u);
  /* 11399a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399a8b jmp 0x11399a97 */
  goto L_11399a97;
L_11399a8d:;
  /* 11399a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11399a8f call 0x1139a0b0 */
  push32(0x11399a94u); f_1139a0b0();
  /* 11399a94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399a97:;
  /* 11399a97 mov eax, 1 */
  EAX = (0x1u);
L_11399a9c:;
  /* 11399a9c mov esp, ebp */
  ESP = (EBP);
  /* 11399a9e pop ebp */
  EBP = (pop32());
  /* 11399a9f ret 4 */
  ESPCHK(0x11399a10u, _esp0);
  ESP += 8; return;
}

/* FUN_10009ab0 @ 0x11399ab0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11399ab0(void) {
  FTRACE(0x11399ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11399ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11399ab3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399ab6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11399abd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399ac0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11399ac3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11399ac6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399ac9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11399acc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399ad0 ja 0x11399b7e */
  if ((!C.cf&&!C.zf)) goto L_11399b7e;
  /* 11399ad6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11399ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11399adb mov dl, byte ptr [eax + 0x11399cd2] */
  DL = (r8((uint32_t)(EAX + 0x11399cd2)));
  /* 11399ae1 jmp dword ptr [edx*4 + 0x11399cba] */
  switch (EDX) {
    case 0: goto L_11399ae8;
    case 1: goto L_11399b53;
    case 2: goto L_11399b39;
    case 3: goto L_11399b05;
    case 4: goto L_11399b1f;
    case 5: goto L_11399b7e;
    default: x86_unimpl("switch@0x11399ae1 out of table"); return;
  }
L_11399ae8:;
  /* 11399ae8 mov dword ptr [ebp - 0x18], 0x113c28a0 */
  w32((uint32_t)(EBP + -0x18), (0x113c28a0u));
  /* 11399aef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399af2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399af4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11399af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399afa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399afd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399b00 jmp 0x11399b86 */
  goto L_11399b86;
L_11399b05:;
  /* 11399b05 mov dword ptr [ebp - 0x18], 0x113c28a4 */
  w32((uint32_t)(EBP + -0x18), (0x113c28a4u));
  /* 11399b0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399b0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399b11 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11399b14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399b17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399b1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399b1d jmp 0x11399b86 */
  goto L_11399b86;
L_11399b1f:;
  /* 11399b1f mov dword ptr [ebp - 0x18], 0x113c28a8 */
  w32((uint32_t)(EBP + -0x18), (0x113c28a8u));
  /* 11399b26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399b29 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399b2b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11399b2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399b31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399b34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399b37 jmp 0x11399b86 */
  goto L_11399b86;
L_11399b39:;
  /* 11399b39 mov dword ptr [ebp - 0x18], 0x113c28ac */
  w32((uint32_t)(EBP + -0x18), (0x113c28acu));
  /* 11399b40 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399b43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399b45 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11399b48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11399b4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399b4e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11399b51 jmp 0x11399b86 */
  goto L_11399b86;
L_11399b53:;
  /* 11399b53 call 0x11395d60 */
  push32(0x11399b58u); f_11395d60();
  /* 11399b58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11399b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399b5e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11399b61 push edx */
  push32((uint32_t)(EDX));
  /* 11399b62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399b65 push eax */
  push32((uint32_t)(EAX));
  /* 11399b66 call 0x11399cf0 */
  push32(0x11399b6bu); f_11399cf0();
  /* 11399b6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399b6e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399b71 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11399b74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399b77 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11399b79 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11399b7c jmp 0x11399b86 */
  goto L_11399b86;
L_11399b7e:;
  /* 11399b7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11399b81 jmp 0x11399cb6 */
  goto L_11399cb6;
L_11399b86:;
  /* 11399b86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399b8a je 0x11399b96 */
  if (C.zf) goto L_11399b96;
  /* 11399b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11399b8e call 0x1139a010 */
  push32(0x11399b93u); f_1139a010();
  /* 11399b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399b96:;
  /* 11399b96 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399b9a jne 0x11399bb3 */
  if (!C.zf) goto L_11399bb3;
  /* 11399b9c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399ba0 je 0x11399bac */
  if (C.zf) goto L_11399bac;
  /* 11399ba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11399ba4 call 0x1139a0b0 */
  push32(0x11399ba9u); f_1139a0b0();
  /* 11399ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399bac:;
  /* 11399bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11399bae jmp 0x11399cb6 */
  goto L_11399cb6;
L_11399bb3:;
  /* 11399bb3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399bb7 jne 0x11399bd0 */
  if (!C.zf) goto L_11399bd0;
  /* 11399bb9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399bbd je 0x11399bc9 */
  if (C.zf) goto L_11399bc9;
  /* 11399bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11399bc1 call 0x1139a0b0 */
  push32(0x11399bc6u); f_1139a0b0();
  /* 11399bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399bc9:;
  /* 11399bc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11399bcb call 0x11396080 */
  push32(0x11399bd0u); f_11396080();
L_11399bd0:;
  /* 11399bd0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399bd4 je 0x11399be2 */
  if (C.zf) goto L_11399be2;
  /* 11399bd6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399bda je 0x11399be2 */
  if (C.zf) goto L_11399be2;
  /* 11399bdc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399be0 jne 0x11399c0e */
  if (!C.zf) goto L_11399c0e;
L_11399be2:;
  /* 11399be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399be5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11399be8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11399beb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399bee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11399bf5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399bf9 jne 0x11399c0e */
  if (!C.zf) goto L_11399c0e;
  /* 11399bfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399bfe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11399c01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11399c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399c07 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11399c0e:;
  /* 11399c0e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c12 jne 0x11399c50 */
  if (!C.zf) goto L_11399c50;
  /* 11399c14 mov eax, dword ptr [0x113c0c78] */
  EAX = (r32((uint32_t)(0x113c0c78)));
  /* 11399c19 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11399c1c jmp 0x11399c27 */
  goto L_11399c27;
L_11399c1e:;
  /* 11399c1e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11399c21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399c24 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11399c27:;
  /* 11399c27 mov edx, dword ptr [0x113c0c78] */
  EDX = (r32((uint32_t)(0x113c0c78)));
  /* 11399c2d add edx, dword ptr [0x113c0c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399c33 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c36 jge 0x11399c4e */
  if ((C.sf==C.of)) goto L_11399c4e;
  /* 11399c38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11399c3b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11399c3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399c41 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11399c44 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11399c4c jmp 0x11399c1e */
  goto L_11399c1e;
L_11399c4e:;
  /* 11399c4e jmp 0x11399c59 */
  goto L_11399c59;
L_11399c50:;
  /* 11399c50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11399c53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11399c59:;
  /* 11399c59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c5d je 0x11399c69 */
  if (C.zf) goto L_11399c69;
  /* 11399c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11399c61 call 0x1139a0b0 */
  push32(0x11399c66u); f_1139a0b0();
  /* 11399c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399c69:;
  /* 11399c69 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c6d jne 0x11399c80 */
  if (!C.zf) goto L_11399c80;
  /* 11399c6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399c72 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11399c75 push edx */
  push32((uint32_t)(EDX));
  /* 11399c76 push 8 */
  push32((uint32_t)(0x8u));
  /* 11399c78 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11399c7bu);
  /* 11399c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11399c7e jmp 0x11399c8a */
  goto L_11399c8a;
L_11399c80:;
  /* 11399c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399c83 push eax */
  push32((uint32_t)(EAX));
  /* 11399c84 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11399c87u);
  /* 11399c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399c8a:;
  /* 11399c8a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c8e je 0x11399c9c */
  if (C.zf) goto L_11399c9c;
  /* 11399c90 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c94 je 0x11399c9c */
  if (C.zf) goto L_11399c9c;
  /* 11399c96 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399c9a jne 0x11399cb4 */
  if (!C.zf) goto L_11399cb4;
L_11399c9c:;
  /* 11399c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399c9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11399ca2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11399ca5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399ca9 jne 0x11399cb4 */
  if (!C.zf) goto L_11399cb4;
  /* 11399cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399cae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399cb1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11399cb4:;
  /* 11399cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11399cb6:;
  /* 11399cb6 mov esp, ebp */
  ESP = (EBP);
  /* 11399cb8 pop ebp */
  EBP = (pop32());
  /* 11399cb9 ret  */
  ESPCHK(0x11399ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cf0 @ 0x11399cf0 (91 bytes, 35 insns) */
void f_11399cf0(void) {
  FTRACE(0x11399cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11399cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11399cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11399cf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399cf7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11399cfa:;
  /* 11399cfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399cfd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11399d00 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d03 je 0x11399d23 */
  if (C.zf) goto L_11399d23;
  /* 11399d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399d08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399d0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11399d0e mov ecx, dword ptr [0x113c0c84] */
  ECX = (r32((uint32_t)(0x113c0c84)));
  /* 11399d14 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11399d17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399d1a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399d1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d1f jae 0x11399d23 */
  if (!C.cf) goto L_11399d23;
  /* 11399d21 jmp 0x11399cfa */
  goto L_11399cfa;
L_11399d23:;
  /* 11399d23 mov eax, dword ptr [0x113c0c84] */
  EAX = (r32((uint32_t)(0x113c0c84)));
  /* 11399d28 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11399d2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399d2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399d30 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d33 jae 0x11399d45 */
  if (!C.cf) goto L_11399d45;
  /* 11399d35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399d38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11399d3b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d3e jne 0x11399d45 */
  if (!C.zf) goto L_11399d45;
  /* 11399d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399d43 jmp 0x11399d47 */
  goto L_11399d47;
L_11399d45:;
  /* 11399d45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11399d47:;
  /* 11399d47 mov esp, ebp */
  ESP = (EBP);
  /* 11399d49 pop ebp */
  EBP = (pop32());
  /* 11399d4a ret  */
  ESPCHK(0x11399cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x11399d50 (13 bytes, 6 insns) */
void f_11399d50(void) {
  FTRACE(0x11399d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11399d51 mov ebp, esp */
  EBP = (ESP);
  /* 11399d53 call 0x11395d60 */
  push32(0x11399d58u); f_11395d60();
  /* 11399d58 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399d5b pop ebp */
  EBP = (pop32());
  /* 11399d5c ret  */
  ESPCHK(0x11399d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x11399d60 (13 bytes, 6 insns) */
void f_11399d60(void) {
  FTRACE(0x11399d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11399d61 mov ebp, esp */
  EBP = (ESP);
  /* 11399d63 call 0x11395d60 */
  push32(0x11399d68u); f_11395d60();
  /* 11399d68 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399d6b pop ebp */
  EBP = (pop32());
  /* 11399d6c ret  */
  ESPCHK(0x11399d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d70 @ 0x11399d70 (187 bytes, 54 insns) */
void f_11399d70(void) {
  FTRACE(0x11399d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11399d71 mov ebp, esp */
  EBP = (ESP);
  /* 11399d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11399d76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11399d7d cmp dword ptr [0x113c28b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c28b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d84 jne 0x11399de3 */
  if (!C.zf) goto L_11399de3;
  /* 11399d86 push 0x113bd638 */
  push32((uint32_t)(0x113bd638u));
  /* 11399d8b call dword ptr [0x113c53c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c4))), 0x11399d91u);
  /* 11399d91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11399d94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399d98 je 0x11399db7 */
  if (C.zf) goto L_11399db7;
  /* 11399d9a push 0x113be23c */
  push32((uint32_t)(0x113be23cu));
  /* 11399d9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399da2 push eax */
  push32((uint32_t)(EAX));
  /* 11399da3 call dword ptr [0x113c53c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c0))), 0x11399da9u);
  /* 11399da9 mov dword ptr [0x113c28b4], eax */
  w32((uint32_t)(0x113c28b4), (EAX));
  /* 11399dae cmp dword ptr [0x113c28b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c28b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399db5 jne 0x11399dbb */
  if (!C.zf) goto L_11399dbb;
L_11399db7:;
  /* 11399db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11399db9 jmp 0x11399e27 */
  goto L_11399e27;
L_11399dbb:;
  /* 11399dbb push 0x113be22c */
  push32((uint32_t)(0x113be22cu));
  /* 11399dc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11399dc4 call dword ptr [0x113c53c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c0))), 0x11399dcau);
  /* 11399dca mov dword ptr [0x113c28b8], eax */
  w32((uint32_t)(0x113c28b8), (EAX));
  /* 11399dcf push 0x113be218 */
  push32((uint32_t)(0x113be218u));
  /* 11399dd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11399dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11399dd8 call dword ptr [0x113c53c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53c0))), 0x11399ddeu);
  /* 11399dde mov dword ptr [0x113c28bc], eax */
  w32((uint32_t)(0x113c28bc), (EAX));
L_11399de3:;
  /* 11399de3 cmp dword ptr [0x113c28b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c28b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399dea je 0x11399df5 */
  if (C.zf) goto L_11399df5;
  /* 11399dec call dword ptr [0x113c28b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c28b8))), 0x11399df2u);
  /* 11399df2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11399df5:;
  /* 11399df5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399df9 je 0x11399e11 */
  if (C.zf) goto L_11399e11;
  /* 11399dfb cmp dword ptr [0x113c28bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c28bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399e02 je 0x11399e11 */
  if (C.zf) goto L_11399e11;
  /* 11399e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399e07 push eax */
  push32((uint32_t)(EAX));
  /* 11399e08 call dword ptr [0x113c28bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c28bc))), 0x11399e0eu);
  /* 11399e0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11399e11:;
  /* 11399e11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11399e14 push ecx */
  push32((uint32_t)(ECX));
  /* 11399e15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11399e18 push edx */
  push32((uint32_t)(EDX));
  /* 11399e19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11399e1c push eax */
  push32((uint32_t)(EAX));
  /* 11399e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399e20 push ecx */
  push32((uint32_t)(ECX));
  /* 11399e21 call dword ptr [0x113c28b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c28b4))), 0x11399e27u);
L_11399e27:;
  /* 11399e27 mov esp, ebp */
  ESP = (EBP);
  /* 11399e29 pop ebp */
  EBP = (pop32());
  /* 11399e2a ret  */
  ESPCHK(0x11399d70u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11399e30 (254 bytes, 109 insns) */
void f_11399e30(void) {
  FTRACE(0x11399e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399e30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11399e34 push edi */
  push32((uint32_t)(EDI));
  /* 11399e35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11399e37 je 0x11399eb3 */
  if (C.zf) goto L_11399eb3;
  /* 11399e39 push esi */
  push32((uint32_t)(ESI));
  /* 11399e3a push ebx */
  push32((uint32_t)(EBX));
  /* 11399e3b mov ebx, ecx */
  EBX = (ECX);
  /* 11399e3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11399e41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11399e47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11399e4b jne 0x11399e54 */
  if (!C.zf) goto L_11399e54;
  /* 11399e4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11399e50 jne 0x11399ec1 */
  if (!C.zf) goto L_11399ec1;
  /* 11399e52 jmp 0x11399e75 */
  goto L_11399e75;
L_11399e54:;
  /* 11399e54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11399e56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11399e57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11399e59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11399e5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11399e5b je 0x11399e82 */
  if (C.zf) goto L_11399e82;
  /* 11399e5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11399e5f je 0x11399e8a */
  if (C.zf) goto L_11399e8a;
  /* 11399e61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11399e67 jne 0x11399e54 */
  if (!C.zf) goto L_11399e54;
  /* 11399e69 mov ebx, ecx */
  EBX = (ECX);
  /* 11399e6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11399e6e jne 0x11399ec1 */
  if (!C.zf) goto L_11399ec1;
L_11399e70:;
  /* 11399e70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11399e73 je 0x11399e82 */
  if (C.zf) goto L_11399e82;
L_11399e75:;
  /* 11399e75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11399e77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11399e78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11399e7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11399e7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11399e7d je 0x11399eae */
  if (C.zf) goto L_11399eae;
  /* 11399e7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11399e80 jne 0x11399e75 */
  if (!C.zf) goto L_11399e75;
L_11399e82:;
  /* 11399e82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11399e86 pop ebx */
  EBX = (pop32());
  /* 11399e87 pop esi */
  ESI = (pop32());
  /* 11399e88 pop edi */
  EDI = (pop32());
  /* 11399e89 ret  */
  ESPCHK(0x11399e30u, _esp0);
  ESP += 4; return;
L_11399e8a:;
  /* 11399e8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11399e90 je 0x11399ea4 */
  if (C.zf) goto L_11399ea4;
L_11399e92:;
  /* 11399e92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11399e94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11399e95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11399e96 je 0x11399f26 */
  if (C.zf) goto L_11399f26;
  /* 11399e9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11399ea2 jne 0x11399e92 */
  if (!C.zf) goto L_11399e92;
L_11399ea4:;
  /* 11399ea4 mov ebx, ecx */
  EBX = (ECX);
  /* 11399ea6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11399ea9 jne 0x11399f17 */
  if (!C.zf) goto L_11399f17;
L_11399eab:;
  /* 11399eab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11399ead inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11399eae:;
  /* 11399eae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11399eaf jne 0x11399eab */
  if (!C.zf) goto L_11399eab;
  /* 11399eb1 pop ebx */
  EBX = (pop32());
  /* 11399eb2 pop esi */
  ESI = (pop32());
L_11399eb3:;
  /* 11399eb3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11399eb7 pop edi */
  EDI = (pop32());
  /* 11399eb8 ret  */
  ESPCHK(0x11399e30u, _esp0);
  ESP += 4; return;
L_11399eb9:;
  /* 11399eb9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11399ebb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11399ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11399ebf je 0x11399e70 */
  if (C.zf) goto L_11399e70;
L_11399ec1:;
  /* 11399ec1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11399ec6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11399ec8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399eca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11399ecd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11399ecf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11399ed1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11399ed4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11399ed9 je 0x11399eb9 */
  if (C.zf) goto L_11399eb9;
  /* 11399edb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11399edd je 0x11399f0b */
  if (C.zf) goto L_11399f0b;
  /* 11399edf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11399ee1 je 0x11399f01 */
  if (C.zf) goto L_11399f01;
  /* 11399ee3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11399ee9 je 0x11399ef7 */
  if (C.zf) goto L_11399ef7;
  /* 11399eeb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11399ef1 jne 0x11399eb9 */
  if (!C.zf) goto L_11399eb9;
  /* 11399ef3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11399ef5 jmp 0x11399f0f */
  goto L_11399f0f;
L_11399ef7:;
  /* 11399ef7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11399efd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11399eff jmp 0x11399f0f */
  goto L_11399f0f;
L_11399f01:;
  /* 11399f01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11399f07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11399f09 jmp 0x11399f0f */
  goto L_11399f0f;
L_11399f0b:;
  /* 11399f0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11399f0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11399f0f:;
  /* 11399f0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11399f12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11399f14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11399f15 je 0x11399f21 */
  if (C.zf) goto L_11399f21;
L_11399f17:;
  /* 11399f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11399f19:;
  /* 11399f19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11399f1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11399f1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11399f1f jne 0x11399f19 */
  if (!C.zf) goto L_11399f19;
L_11399f21:;
  /* 11399f21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11399f24 jne 0x11399eab */
  if (!C.zf) goto L_11399eab;
L_11399f26:;
  /* 11399f26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11399f2a pop ebx */
  EBX = (pop32());
  /* 11399f2b pop esi */
  ESI = (pop32());
  /* 11399f2c pop edi */
  EDI = (pop32());
  /* 11399f2d ret  */
  ESPCHK(0x11399e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f30 @ 0x11399f30 (55 bytes, 16 insns) */
void f_11399f30(void) {
  FTRACE(0x11399f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11399f31 mov ebp, esp */
  EBP = (ESP);
  /* 11399f33 mov eax, dword ptr [0x113c0b84] */
  EAX = (r32((uint32_t)(0x113c0b84)));
  /* 11399f38 push eax */
  push32((uint32_t)(EAX));
  /* 11399f39 call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x11399f3fu);
  /* 11399f3f mov ecx, dword ptr [0x113c0b74] */
  ECX = (r32((uint32_t)(0x113c0b74)));
  /* 11399f45 push ecx */
  push32((uint32_t)(ECX));
  /* 11399f46 call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x11399f4cu);
  /* 11399f4c mov edx, dword ptr [0x113c0b64] */
  EDX = (r32((uint32_t)(0x113c0b64)));
  /* 11399f52 push edx */
  push32((uint32_t)(EDX));
  /* 11399f53 call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x11399f59u);
  /* 11399f59 mov eax, dword ptr [0x113c0b44] */
  EAX = (r32((uint32_t)(0x113c0b44)));
  /* 11399f5e push eax */
  push32((uint32_t)(EAX));
  /* 11399f5f call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x11399f65u);
  /* 11399f65 pop ebp */
  EBP = (pop32());
  /* 11399f66 ret  */
  ESPCHK(0x11399f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f70 @ 0x11399f70 (159 bytes, 47 insns) */
void f_11399f70(void) {
  FTRACE(0x11399f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11399f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11399f71 mov ebp, esp */
  EBP = (ESP);
  /* 11399f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11399f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11399f7b jmp 0x11399f86 */
  goto L_11399f86;
L_11399f7d:;
  /* 11399f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399f80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11399f83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11399f86:;
  /* 11399f86 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399f8a jge 0x11399fd9 */
  if ((C.sf==C.of)) goto L_11399fd9;
  /* 11399f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399f8f cmp dword ptr [ecx*4 + 0x113c0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113c0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399f97 je 0x11399fd7 */
  if (C.zf) goto L_11399fd7;
  /* 11399f99 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399f9d je 0x11399fd7 */
  if (C.zf) goto L_11399fd7;
  /* 11399f9f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399fa3 je 0x11399fd7 */
  if (C.zf) goto L_11399fd7;
  /* 11399fa5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399fa9 je 0x11399fd7 */
  if (C.zf) goto L_11399fd7;
  /* 11399fab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11399faf je 0x11399fd7 */
  if (C.zf) goto L_11399fd7;
  /* 11399fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399fb4 mov eax, dword ptr [edx*4 + 0x113c0b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c0b40)));
  /* 11399fbb push eax */
  push32((uint32_t)(EAX));
  /* 11399fbc call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x11399fc2u);
  /* 11399fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11399fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11399fc7 mov edx, dword ptr [ecx*4 + 0x113c0b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0b40)));
  /* 11399fce push edx */
  push32((uint32_t)(EDX));
  /* 11399fcf call 0x113970a0 */
  push32(0x11399fd4u); f_113970a0();
  /* 11399fd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11399fd7:;
  /* 11399fd7 jmp 0x11399f7d */
  goto L_11399f7d;
L_11399fd9:;
  /* 11399fd9 mov eax, dword ptr [0x113c0b64] */
  EAX = (r32((uint32_t)(0x113c0b64)));
  /* 11399fde push eax */
  push32((uint32_t)(EAX));
  /* 11399fdf call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x11399fe5u);
  /* 11399fe5 mov ecx, dword ptr [0x113c0b74] */
  ECX = (r32((uint32_t)(0x113c0b74)));
  /* 11399feb push ecx */
  push32((uint32_t)(ECX));
  /* 11399fec call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x11399ff2u);
  /* 11399ff2 mov edx, dword ptr [0x113c0b84] */
  EDX = (r32((uint32_t)(0x113c0b84)));
  /* 11399ff8 push edx */
  push32((uint32_t)(EDX));
  /* 11399ff9 call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x11399fffu);
  /* 11399fff mov eax, dword ptr [0x113c0b44] */
  EAX = (r32((uint32_t)(0x113c0b44)));
  /* 1139a004 push eax */
  push32((uint32_t)(EAX));
  /* 1139a005 call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x1139a00bu);
  /* 1139a00b mov esp, ebp */
  ESP = (EBP);
  /* 1139a00d pop ebp */
  EBP = (pop32());
  /* 1139a00e ret  */
  ESPCHK(0x11399f70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x1139a010 (151 bytes, 46 insns) */
void f_1139a010(void) {
  FTRACE(0x1139a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a011 mov ebp, esp */
  EBP = (ESP);
  /* 1139a013 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a017 cmp dword ptr [eax*4 + 0x113c0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x113c0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a01f jne 0x1139a092 */
  if (!C.zf) goto L_1139a092;
  /* 1139a021 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1139a026 push 0x113be248 */
  push32((uint32_t)(0x113be248u));
  /* 1139a02b push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a02d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1139a02f call 0x11396610 */
  push32(0x1139a034u); f_11396610();
  /* 1139a034 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a037 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139a03a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a03e jne 0x1139a04a */
  if (!C.zf) goto L_1139a04a;
  /* 1139a040 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1139a042 call 0x11395490 */
  push32(0x1139a047u); f_11395490();
  /* 1139a047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a04a:;
  /* 1139a04a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1139a04c call 0x1139a010 */
  push32(0x1139a051u); f_1139a010();
  /* 1139a051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a057 cmp dword ptr [ecx*4 + 0x113c0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113c0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a05f jne 0x1139a07a */
  if (!C.zf) goto L_1139a07a;
  /* 1139a061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a064 push edx */
  push32((uint32_t)(EDX));
  /* 1139a065 call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x1139a06bu);
  /* 1139a06b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a071 mov dword ptr [eax*4 + 0x113c0b40], ecx */
  w32((uint32_t)(EAX*4 + 0x113c0b40), (ECX));
  /* 1139a078 jmp 0x1139a088 */
  goto L_1139a088;
L_1139a07a:;
  /* 1139a07a push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a07c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a07f push edx */
  push32((uint32_t)(EDX));
  /* 1139a080 call 0x113970a0 */
  push32(0x1139a085u); f_113970a0();
  /* 1139a085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a088:;
  /* 1139a088 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1139a08a call 0x1139a0b0 */
  push32(0x1139a08fu); f_1139a0b0();
  /* 1139a08f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a092:;
  /* 1139a092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a095 mov ecx, dword ptr [eax*4 + 0x113c0b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0b40)));
  /* 1139a09c push ecx */
  push32((uint32_t)(ECX));
  /* 1139a09d call dword ptr [0x113c5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5358))), 0x1139a0a3u);
  /* 1139a0a3 mov esp, ebp */
  ESP = (EBP);
  /* 1139a0a5 pop ebp */
  EBP = (pop32());
  /* 1139a0a6 ret  */
  ESPCHK(0x1139a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x1139a0b0 (22 bytes, 8 insns) */
void f_1139a0b0(void) {
  FTRACE(0x1139a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1139a0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a0b6 mov ecx, dword ptr [eax*4 + 0x113c0b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0b40)));
  /* 1139a0bd push ecx */
  push32((uint32_t)(ECX));
  /* 1139a0be call dword ptr [0x113c5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5354))), 0x1139a0c4u);
  /* 1139a0c4 pop ebp */
  EBP = (pop32());
  /* 1139a0c5 ret  */
  ESPCHK(0x1139a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d0 @ 0x1139a0d0 (26 bytes, 10 insns) */
void f_1139a0d0(void) {
  FTRACE(0x1139a0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1139a0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a0d6 push eax */
  push32((uint32_t)(EAX));
  /* 1139a0d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a0d9 call dword ptr [0x113c5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5350))), 0x1139a0dfu);
  /* 1139a0df push 0xff */
  push32((uint32_t)(0xffu));
  /* 1139a0e4 call dword ptr [0x113c53ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53ec))), 0x1139a0eau);
  /* 1139a0ea pop ebp */
  EBP = (pop32());
  /* 1139a0eb ret  */
  ESPCHK(0x1139a0d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1139a0f0 (446 bytes, 130 insns) */
void f_1139a0f0(void) {
  FTRACE(0x1139a0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1139a0f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139a0f6 call 0x11395d60 */
  push32(0x1139a0fbu); f_11395d60();
  /* 1139a0fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139a0fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a101 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1139a104 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a108 push edx */
  push32((uint32_t)(EDX));
  /* 1139a109 call 0x1139a2b0 */
  push32(0x1139a10eu); f_1139a2b0();
  /* 1139a10e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a111 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139a114 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a118 je 0x1139a123 */
  if (C.zf) goto L_1139a123;
  /* 1139a11a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a11d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a121 jne 0x1139a132 */
  if (!C.zf) goto L_1139a132;
L_1139a123:;
  /* 1139a123 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139a126 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a127 call dword ptr [0x113c534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c534c))), 0x1139a12du);
  /* 1139a12d jmp 0x1139a2aa */
  goto L_1139a2aa;
L_1139a132:;
  /* 1139a132 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a135 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a139 jne 0x1139a14f */
  if (!C.zf) goto L_1139a14f;
  /* 1139a13b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a13e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1139a145 mov eax, 1 */
  EAX = (0x1u);
  /* 1139a14a jmp 0x1139a2aa */
  goto L_1139a2aa;
L_1139a14f:;
  /* 1139a14f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a152 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a156 jne 0x1139a160 */
  if (!C.zf) goto L_1139a160;
  /* 1139a158 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139a15b jmp 0x1139a2aa */
  goto L_1139a2aa;
L_1139a160:;
  /* 1139a160 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a163 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139a166 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139a169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a16c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1139a16f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1139a172 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a175 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139a178 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1139a17b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a17e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a182 jne 0x1139a287 */
  if (!C.zf) goto L_1139a287;
  /* 1139a188 mov eax, dword ptr [0x113c0c78] */
  EAX = (r32((uint32_t)(0x113c0c78)));
  /* 1139a18d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1139a190 jmp 0x1139a19b */
  goto L_1139a19b;
L_1139a192:;
  /* 1139a192 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139a195 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a198 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1139a19b:;
  /* 1139a19b mov edx, dword ptr [0x113c0c78] */
  EDX = (r32((uint32_t)(0x113c0c78)));
  /* 1139a1a1 add edx, dword ptr [0x113c0c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a1a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a1aa jge 0x1139a1c2 */
  if ((C.sf==C.of)) goto L_1139a1c2;
  /* 1139a1ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139a1af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a1b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a1b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1139a1b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1139a1c0 jmp 0x1139a192 */
  goto L_1139a192;
L_1139a1c2:;
  /* 1139a1c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a1c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1139a1c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139a1cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a1ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a1d4 jne 0x1139a1e5 */
  if (!C.zf) goto L_1139a1e5;
  /* 1139a1d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a1d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1139a1e0 jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a1e5:;
  /* 1139a1e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a1e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a1ee jne 0x1139a1fc */
  if (!C.zf) goto L_1139a1fc;
  /* 1139a1f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a1f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1139a1fa jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a1fc:;
  /* 1139a1fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a1ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a205 jne 0x1139a213 */
  if (!C.zf) goto L_1139a213;
  /* 1139a207 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a20a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1139a211 jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a213:;
  /* 1139a213 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a216 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a21c jne 0x1139a22a */
  if (!C.zf) goto L_1139a22a;
  /* 1139a21e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a221 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1139a228 jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a22a:;
  /* 1139a22a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a22d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a233 jne 0x1139a241 */
  if (!C.zf) goto L_1139a241;
  /* 1139a235 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a238 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1139a23f jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a241:;
  /* 1139a241 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a244 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a24a jne 0x1139a258 */
  if (!C.zf) goto L_1139a258;
  /* 1139a24c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a24f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1139a256 jmp 0x1139a26d */
  goto L_1139a26d;
L_1139a258:;
  /* 1139a258 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a25b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a261 jne 0x1139a26d */
  if (!C.zf) goto L_1139a26d;
  /* 1139a263 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a266 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1139a26d:;
  /* 1139a26d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a270 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1139a273 push edx */
  push32((uint32_t)(EDX));
  /* 1139a274 push 8 */
  push32((uint32_t)(0x8u));
  /* 1139a276 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1139a279u);
  /* 1139a279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a27c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a282 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1139a285 jmp 0x1139a29e */
  goto L_1139a29e;
L_1139a287:;
  /* 1139a287 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a28a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1139a291 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139a294 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139a297 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a298 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1139a29bu);
  /* 1139a29b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a29e:;
  /* 1139a29e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139a2a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139a2a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1139a2a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1139a2aa:;
  /* 1139a2aa mov esp, ebp */
  ESP = (EBP);
  /* 1139a2ac pop ebp */
  EBP = (pop32());
  /* 1139a2ad ret  */
  ESPCHK(0x1139a0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x1139a2b0 (89 bytes, 35 insns) */
void f_1139a2b0(void) {
  FTRACE(0x1139a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1139a2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a2b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139a2b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139a2ba:;
  /* 1139a2ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a2bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139a2bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a2c2 je 0x1139a2e2 */
  if (C.zf) goto L_1139a2e2;
  /* 1139a2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a2c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a2ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139a2cd mov ecx, dword ptr [0x113c0c84] */
  ECX = (r32((uint32_t)(0x113c0c84)));
  /* 1139a2d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a2d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139a2d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a2db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a2de jae 0x1139a2e2 */
  if (!C.cf) goto L_1139a2e2;
  /* 1139a2e0 jmp 0x1139a2ba */
  goto L_1139a2ba;
L_1139a2e2:;
  /* 1139a2e2 mov eax, dword ptr [0x113c0c84] */
  EAX = (r32((uint32_t)(0x113c0c84)));
  /* 1139a2e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a2ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139a2ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a2ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a2f2 jae 0x1139a2fe */
  if (!C.cf) goto L_1139a2fe;
  /* 1139a2f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a2f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139a2f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a2fc je 0x1139a302 */
  if (C.zf) goto L_1139a302;
L_1139a2fe:;
  /* 1139a2fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a300 jmp 0x1139a305 */
  goto L_1139a305;
L_1139a302:;
  /* 1139a302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139a305:;
  /* 1139a305 mov esp, ebp */
  ESP = (EBP);
  /* 1139a307 pop ebp */
  EBP = (pop32());
  /* 1139a308 ret  */
  ESPCHK(0x1139a2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a310 @ 0x1139a310 (61 bytes, 18 insns) */
void f_1139a310(void) {
  FTRACE(0x1139a310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a310 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a311 mov ebp, esp */
  EBP = (ESP);
  /* 1139a313 cmp dword ptr [0x113c29d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a31a jne 0x1139a34b */
  if (!C.zf) goto L_1139a34b;
  /* 1139a31c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a31e call 0x1139a010 */
  push32(0x1139a323u); f_1139a010();
  /* 1139a323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a326 cmp dword ptr [0x113c29d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a32d jne 0x1139a341 */
  if (!C.zf) goto L_1139a341;
  /* 1139a32f call 0x1139a370 */
  push32(0x1139a334u); f_1139a370();
  /* 1139a334 mov eax, dword ptr [0x113c29d8] */
  EAX = (r32((uint32_t)(0x113c29d8)));
  /* 1139a339 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a33c mov dword ptr [0x113c29d8], eax */
  w32((uint32_t)(0x113c29d8), (EAX));
L_1139a341:;
  /* 1139a341 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a343 call 0x1139a0b0 */
  push32(0x1139a348u); f_1139a0b0();
  /* 1139a348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a34b:;
  /* 1139a34b pop ebp */
  EBP = (pop32());
  /* 1139a34c ret  */
  ESPCHK(0x1139a310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x1139a350 (30 bytes, 11 insns) */
void f_1139a350(void) {
  FTRACE(0x1139a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a350 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a351 mov ebp, esp */
  EBP = (ESP);
  /* 1139a353 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a355 call 0x1139a010 */
  push32(0x1139a35au); f_1139a010();
  /* 1139a35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a35d call 0x1139a370 */
  push32(0x1139a362u); f_1139a370();
  /* 1139a362 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a364 call 0x1139a0b0 */
  push32(0x1139a369u); f_1139a0b0();
  /* 1139a369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a36c pop ebp */
  EBP = (pop32());
  /* 1139a36d ret  */
  ESPCHK(0x1139a350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x1139a370 (939 bytes, 266 insns) */
void f_1139a370(void) {
  FTRACE(0x1139a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a370 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a371 mov ebp, esp */
  EBP = (ESP);
  /* 1139a373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139a376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139a37d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139a37f call 0x1139a010 */
  push32(0x1139a384u); f_1139a010();
  /* 1139a384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a387 mov dword ptr [0x113c2920], 0 */
  w32((uint32_t)(0x113c2920), (0x0u));
  /* 1139a391 mov dword ptr [0x113c0d30], 0xffffffff */
  w32((uint32_t)(0x113c0d30), (0xffffffffu));
  /* 1139a39b mov eax, dword ptr [0x113c0d30] */
  EAX = (r32((uint32_t)(0x113c0d30)));
  /* 1139a3a0 mov dword ptr [0x113c0d20], eax */
  w32((uint32_t)(0x113c0d20), (EAX));
  /* 1139a3a5 push 0x113be298 */
  push32((uint32_t)(0x113be298u));
  /* 1139a3aa call 0x1139f150 */
  push32(0x1139a3afu); f_1139f150();
  /* 1139a3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a3b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139a3b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a3b9 jne 0x1139a4f3 */
  if (!C.zf) goto L_1139a4f3;
  /* 1139a3bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139a3c1 call 0x1139a0b0 */
  push32(0x1139a3c6u); f_1139a0b0();
  /* 1139a3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a3c9 push 0x113c2928 */
  push32((uint32_t)(0x113c2928u));
  /* 1139a3ce call dword ptr [0x113c5398] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5398))), 0x1139a3d4u);
  /* 1139a3d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a3d7 je 0x1139a4ee */
  if (C.zf) goto L_1139a4ee;
  /* 1139a3dd mov dword ptr [0x113c2920], 1 */
  w32((uint32_t)(0x113c2920), (0x1u));
  /* 1139a3e7 mov ecx, dword ptr [0x113c2928] */
  ECX = (r32((uint32_t)(0x113c2928)));
  /* 1139a3ed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a3f0 mov dword ptr [0x113c0c88], ecx */
  w32((uint32_t)(0x113c0c88), (ECX));
  /* 1139a3f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a3f8 mov dx, word ptr [0x113c296e] */
  DX = (r16((uint32_t)(0x113c296e)));
  /* 1139a3ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139a401 je 0x1139a419 */
  if (C.zf) goto L_1139a419;
  /* 1139a403 mov eax, dword ptr [0x113c297c] */
  EAX = (r32((uint32_t)(0x113c297c)));
  /* 1139a408 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a40b mov ecx, dword ptr [0x113c0c88] */
  ECX = (r32((uint32_t)(0x113c0c88)));
  /* 1139a411 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a413 mov dword ptr [0x113c0c88], ecx */
  w32((uint32_t)(0x113c0c88), (ECX));
L_1139a419:;
  /* 1139a419 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a41b mov dx, word ptr [0x113c29c2] */
  DX = (r16((uint32_t)(0x113c29c2)));
  /* 1139a422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139a424 je 0x1139a44e */
  if (C.zf) goto L_1139a44e;
  /* 1139a426 cmp dword ptr [0x113c29d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a42d je 0x1139a44e */
  if (C.zf) goto L_1139a44e;
  /* 1139a42f mov dword ptr [0x113c0c8c], 1 */
  w32((uint32_t)(0x113c0c8c), (0x1u));
  /* 1139a439 mov eax, dword ptr [0x113c29d0] */
  EAX = (r32((uint32_t)(0x113c29d0)));
  /* 1139a43e sub eax, dword ptr [0x113c297c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c297c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139a444 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a447 mov dword ptr [0x113c0c90], eax */
  w32((uint32_t)(0x113c0c90), (EAX));
  /* 1139a44c jmp 0x1139a462 */
  goto L_1139a462;
L_1139a44e:;
  /* 1139a44e mov dword ptr [0x113c0c8c], 0 */
  w32((uint32_t)(0x113c0c8c), (0x0u));
  /* 1139a458 mov dword ptr [0x113c0c90], 0 */
  w32((uint32_t)(0x113c0c90), (0x0u));
L_1139a462:;
  /* 1139a462 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1139a465 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a466 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a468 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1139a46a mov edx, dword ptr [0x113c0d14] */
  EDX = (r32((uint32_t)(0x113c0d14)));
  /* 1139a470 push edx */
  push32((uint32_t)(EDX));
  /* 1139a471 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1139a473 push 0x113c292c */
  push32((uint32_t)(0x113c292cu));
  /* 1139a478 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1139a47d mov eax, dword ptr [0x113c2a00] */
  EAX = (r32((uint32_t)(0x113c2a00)));
  /* 1139a482 push eax */
  push32((uint32_t)(EAX));
  /* 1139a483 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x1139a489u);
  /* 1139a489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139a48b je 0x1139a49f */
  if (C.zf) goto L_1139a49f;
  /* 1139a48d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a491 jne 0x1139a49f */
  if (!C.zf) goto L_1139a49f;
  /* 1139a493 mov ecx, dword ptr [0x113c0d14] */
  ECX = (r32((uint32_t)(0x113c0d14)));
  /* 1139a499 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1139a49d jmp 0x1139a4a8 */
  goto L_1139a4a8;
L_1139a49f:;
  /* 1139a49f mov edx, dword ptr [0x113c0d14] */
  EDX = (r32((uint32_t)(0x113c0d14)));
  /* 1139a4a5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_1139a4a8:;
  /* 1139a4a8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1139a4ab push eax */
  push32((uint32_t)(EAX));
  /* 1139a4ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a4ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1139a4b0 mov ecx, dword ptr [0x113c0d18] */
  ECX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a4b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1139a4b9 push 0x113c2980 */
  push32((uint32_t)(0x113c2980u));
  /* 1139a4be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1139a4c3 mov edx, dword ptr [0x113c2a00] */
  EDX = (r32((uint32_t)(0x113c2a00)));
  /* 1139a4c9 push edx */
  push32((uint32_t)(EDX));
  /* 1139a4ca call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x1139a4d0u);
  /* 1139a4d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139a4d2 je 0x1139a4e5 */
  if (C.zf) goto L_1139a4e5;
  /* 1139a4d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a4d8 jne 0x1139a4e5 */
  if (!C.zf) goto L_1139a4e5;
  /* 1139a4da mov eax, dword ptr [0x113c0d18] */
  EAX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a4df mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 1139a4e3 jmp 0x1139a4ee */
  goto L_1139a4ee;
L_1139a4e5:;
  /* 1139a4e5 mov ecx, dword ptr [0x113c0d18] */
  ECX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a4eb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1139a4ee:;
  /* 1139a4ee jmp 0x1139a717 */
  goto L_1139a717;
L_1139a4f3:;
  /* 1139a4f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a4f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a4f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139a4fb je 0x1139a51d */
  if (C.zf) goto L_1139a51d;
  /* 1139a4fd cmp dword ptr [0x113c29d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a504 je 0x1139a52c */
  if (C.zf) goto L_1139a52c;
  /* 1139a506 mov ecx, dword ptr [0x113c29d4] */
  ECX = (r32((uint32_t)(0x113c29d4)));
  /* 1139a50c push ecx */
  push32((uint32_t)(ECX));
  /* 1139a50d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a510 push edx */
  push32((uint32_t)(EDX));
  /* 1139a511 call 0x1139f090 */
  push32(0x1139a516u); f_1139f090();
  /* 1139a516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139a51b jne 0x1139a52c */
  if (!C.zf) goto L_1139a52c;
L_1139a51d:;
  /* 1139a51d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139a51f call 0x1139a0b0 */
  push32(0x1139a524u); f_1139a0b0();
  /* 1139a524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a527 jmp 0x1139a717 */
  goto L_1139a717;
L_1139a52c:;
  /* 1139a52c push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a52e mov eax, dword ptr [0x113c29d4] */
  EAX = (r32((uint32_t)(0x113c29d4)));
  /* 1139a533 push eax */
  push32((uint32_t)(EAX));
  /* 1139a534 call 0x113970a0 */
  push32(0x1139a539u); f_113970a0();
  /* 1139a539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a53c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 1139a541 push 0x113be290 */
  push32((uint32_t)(0x113be290u));
  /* 1139a546 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a548 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a54b push ecx */
  push32((uint32_t)(ECX));
  /* 1139a54c call 0x11399440 */
  push32(0x1139a551u); f_11399440();
  /* 1139a551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a557 push eax */
  push32((uint32_t)(EAX));
  /* 1139a558 call 0x11396610 */
  push32(0x1139a55du); f_11396610();
  /* 1139a55d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a560 mov dword ptr [0x113c29d4], eax */
  w32((uint32_t)(0x113c29d4), (EAX));
  /* 1139a565 cmp dword ptr [0x113c29d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a56c jne 0x1139a57d */
  if (!C.zf) goto L_1139a57d;
  /* 1139a56e push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139a570 call 0x1139a0b0 */
  push32(0x1139a575u); f_1139a0b0();
  /* 1139a575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a578 jmp 0x1139a717 */
  goto L_1139a717;
L_1139a57d:;
  /* 1139a57d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a580 push edx */
  push32((uint32_t)(EDX));
  /* 1139a581 mov eax, dword ptr [0x113c29d4] */
  EAX = (r32((uint32_t)(0x113c29d4)));
  /* 1139a586 push eax */
  push32((uint32_t)(EAX));
  /* 1139a587 call 0x113995c0 */
  push32(0x1139a58cu); f_113995c0();
  /* 1139a58c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a58f push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139a591 call 0x1139a0b0 */
  push32(0x1139a596u); f_1139a0b0();
  /* 1139a596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a599 push 3 */
  push32((uint32_t)(0x3u));
  /* 1139a59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a59e push ecx */
  push32((uint32_t)(ECX));
  /* 1139a59f mov edx, dword ptr [0x113c0d14] */
  EDX = (r32((uint32_t)(0x113c0d14)));
  /* 1139a5a5 push edx */
  push32((uint32_t)(EDX));
  /* 1139a5a6 call 0x11399e30 */
  push32(0x1139a5abu); f_11399e30();
  /* 1139a5ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a5ae mov eax, dword ptr [0x113c0d14] */
  EAX = (r32((uint32_t)(0x113c0d14)));
  /* 1139a5b3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 1139a5b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a5ba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a5bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139a5c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a5c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a5c6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a5c9 jne 0x1139a5dd */
  if (!C.zf) goto L_1139a5dd;
  /* 1139a5cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a5ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a5d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139a5d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a5d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a5da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1139a5dd:;
  /* 1139a5dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a5e0 push eax */
  push32((uint32_t)(EAX));
  /* 1139a5e1 call 0x1139ee40 */
  push32(0x1139a5e6u); f_1139ee40();
  /* 1139a5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a5e9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a5ef mov dword ptr [0x113c0c88], eax */
  w32((uint32_t)(0x113c0c88), (EAX));
L_1139a5f4:;
  /* 1139a5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a5f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139a5fa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a5fd je 0x1139a615 */
  if (C.zf) goto L_1139a615;
  /* 1139a5ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a602 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1139a605 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a608 jl 0x1139a620 */
  if ((C.sf!=C.of)) goto L_1139a620;
  /* 1139a60a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a60d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a610 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a613 jg 0x1139a620 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139a620;
L_1139a615:;
  /* 1139a615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a618 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a61b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139a61e jmp 0x1139a5f4 */
  goto L_1139a5f4;
L_1139a620:;
  /* 1139a620 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a623 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a626 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a629 jne 0x1139a6c5 */
  if (!C.zf) goto L_1139a6c5;
  /* 1139a62f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a635 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139a638 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a63b push edx */
  push32((uint32_t)(EDX));
  /* 1139a63c call 0x1139ee40 */
  push32(0x1139a641u); f_1139ee40();
  /* 1139a641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a644 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a647 mov ecx, dword ptr [0x113c0c88] */
  ECX = (r32((uint32_t)(0x113c0c88)));
  /* 1139a64d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a64f mov dword ptr [0x113c0c88], ecx */
  w32((uint32_t)(0x113c0c88), (ECX));
L_1139a655:;
  /* 1139a655 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a658 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a65b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a65e jl 0x1139a676 */
  if ((C.sf!=C.of)) goto L_1139a676;
  /* 1139a660 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a663 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139a666 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a669 jg 0x1139a676 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139a676;
  /* 1139a66b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a66e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a671 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139a674 jmp 0x1139a655 */
  goto L_1139a655;
L_1139a676:;
  /* 1139a676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a679 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139a67c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a67f jne 0x1139a6c5 */
  if (!C.zf) goto L_1139a6c5;
  /* 1139a681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a687 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139a68a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a68d push ecx */
  push32((uint32_t)(ECX));
  /* 1139a68e call 0x1139ee40 */
  push32(0x1139a693u); f_1139ee40();
  /* 1139a693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a696 mov edx, dword ptr [0x113c0c88] */
  EDX = (r32((uint32_t)(0x113c0c88)));
  /* 1139a69c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a69e mov dword ptr [0x113c0c88], edx */
  w32((uint32_t)(0x113c0c88), (EDX));
L_1139a6a4:;
  /* 1139a6a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a6a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1139a6aa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a6ad jl 0x1139a6c5 */
  if ((C.sf!=C.of)) goto L_1139a6c5;
  /* 1139a6af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a6b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139a6b5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a6b8 jg 0x1139a6c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139a6c5;
  /* 1139a6ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a6bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a6c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139a6c3 jmp 0x1139a6a4 */
  goto L_1139a6a4;
L_1139a6c5:;
  /* 1139a6c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a6c9 je 0x1139a6d9 */
  if (C.zf) goto L_1139a6d9;
  /* 1139a6cb mov edx, dword ptr [0x113c0c88] */
  EDX = (r32((uint32_t)(0x113c0c88)));
  /* 1139a6d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139a6d3 mov dword ptr [0x113c0c88], edx */
  w32((uint32_t)(0x113c0c88), (EDX));
L_1139a6d9:;
  /* 1139a6d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a6dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1139a6df mov dword ptr [0x113c0c8c], ecx */
  w32((uint32_t)(0x113c0c8c), (ECX));
  /* 1139a6e5 cmp dword ptr [0x113c0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a6ec je 0x1139a70e */
  if (C.zf) goto L_1139a70e;
  /* 1139a6ee push 3 */
  push32((uint32_t)(0x3u));
  /* 1139a6f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139a6f3 push edx */
  push32((uint32_t)(EDX));
  /* 1139a6f4 mov eax, dword ptr [0x113c0d18] */
  EAX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a6f9 push eax */
  push32((uint32_t)(EAX));
  /* 1139a6fa call 0x11399e30 */
  push32(0x1139a6ffu); f_11399e30();
  /* 1139a6ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a702 mov ecx, dword ptr [0x113c0d18] */
  ECX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a708 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1139a70c jmp 0x1139a717 */
  goto L_1139a717;
L_1139a70e:;
  /* 1139a70e mov edx, dword ptr [0x113c0d18] */
  EDX = (r32((uint32_t)(0x113c0d18)));
  /* 1139a714 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_1139a717:;
  /* 1139a717 mov esp, ebp */
  ESP = (EBP);
  /* 1139a719 pop ebp */
  EBP = (pop32());
  /* 1139a71a ret  */
  ESPCHK(0x1139a370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a720 @ 0x1139a720 (46 bytes, 18 insns) */
void f_1139a720(void) {
  FTRACE(0x1139a720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a720 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a721 mov ebp, esp */
  EBP = (ESP);
  /* 1139a723 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a724 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a726 call 0x1139a010 */
  push32(0x1139a72bu); f_1139a010();
  /* 1139a72b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a72e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a731 push eax */
  push32((uint32_t)(EAX));
  /* 1139a732 call 0x1139a750 */
  push32(0x1139a737u); f_1139a750();
  /* 1139a737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a73a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139a73d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1139a73f call 0x1139a0b0 */
  push32(0x1139a744u); f_1139a0b0();
  /* 1139a744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139a74a mov esp, ebp */
  ESP = (EBP);
  /* 1139a74c pop ebp */
  EBP = (pop32());
  /* 1139a74d ret  */
  ESPCHK(0x1139a720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a750 @ 0x1139a750 (762 bytes, 246 insns) */
void f_1139a750(void) {
  FTRACE(0x1139a750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139a750 push ebp */
  push32((uint32_t)(EBP));
  /* 1139a751 mov ebp, esp */
  EBP = (ESP);
  /* 1139a753 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a754 cmp dword ptr [0x113c0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a75b jne 0x1139a764 */
  if (!C.zf) goto L_1139a764;
  /* 1139a75d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a75f jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139a764:;
  /* 1139a764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a767 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1139a76a cmp ecx, dword ptr [0x113c0d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a770 jne 0x1139a784 */
  if (!C.zf) goto L_1139a784;
  /* 1139a772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a775 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1139a778 cmp eax, dword ptr [0x113c0d30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a77e je 0x1139a94b */
  if (C.zf) goto L_1139a94b;
L_1139a784:;
  /* 1139a784 cmp dword ptr [0x113c2920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a78b je 0x1139a905 */
  if (C.zf) goto L_1139a905;
  /* 1139a791 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a793 mov cx, word ptr [0x113c29c0] */
  CX = (r16((uint32_t)(0x113c29c0)));
  /* 1139a79a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139a79c jne 0x1139a7f9 */
  if (!C.zf) goto L_1139a7f9;
  /* 1139a79e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a7a0 mov dx, word ptr [0x113c29ce] */
  DX = (r16((uint32_t)(0x113c29ce)));
  /* 1139a7a7 push edx */
  push32((uint32_t)(EDX));
  /* 1139a7a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a7aa mov ax, word ptr [0x113c29cc] */
  AX = (r16((uint32_t)(0x113c29cc)));
  /* 1139a7b0 push eax */
  push32((uint32_t)(EAX));
  /* 1139a7b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a7b3 mov cx, word ptr [0x113c29ca] */
  CX = (r16((uint32_t)(0x113c29ca)));
  /* 1139a7ba push ecx */
  push32((uint32_t)(ECX));
  /* 1139a7bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a7bd mov dx, word ptr [0x113c29c8] */
  DX = (r16((uint32_t)(0x113c29c8)));
  /* 1139a7c4 push edx */
  push32((uint32_t)(EDX));
  /* 1139a7c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a7c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a7c9 mov ax, word ptr [0x113c29c4] */
  AX = (r16((uint32_t)(0x113c29c4)));
  /* 1139a7cf push eax */
  push32((uint32_t)(EAX));
  /* 1139a7d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a7d2 mov cx, word ptr [0x113c29c6] */
  CX = (r16((uint32_t)(0x113c29c6)));
  /* 1139a7d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a7da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a7dc mov dx, word ptr [0x113c29c2] */
  DX = (r16((uint32_t)(0x113c29c2)));
  /* 1139a7e3 push edx */
  push32((uint32_t)(EDX));
  /* 1139a7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a7e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1139a7ea push ecx */
  push32((uint32_t)(ECX));
  /* 1139a7eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a7ef call 0x1139aa50 */
  push32(0x1139a7f4u); f_1139aa50();
  /* 1139a7f4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a7f7 jmp 0x1139a84a */
  goto L_1139a84a;
L_1139a7f9:;
  /* 1139a7f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a7fb mov dx, word ptr [0x113c29ce] */
  DX = (r16((uint32_t)(0x113c29ce)));
  /* 1139a802 push edx */
  push32((uint32_t)(EDX));
  /* 1139a803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a805 mov ax, word ptr [0x113c29cc] */
  AX = (r16((uint32_t)(0x113c29cc)));
  /* 1139a80b push eax */
  push32((uint32_t)(EAX));
  /* 1139a80c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a80e mov cx, word ptr [0x113c29ca] */
  CX = (r16((uint32_t)(0x113c29ca)));
  /* 1139a815 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a816 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a818 mov dx, word ptr [0x113c29c8] */
  DX = (r16((uint32_t)(0x113c29c8)));
  /* 1139a81f push edx */
  push32((uint32_t)(EDX));
  /* 1139a820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a822 mov ax, word ptr [0x113c29c6] */
  AX = (r16((uint32_t)(0x113c29c6)));
  /* 1139a828 push eax */
  push32((uint32_t)(EAX));
  /* 1139a829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a82b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a82d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a82f mov cx, word ptr [0x113c29c2] */
  CX = (r16((uint32_t)(0x113c29c2)));
  /* 1139a836 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a83a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1139a83d push eax */
  push32((uint32_t)(EAX));
  /* 1139a83e push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a840 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a842 call 0x1139aa50 */
  push32(0x1139a847u); f_1139aa50();
  /* 1139a847 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a84a:;
  /* 1139a84a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a84c mov cx, word ptr [0x113c296c] */
  CX = (r16((uint32_t)(0x113c296c)));
  /* 1139a853 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139a855 jne 0x1139a8b2 */
  if (!C.zf) goto L_1139a8b2;
  /* 1139a857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a859 mov dx, word ptr [0x113c297a] */
  DX = (r16((uint32_t)(0x113c297a)));
  /* 1139a860 push edx */
  push32((uint32_t)(EDX));
  /* 1139a861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a863 mov ax, word ptr [0x113c2978] */
  AX = (r16((uint32_t)(0x113c2978)));
  /* 1139a869 push eax */
  push32((uint32_t)(EAX));
  /* 1139a86a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a86c mov cx, word ptr [0x113c2976] */
  CX = (r16((uint32_t)(0x113c2976)));
  /* 1139a873 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a876 mov dx, word ptr [0x113c2974] */
  DX = (r16((uint32_t)(0x113c2974)));
  /* 1139a87d push edx */
  push32((uint32_t)(EDX));
  /* 1139a87e push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a882 mov ax, word ptr [0x113c2970] */
  AX = (r16((uint32_t)(0x113c2970)));
  /* 1139a888 push eax */
  push32((uint32_t)(EAX));
  /* 1139a889 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a88b mov cx, word ptr [0x113c2972] */
  CX = (r16((uint32_t)(0x113c2972)));
  /* 1139a892 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a893 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a895 mov dx, word ptr [0x113c296e] */
  DX = (r16((uint32_t)(0x113c296e)));
  /* 1139a89c push edx */
  push32((uint32_t)(EDX));
  /* 1139a89d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a8a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1139a8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139a8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a8a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a8a8 call 0x1139aa50 */
  push32(0x1139a8adu); f_1139aa50();
  /* 1139a8ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a8b0 jmp 0x1139a903 */
  goto L_1139a903;
L_1139a8b2:;
  /* 1139a8b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a8b4 mov dx, word ptr [0x113c297a] */
  DX = (r16((uint32_t)(0x113c297a)));
  /* 1139a8bb push edx */
  push32((uint32_t)(EDX));
  /* 1139a8bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a8be mov ax, word ptr [0x113c2978] */
  AX = (r16((uint32_t)(0x113c2978)));
  /* 1139a8c4 push eax */
  push32((uint32_t)(EAX));
  /* 1139a8c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a8c7 mov cx, word ptr [0x113c2976] */
  CX = (r16((uint32_t)(0x113c2976)));
  /* 1139a8ce push ecx */
  push32((uint32_t)(ECX));
  /* 1139a8cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139a8d1 mov dx, word ptr [0x113c2974] */
  DX = (r16((uint32_t)(0x113c2974)));
  /* 1139a8d8 push edx */
  push32((uint32_t)(EDX));
  /* 1139a8d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a8db mov ax, word ptr [0x113c2972] */
  AX = (r16((uint32_t)(0x113c2972)));
  /* 1139a8e1 push eax */
  push32((uint32_t)(EAX));
  /* 1139a8e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a8e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a8e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139a8e8 mov cx, word ptr [0x113c296e] */
  CX = (r16((uint32_t)(0x113c296e)));
  /* 1139a8ef push ecx */
  push32((uint32_t)(ECX));
  /* 1139a8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a8f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1139a8f6 push eax */
  push32((uint32_t)(EAX));
  /* 1139a8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a8f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a8fb call 0x1139aa50 */
  push32(0x1139a900u); f_1139aa50();
  /* 1139a900 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a903:;
  /* 1139a903 jmp 0x1139a94b */
  goto L_1139a94b;
L_1139a905:;
  /* 1139a905 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a907 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a90b push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a90d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a90f push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a911 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a913 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139a915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a918 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1139a91b push edx */
  push32((uint32_t)(EDX));
  /* 1139a91c push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a91e push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a920 call 0x1139aa50 */
  push32(0x1139a925u); f_1139aa50();
  /* 1139a925 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a92a push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a92c push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a92e push 2 */
  push32((uint32_t)(0x2u));
  /* 1139a930 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a932 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a934 push 5 */
  push32((uint32_t)(0x5u));
  /* 1139a936 push 0xa */
  push32((uint32_t)(0xau));
  /* 1139a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a93b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1139a93e push ecx */
  push32((uint32_t)(ECX));
  /* 1139a93f push 1 */
  push32((uint32_t)(0x1u));
  /* 1139a941 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139a943 call 0x1139aa50 */
  push32(0x1139a948u); f_1139aa50();
  /* 1139a948 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139a94b:;
  /* 1139a94b mov edx, dword ptr [0x113c0d24] */
  EDX = (r32((uint32_t)(0x113c0d24)));
  /* 1139a951 cmp edx, dword ptr [0x113c0d34] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a957 jge 0x1139a9a4 */
  if ((C.sf==C.of)) goto L_1139a9a4;
  /* 1139a959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a95c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1139a95f cmp ecx, dword ptr [0x113c0d24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a965 jl 0x1139a975 */
  if ((C.sf!=C.of)) goto L_1139a975;
  /* 1139a967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a96a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1139a96d cmp eax, dword ptr [0x113c0d34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a973 jle 0x1139a97c */
  if ((C.zf||C.sf!=C.of)) goto L_1139a97c;
L_1139a975:;
  /* 1139a975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a977 jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139a97c:;
  /* 1139a97c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a97f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1139a982 cmp edx, dword ptr [0x113c0d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a988 jle 0x1139a9a2 */
  if ((C.zf||C.sf!=C.of)) goto L_1139a9a2;
  /* 1139a98a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a98d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1139a990 cmp ecx, dword ptr [0x113c0d34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a996 jge 0x1139a9a2 */
  if ((C.sf==C.of)) goto L_1139a9a2;
  /* 1139a998 mov eax, 1 */
  EAX = (0x1u);
  /* 1139a99d jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139a9a2:;
  /* 1139a9a2 jmp 0x1139a9e7 */
  goto L_1139a9e7;
L_1139a9a4:;
  /* 1139a9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1139a9aa cmp eax, dword ptr [0x113c0d34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a9b0 jl 0x1139a9c0 */
  if ((C.sf!=C.of)) goto L_1139a9c0;
  /* 1139a9b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1139a9b8 cmp edx, dword ptr [0x113c0d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a9be jle 0x1139a9c7 */
  if ((C.zf||C.sf!=C.of)) goto L_1139a9c7;
L_1139a9c0:;
  /* 1139a9c0 mov eax, 1 */
  EAX = (0x1u);
  /* 1139a9c5 jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139a9c7:;
  /* 1139a9c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1139a9cd cmp ecx, dword ptr [0x113c0d34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a9d3 jle 0x1139a9e7 */
  if ((C.zf||C.sf!=C.of)) goto L_1139a9e7;
  /* 1139a9d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1139a9db cmp eax, dword ptr [0x113c0d24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139a9e1 jge 0x1139a9e7 */
  if ((C.sf==C.of)) goto L_1139a9e7;
  /* 1139a9e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139a9e5 jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139a9e7:;
  /* 1139a9e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139a9ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139a9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139a9f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139a9f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139a9fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139a9fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139aa03 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aa05 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139aa0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139aa0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139aa11 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1139aa14 cmp edx, dword ptr [0x113c0d24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c0d24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aa1a jne 0x1139aa32 */
  if (!C.zf) goto L_1139aa32;
  /* 1139aa1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139aa1f cmp eax, dword ptr [0x113c0d28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0d28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aa25 jl 0x1139aa2e */
  if ((C.sf!=C.of)) goto L_1139aa2e;
  /* 1139aa27 mov eax, 1 */
  EAX = (0x1u);
  /* 1139aa2c jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139aa2e:;
  /* 1139aa2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139aa30 jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139aa32:;
  /* 1139aa32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139aa35 cmp ecx, dword ptr [0x113c0d38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0d38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aa3b jge 0x1139aa44 */
  if ((C.sf==C.of)) goto L_1139aa44;
  /* 1139aa3d mov eax, 1 */
  EAX = (0x1u);
  /* 1139aa42 jmp 0x1139aa46 */
  goto L_1139aa46;
L_1139aa44:;
  /* 1139aa44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139aa46:;
  /* 1139aa46 mov esp, ebp */
  ESP = (EBP);
  /* 1139aa48 pop ebp */
  EBP = (pop32());
  /* 1139aa49 ret  */
  ESPCHK(0x1139a750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa50 @ 0x1139aa50 (504 bytes, 145 insns) */
void f_1139aa50(void) {
  FTRACE(0x1139aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1139aa51 mov ebp, esp */
  EBP = (ESP);
  /* 1139aa53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aa56 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aa5a jne 0x1139ab2c */
  if (!C.zf) goto L_1139ab2c;
  /* 1139aa60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139aa63 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1139aa66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139aa68 jne 0x1139aa79 */
  if (!C.zf) goto L_1139aa79;
  /* 1139aa6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139aa6d mov edx, dword ptr [ecx*4 + 0x113c0d38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0d38)));
  /* 1139aa74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1139aa77 jmp 0x1139aa86 */
  goto L_1139aa86;
L_1139aa79:;
  /* 1139aa79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139aa7c mov ecx, dword ptr [eax*4 + 0x113c0d6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0d6c)));
  /* 1139aa83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1139aa86:;
  /* 1139aa86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139aa89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aa8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1139aa8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139aa92 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aa95 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139aa9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139aa9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aaa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139aaa3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aaa6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1139aaa9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1139aaad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139aaae mov ecx, 7 */
  ECX = (0x7u);
  /* 1139aab3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139aab5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139aab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139aabb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aabe jge 0x1139aad9 */
  if ((C.sf==C.of)) goto L_1139aad9;
  /* 1139aac0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139aac3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aac6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139aac9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aacc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139aacf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aad2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aad4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139aad7 jmp 0x1139aaed */
  goto L_1139aaed;
L_1139aad9:;
  /* 1139aad9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139aadc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aadf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139aae2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139aae5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aae8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aaea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1139aaed:;
  /* 1139aaed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aaf1 jne 0x1139ab2a */
  if (!C.zf) goto L_1139ab2a;
  /* 1139aaf3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139aaf6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1139aaf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139aafb jne 0x1139ab0c */
  if (!C.zf) goto L_1139ab0c;
  /* 1139aafd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ab00 mov eax, dword ptr [edx*4 + 0x113c0d3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c0d3c)));
  /* 1139ab07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139ab0a jmp 0x1139ab19 */
  goto L_1139ab19;
L_1139ab0c:;
  /* 1139ab0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ab0f mov edx, dword ptr [ecx*4 + 0x113c0d70] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c0d70)));
  /* 1139ab16 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1139ab19:;
  /* 1139ab19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ab1c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ab1f jle 0x1139ab2a */
  if ((C.zf||C.sf!=C.of)) goto L_1139ab2a;
  /* 1139ab21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ab24 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ab27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1139ab2a:;
  /* 1139ab2a jmp 0x1139ab61 */
  goto L_1139ab61;
L_1139ab2c:;
  /* 1139ab2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ab2f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ab32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ab34 jne 0x1139ab45 */
  if (!C.zf) goto L_1139ab45;
  /* 1139ab36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ab39 mov ecx, dword ptr [eax*4 + 0x113c0d38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0d38)));
  /* 1139ab40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1139ab43 jmp 0x1139ab52 */
  goto L_1139ab52;
L_1139ab45:;
  /* 1139ab45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ab48 mov eax, dword ptr [edx*4 + 0x113c0d6c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c0d6c)));
  /* 1139ab4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1139ab52:;
  /* 1139ab52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139ab55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139ab58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ab5b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ab5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139ab61:;
  /* 1139ab61 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ab65 jne 0x1139aba1 */
  if (!C.zf) goto L_1139aba1;
  /* 1139ab67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ab6a mov dword ptr [0x113c0d24], eax */
  w32((uint32_t)(0x113c0d24), (EAX));
  /* 1139ab6f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1139ab72 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139ab75 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1139ab78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ab7a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139ab7d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1139ab80 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ab82 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139ab88 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1139ab8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ab8d mov dword ptr [0x113c0d28], ecx */
  w32((uint32_t)(0x113c0d28), (ECX));
  /* 1139ab93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ab96 mov dword ptr [0x113c0d20], edx */
  w32((uint32_t)(0x113c0d20), (EDX));
  /* 1139ab9c jmp 0x1139ac44 */
  goto L_1139ac44;
L_1139aba1:;
  /* 1139aba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139aba4 mov dword ptr [0x113c0d34], eax */
  w32((uint32_t)(0x113c0d34), (EAX));
  /* 1139aba9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1139abac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139abaf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1139abb2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139abb4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139abb7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1139abba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139abbc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139abc2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1139abc5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139abc7 mov dword ptr [0x113c0d38], ecx */
  w32((uint32_t)(0x113c0d38), (ECX));
  /* 1139abcd mov edx, dword ptr [0x113c0c90] */
  EDX = (r32((uint32_t)(0x113c0c90)));
  /* 1139abd3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139abd9 mov eax, dword ptr [0x113c0d38] */
  EAX = (r32((uint32_t)(0x113c0d38)));
  /* 1139abde add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139abe0 mov dword ptr [0x113c0d38], eax */
  w32((uint32_t)(0x113c0d38), (EAX));
  /* 1139abe5 cmp dword ptr [0x113c0d38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c0d38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139abec jge 0x1139ac11 */
  if ((C.sf==C.of)) goto L_1139ac11;
  /* 1139abee mov ecx, dword ptr [0x113c0d38] */
  ECX = (r32((uint32_t)(0x113c0d38)));
  /* 1139abf4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139abfa mov dword ptr [0x113c0d38], ecx */
  w32((uint32_t)(0x113c0d38), (ECX));
  /* 1139ac00 mov edx, dword ptr [0x113c0d34] */
  EDX = (r32((uint32_t)(0x113c0d34)));
  /* 1139ac06 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ac09 mov dword ptr [0x113c0d34], edx */
  w32((uint32_t)(0x113c0d34), (EDX));
  /* 1139ac0f jmp 0x1139ac3b */
  goto L_1139ac3b;
L_1139ac11:;
  /* 1139ac11 cmp dword ptr [0x113c0d38], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x113c0d38))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ac1b jl 0x1139ac3b */
  if ((C.sf!=C.of)) goto L_1139ac3b;
  /* 1139ac1d mov eax, dword ptr [0x113c0d38] */
  EAX = (r32((uint32_t)(0x113c0d38)));
  /* 1139ac22 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ac27 mov dword ptr [0x113c0d38], eax */
  w32((uint32_t)(0x113c0d38), (EAX));
  /* 1139ac2c mov ecx, dword ptr [0x113c0d34] */
  ECX = (r32((uint32_t)(0x113c0d34)));
  /* 1139ac32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ac35 mov dword ptr [0x113c0d34], ecx */
  w32((uint32_t)(0x113c0d34), (ECX));
L_1139ac3b:;
  /* 1139ac3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ac3e mov dword ptr [0x113c0d30], edx */
  w32((uint32_t)(0x113c0d30), (EDX));
L_1139ac44:;
  /* 1139ac44 mov esp, ebp */
  ESP = (EBP);
  /* 1139ac46 pop ebp */
  EBP = (pop32());
  /* 1139ac47 ret  */
  ESPCHK(0x1139aa50u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1139ac50 (48 bytes, 17 insns) */
void f_1139ac50(void) {
  FTRACE(0x1139ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ac51 mov ebp, esp */
  EBP = (ESP);
  /* 1139ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ac54 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139ac56 call 0x1139a010 */
  push32(0x1139ac5bu); f_1139a010();
  /* 1139ac5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ac5e mov eax, dword ptr [0x113c29e0] */
  EAX = (r32((uint32_t)(0x113c29e0)));
  /* 1139ac63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139ac66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ac69 mov dword ptr [0x113c29e0], ecx */
  w32((uint32_t)(0x113c29e0), (ECX));
  /* 1139ac6f push 9 */
  push32((uint32_t)(0x9u));
  /* 1139ac71 call 0x1139a0b0 */
  push32(0x1139ac76u); f_1139a0b0();
  /* 1139ac76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ac79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ac7c mov esp, ebp */
  ESP = (EBP);
  /* 1139ac7e pop ebp */
  EBP = (pop32());
  /* 1139ac7f ret  */
  ESPCHK(0x1139ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac80 @ 0x1139ac80 (10 bytes, 5 insns) */
void f_1139ac80(void) {
  FTRACE(0x1139ac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ac80 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ac81 mov ebp, esp */
  EBP = (ESP);
  /* 1139ac83 mov eax, dword ptr [0x113c29e0] */
  EAX = (r32((uint32_t)(0x113c29e0)));
  /* 1139ac88 pop ebp */
  EBP = (pop32());
  /* 1139ac89 ret  */
  ESPCHK(0x1139ac80u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1139ac90 (45 bytes, 19 insns) */
void f_1139ac90(void) {
  FTRACE(0x1139ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1139ac93 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ac94 mov eax, dword ptr [0x113c29e0] */
  EAX = (r32((uint32_t)(0x113c29e0)));
  /* 1139ac99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139ac9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aca0 je 0x1139acb0 */
  if (C.zf) goto L_1139acb0;
  /* 1139aca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139aca5 push ecx */
  push32((uint32_t)(ECX));
  /* 1139aca6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1139aca9u);
  /* 1139aca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139acac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139acae jne 0x1139acb4 */
  if (!C.zf) goto L_1139acb4;
L_1139acb0:;
  /* 1139acb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139acb2 jmp 0x1139acb9 */
  goto L_1139acb9;
L_1139acb4:;
  /* 1139acb4 mov eax, 1 */
  EAX = (0x1u);
L_1139acb9:;
  /* 1139acb9 mov esp, ebp */
  ESP = (EBP);
  /* 1139acbb pop ebp */
  EBP = (pop32());
  /* 1139acbc ret  */
  ESPCHK(0x1139ac90u, _esp0);
  ESP += 4; return;
}

