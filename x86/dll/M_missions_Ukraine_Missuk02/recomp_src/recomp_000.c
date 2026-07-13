#include "recomp.h"

/* thunk_FUN_100071d0 @ 0x12521005 (5 bytes, 1 insns) */
void f_12521005(void) {
  FTRACE(0x12521005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12521005 jmp 0x125271d0 */
  f_125271d0(); return;
}

/* OnInit @ 0x1252100a (5 bytes, 1 insns) */
void f_1252100a(void) {
  FTRACE(0x1252100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252100a jmp 0x125210a0 */
  f_125210a0(); return;
}

/* thunk_FUN_10007220 @ 0x1252100f (5 bytes, 1 insns) */
void f_1252100f(void) {
  FTRACE(0x1252100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252100f jmp 0x12527220 */
  f_12527220(); return;
}

/* thunk_FUN_10001040 @ 0x12521014 (5 bytes, 1 insns) */
void f_12521014(void) {
  FTRACE(0x12521014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12521014 jmp 0x12521040 */
  f_12521040(); return;
}

/* ProcessScenary @ 0x12521019 (5 bytes, 1 insns) */
void f_12521019(void) {
  FTRACE(0x12521019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12521019 jmp 0x125223f0 */
  f_125223f0(); return;
}

/* FUN_10001040 @ 0x12521040 (67 bytes, 26 insns) */
void f_12521040(void) {
  FTRACE(0x12521040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12521040 push ebp */
  push32((uint32_t)(EBP));
  /* 12521041 mov ebp, esp */
  EBP = (ESP);
  /* 12521043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12521046 push ebx */
  push32((uint32_t)(EBX));
  /* 12521047 push esi */
  push32((uint32_t)(ESI));
  /* 12521048 push edi */
  push32((uint32_t)(EDI));
  /* 12521049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1252104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12521051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12521056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12521058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521062 je 0x12521066 */
  if (C.zf) goto L_12521066;
  /* 12521064 jmp 0x1252106b */
  goto L_1252106b;
L_12521066:;
  /* 12521066 call 0x1252100a */
  push32(0x1252106bu); f_1252100a();
L_1252106b:;
  /* 1252106b mov eax, 1 */
  EAX = (0x1u);
  /* 12521070 pop edi */
  EDI = (pop32());
  /* 12521071 pop esi */
  ESI = (pop32());
  /* 12521072 pop ebx */
  EBX = (pop32());
  /* 12521073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521078 call 0x12527390 */
  push32(0x1252107du); f_12527390();
  /* 1252107d mov esp, ebp */
  ESP = (EBP);
  /* 1252107f pop ebp */
  EBP = (pop32());
  /* 12521080 ret 0xc */
  ESPCHK(0x12521040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x125210a0 (3949 bytes, 999 insns) */
void f_125210a0(void) {
  FTRACE(0x125210a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125210a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125210a1 mov ebp, esp */
  EBP = (ESP);
  /* 125210a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125210a6 push ebx */
  push32((uint32_t)(EBX));
  /* 125210a7 push esi */
  push32((uint32_t)(ESI));
  /* 125210a8 push edi */
  push32((uint32_t)(EDI));
  /* 125210a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125210ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125210b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125210b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125210b8 mov esi, esp */
  ESI = (ESP);
  /* 125210ba push 0x1254f5e4 */
  push32((uint32_t)(0x1254f5e4u));
  /* 125210bf push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 125210c4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125210cau);
  /* 125210ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125210cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125210cf call 0x12527390 */
  push32(0x125210d4u); f_12527390();
  /* 125210d4 mov esi, esp */
  ESI = (ESP);
  /* 125210d6 push 0x1254f5dc */
  push32((uint32_t)(0x1254f5dcu));
  /* 125210db push 0x12554420 */
  push32((uint32_t)(0x12554420u));
  /* 125210e0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125210e6u);
  /* 125210e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125210e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125210eb call 0x12527390 */
  push32(0x125210f0u); f_12527390();
  /* 125210f0 mov esi, esp */
  ESI = (ESP);
  /* 125210f2 push 0x1254f5d4 */
  push32((uint32_t)(0x1254f5d4u));
  /* 125210f7 push 0x12554430 */
  push32((uint32_t)(0x12554430u));
  /* 125210fc call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521102u);
  /* 12521102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521107 call 0x12527390 */
  push32(0x1252110cu); f_12527390();
  /* 1252110c mov esi, esp */
  ESI = (ESP);
  /* 1252110e push 0x1254f5cc */
  push32((uint32_t)(0x1254f5ccu));
  /* 12521113 push 0x12554428 */
  push32((uint32_t)(0x12554428u));
  /* 12521118 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252111eu);
  /* 1252111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521123 call 0x12527390 */
  push32(0x12521128u); f_12527390();
  /* 12521128 mov esi, esp */
  ESI = (ESP);
  /* 1252112a push 0x1254f5c4 */
  push32((uint32_t)(0x1254f5c4u));
  /* 1252112f push 0x12554440 */
  push32((uint32_t)(0x12554440u));
  /* 12521134 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252113au);
  /* 1252113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252113f call 0x12527390 */
  push32(0x12521144u); f_12527390();
  /* 12521144 mov esi, esp */
  ESI = (ESP);
  /* 12521146 push 0x1254f5bc */
  push32((uint32_t)(0x1254f5bcu));
  /* 1252114b push 0x12554438 */
  push32((uint32_t)(0x12554438u));
  /* 12521150 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521156u);
  /* 12521156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252115b call 0x12527390 */
  push32(0x12521160u); f_12527390();
  /* 12521160 mov esi, esp */
  ESI = (ESP);
  /* 12521162 push 0x1254f5b4 */
  push32((uint32_t)(0x1254f5b4u));
  /* 12521167 push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 1252116c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521172u);
  /* 12521172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521177 call 0x12527390 */
  push32(0x1252117cu); f_12527390();
  /* 1252117c mov esi, esp */
  ESI = (ESP);
  /* 1252117e push 0x1254f5ac */
  push32((uint32_t)(0x1254f5acu));
  /* 12521183 push 0x12554448 */
  push32((uint32_t)(0x12554448u));
  /* 12521188 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252118eu);
  /* 1252118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521193 call 0x12527390 */
  push32(0x12521198u); f_12527390();
  /* 12521198 mov esi, esp */
  ESI = (ESP);
  /* 1252119a push 0x1254f5a0 */
  push32((uint32_t)(0x1254f5a0u));
  /* 1252119f push 0x12554640 */
  push32((uint32_t)(0x12554640u));
  /* 125211a4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125211aau);
  /* 125211aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125211ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125211af call 0x12527390 */
  push32(0x125211b4u); f_12527390();
  /* 125211b4 mov esi, esp */
  ESI = (ESP);
  /* 125211b6 push 0x1254f594 */
  push32((uint32_t)(0x1254f594u));
  /* 125211bb push 0x125546a8 */
  push32((uint32_t)(0x125546a8u));
  /* 125211c0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125211c6u);
  /* 125211c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125211c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125211cb call 0x12527390 */
  push32(0x125211d0u); f_12527390();
  /* 125211d0 mov esi, esp */
  ESI = (ESP);
  /* 125211d2 push 0x1254f588 */
  push32((uint32_t)(0x1254f588u));
  /* 125211d7 push 0x125546b0 */
  push32((uint32_t)(0x125546b0u));
  /* 125211dc call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125211e2u);
  /* 125211e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125211e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125211e7 call 0x12527390 */
  push32(0x125211ecu); f_12527390();
  /* 125211ec mov esi, esp */
  ESI = (ESP);
  /* 125211ee push 0x1254f57c */
  push32((uint32_t)(0x1254f57cu));
  /* 125211f3 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 125211f8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125211feu);
  /* 125211fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521203 call 0x12527390 */
  push32(0x12521208u); f_12527390();
  /* 12521208 mov esi, esp */
  ESI = (ESP);
  /* 1252120a push 0x1254f570 */
  push32((uint32_t)(0x1254f570u));
  /* 1252120f push 0x125546a0 */
  push32((uint32_t)(0x125546a0u));
  /* 12521214 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252121au);
  /* 1252121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252121f call 0x12527390 */
  push32(0x12521224u); f_12527390();
  /* 12521224 mov esi, esp */
  ESI = (ESP);
  /* 12521226 push 0x1254f564 */
  push32((uint32_t)(0x1254f564u));
  /* 1252122b push 0x12554678 */
  push32((uint32_t)(0x12554678u));
  /* 12521230 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521236u);
  /* 12521236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252123b call 0x12527390 */
  push32(0x12521240u); f_12527390();
  /* 12521240 mov esi, esp */
  ESI = (ESP);
  /* 12521242 push 0x1254f558 */
  push32((uint32_t)(0x1254f558u));
  /* 12521247 push 0x12554688 */
  push32((uint32_t)(0x12554688u));
  /* 1252124c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521252u);
  /* 12521252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521257 call 0x12527390 */
  push32(0x1252125cu); f_12527390();
  /* 1252125c mov esi, esp */
  ESI = (ESP);
  /* 1252125e push 0x1254f54c */
  push32((uint32_t)(0x1254f54cu));
  /* 12521263 push 0x12554650 */
  push32((uint32_t)(0x12554650u));
  /* 12521268 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252126eu);
  /* 1252126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521273 call 0x12527390 */
  push32(0x12521278u); f_12527390();
  /* 12521278 mov esi, esp */
  ESI = (ESP);
  /* 1252127a push 0x1254f540 */
  push32((uint32_t)(0x1254f540u));
  /* 1252127f push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12521284 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252128au);
  /* 1252128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252128f call 0x12527390 */
  push32(0x12521294u); f_12527390();
  /* 12521294 mov esi, esp */
  ESI = (ESP);
  /* 12521296 push 0x1254f534 */
  push32((uint32_t)(0x1254f534u));
  /* 1252129b push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 125212a0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125212a6u);
  /* 125212a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125212a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125212ab call 0x12527390 */
  push32(0x125212b0u); f_12527390();
  /* 125212b0 mov esi, esp */
  ESI = (ESP);
  /* 125212b2 push 0x1254f528 */
  push32((uint32_t)(0x1254f528u));
  /* 125212b7 push 0x12554698 */
  push32((uint32_t)(0x12554698u));
  /* 125212bc call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125212c2u);
  /* 125212c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125212c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125212c7 call 0x12527390 */
  push32(0x125212ccu); f_12527390();
  /* 125212cc mov esi, esp */
  ESI = (ESP);
  /* 125212ce push 0x1254f51c */
  push32((uint32_t)(0x1254f51cu));
  /* 125212d3 push 0x12554670 */
  push32((uint32_t)(0x12554670u));
  /* 125212d8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125212deu);
  /* 125212de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125212e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125212e3 call 0x12527390 */
  push32(0x125212e8u); f_12527390();
  /* 125212e8 mov esi, esp */
  ESI = (ESP);
  /* 125212ea push 0x1254f510 */
  push32((uint32_t)(0x1254f510u));
  /* 125212ef push 0x12554680 */
  push32((uint32_t)(0x12554680u));
  /* 125212f4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125212fau);
  /* 125212fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125212fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125212ff call 0x12527390 */
  push32(0x12521304u); f_12527390();
  /* 12521304 mov esi, esp */
  ESI = (ESP);
  /* 12521306 push 0x1254f504 */
  push32((uint32_t)(0x1254f504u));
  /* 1252130b push 0x12554648 */
  push32((uint32_t)(0x12554648u));
  /* 12521310 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521316u);
  /* 12521316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252131b call 0x12527390 */
  push32(0x12521320u); f_12527390();
  /* 12521320 mov esi, esp */
  ESI = (ESP);
  /* 12521322 push 0x1254f4f8 */
  push32((uint32_t)(0x1254f4f8u));
  /* 12521327 push 0x12554660 */
  push32((uint32_t)(0x12554660u));
  /* 1252132c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521332u);
  /* 12521332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521337 call 0x12527390 */
  push32(0x1252133cu); f_12527390();
  /* 1252133c mov esi, esp */
  ESI = (ESP);
  /* 1252133e push 0x1254f4ec */
  push32((uint32_t)(0x1254f4ecu));
  /* 12521343 push 0x12554728 */
  push32((uint32_t)(0x12554728u));
  /* 12521348 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252134eu);
  /* 1252134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521353 call 0x12527390 */
  push32(0x12521358u); f_12527390();
  /* 12521358 mov esi, esp */
  ESI = (ESP);
  /* 1252135a push 0x1254f4e0 */
  push32((uint32_t)(0x1254f4e0u));
  /* 1252135f push 0x12554740 */
  push32((uint32_t)(0x12554740u));
  /* 12521364 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252136au);
  /* 1252136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252136f call 0x12527390 */
  push32(0x12521374u); f_12527390();
  /* 12521374 mov esi, esp */
  ESI = (ESP);
  /* 12521376 push 0x1254f4d4 */
  push32((uint32_t)(0x1254f4d4u));
  /* 1252137b push 0x12554708 */
  push32((uint32_t)(0x12554708u));
  /* 12521380 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521386u);
  /* 12521386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252138b call 0x12527390 */
  push32(0x12521390u); f_12527390();
  /* 12521390 mov esi, esp */
  ESI = (ESP);
  /* 12521392 push 0x1254f4c8 */
  push32((uint32_t)(0x1254f4c8u));
  /* 12521397 push 0x12554718 */
  push32((uint32_t)(0x12554718u));
  /* 1252139c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125213a2u);
  /* 125213a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125213a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125213a7 call 0x12527390 */
  push32(0x125213acu); f_12527390();
  /* 125213ac mov esi, esp */
  ESI = (ESP);
  /* 125213ae push 0x1254f4bc */
  push32((uint32_t)(0x1254f4bcu));
  /* 125213b3 push 0x125546e8 */
  push32((uint32_t)(0x125546e8u));
  /* 125213b8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125213beu);
  /* 125213be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125213c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125213c3 call 0x12527390 */
  push32(0x125213c8u); f_12527390();
  /* 125213c8 mov esi, esp */
  ESI = (ESP);
  /* 125213ca push 0x1254f4b0 */
  push32((uint32_t)(0x1254f4b0u));
  /* 125213cf push 0x12554658 */
  push32((uint32_t)(0x12554658u));
  /* 125213d4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125213dau);
  /* 125213da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125213dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125213df call 0x12527390 */
  push32(0x125213e4u); f_12527390();
  /* 125213e4 mov esi, esp */
  ESI = (ESP);
  /* 125213e6 push 0x1254f4a4 */
  push32((uint32_t)(0x1254f4a4u));
  /* 125213eb push 0x12554720 */
  push32((uint32_t)(0x12554720u));
  /* 125213f0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125213f6u);
  /* 125213f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125213f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125213fb call 0x12527390 */
  push32(0x12521400u); f_12527390();
  /* 12521400 mov esi, esp */
  ESI = (ESP);
  /* 12521402 push 0x1254f498 */
  push32((uint32_t)(0x1254f498u));
  /* 12521407 push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 1252140c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521412u);
  /* 12521412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521417 call 0x12527390 */
  push32(0x1252141cu); f_12527390();
  /* 1252141c mov esi, esp */
  ESI = (ESP);
  /* 1252141e push 0x1254f48c */
  push32((uint32_t)(0x1254f48cu));
  /* 12521423 push 0x12554700 */
  push32((uint32_t)(0x12554700u));
  /* 12521428 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252142eu);
  /* 1252142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521433 call 0x12527390 */
  push32(0x12521438u); f_12527390();
  /* 12521438 mov esi, esp */
  ESI = (ESP);
  /* 1252143a push 0x1254f480 */
  push32((uint32_t)(0x1254f480u));
  /* 1252143f push 0x125546f8 */
  push32((uint32_t)(0x125546f8u));
  /* 12521444 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252144au);
  /* 1252144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252144f call 0x12527390 */
  push32(0x12521454u); f_12527390();
  /* 12521454 mov esi, esp */
  ESI = (ESP);
  /* 12521456 push 0x1254f474 */
  push32((uint32_t)(0x1254f474u));
  /* 1252145b push 0x125546c0 */
  push32((uint32_t)(0x125546c0u));
  /* 12521460 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521466u);
  /* 12521466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252146b call 0x12527390 */
  push32(0x12521470u); f_12527390();
  /* 12521470 mov esi, esp */
  ESI = (ESP);
  /* 12521472 push 0x1254f468 */
  push32((uint32_t)(0x1254f468u));
  /* 12521477 push 0x125546d8 */
  push32((uint32_t)(0x125546d8u));
  /* 1252147c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521482u);
  /* 12521482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521487 call 0x12527390 */
  push32(0x1252148cu); f_12527390();
  /* 1252148c mov esi, esp */
  ESI = (ESP);
  /* 1252148e push 0x1254f45c */
  push32((uint32_t)(0x1254f45cu));
  /* 12521493 push 0x125547b8 */
  push32((uint32_t)(0x125547b8u));
  /* 12521498 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252149eu);
  /* 1252149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125214a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125214a3 call 0x12527390 */
  push32(0x125214a8u); f_12527390();
  /* 125214a8 mov esi, esp */
  ESI = (ESP);
  /* 125214aa push 0x1254f450 */
  push32((uint32_t)(0x1254f450u));
  /* 125214af push 0x12554710 */
  push32((uint32_t)(0x12554710u));
  /* 125214b4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125214bau);
  /* 125214ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125214bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125214bf call 0x12527390 */
  push32(0x125214c4u); f_12527390();
  /* 125214c4 mov esi, esp */
  ESI = (ESP);
  /* 125214c6 push 0x1254f444 */
  push32((uint32_t)(0x1254f444u));
  /* 125214cb push 0x125546e0 */
  push32((uint32_t)(0x125546e0u));
  /* 125214d0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125214d6u);
  /* 125214d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125214d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125214db call 0x12527390 */
  push32(0x125214e0u); f_12527390();
  /* 125214e0 mov esi, esp */
  ESI = (ESP);
  /* 125214e2 push 0x1254f438 */
  push32((uint32_t)(0x1254f438u));
  /* 125214e7 push 0x125546f0 */
  push32((uint32_t)(0x125546f0u));
  /* 125214ec call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125214f2u);
  /* 125214f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125214f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125214f7 call 0x12527390 */
  push32(0x125214fcu); f_12527390();
  /* 125214fc mov esi, esp */
  ESI = (ESP);
  /* 125214fe push 0x1254f42c */
  push32((uint32_t)(0x1254f42cu));
  /* 12521503 push 0x125546b8 */
  push32((uint32_t)(0x125546b8u));
  /* 12521508 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252150eu);
  /* 1252150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521513 call 0x12527390 */
  push32(0x12521518u); f_12527390();
  /* 12521518 mov esi, esp */
  ESI = (ESP);
  /* 1252151a push 0x1254f420 */
  push32((uint32_t)(0x1254f420u));
  /* 1252151f push 0x125546d0 */
  push32((uint32_t)(0x125546d0u));
  /* 12521524 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252152au);
  /* 1252152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252152f call 0x12527390 */
  push32(0x12521534u); f_12527390();
  /* 12521534 mov esi, esp */
  ESI = (ESP);
  /* 12521536 push 0x1254f414 */
  push32((uint32_t)(0x1254f414u));
  /* 1252153b push 0x125547b0 */
  push32((uint32_t)(0x125547b0u));
  /* 12521540 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521546u);
  /* 12521546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252154b call 0x12527390 */
  push32(0x12521550u); f_12527390();
  /* 12521550 mov esi, esp */
  ESI = (ESP);
  /* 12521552 push 0x1254f408 */
  push32((uint32_t)(0x1254f408u));
  /* 12521557 push 0x125547c8 */
  push32((uint32_t)(0x125547c8u));
  /* 1252155c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521562u);
  /* 12521562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521567 call 0x12527390 */
  push32(0x1252156cu); f_12527390();
  /* 1252156c mov esi, esp */
  ESI = (ESP);
  /* 1252156e push 0x1254f3fc */
  push32((uint32_t)(0x1254f3fcu));
  /* 12521573 push 0x12554788 */
  push32((uint32_t)(0x12554788u));
  /* 12521578 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252157eu);
  /* 1252157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521583 call 0x12527390 */
  push32(0x12521588u); f_12527390();
  /* 12521588 mov esi, esp */
  ESI = (ESP);
  /* 1252158a push 0x1254f3f0 */
  push32((uint32_t)(0x1254f3f0u));
  /* 1252158f push 0x125547a0 */
  push32((uint32_t)(0x125547a0u));
  /* 12521594 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252159au);
  /* 1252159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252159f call 0x12527390 */
  push32(0x125215a4u); f_12527390();
  /* 125215a4 mov esi, esp */
  ESI = (ESP);
  /* 125215a6 push 0x1254f3e4 */
  push32((uint32_t)(0x1254f3e4u));
  /* 125215ab push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 125215b0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125215b6u);
  /* 125215b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125215b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125215bb call 0x12527390 */
  push32(0x125215c0u); f_12527390();
  /* 125215c0 mov esi, esp */
  ESI = (ESP);
  /* 125215c2 push 0x1254f3d8 */
  push32((uint32_t)(0x1254f3d8u));
  /* 125215c7 push 0x125546c8 */
  push32((uint32_t)(0x125546c8u));
  /* 125215cc call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125215d2u);
  /* 125215d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125215d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125215d7 call 0x12527390 */
  push32(0x125215dcu); f_12527390();
  /* 125215dc mov esi, esp */
  ESI = (ESP);
  /* 125215de push 0x1254f3cc */
  push32((uint32_t)(0x1254f3ccu));
  /* 125215e3 push 0x125547a8 */
  push32((uint32_t)(0x125547a8u));
  /* 125215e8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125215eeu);
  /* 125215ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125215f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125215f3 call 0x12527390 */
  push32(0x125215f8u); f_12527390();
  /* 125215f8 mov esi, esp */
  ESI = (ESP);
  /* 125215fa push 0x1254f3c0 */
  push32((uint32_t)(0x1254f3c0u));
  /* 125215ff push 0x125547c0 */
  push32((uint32_t)(0x125547c0u));
  /* 12521604 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252160au);
  /* 1252160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252160f call 0x12527390 */
  push32(0x12521614u); f_12527390();
  /* 12521614 mov esi, esp */
  ESI = (ESP);
  /* 12521616 push 0x1254f3b4 */
  push32((uint32_t)(0x1254f3b4u));
  /* 1252161b push 0x12554780 */
  push32((uint32_t)(0x12554780u));
  /* 12521620 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521626u);
  /* 12521626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252162b call 0x12527390 */
  push32(0x12521630u); f_12527390();
  /* 12521630 mov esi, esp */
  ESI = (ESP);
  /* 12521632 push 0x1254f3a8 */
  push32((uint32_t)(0x1254f3a8u));
  /* 12521637 push 0x12554798 */
  push32((uint32_t)(0x12554798u));
  /* 1252163c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521642u);
  /* 12521642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521647 call 0x12527390 */
  push32(0x1252164cu); f_12527390();
  /* 1252164c mov esi, esp */
  ESI = (ESP);
  /* 1252164e push 0x1254f39c */
  push32((uint32_t)(0x1254f39cu));
  /* 12521653 push 0x12554768 */
  push32((uint32_t)(0x12554768u));
  /* 12521658 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252165eu);
  /* 1252165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521663 call 0x12527390 */
  push32(0x12521668u); f_12527390();
  /* 12521668 mov esi, esp */
  ESI = (ESP);
  /* 1252166a push 0x1254f390 */
  push32((uint32_t)(0x1254f390u));
  /* 1252166f push 0x12554790 */
  push32((uint32_t)(0x12554790u));
  /* 12521674 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252167au);
  /* 1252167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252167f call 0x12527390 */
  push32(0x12521684u); f_12527390();
  /* 12521684 mov esi, esp */
  ESI = (ESP);
  /* 12521686 push 0x1254f384 */
  push32((uint32_t)(0x1254f384u));
  /* 1252168b push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 12521690 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521696u);
  /* 12521696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252169b call 0x12527390 */
  push32(0x125216a0u); f_12527390();
  /* 125216a0 mov esi, esp */
  ESI = (ESP);
  /* 125216a2 push 0x1254f378 */
  push32((uint32_t)(0x1254f378u));
  /* 125216a7 push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 125216ac call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125216b2u);
  /* 125216b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125216b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125216b7 call 0x12527390 */
  push32(0x125216bcu); f_12527390();
  /* 125216bc mov esi, esp */
  ESI = (ESP);
  /* 125216be push 0x1254f36c */
  push32((uint32_t)(0x1254f36cu));
  /* 125216c3 push 0x12554748 */
  push32((uint32_t)(0x12554748u));
  /* 125216c8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125216ceu);
  /* 125216ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125216d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125216d3 call 0x12527390 */
  push32(0x125216d8u); f_12527390();
  /* 125216d8 mov esi, esp */
  ESI = (ESP);
  /* 125216da push 0x1254f360 */
  push32((uint32_t)(0x1254f360u));
  /* 125216df push 0x12554758 */
  push32((uint32_t)(0x12554758u));
  /* 125216e4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125216eau);
  /* 125216ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125216ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125216ef call 0x12527390 */
  push32(0x125216f4u); f_12527390();
  /* 125216f4 mov esi, esp */
  ESI = (ESP);
  /* 125216f6 push 0x1254f354 */
  push32((uint32_t)(0x1254f354u));
  /* 125216fb push 0x12554830 */
  push32((uint32_t)(0x12554830u));
  /* 12521700 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521706u);
  /* 12521706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252170b call 0x12527390 */
  push32(0x12521710u); f_12527390();
  /* 12521710 mov esi, esp */
  ESI = (ESP);
  /* 12521712 push 0x1254f348 */
  push32((uint32_t)(0x1254f348u));
  /* 12521717 push 0x12554838 */
  push32((uint32_t)(0x12554838u));
  /* 1252171c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521722u);
  /* 12521722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521727 call 0x12527390 */
  push32(0x1252172cu); f_12527390();
  /* 1252172c mov esi, esp */
  ESI = (ESP);
  /* 1252172e push 0x1254f33c */
  push32((uint32_t)(0x1254f33cu));
  /* 12521733 push 0x12554808 */
  push32((uint32_t)(0x12554808u));
  /* 12521738 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252173eu);
  /* 1252173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521743 call 0x12527390 */
  push32(0x12521748u); f_12527390();
  /* 12521748 mov esi, esp */
  ESI = (ESP);
  /* 1252174a push 0x1254f330 */
  push32((uint32_t)(0x1254f330u));
  /* 1252174f push 0x12554820 */
  push32((uint32_t)(0x12554820u));
  /* 12521754 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252175au);
  /* 1252175a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252175d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252175f call 0x12527390 */
  push32(0x12521764u); f_12527390();
  /* 12521764 mov esi, esp */
  ESI = (ESP);
  /* 12521766 push 0x1254f324 */
  push32((uint32_t)(0x1254f324u));
  /* 1252176b push 0x125547f0 */
  push32((uint32_t)(0x125547f0u));
  /* 12521770 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521776u);
  /* 12521776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252177b call 0x12527390 */
  push32(0x12521780u); f_12527390();
  /* 12521780 mov esi, esp */
  ESI = (ESP);
  /* 12521782 push 0x1254f318 */
  push32((uint32_t)(0x1254f318u));
  /* 12521787 push 0x12554750 */
  push32((uint32_t)(0x12554750u));
  /* 1252178c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521792u);
  /* 12521792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521797 call 0x12527390 */
  push32(0x1252179cu); f_12527390();
  /* 1252179c mov esi, esp */
  ESI = (ESP);
  /* 1252179e push 0x1254f30c */
  push32((uint32_t)(0x1254f30cu));
  /* 125217a3 push 0x12554828 */
  push32((uint32_t)(0x12554828u));
  /* 125217a8 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125217aeu);
  /* 125217ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125217b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125217b3 call 0x12527390 */
  push32(0x125217b8u); f_12527390();
  /* 125217b8 mov esi, esp */
  ESI = (ESP);
  /* 125217ba push 0x1254f300 */
  push32((uint32_t)(0x1254f300u));
  /* 125217bf push 0x12554800 */
  push32((uint32_t)(0x12554800u));
  /* 125217c4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125217cau);
  /* 125217ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125217cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125217cf call 0x12527390 */
  push32(0x125217d4u); f_12527390();
  /* 125217d4 mov esi, esp */
  ESI = (ESP);
  /* 125217d6 push 0x1254f2f4 */
  push32((uint32_t)(0x1254f2f4u));
  /* 125217db push 0x12554818 */
  push32((uint32_t)(0x12554818u));
  /* 125217e0 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125217e6u);
  /* 125217e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125217e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125217eb call 0x12527390 */
  push32(0x125217f0u); f_12527390();
  /* 125217f0 mov esi, esp */
  ESI = (ESP);
  /* 125217f2 push 0x1254f2e8 */
  push32((uint32_t)(0x1254f2e8u));
  /* 125217f7 push 0x125547e8 */
  push32((uint32_t)(0x125547e8u));
  /* 125217fc call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521802u);
  /* 12521802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521807 call 0x12527390 */
  push32(0x1252180cu); f_12527390();
  /* 1252180c mov esi, esp */
  ESI = (ESP);
  /* 1252180e push 0x1254f2dc */
  push32((uint32_t)(0x1254f2dcu));
  /* 12521813 push 0x12554810 */
  push32((uint32_t)(0x12554810u));
  /* 12521818 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252181eu);
  /* 1252181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521823 call 0x12527390 */
  push32(0x12521828u); f_12527390();
  /* 12521828 mov esi, esp */
  ESI = (ESP);
  /* 1252182a push 0x1254f2d0 */
  push32((uint32_t)(0x1254f2d0u));
  /* 1252182f push 0x125547e0 */
  push32((uint32_t)(0x125547e0u));
  /* 12521834 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252183au);
  /* 1252183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252183f call 0x12527390 */
  push32(0x12521844u); f_12527390();
  /* 12521844 mov esi, esp */
  ESI = (ESP);
  /* 12521846 push 0x1254f2c4 */
  push32((uint32_t)(0x1254f2c4u));
  /* 1252184b push 0x125547f8 */
  push32((uint32_t)(0x125547f8u));
  /* 12521850 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521856u);
  /* 12521856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252185b call 0x12527390 */
  push32(0x12521860u); f_12527390();
  /* 12521860 mov esi, esp */
  ESI = (ESP);
  /* 12521862 push 0x1254f2b8 */
  push32((uint32_t)(0x1254f2b8u));
  /* 12521867 push 0x125547d0 */
  push32((uint32_t)(0x125547d0u));
  /* 1252186c call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x12521872u);
  /* 12521872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521877 call 0x12527390 */
  push32(0x1252187cu); f_12527390();
  /* 1252187c mov esi, esp */
  ESI = (ESP);
  /* 1252187e push 0x1254f2ac */
  push32((uint32_t)(0x1254f2acu));
  /* 12521883 push 0x125547d8 */
  push32((uint32_t)(0x125547d8u));
  /* 12521888 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x1252188eu);
  /* 1252188e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521893 call 0x12527390 */
  push32(0x12521898u); f_12527390();
  /* 12521898 mov esi, esp */
  ESI = (ESP);
  /* 1252189a push 0x1254f2a0 */
  push32((uint32_t)(0x1254f2a0u));
  /* 1252189f push 0x12554840 */
  push32((uint32_t)(0x12554840u));
  /* 125218a4 call dword ptr [0x125574e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e8))), 0x125218aau);
  /* 125218aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125218ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125218af call 0x12527390 */
  push32(0x125218b4u); f_12527390();
  /* 125218b4 mov esi, esp */
  ESI = (ESP);
  /* 125218b6 push 0x1254f298 */
  push32((uint32_t)(0x1254f298u));
  /* 125218bb push 0x125545b0 */
  push32((uint32_t)(0x125545b0u));
  /* 125218c0 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125218c6u);
  /* 125218c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125218c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125218cb call 0x12527390 */
  push32(0x125218d0u); f_12527390();
  /* 125218d0 mov esi, esp */
  ESI = (ESP);
  /* 125218d2 push 0x1254f290 */
  push32((uint32_t)(0x1254f290u));
  /* 125218d7 push 0x125545b8 */
  push32((uint32_t)(0x125545b8u));
  /* 125218dc call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125218e2u);
  /* 125218e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125218e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125218e7 call 0x12527390 */
  push32(0x125218ecu); f_12527390();
  /* 125218ec mov esi, esp */
  ESI = (ESP);
  /* 125218ee push 0x1254f288 */
  push32((uint32_t)(0x1254f288u));
  /* 125218f3 push 0x125545c0 */
  push32((uint32_t)(0x125545c0u));
  /* 125218f8 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125218feu);
  /* 125218fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521903 call 0x12527390 */
  push32(0x12521908u); f_12527390();
  /* 12521908 mov esi, esp */
  ESI = (ESP);
  /* 1252190a push 0x1254f280 */
  push32((uint32_t)(0x1254f280u));
  /* 1252190f push 0x125545c8 */
  push32((uint32_t)(0x125545c8u));
  /* 12521914 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x1252191au);
  /* 1252191a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252191d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252191f call 0x12527390 */
  push32(0x12521924u); f_12527390();
  /* 12521924 mov esi, esp */
  ESI = (ESP);
  /* 12521926 push 0x1254f278 */
  push32((uint32_t)(0x1254f278u));
  /* 1252192b push 0x125545d0 */
  push32((uint32_t)(0x125545d0u));
  /* 12521930 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521936u);
  /* 12521936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252193b call 0x12527390 */
  push32(0x12521940u); f_12527390();
  /* 12521940 mov esi, esp */
  ESI = (ESP);
  /* 12521942 push 0x1254f270 */
  push32((uint32_t)(0x1254f270u));
  /* 12521947 push 0x125545d8 */
  push32((uint32_t)(0x125545d8u));
  /* 1252194c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521952u);
  /* 12521952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521957 call 0x12527390 */
  push32(0x1252195cu); f_12527390();
  /* 1252195c mov esi, esp */
  ESI = (ESP);
  /* 1252195e push 0x1254f268 */
  push32((uint32_t)(0x1254f268u));
  /* 12521963 push 0x125545e0 */
  push32((uint32_t)(0x125545e0u));
  /* 12521968 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x1252196eu);
  /* 1252196e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521973 call 0x12527390 */
  push32(0x12521978u); f_12527390();
  /* 12521978 mov esi, esp */
  ESI = (ESP);
  /* 1252197a push 0x1254f260 */
  push32((uint32_t)(0x1254f260u));
  /* 1252197f push 0x125545e8 */
  push32((uint32_t)(0x125545e8u));
  /* 12521984 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x1252198au);
  /* 1252198a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252198d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252198f call 0x12527390 */
  push32(0x12521994u); f_12527390();
  /* 12521994 mov esi, esp */
  ESI = (ESP);
  /* 12521996 push 0x1254f258 */
  push32((uint32_t)(0x1254f258u));
  /* 1252199b push 0x125545f0 */
  push32((uint32_t)(0x125545f0u));
  /* 125219a0 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125219a6u);
  /* 125219a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125219a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125219ab call 0x12527390 */
  push32(0x125219b0u); f_12527390();
  /* 125219b0 mov esi, esp */
  ESI = (ESP);
  /* 125219b2 push 0x1254f250 */
  push32((uint32_t)(0x1254f250u));
  /* 125219b7 push 0x12554460 */
  push32((uint32_t)(0x12554460u));
  /* 125219bc call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125219c2u);
  /* 125219c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125219c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125219c7 call 0x12527390 */
  push32(0x125219ccu); f_12527390();
  /* 125219cc mov esi, esp */
  ESI = (ESP);
  /* 125219ce push 0x1254f248 */
  push32((uint32_t)(0x1254f248u));
  /* 125219d3 push 0x12554458 */
  push32((uint32_t)(0x12554458u));
  /* 125219d8 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125219deu);
  /* 125219de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125219e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125219e3 call 0x12527390 */
  push32(0x125219e8u); f_12527390();
  /* 125219e8 mov esi, esp */
  ESI = (ESP);
  /* 125219ea push 0x1254f240 */
  push32((uint32_t)(0x1254f240u));
  /* 125219ef push 0x12554470 */
  push32((uint32_t)(0x12554470u));
  /* 125219f4 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x125219fau);
  /* 125219fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125219fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125219ff call 0x12527390 */
  push32(0x12521a04u); f_12527390();
  /* 12521a04 mov esi, esp */
  ESI = (ESP);
  /* 12521a06 push 0x1254f238 */
  push32((uint32_t)(0x1254f238u));
  /* 12521a0b push 0x12554468 */
  push32((uint32_t)(0x12554468u));
  /* 12521a10 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521a16u);
  /* 12521a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521a19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521a1b call 0x12527390 */
  push32(0x12521a20u); f_12527390();
  /* 12521a20 mov esi, esp */
  ESI = (ESP);
  /* 12521a22 push 0x1254f230 */
  push32((uint32_t)(0x1254f230u));
  /* 12521a27 push 0x12554490 */
  push32((uint32_t)(0x12554490u));
  /* 12521a2c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521a32u);
  /* 12521a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521a35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521a37 call 0x12527390 */
  push32(0x12521a3cu); f_12527390();
  /* 12521a3c mov esi, esp */
  ESI = (ESP);
  /* 12521a3e push 0x1254f228 */
  push32((uint32_t)(0x1254f228u));
  /* 12521a43 push 0x12554480 */
  push32((uint32_t)(0x12554480u));
  /* 12521a48 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521a4eu);
  /* 12521a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521a53 call 0x12527390 */
  push32(0x12521a58u); f_12527390();
  /* 12521a58 mov esi, esp */
  ESI = (ESP);
  /* 12521a5a push 0x1254f220 */
  push32((uint32_t)(0x1254f220u));
  /* 12521a5f push 0x125544b0 */
  push32((uint32_t)(0x125544b0u));
  /* 12521a64 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521a6au);
  /* 12521a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521a6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521a6f call 0x12527390 */
  push32(0x12521a74u); f_12527390();
  /* 12521a74 mov esi, esp */
  ESI = (ESP);
  /* 12521a76 push 0x1254f218 */
  push32((uint32_t)(0x1254f218u));
  /* 12521a7b push 0x125544a0 */
  push32((uint32_t)(0x125544a0u));
  /* 12521a80 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521a86u);
  /* 12521a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521a8b call 0x12527390 */
  push32(0x12521a90u); f_12527390();
  /* 12521a90 mov esi, esp */
  ESI = (ESP);
  /* 12521a92 push 0x1254f210 */
  push32((uint32_t)(0x1254f210u));
  /* 12521a97 push 0x125544e0 */
  push32((uint32_t)(0x125544e0u));
  /* 12521a9c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521aa2u);
  /* 12521aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521aa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521aa7 call 0x12527390 */
  push32(0x12521aacu); f_12527390();
  /* 12521aac mov esi, esp */
  ESI = (ESP);
  /* 12521aae push 0x1254f208 */
  push32((uint32_t)(0x1254f208u));
  /* 12521ab3 push 0x125544c8 */
  push32((uint32_t)(0x125544c8u));
  /* 12521ab8 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521abeu);
  /* 12521abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521ac3 call 0x12527390 */
  push32(0x12521ac8u); f_12527390();
  /* 12521ac8 mov esi, esp */
  ESI = (ESP);
  /* 12521aca push 0x1254f200 */
  push32((uint32_t)(0x1254f200u));
  /* 12521acf push 0x12554488 */
  push32((uint32_t)(0x12554488u));
  /* 12521ad4 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521adau);
  /* 12521ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521adf call 0x12527390 */
  push32(0x12521ae4u); f_12527390();
  /* 12521ae4 mov esi, esp */
  ESI = (ESP);
  /* 12521ae6 push 0x1254f1f8 */
  push32((uint32_t)(0x1254f1f8u));
  /* 12521aeb push 0x12554478 */
  push32((uint32_t)(0x12554478u));
  /* 12521af0 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521af6u);
  /* 12521af6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521af9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521afb call 0x12527390 */
  push32(0x12521b00u); f_12527390();
  /* 12521b00 mov esi, esp */
  ESI = (ESP);
  /* 12521b02 push 0x1254f1f0 */
  push32((uint32_t)(0x1254f1f0u));
  /* 12521b07 push 0x125544a8 */
  push32((uint32_t)(0x125544a8u));
  /* 12521b0c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b12u);
  /* 12521b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521b17 call 0x12527390 */
  push32(0x12521b1cu); f_12527390();
  /* 12521b1c mov esi, esp */
  ESI = (ESP);
  /* 12521b1e push 0x1254f1e8 */
  push32((uint32_t)(0x1254f1e8u));
  /* 12521b23 push 0x12554498 */
  push32((uint32_t)(0x12554498u));
  /* 12521b28 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b2eu);
  /* 12521b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521b33 call 0x12527390 */
  push32(0x12521b38u); f_12527390();
  /* 12521b38 mov esi, esp */
  ESI = (ESP);
  /* 12521b3a push 0x1254f1e0 */
  push32((uint32_t)(0x1254f1e0u));
  /* 12521b3f push 0x125544d8 */
  push32((uint32_t)(0x125544d8u));
  /* 12521b44 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b4au);
  /* 12521b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521b4f call 0x12527390 */
  push32(0x12521b54u); f_12527390();
  /* 12521b54 mov esi, esp */
  ESI = (ESP);
  /* 12521b56 push 0x1254f1d8 */
  push32((uint32_t)(0x1254f1d8u));
  /* 12521b5b push 0x125544c0 */
  push32((uint32_t)(0x125544c0u));
  /* 12521b60 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b66u);
  /* 12521b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521b69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521b6b call 0x12527390 */
  push32(0x12521b70u); f_12527390();
  /* 12521b70 mov esi, esp */
  ESI = (ESP);
  /* 12521b72 push 0x1254f1d0 */
  push32((uint32_t)(0x1254f1d0u));
  /* 12521b77 push 0x125544f8 */
  push32((uint32_t)(0x125544f8u));
  /* 12521b7c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b82u);
  /* 12521b82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521b87 call 0x12527390 */
  push32(0x12521b8cu); f_12527390();
  /* 12521b8c mov esi, esp */
  ESI = (ESP);
  /* 12521b8e push 0x1254f1c8 */
  push32((uint32_t)(0x1254f1c8u));
  /* 12521b93 push 0x125544f0 */
  push32((uint32_t)(0x125544f0u));
  /* 12521b98 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521b9eu);
  /* 12521b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521ba3 call 0x12527390 */
  push32(0x12521ba8u); f_12527390();
  /* 12521ba8 mov esi, esp */
  ESI = (ESP);
  /* 12521baa push 0x1254f1c0 */
  push32((uint32_t)(0x1254f1c0u));
  /* 12521baf push 0x12554530 */
  push32((uint32_t)(0x12554530u));
  /* 12521bb4 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521bbau);
  /* 12521bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521bbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521bbf call 0x12527390 */
  push32(0x12521bc4u); f_12527390();
  /* 12521bc4 mov esi, esp */
  ESI = (ESP);
  /* 12521bc6 push 0x1254f1b8 */
  push32((uint32_t)(0x1254f1b8u));
  /* 12521bcb push 0x12554510 */
  push32((uint32_t)(0x12554510u));
  /* 12521bd0 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521bd6u);
  /* 12521bd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521bdb call 0x12527390 */
  push32(0x12521be0u); f_12527390();
  /* 12521be0 mov esi, esp */
  ESI = (ESP);
  /* 12521be2 push 0x1254f1b0 */
  push32((uint32_t)(0x1254f1b0u));
  /* 12521be7 push 0x125544b8 */
  push32((uint32_t)(0x125544b8u));
  /* 12521bec call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521bf2u);
  /* 12521bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521bf7 call 0x12527390 */
  push32(0x12521bfcu); f_12527390();
  /* 12521bfc mov esi, esp */
  ESI = (ESP);
  /* 12521bfe push 0x1254f1a8 */
  push32((uint32_t)(0x1254f1a8u));
  /* 12521c03 push 0x125544e8 */
  push32((uint32_t)(0x125544e8u));
  /* 12521c08 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c0eu);
  /* 12521c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c13 call 0x12527390 */
  push32(0x12521c18u); f_12527390();
  /* 12521c18 mov esi, esp */
  ESI = (ESP);
  /* 12521c1a push 0x1254f1a0 */
  push32((uint32_t)(0x1254f1a0u));
  /* 12521c1f push 0x12554528 */
  push32((uint32_t)(0x12554528u));
  /* 12521c24 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c2au);
  /* 12521c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c2f call 0x12527390 */
  push32(0x12521c34u); f_12527390();
  /* 12521c34 mov esi, esp */
  ESI = (ESP);
  /* 12521c36 push 0x1254f198 */
  push32((uint32_t)(0x1254f198u));
  /* 12521c3b push 0x12554508 */
  push32((uint32_t)(0x12554508u));
  /* 12521c40 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c46u);
  /* 12521c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c4b call 0x12527390 */
  push32(0x12521c50u); f_12527390();
  /* 12521c50 mov esi, esp */
  ESI = (ESP);
  /* 12521c52 push 0x1254f190 */
  push32((uint32_t)(0x1254f190u));
  /* 12521c57 push 0x12554550 */
  push32((uint32_t)(0x12554550u));
  /* 12521c5c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c62u);
  /* 12521c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c67 call 0x12527390 */
  push32(0x12521c6cu); f_12527390();
  /* 12521c6c mov esi, esp */
  ESI = (ESP);
  /* 12521c6e push 0x1254f188 */
  push32((uint32_t)(0x1254f188u));
  /* 12521c73 push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12521c78 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c7eu);
  /* 12521c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c83 call 0x12527390 */
  push32(0x12521c88u); f_12527390();
  /* 12521c88 mov esi, esp */
  ESI = (ESP);
  /* 12521c8a push 0x1254f180 */
  push32((uint32_t)(0x1254f180u));
  /* 12521c8f push 0x12554580 */
  push32((uint32_t)(0x12554580u));
  /* 12521c94 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521c9au);
  /* 12521c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521c9f call 0x12527390 */
  push32(0x12521ca4u); f_12527390();
  /* 12521ca4 mov esi, esp */
  ESI = (ESP);
  /* 12521ca6 push 0x1254f178 */
  push32((uint32_t)(0x1254f178u));
  /* 12521cab push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12521cb0 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521cb6u);
  /* 12521cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521cbb call 0x12527390 */
  push32(0x12521cc0u); f_12527390();
  /* 12521cc0 mov esi, esp */
  ESI = (ESP);
  /* 12521cc2 push 0x1254f170 */
  push32((uint32_t)(0x1254f170u));
  /* 12521cc7 push 0x12554520 */
  push32((uint32_t)(0x12554520u));
  /* 12521ccc call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521cd2u);
  /* 12521cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521cd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521cd7 call 0x12527390 */
  push32(0x12521cdcu); f_12527390();
  /* 12521cdc mov esi, esp */
  ESI = (ESP);
  /* 12521cde push 0x1254f168 */
  push32((uint32_t)(0x1254f168u));
  /* 12521ce3 push 0x12554500 */
  push32((uint32_t)(0x12554500u));
  /* 12521ce8 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521ceeu);
  /* 12521cee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521cf1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521cf3 call 0x12527390 */
  push32(0x12521cf8u); f_12527390();
  /* 12521cf8 mov esi, esp */
  ESI = (ESP);
  /* 12521cfa push 0x1254f160 */
  push32((uint32_t)(0x1254f160u));
  /* 12521cff push 0x12554548 */
  push32((uint32_t)(0x12554548u));
  /* 12521d04 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d0au);
  /* 12521d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d0f call 0x12527390 */
  push32(0x12521d14u); f_12527390();
  /* 12521d14 mov esi, esp */
  ESI = (ESP);
  /* 12521d16 push 0x1254f158 */
  push32((uint32_t)(0x1254f158u));
  /* 12521d1b push 0x12554538 */
  push32((uint32_t)(0x12554538u));
  /* 12521d20 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d26u);
  /* 12521d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d2b call 0x12527390 */
  push32(0x12521d30u); f_12527390();
  /* 12521d30 mov esi, esp */
  ESI = (ESP);
  /* 12521d32 push 0x1254f150 */
  push32((uint32_t)(0x1254f150u));
  /* 12521d37 push 0x12554578 */
  push32((uint32_t)(0x12554578u));
  /* 12521d3c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d42u);
  /* 12521d42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d47 call 0x12527390 */
  push32(0x12521d4cu); f_12527390();
  /* 12521d4c mov esi, esp */
  ESI = (ESP);
  /* 12521d4e push 0x1254f148 */
  push32((uint32_t)(0x1254f148u));
  /* 12521d53 push 0x12554560 */
  push32((uint32_t)(0x12554560u));
  /* 12521d58 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d5eu);
  /* 12521d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d63 call 0x12527390 */
  push32(0x12521d68u); f_12527390();
  /* 12521d68 mov esi, esp */
  ESI = (ESP);
  /* 12521d6a push 0x1254f140 */
  push32((uint32_t)(0x1254f140u));
  /* 12521d6f push 0x12554598 */
  push32((uint32_t)(0x12554598u));
  /* 12521d74 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d7au);
  /* 12521d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d7f call 0x12527390 */
  push32(0x12521d84u); f_12527390();
  /* 12521d84 mov esi, esp */
  ESI = (ESP);
  /* 12521d86 push 0x1254f138 */
  push32((uint32_t)(0x1254f138u));
  /* 12521d8b push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12521d90 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521d96u);
  /* 12521d96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521d99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521d9b call 0x12527390 */
  push32(0x12521da0u); f_12527390();
  /* 12521da0 mov esi, esp */
  ESI = (ESP);
  /* 12521da2 push 0x1254f130 */
  push32((uint32_t)(0x1254f130u));
  /* 12521da7 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12521dac call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521db2u);
  /* 12521db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521db7 call 0x12527390 */
  push32(0x12521dbcu); f_12527390();
  /* 12521dbc mov esi, esp */
  ESI = (ESP);
  /* 12521dbe push 0x1254f128 */
  push32((uint32_t)(0x1254f128u));
  /* 12521dc3 push 0x125545a0 */
  push32((uint32_t)(0x125545a0u));
  /* 12521dc8 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521dceu);
  /* 12521dce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521dd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521dd3 call 0x12527390 */
  push32(0x12521dd8u); f_12527390();
  /* 12521dd8 mov esi, esp */
  ESI = (ESP);
  /* 12521dda push 0x1254f120 */
  push32((uint32_t)(0x1254f120u));
  /* 12521ddf push 0x12554570 */
  push32((uint32_t)(0x12554570u));
  /* 12521de4 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521deau);
  /* 12521dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521def call 0x12527390 */
  push32(0x12521df4u); f_12527390();
  /* 12521df4 mov esi, esp */
  ESI = (ESP);
  /* 12521df6 push 0x1254f118 */
  push32((uint32_t)(0x1254f118u));
  /* 12521dfb push 0x12554558 */
  push32((uint32_t)(0x12554558u));
  /* 12521e00 call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521e06u);
  /* 12521e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e0b call 0x12527390 */
  push32(0x12521e10u); f_12527390();
  /* 12521e10 mov esi, esp */
  ESI = (ESP);
  /* 12521e12 push 0x1254f110 */
  push32((uint32_t)(0x1254f110u));
  /* 12521e17 push 0x12554590 */
  push32((uint32_t)(0x12554590u));
  /* 12521e1c call dword ptr [0x125574f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f8))), 0x12521e22u);
  /* 12521e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e27 call 0x12527390 */
  push32(0x12521e2cu); f_12527390();
  /* 12521e2c mov esi, esp */
  ESI = (ESP);
  /* 12521e2e push 0x1254f100 */
  push32((uint32_t)(0x1254f100u));
  /* 12521e33 push 0x12554628 */
  push32((uint32_t)(0x12554628u));
  /* 12521e38 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521e3eu);
  /* 12521e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e43 call 0x12527390 */
  push32(0x12521e48u); f_12527390();
  /* 12521e48 mov esi, esp */
  ESI = (ESP);
  /* 12521e4a push 0x1254f0e8 */
  push32((uint32_t)(0x1254f0e8u));
  /* 12521e4f push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12521e54 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521e5au);
  /* 12521e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e5f call 0x12527390 */
  push32(0x12521e64u); f_12527390();
  /* 12521e64 mov esi, esp */
  ESI = (ESP);
  /* 12521e66 push 0x1254f0d8 */
  push32((uint32_t)(0x1254f0d8u));
  /* 12521e6b push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12521e70 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521e76u);
  /* 12521e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e7b call 0x12527390 */
  push32(0x12521e80u); f_12527390();
  /* 12521e80 mov esi, esp */
  ESI = (ESP);
  /* 12521e82 push 0x1254f0c8 */
  push32((uint32_t)(0x1254f0c8u));
  /* 12521e87 push 0x12554608 */
  push32((uint32_t)(0x12554608u));
  /* 12521e8c call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521e92u);
  /* 12521e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521e95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521e97 call 0x12527390 */
  push32(0x12521e9cu); f_12527390();
  /* 12521e9c mov esi, esp */
  ESI = (ESP);
  /* 12521e9e push 0x1254f0b8 */
  push32((uint32_t)(0x1254f0b8u));
  /* 12521ea3 push 0x12554610 */
  push32((uint32_t)(0x12554610u));
  /* 12521ea8 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521eaeu);
  /* 12521eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521eb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521eb3 call 0x12527390 */
  push32(0x12521eb8u); f_12527390();
  /* 12521eb8 mov esi, esp */
  ESI = (ESP);
  /* 12521eba push 0x1254f0a8 */
  push32((uint32_t)(0x1254f0a8u));
  /* 12521ebf push 0x12554618 */
  push32((uint32_t)(0x12554618u));
  /* 12521ec4 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521ecau);
  /* 12521eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ecd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521ecf call 0x12527390 */
  push32(0x12521ed4u); f_12527390();
  /* 12521ed4 mov esi, esp */
  ESI = (ESP);
  /* 12521ed6 push 0x1254f090 */
  push32((uint32_t)(0x1254f090u));
  /* 12521edb push 0x12554620 */
  push32((uint32_t)(0x12554620u));
  /* 12521ee0 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521ee6u);
  /* 12521ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ee9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521eeb call 0x12527390 */
  push32(0x12521ef0u); f_12527390();
  /* 12521ef0 mov esi, esp */
  ESI = (ESP);
  /* 12521ef2 push 0x1254f080 */
  push32((uint32_t)(0x1254f080u));
  /* 12521ef7 push 0x125545f8 */
  push32((uint32_t)(0x125545f8u));
  /* 12521efc call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521f02u);
  /* 12521f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f07 call 0x12527390 */
  push32(0x12521f0cu); f_12527390();
  /* 12521f0c mov esi, esp */
  ESI = (ESP);
  /* 12521f0e push 0x1254f064 */
  push32((uint32_t)(0x1254f064u));
  /* 12521f13 push 0x12554600 */
  push32((uint32_t)(0x12554600u));
  /* 12521f18 call dword ptr [0x125574fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574fc))), 0x12521f1eu);
  /* 12521f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f23 call 0x12527390 */
  push32(0x12521f28u); f_12527390();
  /* 12521f28 mov esi, esp */
  ESI = (ESP);
  /* 12521f2a push 0xc */
  push32((uint32_t)(0xcu));
  /* 12521f2c push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12521f31 call dword ptr [0x125574f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f4))), 0x12521f37u);
  /* 12521f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f3c call 0x12527390 */
  push32(0x12521f41u); f_12527390();
  /* 12521f41 mov esi, esp */
  ESI = (ESP);
  /* 12521f43 push 0x1254f058 */
  push32((uint32_t)(0x1254f058u));
  /* 12521f48 push 0x12554518 */
  push32((uint32_t)(0x12554518u));
  /* 12521f4d call dword ptr [0x12557504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557504))), 0x12521f53u);
  /* 12521f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f58 call 0x12527390 */
  push32(0x12521f5du); f_12527390();
  /* 12521f5d mov esi, esp */
  ESI = (ESP);
  /* 12521f5f push 0x1254f04c */
  push32((uint32_t)(0x1254f04cu));
  /* 12521f64 push 0x125544d0 */
  push32((uint32_t)(0x125544d0u));
  /* 12521f69 call dword ptr [0x12557504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557504))), 0x12521f6fu);
  /* 12521f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f74 call 0x12527390 */
  push32(0x12521f79u); f_12527390();
  /* 12521f79 mov esi, esp */
  ESI = (ESP);
  /* 12521f7b push 0x1254f040 */
  push32((uint32_t)(0x1254f040u));
  /* 12521f80 push 0x1254f5e4 */
  push32((uint32_t)(0x1254f5e4u));
  /* 12521f85 call dword ptr [0x12557508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557508))), 0x12521f8bu);
  /* 12521f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521f90 call 0x12527390 */
  push32(0x12521f95u); f_12527390();
  /* 12521f95 mov esi, esp */
  ESI = (ESP);
  /* 12521f97 push 0x1254f034 */
  push32((uint32_t)(0x1254f034u));
  /* 12521f9c push 0x1254f5e4 */
  push32((uint32_t)(0x1254f5e4u));
  /* 12521fa1 call dword ptr [0x12557508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557508))), 0x12521fa7u);
  /* 12521fa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521fac call 0x12527390 */
  push32(0x12521fb1u); f_12527390();
  /* 12521fb1 mov esi, esp */
  ESI = (ESP);
  /* 12521fb3 push 0x1254f02c */
  push32((uint32_t)(0x1254f02cu));
  /* 12521fb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12521fba call dword ptr [0x12557500] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557500))), 0x12521fc0u);
  /* 12521fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521fc5 call 0x12527390 */
  push32(0x12521fcau); f_12527390();
  /* 12521fca mov esi, esp */
  ESI = (ESP);
  /* 12521fcc push 0x1254f024 */
  push32((uint32_t)(0x1254f024u));
  /* 12521fd1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12521fd3 call dword ptr [0x12557500] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557500))), 0x12521fd9u);
  /* 12521fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521fde call 0x12527390 */
  push32(0x12521fe3u); f_12527390();
  /* 12521fe3 mov esi, esp */
  ESI = (ESP);
  /* 12521fe5 push 0x1254f01c */
  push32((uint32_t)(0x1254f01cu));
  /* 12521fea push 7 */
  push32((uint32_t)(0x7u));
  /* 12521fec call dword ptr [0x12557500] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557500))), 0x12521ff2u);
  /* 12521ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12521ff5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12521ff7 call 0x12527390 */
  push32(0x12521ffcu); f_12527390();
  /* 12521ffc pop edi */
  EDI = (pop32());
  /* 12521ffd pop esi */
  ESI = (pop32());
  /* 12521ffe pop ebx */
  EBX = (pop32());
  /* 12521fff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522002 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522004 call 0x12527390 */
  push32(0x12522009u); f_12527390();
  /* 12522009 mov esp, ebp */
  ESP = (EBP);
  /* 1252200b pop ebp */
  EBP = (pop32());
  /* 1252200c ret  */
  ESPCHK(0x125210a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x125223f0 (15944 bytes, 4659 insns) */
void f_125223f0(void) {
  FTRACE(0x125223f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125223f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125223f1 mov ebp, esp */
  EBP = (ESP);
  /* 125223f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125223f6 push ebx */
  push32((uint32_t)(EBX));
  /* 125223f7 push esi */
  push32((uint32_t)(ESI));
  /* 125223f8 push edi */
  push32((uint32_t)(EDI));
  /* 125223f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125223fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12522401 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12522406 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12522408 mov esi, esp */
  ESI = (ESP);
  /* 1252240a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1252240c call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522412u);
  /* 12522412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522417 call 0x12527390 */
  push32(0x1252241cu); f_12527390();
  /* 1252241c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522423 je 0x12522a38 */
  if (C.zf) goto L_12522a38;
  /* 12522429 mov esi, esp */
  ESI = (ESP);
  /* 1252242b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252242d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1252242f call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522435u);
  /* 12522435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522438 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252243a call 0x12527390 */
  push32(0x1252243fu); f_12527390();
  /* 1252243f mov esi, esp */
  ESI = (ESP);
  /* 12522441 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522443 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522445 call dword ptr [0x12557458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557458))), 0x1252244bu);
  /* 1252244b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252244e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522450 call 0x12527390 */
  push32(0x12522455u); f_12527390();
  /* 12522455 mov esi, esp */
  ESI = (ESP);
  /* 12522457 push 2 */
  push32((uint32_t)(0x2u));
  /* 12522459 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252245b call dword ptr [0x12557458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557458))), 0x12522461u);
  /* 12522461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522466 call 0x12527390 */
  push32(0x1252246bu); f_12527390();
  /* 1252246b mov esi, esp */
  ESI = (ESP);
  /* 1252246d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1252246f push 6 */
  push32((uint32_t)(0x6u));
  /* 12522471 call dword ptr [0x12557458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557458))), 0x12522477u);
  /* 12522477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252247a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252247c call 0x12527390 */
  push32(0x12522481u); f_12527390();
  /* 12522481 mov esi, esp */
  ESI = (ESP);
  /* 12522483 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12522485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522487 call dword ptr [0x12557458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557458))), 0x1252248du);
  /* 1252248d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522492 call 0x12527390 */
  push32(0x12522497u); f_12527390();
  /* 12522497 mov esi, esp */
  ESI = (ESP);
  /* 12522499 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1252249b push 5 */
  push32((uint32_t)(0x5u));
  /* 1252249d call dword ptr [0x12557458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557458))), 0x125224a3u);
  /* 125224a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125224a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125224a8 call 0x12527390 */
  push32(0x125224adu); f_12527390();
  /* 125224ad mov esi, esp */
  ESI = (ESP);
  /* 125224af push 0 */
  push32((uint32_t)(0x0u));
  /* 125224b1 push 0x12554648 */
  push32((uint32_t)(0x12554648u));
  /* 125224b6 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125224bcu);
  /* 125224bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125224bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125224c1 call 0x12527390 */
  push32(0x125224c6u); f_12527390();
  /* 125224c6 mov esi, esp */
  ESI = (ESP);
  /* 125224c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125224ca push 0x12554660 */
  push32((uint32_t)(0x12554660u));
  /* 125224cf call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125224d5u);
  /* 125224d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125224d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125224da call 0x12527390 */
  push32(0x125224dfu); f_12527390();
  /* 125224df mov esi, esp */
  ESI = (ESP);
  /* 125224e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125224e3 push 0x12554728 */
  push32((uint32_t)(0x12554728u));
  /* 125224e8 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125224eeu);
  /* 125224ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125224f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125224f3 call 0x12527390 */
  push32(0x125224f8u); f_12527390();
  /* 125224f8 mov esi, esp */
  ESI = (ESP);
  /* 125224fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125224fc push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 12522501 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522507u);
  /* 12522507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252250c call 0x12527390 */
  push32(0x12522511u); f_12527390();
  /* 12522511 mov esi, esp */
  ESI = (ESP);
  /* 12522513 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522515 push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 1252251a call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522520u);
  /* 12522520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522525 call 0x12527390 */
  push32(0x1252252au); f_12527390();
  /* 1252252a mov esi, esp */
  ESI = (ESP);
  /* 1252252c push 6 */
  push32((uint32_t)(0x6u));
  /* 1252252e push 1 */
  push32((uint32_t)(0x1u));
  /* 12522530 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12522536u);
  /* 12522536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252253b call 0x12527390 */
  push32(0x12522540u); f_12527390();
  /* 12522540 mov esi, esp */
  ESI = (ESP);
  /* 12522542 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522544 push 0x12554438 */
  push32((uint32_t)(0x12554438u));
  /* 12522549 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252254fu);
  /* 1252254f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522554 call 0x12527390 */
  push32(0x12522559u); f_12527390();
  /* 12522559 mov esi, esp */
  ESI = (ESP);
  /* 1252255b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252255d push 0x125546a8 */
  push32((uint32_t)(0x125546a8u));
  /* 12522562 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522568u);
  /* 12522568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252256b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252256d call 0x12527390 */
  push32(0x12522572u); f_12527390();
  /* 12522572 mov esi, esp */
  ESI = (ESP);
  /* 12522574 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522576 push 0x125546b0 */
  push32((uint32_t)(0x125546b0u));
  /* 1252257b call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522581u);
  /* 12522581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522584 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522586 call 0x12527390 */
  push32(0x1252258bu); f_12527390();
  /* 1252258b mov esi, esp */
  ESI = (ESP);
  /* 1252258d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252258f push 0x12554670 */
  push32((uint32_t)(0x12554670u));
  /* 12522594 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252259au);
  /* 1252259a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252259d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252259f call 0x12527390 */
  push32(0x125225a4u); f_12527390();
  /* 125225a4 mov esi, esp */
  ESI = (ESP);
  /* 125225a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125225a8 push 0x12554698 */
  push32((uint32_t)(0x12554698u));
  /* 125225ad call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125225b3u);
  /* 125225b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125225b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125225b8 call 0x12527390 */
  push32(0x125225bdu); f_12527390();
  /* 125225bd mov esi, esp */
  ESI = (ESP);
  /* 125225bf push 1 */
  push32((uint32_t)(0x1u));
  /* 125225c1 push 0x12554680 */
  push32((uint32_t)(0x12554680u));
  /* 125225c6 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125225ccu);
  /* 125225cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125225cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125225d1 call 0x12527390 */
  push32(0x125225d6u); f_12527390();
  /* 125225d6 mov esi, esp */
  ESI = (ESP);
  /* 125225d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125225da push 0x12554678 */
  push32((uint32_t)(0x12554678u));
  /* 125225df call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125225e5u);
  /* 125225e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125225e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125225ea call 0x12527390 */
  push32(0x125225efu); f_12527390();
  /* 125225ef mov esi, esp */
  ESI = (ESP);
  /* 125225f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125225f3 push 0x12554650 */
  push32((uint32_t)(0x12554650u));
  /* 125225f8 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125225feu);
  /* 125225fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522603 call 0x12527390 */
  push32(0x12522608u); f_12527390();
  /* 12522608 mov esi, esp */
  ESI = (ESP);
  /* 1252260a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252260c push 0x125546e8 */
  push32((uint32_t)(0x125546e8u));
  /* 12522611 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522617u);
  /* 12522617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252261a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252261c call 0x12527390 */
  push32(0x12522621u); f_12527390();
  /* 12522621 mov esi, esp */
  ESI = (ESP);
  /* 12522623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522625 push 0x12554718 */
  push32((uint32_t)(0x12554718u));
  /* 1252262a call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522630u);
  /* 12522630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522635 call 0x12527390 */
  push32(0x1252263au); f_12527390();
  /* 1252263a mov esi, esp */
  ESI = (ESP);
  /* 1252263c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252263e push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 12522643 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522649u);
  /* 12522649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252264c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252264e call 0x12527390 */
  push32(0x12522653u); f_12527390();
  /* 12522653 mov esi, esp */
  ESI = (ESP);
  /* 12522655 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522657 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 1252265c call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522662u);
  /* 12522662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522667 call 0x12527390 */
  push32(0x1252266cu); f_12527390();
  /* 1252266c mov esi, esp */
  ESI = (ESP);
  /* 1252266e push 1 */
  push32((uint32_t)(0x1u));
  /* 12522670 push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12522675 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252267bu);
  /* 1252267b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252267e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522680 call 0x12527390 */
  push32(0x12522685u); f_12527390();
  /* 12522685 mov esi, esp */
  ESI = (ESP);
  /* 12522687 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522689 push 0x12554438 */
  push32((uint32_t)(0x12554438u));
  /* 1252268e call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522694u);
  /* 12522694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522699 call 0x12527390 */
  push32(0x1252269eu); f_12527390();
  /* 1252269e mov esi, esp */
  ESI = (ESP);
  /* 125226a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125226a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125226a4 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x125226aau);
  /* 125226aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125226ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125226af call 0x12527390 */
  push32(0x125226b4u); f_12527390();
  /* 125226b4 mov esi, esp */
  ESI = (ESP);
  /* 125226b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125226b8 call dword ptr [0x12557474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557474))), 0x125226beu);
  /* 125226be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125226c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125226c3 call 0x12527390 */
  push32(0x125226c8u); f_12527390();
  /* 125226c8 mov esi, esp */
  ESI = (ESP);
  /* 125226ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125226cc push 0x12554780 */
  push32((uint32_t)(0x12554780u));
  /* 125226d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 125226d3 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125226d9u);
  /* 125226d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125226dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125226de call 0x12527390 */
  push32(0x125226e3u); f_12527390();
  /* 125226e3 mov esi, esp */
  ESI = (ESP);
  /* 125226e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 125226e7 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x125226edu);
  /* 125226ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125226f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125226f2 call 0x12527390 */
  push32(0x125226f7u); f_12527390();
  /* 125226f7 mov esi, esp */
  ESI = (ESP);
  /* 125226f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125226fb call dword ptr [0x12557474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557474))), 0x12522701u);
  /* 12522701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522706 call 0x12527390 */
  push32(0x1252270bu); f_12527390();
  /* 1252270b mov esi, esp */
  ESI = (ESP);
  /* 1252270d push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 12522712 push 3 */
  push32((uint32_t)(0x3u));
  /* 12522714 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522716 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252271cu);
  /* 1252271c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252271f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522721 call 0x12527390 */
  push32(0x12522726u); f_12527390();
  /* 12522726 mov esi, esp */
  ESI = (ESP);
  /* 12522728 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1252272d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12522731 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522737u);
  /* 12522737 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252273a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252273c call 0x12527390 */
  push32(0x12522741u); f_12527390();
  /* 12522741 mov esi, esp */
  ESI = (ESP);
  /* 12522743 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12522748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252274a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252274c call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522752u);
  /* 12522752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522757 call 0x12527390 */
  push32(0x1252275cu); f_12527390();
  /* 1252275c mov esi, esp */
  ESI = (ESP);
  /* 1252275e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12522763 push 2 */
  push32((uint32_t)(0x2u));
  /* 12522765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522767 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252276du);
  /* 1252276d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522772 call 0x12527390 */
  push32(0x12522777u); f_12527390();
  /* 12522777 mov esi, esp */
  ESI = (ESP);
  /* 12522779 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1252277e push 5 */
  push32((uint32_t)(0x5u));
  /* 12522780 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522782 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522788u);
  /* 12522788 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252278b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252278d call 0x12527390 */
  push32(0x12522792u); f_12527390();
  /* 12522792 mov esi, esp */
  ESI = (ESP);
  /* 12522794 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12522799 push 4 */
  push32((uint32_t)(0x4u));
  /* 1252279b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252279d call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125227a3u);
  /* 125227a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125227a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125227a8 call 0x12527390 */
  push32(0x125227adu); f_12527390();
  /* 125227ad mov esi, esp */
  ESI = (ESP);
  /* 125227af push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125227b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 125227b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125227b8 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125227beu);
  /* 125227be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125227c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125227c3 call 0x12527390 */
  push32(0x125227c8u); f_12527390();
  /* 125227c8 mov esi, esp */
  ESI = (ESP);
  /* 125227ca push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125227cf push 1 */
  push32((uint32_t)(0x1u));
  /* 125227d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125227d3 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125227d9u);
  /* 125227d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125227dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125227de call 0x12527390 */
  push32(0x125227e3u); f_12527390();
  /* 125227e3 mov esi, esp */
  ESI = (ESP);
  /* 125227e5 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125227ea push 0 */
  push32((uint32_t)(0x0u));
  /* 125227ec push 1 */
  push32((uint32_t)(0x1u));
  /* 125227ee call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125227f4u);
  /* 125227f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125227f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125227f9 call 0x12527390 */
  push32(0x125227feu); f_12527390();
  /* 125227fe mov esi, esp */
  ESI = (ESP);
  /* 12522800 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12522805 push 2 */
  push32((uint32_t)(0x2u));
  /* 12522807 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522809 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252280fu);
  /* 1252280f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522814 call 0x12527390 */
  push32(0x12522819u); f_12527390();
  /* 12522819 mov esi, esp */
  ESI = (ESP);
  /* 1252281b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12522820 push 5 */
  push32((uint32_t)(0x5u));
  /* 12522822 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522824 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252282au);
  /* 1252282a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252282d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252282f call 0x12527390 */
  push32(0x12522834u); f_12527390();
  /* 12522834 mov esi, esp */
  ESI = (ESP);
  /* 12522836 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 1252283b push 4 */
  push32((uint32_t)(0x4u));
  /* 1252283d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252283f call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522845u);
  /* 12522845 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522848 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252284a call 0x12527390 */
  push32(0x1252284fu); f_12527390();
  /* 1252284f mov esi, esp */
  ESI = (ESP);
  /* 12522851 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12522856 push 3 */
  push32((uint32_t)(0x3u));
  /* 12522858 push 7 */
  push32((uint32_t)(0x7u));
  /* 1252285a call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522860u);
  /* 12522860 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522863 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522865 call 0x12527390 */
  push32(0x1252286au); f_12527390();
  /* 1252286a mov esi, esp */
  ESI = (ESP);
  /* 1252286c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12522871 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522873 push 7 */
  push32((uint32_t)(0x7u));
  /* 12522875 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252287bu);
  /* 1252287b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252287e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522880 call 0x12527390 */
  push32(0x12522885u); f_12527390();
  /* 12522885 mov esi, esp */
  ESI = (ESP);
  /* 12522887 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 1252288c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252288e push 7 */
  push32((uint32_t)(0x7u));
  /* 12522890 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12522896u);
  /* 12522896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522899 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252289b call 0x12527390 */
  push32(0x125228a0u); f_12527390();
  /* 125228a0 mov esi, esp */
  ESI = (ESP);
  /* 125228a2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125228a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125228a9 push 7 */
  push32((uint32_t)(0x7u));
  /* 125228ab call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125228b1u);
  /* 125228b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125228b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125228b6 call 0x12527390 */
  push32(0x125228bbu); f_12527390();
  /* 125228bb mov esi, esp */
  ESI = (ESP);
  /* 125228bd push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125228c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 125228c4 push 7 */
  push32((uint32_t)(0x7u));
  /* 125228c6 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125228ccu);
  /* 125228cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125228cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125228d1 call 0x12527390 */
  push32(0x125228d6u); f_12527390();
  /* 125228d6 mov esi, esp */
  ESI = (ESP);
  /* 125228d8 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125228dd push 4 */
  push32((uint32_t)(0x4u));
  /* 125228df push 7 */
  push32((uint32_t)(0x7u));
  /* 125228e1 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x125228e7u);
  /* 125228e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125228ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125228ec call 0x12527390 */
  push32(0x125228f1u); f_12527390();
  /* 125228f1 mov esi, esp */
  ESI = (ESP);
  /* 125228f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125228f5 push 0x125546d0 */
  push32((uint32_t)(0x125546d0u));
  /* 125228fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125228fc call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12522902u);
  /* 12522902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522907 call 0x12527390 */
  push32(0x1252290cu); f_12527390();
  /* 1252290c mov esi, esp */
  ESI = (ESP);
  /* 1252290e push 1 */
  push32((uint32_t)(0x1u));
  /* 12522910 push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 12522915 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522917 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252291du);
  /* 1252291d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522922 call 0x12527390 */
  push32(0x12522927u); f_12527390();
  /* 12522927 mov esi, esp */
  ESI = (ESP);
  /* 12522929 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252292b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252292d call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12522933u);
  /* 12522933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522938 call 0x12527390 */
  push32(0x1252293du); f_12527390();
  /* 1252293d mov esi, esp */
  ESI = (ESP);
  /* 1252293f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12522941 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12522943 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12522949u);
  /* 12522949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252294c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252294e call 0x12527390 */
  push32(0x12522953u); f_12527390();
  /* 12522953 mov esi, esp */
  ESI = (ESP);
  /* 12522955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522957 push 0x12554640 */
  push32((uint32_t)(0x12554640u));
  /* 1252295c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252295e call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12522964u);
  /* 12522964 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522969 call 0x12527390 */
  push32(0x1252296eu); f_12527390();
  /* 1252296e mov esi, esp */
  ESI = (ESP);
  /* 12522970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522972 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522974 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x1252297au);
  /* 1252297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252297d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252297f call 0x12527390 */
  push32(0x12522984u); f_12527390();
  /* 12522984 mov esi, esp */
  ESI = (ESP);
  /* 12522986 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12522988 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x1252298eu);
  /* 1252298e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522991 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522993 call 0x12527390 */
  push32(0x12522998u); f_12527390();
  /* 12522998 mov esi, esp */
  ESI = (ESP);
  /* 1252299a push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1252299c call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125229a2u);
  /* 125229a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125229a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125229a7 call 0x12527390 */
  push32(0x125229acu); f_12527390();
  /* 125229ac mov esi, esp */
  ESI = (ESP);
  /* 125229ae push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125229b0 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125229b6u);
  /* 125229b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125229b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125229bb call 0x12527390 */
  push32(0x125229c0u); f_12527390();
  /* 125229c0 mov esi, esp */
  ESI = (ESP);
  /* 125229c2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125229c4 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125229cau);
  /* 125229ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125229cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125229cf call 0x12527390 */
  push32(0x125229d4u); f_12527390();
  /* 125229d4 mov esi, esp */
  ESI = (ESP);
  /* 125229d6 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125229d8 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125229deu);
  /* 125229de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125229e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125229e3 call 0x12527390 */
  push32(0x125229e8u); f_12527390();
  /* 125229e8 mov esi, esp */
  ESI = (ESP);
  /* 125229ea push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125229ec call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125229f2u);
  /* 125229f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125229f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125229f7 call 0x12527390 */
  push32(0x125229fcu); f_12527390();
  /* 125229fc mov esi, esp */
  ESI = (ESP);
  /* 125229fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12522a00 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x12522a06u);
  /* 12522a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a0b call 0x12527390 */
  push32(0x12522a10u); f_12527390();
  /* 12522a10 mov esi, esp */
  ESI = (ESP);
  /* 12522a12 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12522a14 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x12522a1au);
  /* 12522a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a1f call 0x12527390 */
  push32(0x12522a24u); f_12527390();
  /* 12522a24 mov esi, esp */
  ESI = (ESP);
  /* 12522a26 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12522a28 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x12522a2eu);
  /* 12522a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a33 call 0x12527390 */
  push32(0x12522a38u); f_12527390();
L_12522a38:;
  /* 12522a38 mov esi, esp */
  ESI = (ESP);
  /* 12522a3a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12522a3c call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522a42u);
  /* 12522a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a47 call 0x12527390 */
  push32(0x12522a4cu); f_12527390();
  /* 12522a4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522a53 je 0x12522ac4 */
  if (C.zf) goto L_12522ac4;
  /* 12522a55 mov esi, esp */
  ESI = (ESP);
  /* 12522a57 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 12522a5c push 0x125545b0 */
  push32((uint32_t)(0x125545b0u));
  /* 12522a61 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x12522a67u);
  /* 12522a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a6c call 0x12527390 */
  push32(0x12522a71u); f_12527390();
  /* 12522a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522a73 jle 0x12522ac4 */
  if ((C.zf||C.sf!=C.of)) goto L_12522ac4;
  /* 12522a75 mov esi, esp */
  ESI = (ESP);
  /* 12522a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522a79 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12522a7b call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522a81u);
  /* 12522a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a86 call 0x12527390 */
  push32(0x12522a8bu); f_12527390();
  /* 12522a8b mov esi, esp */
  ESI = (ESP);
  /* 12522a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12522a8f push 0x125547a8 */
  push32((uint32_t)(0x125547a8u));
  /* 12522a94 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522a9au);
  /* 12522a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522a9f call 0x12527390 */
  push32(0x12522aa4u); f_12527390();
  /* 12522aa4 mov esi, esp */
  ESI = (ESP);
  /* 12522aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522aa8 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 12522aad push 0x125545b8 */
  push32((uint32_t)(0x125545b8u));
  /* 12522ab2 push 5 */
  push32((uint32_t)(0x5u));
  /* 12522ab4 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12522abau);
  /* 12522aba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522abf call 0x12527390 */
  push32(0x12522ac4u); f_12527390();
L_12522ac4:;
  /* 12522ac4 mov esi, esp */
  ESI = (ESP);
  /* 12522ac6 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12522ac8 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522aceu);
  /* 12522ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ad1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522ad3 call 0x12527390 */
  push32(0x12522ad8u); f_12527390();
  /* 12522ad8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522adf je 0x12522b7f */
  if (C.zf) goto L_12522b7f;
  /* 12522ae5 mov esi, esp */
  ESI = (ESP);
  /* 12522ae7 push 0x125547a8 */
  push32((uint32_t)(0x125547a8u));
  /* 12522aec push 0x125545b8 */
  push32((uint32_t)(0x125545b8u));
  /* 12522af1 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x12522af7u);
  /* 12522af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522afc call 0x12527390 */
  push32(0x12522b01u); f_12527390();
  /* 12522b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522b03 jle 0x12522b7f */
  if ((C.zf||C.sf!=C.of)) goto L_12522b7f;
  /* 12522b05 mov esi, esp */
  ESI = (ESP);
  /* 12522b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522b09 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12522b0b call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522b11u);
  /* 12522b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b16 call 0x12527390 */
  push32(0x12522b1bu); f_12527390();
  /* 12522b1b mov esi, esp */
  ESI = (ESP);
  /* 12522b1d push 0x1254f6d4 */
  push32((uint32_t)(0x1254f6d4u));
  /* 12522b22 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522b28u);
  /* 12522b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b2d call 0x12527390 */
  push32(0x12522b32u); f_12527390();
  /* 12522b32 mov esi, esp */
  ESI = (ESP);
  /* 12522b34 push 0x1254f6cc */
  push32((uint32_t)(0x1254f6ccu));
  /* 12522b39 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522b3fu);
  /* 12522b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b44 call 0x12527390 */
  push32(0x12522b49u); f_12527390();
  /* 12522b49 mov esi, esp */
  ESI = (ESP);
  /* 12522b4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12522b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12522b4f push 0x125545c0 */
  push32((uint32_t)(0x125545c0u));
  /* 12522b54 call dword ptr [0x12557498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557498))), 0x12522b5au);
  /* 12522b5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b5f call 0x12527390 */
  push32(0x12522b64u); f_12527390();
  /* 12522b64 mov esi, esp */
  ESI = (ESP);
  /* 12522b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12522b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522b6a push 0x125545c8 */
  push32((uint32_t)(0x125545c8u));
  /* 12522b6f call dword ptr [0x12557498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557498))), 0x12522b75u);
  /* 12522b75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b7a call 0x12527390 */
  push32(0x12522b7fu); f_12527390();
L_12522b7f:;
  /* 12522b7f mov esi, esp */
  ESI = (ESP);
  /* 12522b81 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12522b83 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522b89u);
  /* 12522b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522b8e call 0x12527390 */
  push32(0x12522b93u); f_12527390();
  /* 12522b93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522b9a je 0x12522c05 */
  if (C.zf) goto L_12522c05;
  /* 12522b9c mov esi, esp */
  ESI = (ESP);
  /* 12522b9e push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12522ba0 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522ba6u);
  /* 12522ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522bab call 0x12527390 */
  push32(0x12522bb0u); f_12527390();
  /* 12522bb0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522bb7 jne 0x12522c05 */
  if (!C.zf) goto L_12522c05;
  /* 12522bb9 mov esi, esp */
  ESI = (ESP);
  /* 12522bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12522bbd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12522bbf call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522bc5u);
  /* 12522bc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522bc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522bca call 0x12527390 */
  push32(0x12522bcfu); f_12527390();
  /* 12522bcf mov esi, esp */
  ESI = (ESP);
  /* 12522bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522bd3 push 0x125547a8 */
  push32((uint32_t)(0x125547a8u));
  /* 12522bd8 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522bdeu);
  /* 12522bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522be3 call 0x12527390 */
  push32(0x12522be8u); f_12527390();
  /* 12522be8 mov esi, esp */
  ESI = (ESP);
  /* 12522bea push 0 */
  push32((uint32_t)(0x0u));
  /* 12522bec push 0 */
  push32((uint32_t)(0x0u));
  /* 12522bee push 0x125544f8 */
  push32((uint32_t)(0x125544f8u));
  /* 12522bf3 push 5 */
  push32((uint32_t)(0x5u));
  /* 12522bf5 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12522bfbu);
  /* 12522bfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c00 call 0x12527390 */
  push32(0x12522c05u); f_12527390();
L_12522c05:;
  /* 12522c05 mov esi, esp */
  ESI = (ESP);
  /* 12522c07 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12522c09 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522c0fu);
  /* 12522c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c14 call 0x12527390 */
  push32(0x12522c19u); f_12527390();
  /* 12522c19 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522c1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522c20 je 0x12522cb8 */
  if (C.zf) goto L_12522cb8;
  /* 12522c26 mov esi, esp */
  ESI = (ESP);
  /* 12522c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522c2a push 0x125545e0 */
  push32((uint32_t)(0x125545e0u));
  /* 12522c2f call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12522c35u);
  /* 12522c35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c3a call 0x12527390 */
  push32(0x12522c3fu); f_12527390();
  /* 12522c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522c41 jle 0x12522cb8 */
  if ((C.zf||C.sf!=C.of)) goto L_12522cb8;
  /* 12522c43 mov esi, esp */
  ESI = (ESP);
  /* 12522c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522c47 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12522c49 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522c4fu);
  /* 12522c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c54 call 0x12527390 */
  push32(0x12522c59u); f_12527390();
  /* 12522c59 mov esi, esp */
  ESI = (ESP);
  /* 12522c5b push 0x1254f6c0 */
  push32((uint32_t)(0x1254f6c0u));
  /* 12522c60 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522c66u);
  /* 12522c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c6b call 0x12527390 */
  push32(0x12522c70u); f_12527390();
  /* 12522c70 mov esi, esp */
  ESI = (ESP);
  /* 12522c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522c74 push 0x12554648 */
  push32((uint32_t)(0x12554648u));
  /* 12522c79 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522c7fu);
  /* 12522c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c84 call 0x12527390 */
  push32(0x12522c89u); f_12527390();
  /* 12522c89 mov esi, esp */
  ESI = (ESP);
  /* 12522c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12522c8d push 0x12554660 */
  push32((uint32_t)(0x12554660u));
  /* 12522c92 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522c98u);
  /* 12522c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522c9d call 0x12527390 */
  push32(0x12522ca2u); f_12527390();
  /* 12522ca2 mov esi, esp */
  ESI = (ESP);
  /* 12522ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522ca6 push 6 */
  push32((uint32_t)(0x6u));
  /* 12522ca8 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12522caeu);
  /* 12522cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522cb3 call 0x12527390 */
  push32(0x12522cb8u); f_12527390();
L_12522cb8:;
  /* 12522cb8 mov esi, esp */
  ESI = (ESP);
  /* 12522cba push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12522cbc call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522cc2u);
  /* 12522cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522cc7 call 0x12527390 */
  push32(0x12522cccu); f_12527390();
  /* 12522ccc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522cd3 je 0x12522d4e */
  if (C.zf) goto L_12522d4e;
  /* 12522cd5 mov esi, esp */
  ESI = (ESP);
  /* 12522cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522cd9 push 0x125545d8 */
  push32((uint32_t)(0x125545d8u));
  /* 12522cde call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12522ce4u);
  /* 12522ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522ce9 call 0x12527390 */
  push32(0x12522ceeu); f_12527390();
  /* 12522cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522cf0 jle 0x12522d4e */
  if ((C.zf||C.sf!=C.of)) goto L_12522d4e;
  /* 12522cf2 mov esi, esp */
  ESI = (ESP);
  /* 12522cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522cf6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12522cf8 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522cfeu);
  /* 12522cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d03 call 0x12527390 */
  push32(0x12522d08u); f_12527390();
  /* 12522d08 mov esi, esp */
  ESI = (ESP);
  /* 12522d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12522d0c push 0x12554728 */
  push32((uint32_t)(0x12554728u));
  /* 12522d11 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522d17u);
  /* 12522d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d1c call 0x12527390 */
  push32(0x12522d21u); f_12527390();
  /* 12522d21 mov esi, esp */
  ESI = (ESP);
  /* 12522d23 push 0x1254f6b4 */
  push32((uint32_t)(0x1254f6b4u));
  /* 12522d28 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522d2eu);
  /* 12522d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d33 call 0x12527390 */
  push32(0x12522d38u); f_12527390();
  /* 12522d38 mov esi, esp */
  ESI = (ESP);
  /* 12522d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12522d3c push 6 */
  push32((uint32_t)(0x6u));
  /* 12522d3e call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12522d44u);
  /* 12522d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d49 call 0x12527390 */
  push32(0x12522d4eu); f_12527390();
L_12522d4e:;
  /* 12522d4e mov esi, esp */
  ESI = (ESP);
  /* 12522d50 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12522d52 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522d58u);
  /* 12522d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d5d call 0x12527390 */
  push32(0x12522d62u); f_12527390();
  /* 12522d62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522d69 je 0x12522de3 */
  if (C.zf) goto L_12522de3;
  /* 12522d6b mov esi, esp */
  ESI = (ESP);
  /* 12522d6d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12522d6f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522d75u);
  /* 12522d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d7a call 0x12527390 */
  push32(0x12522d7fu); f_12527390();
  /* 12522d7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522d86 jne 0x12522de3 */
  if (!C.zf) goto L_12522de3;
  /* 12522d88 mov esi, esp */
  ESI = (ESP);
  /* 12522d8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12522d8c call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522d92u);
  /* 12522d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522d97 call 0x12527390 */
  push32(0x12522d9cu); f_12527390();
  /* 12522d9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522da3 jne 0x12522de3 */
  if (!C.zf) goto L_12522de3;
  /* 12522da5 mov esi, esp */
  ESI = (ESP);
  /* 12522da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522da9 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12522dab call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522db1u);
  /* 12522db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522db4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522db6 call 0x12527390 */
  push32(0x12522dbbu); f_12527390();
  /* 12522dbb mov esi, esp */
  ESI = (ESP);
  /* 12522dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12522dbf call dword ptr [0x12557494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557494))), 0x12522dc5u);
  /* 12522dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522dca call 0x12527390 */
  push32(0x12522dcfu); f_12527390();
  /* 12522dcf mov esi, esp */
  ESI = (ESP);
  /* 12522dd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12522dd3 call dword ptr [0x12557494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557494))), 0x12522dd9u);
  /* 12522dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522dde call 0x12527390 */
  push32(0x12522de3u); f_12527390();
L_12522de3:;
  /* 12522de3 mov esi, esp */
  ESI = (ESP);
  /* 12522de5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12522de7 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522dedu);
  /* 12522ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522df2 call 0x12527390 */
  push32(0x12522df7u); f_12527390();
  /* 12522df7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522dfe je 0x12522e4f */
  if (C.zf) goto L_12522e4f;
  /* 12522e00 mov esi, esp */
  ESI = (ESP);
  /* 12522e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522e04 push 0x125545e8 */
  push32((uint32_t)(0x125545e8u));
  /* 12522e09 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12522e0fu);
  /* 12522e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522e14 call 0x12527390 */
  push32(0x12522e19u); f_12527390();
  /* 12522e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522e1b jle 0x12522e4f */
  if ((C.zf||C.sf!=C.of)) goto L_12522e4f;
  /* 12522e1d mov esi, esp */
  ESI = (ESP);
  /* 12522e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12522e21 push 0x12554708 */
  push32((uint32_t)(0x12554708u));
  /* 12522e26 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522e2cu);
  /* 12522e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522e31 call 0x12527390 */
  push32(0x12522e36u); f_12527390();
  /* 12522e36 mov esi, esp */
  ESI = (ESP);
  /* 12522e38 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 12522e3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12522e3f call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12522e45u);
  /* 12522e45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522e4a call 0x12527390 */
  push32(0x12522e4fu); f_12527390();
L_12522e4f:;
  /* 12522e4f mov esi, esp */
  ESI = (ESP);
  /* 12522e51 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12522e53 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522e59u);
  /* 12522e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522e5e call 0x12527390 */
  push32(0x12522e63u); f_12527390();
  /* 12522e63 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522e6a je 0x12522ea9 */
  if (C.zf) goto L_12522ea9;
  /* 12522e6c push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 12522e71 call 0x12521005 */
  push32(0x12522e76u); f_12521005();
  /* 12522e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522e7b jne 0x12522ea9 */
  if (!C.zf) goto L_12522ea9;
  /* 12522e7d mov esi, esp */
  ESI = (ESP);
  /* 12522e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12522e81 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12522e83 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522e89u);
  /* 12522e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522e8e call 0x12527390 */
  push32(0x12522e93u); f_12527390();
  /* 12522e93 mov esi, esp */
  ESI = (ESP);
  /* 12522e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522e97 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12522e99 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522e9fu);
  /* 12522e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ea2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522ea4 call 0x12527390 */
  push32(0x12522ea9u); f_12527390();
L_12522ea9:;
  /* 12522ea9 mov esi, esp */
  ESI = (ESP);
  /* 12522eab push 8 */
  push32((uint32_t)(0x8u));
  /* 12522ead call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522eb3u);
  /* 12522eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522eb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522eb8 call 0x12527390 */
  push32(0x12522ebdu); f_12527390();
  /* 12522ebd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522ec4 je 0x12522f6b */
  if (C.zf) goto L_12522f6b;
  /* 12522eca mov esi, esp */
  ESI = (ESP);
  /* 12522ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 12522ece push 0x12554468 */
  push32((uint32_t)(0x12554468u));
  /* 12522ed3 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12522ed9u);
  /* 12522ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522edc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522ede call 0x12527390 */
  push32(0x12522ee3u); f_12527390();
  /* 12522ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522ee5 jle 0x12522f6b */
  if ((C.zf||C.sf!=C.of)) goto L_12522f6b;
  /* 12522eeb mov esi, esp */
  ESI = (ESP);
  /* 12522eed push 9 */
  push32((uint32_t)(0x9u));
  /* 12522eef call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522ef5u);
  /* 12522ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522efa call 0x12527390 */
  push32(0x12522effu); f_12527390();
  /* 12522eff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522f06 je 0x12522f6b */
  if (C.zf) goto L_12522f6b;
  /* 12522f08 mov esi, esp */
  ESI = (ESP);
  /* 12522f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12522f0c push 8 */
  push32((uint32_t)(0x8u));
  /* 12522f0e call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522f14u);
  /* 12522f14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522f19 call 0x12527390 */
  push32(0x12522f1eu); f_12527390();
  /* 12522f1e mov esi, esp */
  ESI = (ESP);
  /* 12522f20 push 0x1254f6ac */
  push32((uint32_t)(0x1254f6acu));
  /* 12522f25 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522f2bu);
  /* 12522f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522f30 call 0x12527390 */
  push32(0x12522f35u); f_12527390();
  /* 12522f35 mov esi, esp */
  ESI = (ESP);
  /* 12522f37 push 3 */
  push32((uint32_t)(0x3u));
  /* 12522f39 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522f3b push 0x12554480 */
  push32((uint32_t)(0x12554480u));
  /* 12522f40 call dword ptr [0x12557498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557498))), 0x12522f46u);
  /* 12522f46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522f4b call 0x12527390 */
  push32(0x12522f50u); f_12527390();
  /* 12522f50 mov esi, esp */
  ESI = (ESP);
  /* 12522f52 push 4 */
  push32((uint32_t)(0x4u));
  /* 12522f54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12522f56 push 0x125544b0 */
  push32((uint32_t)(0x125544b0u));
  /* 12522f5b call dword ptr [0x12557498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557498))), 0x12522f61u);
  /* 12522f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522f66 call 0x12527390 */
  push32(0x12522f6bu); f_12527390();
L_12522f6b:;
  /* 12522f6b mov esi, esp */
  ESI = (ESP);
  /* 12522f6d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12522f6f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12522f75u);
  /* 12522f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522f7a call 0x12527390 */
  push32(0x12522f7fu); f_12527390();
  /* 12522f7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12522f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522f86 je 0x12523016 */
  if (C.zf) goto L_12523016;
  /* 12522f8c mov esi, esp */
  ESI = (ESP);
  /* 12522f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12522f90 push 0x12554468 */
  push32((uint32_t)(0x12554468u));
  /* 12522f95 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12522f9bu);
  /* 12522f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522fa0 call 0x12527390 */
  push32(0x12522fa5u); f_12527390();
  /* 12522fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522fa7 jle 0x12523016 */
  if ((C.zf||C.sf!=C.of)) goto L_12523016;
  /* 12522fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12522fab push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12522fb0 call 0x1252100f */
  push32(0x12522fb5u); f_1252100f();
  /* 12522fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12522fba jne 0x12523016 */
  if (!C.zf) goto L_12523016;
  /* 12522fbc mov esi, esp */
  ESI = (ESP);
  /* 12522fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12522fc0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12522fc2 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12522fc8u);
  /* 12522fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522fcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522fcd call 0x12527390 */
  push32(0x12522fd2u); f_12527390();
  /* 12522fd2 mov esi, esp */
  ESI = (ESP);
  /* 12522fd4 push 0x1254f6a4 */
  push32((uint32_t)(0x1254f6a4u));
  /* 12522fd9 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12522fdfu);
  /* 12522fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522fe4 call 0x12527390 */
  push32(0x12522fe9u); f_12527390();
  /* 12522fe9 mov esi, esp */
  ESI = (ESP);
  /* 12522feb push 0 */
  push32((uint32_t)(0x0u));
  /* 12522fed push 0x12554798 */
  push32((uint32_t)(0x12554798u));
  /* 12522ff2 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12522ff8u);
  /* 12522ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12522ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12522ffd call 0x12527390 */
  push32(0x12523002u); f_12527390();
  /* 12523002 mov esi, esp */
  ESI = (ESP);
  /* 12523004 push 5 */
  push32((uint32_t)(0x5u));
  /* 12523006 call dword ptr [0x125574a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a8))), 0x1252300cu);
  /* 1252300c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252300f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523011 call 0x12527390 */
  push32(0x12523016u); f_12527390();
L_12523016:;
  /* 12523016 mov esi, esp */
  ESI = (ESP);
  /* 12523018 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1252301a call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523020u);
  /* 12523020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523025 call 0x12527390 */
  push32(0x1252302au); f_12527390();
  /* 1252302a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252302f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523031 je 0x12523113 */
  if (C.zf) goto L_12523113;
  /* 12523037 mov esi, esp */
  ESI = (ESP);
  /* 12523039 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252303b push 0x12554468 */
  push32((uint32_t)(0x12554468u));
  /* 12523040 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12523046u);
  /* 12523046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523049 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252304b call 0x12527390 */
  push32(0x12523050u); f_12527390();
  /* 12523050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523052 jle 0x12523113 */
  if ((C.zf||C.sf!=C.of)) goto L_12523113;
  /* 12523058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252305a push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 1252305f call 0x1252100f */
  push32(0x12523064u); f_1252100f();
  /* 12523064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523069 jle 0x12523113 */
  if ((C.zf||C.sf!=C.of)) goto L_12523113;
  /* 1252306f mov esi, esp */
  ESI = (ESP);
  /* 12523071 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523073 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12523075 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252307bu);
  /* 1252307b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252307e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523080 call 0x12527390 */
  push32(0x12523085u); f_12527390();
  /* 12523085 mov esi, esp */
  ESI = (ESP);
  /* 12523087 push 0x1254f69c */
  push32((uint32_t)(0x1254f69cu));
  /* 1252308c call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12523092u);
  /* 12523092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523097 call 0x12527390 */
  push32(0x1252309cu); f_12527390();
  /* 1252309c mov esi, esp */
  ESI = (ESP);
  /* 1252309e push 0 */
  push32((uint32_t)(0x0u));
  /* 125230a0 push 0x125547c0 */
  push32((uint32_t)(0x125547c0u));
  /* 125230a5 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125230abu);
  /* 125230ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125230ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125230b0 call 0x12527390 */
  push32(0x125230b5u); f_12527390();
  /* 125230b5 mov esi, esp */
  ESI = (ESP);
  /* 125230b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 125230b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125230bb push 0x125544a0 */
  push32((uint32_t)(0x125544a0u));
  /* 125230c0 call dword ptr [0x12557498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557498))), 0x125230c6u);
  /* 125230c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125230c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125230cb call 0x12527390 */
  push32(0x125230d0u); f_12527390();
  /* 125230d0 mov esi, esp */
  ESI = (ESP);
  /* 125230d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125230d4 push 0x12554798 */
  push32((uint32_t)(0x12554798u));
  /* 125230d9 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125230dfu);
  /* 125230df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125230e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125230e4 call 0x12527390 */
  push32(0x125230e9u); f_12527390();
  /* 125230e9 mov esi, esp */
  ESI = (ESP);
  /* 125230eb push 5 */
  push32((uint32_t)(0x5u));
  /* 125230ed call dword ptr [0x125574a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a0))), 0x125230f3u);
  /* 125230f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125230f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125230f8 call 0x12527390 */
  push32(0x125230fdu); f_12527390();
  /* 125230fd mov esi, esp */
  ESI = (ESP);
  /* 125230ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12523101 push 5 */
  push32((uint32_t)(0x5u));
  /* 12523103 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12523109u);
  /* 12523109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252310c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252310e call 0x12527390 */
  push32(0x12523113u); f_12527390();
L_12523113:;
  /* 12523113 mov esi, esp */
  ESI = (ESP);
  /* 12523115 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12523117 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252311du);
  /* 1252311d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523122 call 0x12527390 */
  push32(0x12523127u); f_12527390();
  /* 12523127 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252312c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252312e je 0x125231b8 */
  if (C.zf) goto L_125231b8;
  /* 12523134 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523136 push 0x12554618 */
  push32((uint32_t)(0x12554618u));
  /* 1252313b call 0x1252100f */
  push32(0x12523140u); f_1252100f();
  /* 12523140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523145 jle 0x125231b8 */
  if ((C.zf||C.sf!=C.of)) goto L_125231b8;
  /* 12523147 mov esi, esp */
  ESI = (ESP);
  /* 12523149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252314b push 0xd */
  push32((uint32_t)(0xdu));
  /* 1252314d call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523153u);
  /* 12523153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523156 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523158 call 0x12527390 */
  push32(0x1252315du); f_12527390();
  /* 1252315d mov esi, esp */
  ESI = (ESP);
  /* 1252315f push 1 */
  push32((uint32_t)(0x1u));
  /* 12523161 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12523163 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523169u);
  /* 12523169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252316c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252316e call 0x12527390 */
  push32(0x12523173u); f_12527390();
  /* 12523173 mov esi, esp */
  ESI = (ESP);
  /* 12523175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523177 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523179 push 0x12554618 */
  push32((uint32_t)(0x12554618u));
  /* 1252317e call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x12523184u);
  /* 12523184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523189 call 0x12527390 */
  push32(0x1252318eu); f_12527390();
  /* 1252318e mov esi, esp */
  ESI = (ESP);
  /* 12523190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523192 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x12523198u);
  /* 12523198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252319b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252319d call 0x12527390 */
  push32(0x125231a2u); f_12527390();
  /* 125231a2 mov esi, esp */
  ESI = (ESP);
  /* 125231a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125231a6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125231a8 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x125231aeu);
  /* 125231ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125231b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125231b3 call 0x12527390 */
  push32(0x125231b8u); f_12527390();
L_125231b8:;
  /* 125231b8 mov esi, esp */
  ESI = (ESP);
  /* 125231ba push 0xc */
  push32((uint32_t)(0xcu));
  /* 125231bc call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125231c2u);
  /* 125231c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125231c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125231c7 call 0x12527390 */
  push32(0x125231ccu); f_12527390();
  /* 125231cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125231d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125231d3 je 0x1252325d */
  if (C.zf) goto L_1252325d;
  /* 125231d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125231db push 0x12554610 */
  push32((uint32_t)(0x12554610u));
  /* 125231e0 call 0x1252100f */
  push32(0x125231e5u); f_1252100f();
  /* 125231e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125231e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125231ea jle 0x1252325d */
  if ((C.zf||C.sf!=C.of)) goto L_1252325d;
  /* 125231ec mov esi, esp */
  ESI = (ESP);
  /* 125231ee push 0 */
  push32((uint32_t)(0x0u));
  /* 125231f0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125231f2 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125231f8u);
  /* 125231f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125231fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125231fd call 0x12527390 */
  push32(0x12523202u); f_12527390();
  /* 12523202 mov esi, esp */
  ESI = (ESP);
  /* 12523204 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523206 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12523208 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252320eu);
  /* 1252320e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523213 call 0x12527390 */
  push32(0x12523218u); f_12527390();
  /* 12523218 mov esi, esp */
  ESI = (ESP);
  /* 1252321a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252321c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252321e push 0x12554610 */
  push32((uint32_t)(0x12554610u));
  /* 12523223 call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x12523229u);
  /* 12523229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252322c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252322e call 0x12527390 */
  push32(0x12523233u); f_12527390();
  /* 12523233 mov esi, esp */
  ESI = (ESP);
  /* 12523235 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523237 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x1252323du);
  /* 1252323d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523242 call 0x12527390 */
  push32(0x12523247u); f_12527390();
  /* 12523247 mov esi, esp */
  ESI = (ESP);
  /* 12523249 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1252324b push 0xd */
  push32((uint32_t)(0xdu));
  /* 1252324d call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523253u);
  /* 12523253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523258 call 0x12527390 */
  push32(0x1252325du); f_12527390();
L_1252325d:;
  /* 1252325d mov esi, esp */
  ESI = (ESP);
  /* 1252325f push 0xb */
  push32((uint32_t)(0xbu));
  /* 12523261 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523267u);
  /* 12523267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252326a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252326c call 0x12527390 */
  push32(0x12523271u); f_12527390();
  /* 12523271 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523278 je 0x125232f6 */
  if (C.zf) goto L_125232f6;
  /* 1252327a mov esi, esp */
  ESI = (ESP);
  /* 1252327c push 0xc */
  push32((uint32_t)(0xcu));
  /* 1252327e call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523284u);
  /* 12523284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523287 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523289 call 0x12527390 */
  push32(0x1252328eu); f_12527390();
  /* 1252328e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523295 jne 0x125232b4 */
  if (!C.zf) goto L_125232b4;
  /* 12523297 mov esi, esp */
  ESI = (ESP);
  /* 12523299 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1252329b call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x125232a1u);
  /* 125232a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125232a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125232a6 call 0x12527390 */
  push32(0x125232abu); f_12527390();
  /* 125232ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125232b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125232b2 je 0x125232f6 */
  if (C.zf) goto L_125232f6;
L_125232b4:;
  /* 125232b4 mov esi, esp */
  ESI = (ESP);
  /* 125232b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125232b8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125232ba call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125232c0u);
  /* 125232c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125232c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125232c5 call 0x12527390 */
  push32(0x125232cau); f_12527390();
  /* 125232ca mov esi, esp */
  ESI = (ESP);
  /* 125232cc push 1 */
  push32((uint32_t)(0x1u));
  /* 125232ce push 0xd */
  push32((uint32_t)(0xdu));
  /* 125232d0 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125232d6u);
  /* 125232d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125232d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125232db call 0x12527390 */
  push32(0x125232e0u); f_12527390();
  /* 125232e0 mov esi, esp */
  ESI = (ESP);
  /* 125232e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125232e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125232e6 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125232ecu);
  /* 125232ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125232ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125232f1 call 0x12527390 */
  push32(0x125232f6u); f_12527390();
L_125232f6:;
  /* 125232f6 mov esi, esp */
  ESI = (ESP);
  /* 125232f8 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125232fa call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523300u);
  /* 12523300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523305 call 0x12527390 */
  push32(0x1252330au); f_12527390();
  /* 1252330a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252330f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523311 je 0x12523375 */
  if (C.zf) goto L_12523375;
  /* 12523313 mov esi, esp */
  ESI = (ESP);
  /* 12523315 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523317 push 0x125544c8 */
  push32((uint32_t)(0x125544c8u));
  /* 1252331c call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12523322u);
  /* 12523322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523327 call 0x12527390 */
  push32(0x1252332cu); f_12527390();
  /* 1252332c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252332e jle 0x12523375 */
  if ((C.zf||C.sf!=C.of)) goto L_12523375;
  /* 12523330 mov esi, esp */
  ESI = (ESP);
  /* 12523332 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523334 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12523336 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252333cu);
  /* 1252333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252333f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523341 call 0x12527390 */
  push32(0x12523346u); f_12527390();
  /* 12523346 mov esi, esp */
  ESI = (ESP);
  /* 12523348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252334a push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 1252334f call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523355u);
  /* 12523355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252335a call 0x12527390 */
  push32(0x1252335fu); f_12527390();
  /* 1252335f mov esi, esp */
  ESI = (ESP);
  /* 12523361 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523363 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523365 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x1252336bu);
  /* 1252336b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252336e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523370 call 0x12527390 */
  push32(0x12523375u); f_12527390();
L_12523375:;
  /* 12523375 mov esi, esp */
  ESI = (ESP);
  /* 12523377 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12523379 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252337fu);
  /* 1252337f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523382 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523384 call 0x12527390 */
  push32(0x12523389u); f_12527390();
  /* 12523389 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252338e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523390 je 0x12523400 */
  if (C.zf) goto L_12523400;
  /* 12523392 mov esi, esp */
  ESI = (ESP);
  /* 12523394 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12523396 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252339cu);
  /* 1252339c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252339f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125233a1 call 0x12527390 */
  push32(0x125233a6u); f_12527390();
  /* 125233a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125233ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125233ad jne 0x12523400 */
  if (!C.zf) goto L_12523400;
  /* 125233af mov esi, esp */
  ESI = (ESP);
  /* 125233b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125233b3 push 0x125544c8 */
  push32((uint32_t)(0x125544c8u));
  /* 125233b8 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125233beu);
  /* 125233be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125233c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125233c3 call 0x12527390 */
  push32(0x125233c8u); f_12527390();
  /* 125233c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125233ca jle 0x12523400 */
  if ((C.zf||C.sf!=C.of)) goto L_12523400;
  /* 125233cc mov esi, esp */
  ESI = (ESP);
  /* 125233ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125233d0 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 125233d2 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125233d8u);
  /* 125233d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125233db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125233dd call 0x12527390 */
  push32(0x125233e2u); f_12527390();
  /* 125233e2 mov esi, esp */
  ESI = (ESP);
  /* 125233e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125233e6 push 0x125544c8 */
  push32((uint32_t)(0x125544c8u));
  /* 125233eb push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 125233f0 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x125233f6u);
  /* 125233f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125233f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125233fb call 0x12527390 */
  push32(0x12523400u); f_12527390();
L_12523400:;
  /* 12523400 mov esi, esp */
  ESI = (ESP);
  /* 12523402 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12523404 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252340au);
  /* 1252340a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252340d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252340f call 0x12527390 */
  push32(0x12523414u); f_12527390();
  /* 12523414 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252341b je 0x125234a7 */
  if (C.zf) goto L_125234a7;
  /* 12523421 mov esi, esp */
  ESI = (ESP);
  /* 12523423 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12523425 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252342bu);
  /* 1252342b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252342e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523430 call 0x12527390 */
  push32(0x12523435u); f_12527390();
  /* 12523435 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252343a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252343c jne 0x125234a7 */
  if (!C.zf) goto L_125234a7;
  /* 1252343e mov esi, esp */
  ESI = (ESP);
  /* 12523440 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523442 push 0x125544c8 */
  push32((uint32_t)(0x125544c8u));
  /* 12523447 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x1252344du);
  /* 1252344d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523452 call 0x12527390 */
  push32(0x12523457u); f_12527390();
  /* 12523457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523459 jne 0x125234a7 */
  if (!C.zf) goto L_125234a7;
  /* 1252345b mov esi, esp */
  ESI = (ESP);
  /* 1252345d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252345f push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12523461 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523467u);
  /* 12523467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252346a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252346c call 0x12527390 */
  push32(0x12523471u); f_12527390();
  /* 12523471 mov esi, esp */
  ESI = (ESP);
  /* 12523473 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523475 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 1252347a call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523480u);
  /* 12523480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523485 call 0x12527390 */
  push32(0x1252348au); f_12527390();
  /* 1252348a mov esi, esp */
  ESI = (ESP);
  /* 1252348c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252348e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12523490 push 0x125544e0 */
  push32((uint32_t)(0x125544e0u));
  /* 12523495 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523497 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x1252349du);
  /* 1252349d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125234a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125234a2 call 0x12527390 */
  push32(0x125234a7u); f_12527390();
L_125234a7:;
  /* 125234a7 mov esi, esp */
  ESI = (ESP);
  /* 125234a9 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 125234ab call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125234b1u);
  /* 125234b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125234b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125234b6 call 0x12527390 */
  push32(0x125234bbu); f_12527390();
  /* 125234bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125234c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125234c2 je 0x1252351a */
  if (C.zf) goto L_1252351a;
  /* 125234c4 mov esi, esp */
  ESI = (ESP);
  /* 125234c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125234c8 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 125234cd push 0x125544d8 */
  push32((uint32_t)(0x125544d8u));
  /* 125234d2 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x125234d8u);
  /* 125234d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125234db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125234dd call 0x12527390 */
  push32(0x125234e2u); f_12527390();
  /* 125234e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125234e4 jle 0x1252351a */
  if ((C.zf||C.sf!=C.of)) goto L_1252351a;
  /* 125234e6 mov esi, esp */
  ESI = (ESP);
  /* 125234e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125234ea push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125234ec call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125234f2u);
  /* 125234f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125234f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125234f7 call 0x12527390 */
  push32(0x125234fcu); f_12527390();
  /* 125234fc mov esi, esp */
  ESI = (ESP);
  /* 125234fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12523500 push 0x125544d8 */
  push32((uint32_t)(0x125544d8u));
  /* 12523505 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 1252350a call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523510u);
  /* 12523510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523515 call 0x12527390 */
  push32(0x1252351au); f_12527390();
L_1252351a:;
  /* 1252351a mov esi, esp */
  ESI = (ESP);
  /* 1252351c push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1252351e call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523524u);
  /* 12523524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523529 call 0x12527390 */
  push32(0x1252352eu); f_12527390();
  /* 1252352e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523535 je 0x125235c9 */
  if (C.zf) goto L_125235c9;
  /* 1252353b mov esi, esp */
  ESI = (ESP);
  /* 1252353d push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1252353f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523545u);
  /* 12523545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252354a call 0x12527390 */
  push32(0x1252354fu); f_12527390();
  /* 1252354f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523556 jne 0x125235c9 */
  if (!C.zf) goto L_125235c9;
  /* 12523558 mov esi, esp */
  ESI = (ESP);
  /* 1252355a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252355c push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12523561 push 0x125544d8 */
  push32((uint32_t)(0x125544d8u));
  /* 12523566 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x1252356cu);
  /* 1252356c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252356f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523571 call 0x12527390 */
  push32(0x12523576u); f_12527390();
  /* 12523576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523578 jne 0x125235c9 */
  if (!C.zf) goto L_125235c9;
  /* 1252357a mov esi, esp */
  ESI = (ESP);
  /* 1252357c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252357e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12523580 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523586u);
  /* 12523586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252358b call 0x12527390 */
  push32(0x12523590u); f_12527390();
  /* 12523590 mov esi, esp */
  ESI = (ESP);
  /* 12523592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523594 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12523599 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252359fu);
  /* 1252359f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125235a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125235a4 call 0x12527390 */
  push32(0x125235a9u); f_12527390();
  /* 125235a9 mov esi, esp */
  ESI = (ESP);
  /* 125235ab push 0 */
  push32((uint32_t)(0x0u));
  /* 125235ad push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 125235b2 push 0x12554488 */
  push32((uint32_t)(0x12554488u));
  /* 125235b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125235b9 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x125235bfu);
  /* 125235bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125235c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125235c4 call 0x12527390 */
  push32(0x125235c9u); f_12527390();
L_125235c9:;
  /* 125235c9 mov esi, esp */
  ESI = (ESP);
  /* 125235cb push 0x51 */
  push32((uint32_t)(0x51u));
  /* 125235cd call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125235d3u);
  /* 125235d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125235d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125235d8 call 0x12527390 */
  push32(0x125235ddu); f_12527390();
  /* 125235dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125235e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125235e4 je 0x1252366f */
  if (C.zf) goto L_1252366f;
  /* 125235ea mov esi, esp */
  ESI = (ESP);
  /* 125235ec push 0 */
  push32((uint32_t)(0x0u));
  /* 125235ee push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 125235f3 push 0x12554498 */
  push32((uint32_t)(0x12554498u));
  /* 125235f8 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x125235feu);
  /* 125235fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523603 call 0x12527390 */
  push32(0x12523608u); f_12527390();
  /* 12523608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252360a jle 0x1252366f */
  if ((C.zf||C.sf!=C.of)) goto L_1252366f;
  /* 1252360c mov esi, esp */
  ESI = (ESP);
  /* 1252360e push 0 */
  push32((uint32_t)(0x0u));
  /* 12523610 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12523612 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523618u);
  /* 12523618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252361b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252361d call 0x12527390 */
  push32(0x12523622u); f_12527390();
  /* 12523622 mov esi, esp */
  ESI = (ESP);
  /* 12523624 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523626 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 1252362b call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523631u);
  /* 12523631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523636 call 0x12527390 */
  push32(0x1252363bu); f_12527390();
  /* 1252363b mov esi, esp */
  ESI = (ESP);
  /* 1252363d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252363f push 1 */
  push32((uint32_t)(0x1u));
  /* 12523641 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523647u);
  /* 12523647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252364a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252364c call 0x12527390 */
  push32(0x12523651u); f_12527390();
  /* 12523651 mov esi, esp */
  ESI = (ESP);
  /* 12523653 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523655 push 0x12554498 */
  push32((uint32_t)(0x12554498u));
  /* 1252365a push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 1252365f call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523665u);
  /* 12523665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252366a call 0x12527390 */
  push32(0x1252366fu); f_12527390();
L_1252366f:;
  /* 1252366f mov esi, esp */
  ESI = (ESP);
  /* 12523671 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12523673 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523679u);
  /* 12523679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252367c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252367e call 0x12527390 */
  push32(0x12523683u); f_12527390();
  /* 12523683 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252368a je 0x1252371e */
  if (C.zf) goto L_1252371e;
  /* 12523690 mov esi, esp */
  ESI = (ESP);
  /* 12523692 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12523694 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252369au);
  /* 1252369a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252369d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252369f call 0x12527390 */
  push32(0x125236a4u); f_12527390();
  /* 125236a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125236a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125236ab jne 0x1252371e */
  if (!C.zf) goto L_1252371e;
  /* 125236ad mov esi, esp */
  ESI = (ESP);
  /* 125236af push 0 */
  push32((uint32_t)(0x0u));
  /* 125236b1 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 125236b6 push 0x12554498 */
  push32((uint32_t)(0x12554498u));
  /* 125236bb call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x125236c1u);
  /* 125236c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125236c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125236c6 call 0x12527390 */
  push32(0x125236cbu); f_12527390();
  /* 125236cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125236cd jne 0x1252371e */
  if (!C.zf) goto L_1252371e;
  /* 125236cf mov esi, esp */
  ESI = (ESP);
  /* 125236d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125236d3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125236d5 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125236dbu);
  /* 125236db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125236de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125236e0 call 0x12527390 */
  push32(0x125236e5u); f_12527390();
  /* 125236e5 mov esi, esp */
  ESI = (ESP);
  /* 125236e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125236e9 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 125236ee call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125236f4u);
  /* 125236f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125236f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125236f9 call 0x12527390 */
  push32(0x125236feu); f_12527390();
  /* 125236fe mov esi, esp */
  ESI = (ESP);
  /* 12523700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523702 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12523707 push 0x12554488 */
  push32((uint32_t)(0x12554488u));
  /* 1252370c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252370e call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12523714u);
  /* 12523714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523719 call 0x12527390 */
  push32(0x1252371eu); f_12527390();
L_1252371e:;
  /* 1252371e mov esi, esp */
  ESI = (ESP);
  /* 12523720 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12523722 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523728u);
  /* 12523728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252372b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252372d call 0x12527390 */
  push32(0x12523732u); f_12527390();
  /* 12523732 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523739 je 0x12523791 */
  if (C.zf) goto L_12523791;
  /* 1252373b mov esi, esp */
  ESI = (ESP);
  /* 1252373d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252373f push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12523744 push 0x125544c0 */
  push32((uint32_t)(0x125544c0u));
  /* 12523749 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x1252374fu);
  /* 1252374f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523754 call 0x12527390 */
  push32(0x12523759u); f_12527390();
  /* 12523759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252375b jle 0x12523791 */
  if ((C.zf||C.sf!=C.of)) goto L_12523791;
  /* 1252375d mov esi, esp */
  ESI = (ESP);
  /* 1252375f push 0 */
  push32((uint32_t)(0x0u));
  /* 12523761 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12523763 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523769u);
  /* 12523769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252376c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252376e call 0x12527390 */
  push32(0x12523773u); f_12527390();
  /* 12523773 mov esi, esp */
  ESI = (ESP);
  /* 12523775 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523777 push 0x125544c0 */
  push32((uint32_t)(0x125544c0u));
  /* 1252377c push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12523781 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523787u);
  /* 12523787 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252378a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252378c call 0x12527390 */
  push32(0x12523791u); f_12527390();
L_12523791:;
  /* 12523791 mov esi, esp */
  ESI = (ESP);
  /* 12523793 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12523795 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252379bu);
  /* 1252379b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252379e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125237a0 call 0x12527390 */
  push32(0x125237a5u); f_12527390();
  /* 125237a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125237aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125237ac je 0x1252383d */
  if (C.zf) goto L_1252383d;
  /* 125237b2 mov esi, esp */
  ESI = (ESP);
  /* 125237b4 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125237b6 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125237bcu);
  /* 125237bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125237bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125237c1 call 0x12527390 */
  push32(0x125237c6u); f_12527390();
  /* 125237c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125237cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125237cd jne 0x1252383d */
  if (!C.zf) goto L_1252383d;
  /* 125237cf mov esi, esp */
  ESI = (ESP);
  /* 125237d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125237d3 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 125237d8 push 0x125544c0 */
  push32((uint32_t)(0x125544c0u));
  /* 125237dd call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x125237e3u);
  /* 125237e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125237e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125237e8 call 0x12527390 */
  push32(0x125237edu); f_12527390();
  /* 125237ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125237ef jne 0x1252383d */
  if (!C.zf) goto L_1252383d;
  /* 125237f1 mov esi, esp */
  ESI = (ESP);
  /* 125237f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125237f5 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125237f7 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125237fdu);
  /* 125237fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523802 call 0x12527390 */
  push32(0x12523807u); f_12527390();
  /* 12523807 mov esi, esp */
  ESI = (ESP);
  /* 12523809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252380b push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12523810 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523816u);
  /* 12523816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252381b call 0x12527390 */
  push32(0x12523820u); f_12527390();
  /* 12523820 mov esi, esp */
  ESI = (ESP);
  /* 12523822 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523824 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12523826 push 0x12554478 */
  push32((uint32_t)(0x12554478u));
  /* 1252382b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252382d call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12523833u);
  /* 12523833 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523838 call 0x12527390 */
  push32(0x1252383du); f_12527390();
L_1252383d:;
  /* 1252383d mov esi, esp */
  ESI = (ESP);
  /* 1252383f push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12523841 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523847u);
  /* 12523847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252384a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252384c call 0x12527390 */
  push32(0x12523851u); f_12527390();
  /* 12523851 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523858 je 0x125238b0 */
  if (C.zf) goto L_125238b0;
  /* 1252385a mov esi, esp */
  ESI = (ESP);
  /* 1252385c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252385e push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12523863 push 0x125544a8 */
  push32((uint32_t)(0x125544a8u));
  /* 12523868 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x1252386eu);
  /* 1252386e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523871 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523873 call 0x12527390 */
  push32(0x12523878u); f_12527390();
  /* 12523878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252387a jle 0x125238b0 */
  if ((C.zf||C.sf!=C.of)) goto L_125238b0;
  /* 1252387c mov esi, esp */
  ESI = (ESP);
  /* 1252387e push 0 */
  push32((uint32_t)(0x0u));
  /* 12523880 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12523882 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523888u);
  /* 12523888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252388b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252388d call 0x12527390 */
  push32(0x12523892u); f_12527390();
  /* 12523892 mov esi, esp */
  ESI = (ESP);
  /* 12523894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523896 push 0x125544a8 */
  push32((uint32_t)(0x125544a8u));
  /* 1252389b push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 125238a0 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x125238a6u);
  /* 125238a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125238a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125238ab call 0x12527390 */
  push32(0x125238b0u); f_12527390();
L_125238b0:;
  /* 125238b0 mov esi, esp */
  ESI = (ESP);
  /* 125238b2 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125238b4 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125238bau);
  /* 125238ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125238bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125238bf call 0x12527390 */
  push32(0x125238c4u); f_12527390();
  /* 125238c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125238c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125238cb je 0x1252395c */
  if (C.zf) goto L_1252395c;
  /* 125238d1 mov esi, esp */
  ESI = (ESP);
  /* 125238d3 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125238d5 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125238dbu);
  /* 125238db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125238de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125238e0 call 0x12527390 */
  push32(0x125238e5u); f_12527390();
  /* 125238e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125238ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125238ec jne 0x1252395c */
  if (!C.zf) goto L_1252395c;
  /* 125238ee mov esi, esp */
  ESI = (ESP);
  /* 125238f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125238f2 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 125238f7 push 0x125544a8 */
  push32((uint32_t)(0x125544a8u));
  /* 125238fc call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x12523902u);
  /* 12523902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523907 call 0x12527390 */
  push32(0x1252390cu); f_12527390();
  /* 1252390c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252390e jne 0x1252395c */
  if (!C.zf) goto L_1252395c;
  /* 12523910 mov esi, esp */
  ESI = (ESP);
  /* 12523912 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523914 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12523916 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252391cu);
  /* 1252391c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252391f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523921 call 0x12527390 */
  push32(0x12523926u); f_12527390();
  /* 12523926 mov esi, esp */
  ESI = (ESP);
  /* 12523928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252392a push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 1252392f call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523935u);
  /* 12523935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252393a call 0x12527390 */
  push32(0x1252393fu); f_12527390();
  /* 1252393f mov esi, esp */
  ESI = (ESP);
  /* 12523941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12523945 push 0x12554478 */
  push32((uint32_t)(0x12554478u));
  /* 1252394a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252394c call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12523952u);
  /* 12523952 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523957 call 0x12527390 */
  push32(0x1252395cu); f_12527390();
L_1252395c:;
  /* 1252395c mov esi, esp */
  ESI = (ESP);
  /* 1252395e push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12523960 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523966u);
  /* 12523966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252396b call 0x12527390 */
  push32(0x12523970u); f_12527390();
  /* 12523970 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523977 je 0x125239cf */
  if (C.zf) goto L_125239cf;
  /* 12523979 mov esi, esp */
  ESI = (ESP);
  /* 1252397b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252397d push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12523982 push 0x125544f0 */
  push32((uint32_t)(0x125544f0u));
  /* 12523987 call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x1252398du);
  /* 1252398d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523992 call 0x12527390 */
  push32(0x12523997u); f_12527390();
  /* 12523997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523999 jle 0x125239cf */
  if ((C.zf||C.sf!=C.of)) goto L_125239cf;
  /* 1252399b mov esi, esp */
  ESI = (ESP);
  /* 1252399d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252399f push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125239a1 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125239a7u);
  /* 125239a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125239aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125239ac call 0x12527390 */
  push32(0x125239b1u); f_12527390();
  /* 125239b1 mov esi, esp */
  ESI = (ESP);
  /* 125239b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125239b5 push 0x125544f0 */
  push32((uint32_t)(0x125544f0u));
  /* 125239ba push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 125239bf call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x125239c5u);
  /* 125239c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125239c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125239ca call 0x12527390 */
  push32(0x125239cfu); f_12527390();
L_125239cf:;
  /* 125239cf mov esi, esp */
  ESI = (ESP);
  /* 125239d1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125239d3 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125239d9u);
  /* 125239d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125239dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125239de call 0x12527390 */
  push32(0x125239e3u); f_12527390();
  /* 125239e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125239e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125239ea je 0x12523a7e */
  if (C.zf) goto L_12523a7e;
  /* 125239f0 mov esi, esp */
  ESI = (ESP);
  /* 125239f2 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125239f4 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125239fau);
  /* 125239fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125239fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125239ff call 0x12527390 */
  push32(0x12523a04u); f_12527390();
  /* 12523a04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523a0b jne 0x12523a7e */
  if (!C.zf) goto L_12523a7e;
  /* 12523a0d mov esi, esp */
  ESI = (ESP);
  /* 12523a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12523a11 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12523a16 push 0x125544f0 */
  push32((uint32_t)(0x125544f0u));
  /* 12523a1b call dword ptr [0x125574bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574bc))), 0x12523a21u);
  /* 12523a21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523a24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523a26 call 0x12527390 */
  push32(0x12523a2bu); f_12527390();
  /* 12523a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523a2d jne 0x12523a7e */
  if (!C.zf) goto L_12523a7e;
  /* 12523a2f mov esi, esp */
  ESI = (ESP);
  /* 12523a31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523a33 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12523a35 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523a3bu);
  /* 12523a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523a40 call 0x12527390 */
  push32(0x12523a45u); f_12527390();
  /* 12523a45 mov esi, esp */
  ESI = (ESP);
  /* 12523a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523a49 push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 12523a4e call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523a54u);
  /* 12523a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523a57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523a59 call 0x12527390 */
  push32(0x12523a5eu); f_12527390();
  /* 12523a5e mov esi, esp */
  ESI = (ESP);
  /* 12523a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523a62 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12523a67 push 0x125544f8 */
  push32((uint32_t)(0x125544f8u));
  /* 12523a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12523a6e call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12523a74u);
  /* 12523a74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523a79 call 0x12527390 */
  push32(0x12523a7eu); f_12527390();
L_12523a7e:;
  /* 12523a7e mov esi, esp */
  ESI = (ESP);
  /* 12523a80 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12523a82 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523a88u);
  /* 12523a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523a8d call 0x12527390 */
  push32(0x12523a92u); f_12527390();
  /* 12523a92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523a97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523a99 je 0x12523b6c */
  if (C.zf) goto L_12523b6c;
  /* 12523a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12523aa1 push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12523aa6 call 0x1252100f */
  push32(0x12523aabu); f_1252100f();
  /* 12523aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523ab0 jle 0x12523b6c */
  if ((C.zf||C.sf!=C.of)) goto L_12523b6c;
  /* 12523ab6 mov esi, esp */
  ESI = (ESP);
  /* 12523ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523aba push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12523abc call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523ac2u);
  /* 12523ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523ac7 call 0x12527390 */
  push32(0x12523accu); f_12527390();
  /* 12523acc mov esi, esp */
  ESI = (ESP);
  /* 12523ace push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 12523ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523ad5 push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12523ada push 0x12554550 */
  push32((uint32_t)(0x12554550u));
  /* 12523adf push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12523ae4 call dword ptr [0x125574c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574c0))), 0x12523aeau);
  /* 12523aea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523aef call 0x12527390 */
  push32(0x12523af4u); f_12527390();
  /* 12523af4 mov esi, esp */
  ESI = (ESP);
  /* 12523af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523af8 push 0x12554830 */
  push32((uint32_t)(0x12554830u));
  /* 12523afd call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523b03u);
  /* 12523b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b08 call 0x12527390 */
  push32(0x12523b0du); f_12527390();
  /* 12523b0d mov esi, esp */
  ESI = (ESP);
  /* 12523b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12523b11 push 0x12554838 */
  push32((uint32_t)(0x12554838u));
  /* 12523b16 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523b1cu);
  /* 12523b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b21 call 0x12527390 */
  push32(0x12523b26u); f_12527390();
  /* 12523b26 mov esi, esp */
  ESI = (ESP);
  /* 12523b28 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523b2a call dword ptr [0x125574a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a0))), 0x12523b30u);
  /* 12523b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b35 call 0x12527390 */
  push32(0x12523b3au); f_12527390();
  /* 12523b3a mov esi, esp */
  ESI = (ESP);
  /* 12523b3c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 12523b41 push 3 */
  push32((uint32_t)(0x3u));
  /* 12523b43 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523b49u);
  /* 12523b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b4e call 0x12527390 */
  push32(0x12523b53u); f_12527390();
  /* 12523b53 mov esi, esp */
  ESI = (ESP);
  /* 12523b55 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12523b5a push 7 */
  push32((uint32_t)(0x7u));
  /* 12523b5c call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523b62u);
  /* 12523b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b67 call 0x12527390 */
  push32(0x12523b6cu); f_12527390();
L_12523b6c:;
  /* 12523b6c mov esi, esp */
  ESI = (ESP);
  /* 12523b6e push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12523b70 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523b76u);
  /* 12523b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b7b call 0x12527390 */
  push32(0x12523b80u); f_12527390();
  /* 12523b80 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523b87 je 0x12523c08 */
  if (C.zf) goto L_12523c08;
  /* 12523b89 mov esi, esp */
  ESI = (ESP);
  /* 12523b8b push 7 */
  push32((uint32_t)(0x7u));
  /* 12523b8d call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523b93u);
  /* 12523b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523b98 call 0x12527390 */
  push32(0x12523b9du); f_12527390();
  /* 12523b9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523ba2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523ba4 je 0x12523c08 */
  if (C.zf) goto L_12523c08;
  /* 12523ba6 mov esi, esp */
  ESI = (ESP);
  /* 12523ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523baa push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12523bac call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523bb2u);
  /* 12523bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523bb7 call 0x12527390 */
  push32(0x12523bbcu); f_12527390();
  /* 12523bbc mov esi, esp */
  ESI = (ESP);
  /* 12523bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12523bc0 push 0x12554438 */
  push32((uint32_t)(0x12554438u));
  /* 12523bc5 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523bcbu);
  /* 12523bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523bce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523bd0 call 0x12527390 */
  push32(0x12523bd5u); f_12527390();
  /* 12523bd5 mov esi, esp */
  ESI = (ESP);
  /* 12523bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523bd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523bdb call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523be1u);
  /* 12523be1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523be6 call 0x12527390 */
  push32(0x12523bebu); f_12527390();
  /* 12523beb mov esi, esp */
  ESI = (ESP);
  /* 12523bed push 0 */
  push32((uint32_t)(0x0u));
  /* 12523bef push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12523bf1 push 0x12554550 */
  push32((uint32_t)(0x12554550u));
  /* 12523bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523bf8 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12523bfeu);
  /* 12523bfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c03 call 0x12527390 */
  push32(0x12523c08u); f_12527390();
L_12523c08:;
  /* 12523c08 mov esi, esp */
  ESI = (ESP);
  /* 12523c0a push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12523c0c call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523c12u);
  /* 12523c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c17 call 0x12527390 */
  push32(0x12523c1cu); f_12527390();
  /* 12523c1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523c23 je 0x12523cc1 */
  if (C.zf) goto L_12523cc1;
  /* 12523c29 mov esi, esp */
  ESI = (ESP);
  /* 12523c2b push 3 */
  push32((uint32_t)(0x3u));
  /* 12523c2d call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523c33u);
  /* 12523c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c38 call 0x12527390 */
  push32(0x12523c3du); f_12527390();
  /* 12523c3d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523c44 je 0x12523cc1 */
  if (C.zf) goto L_12523cc1;
  /* 12523c46 mov esi, esp */
  ESI = (ESP);
  /* 12523c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523c4a push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12523c4c call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523c52u);
  /* 12523c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c57 call 0x12527390 */
  push32(0x12523c5cu); f_12527390();
  /* 12523c5c mov esi, esp */
  ESI = (ESP);
  /* 12523c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12523c60 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 12523c65 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523c6bu);
  /* 12523c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c70 call 0x12527390 */
  push32(0x12523c75u); f_12527390();
  /* 12523c75 mov esi, esp */
  ESI = (ESP);
  /* 12523c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523c79 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523c7b call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523c81u);
  /* 12523c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523c86 call 0x12527390 */
  push32(0x12523c8bu); f_12527390();
  /* 12523c8b mov esi, esp */
  ESI = (ESP);
  /* 12523c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12523c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12523c91 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523c98 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12523c9eu);
  /* 12523c9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523ca1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523ca3 call 0x12527390 */
  push32(0x12523ca8u); f_12527390();
  /* 12523ca8 mov esi, esp */
  ESI = (ESP);
  /* 12523caa push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12523caf push 4 */
  push32((uint32_t)(0x4u));
  /* 12523cb1 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523cb7u);
  /* 12523cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523cba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523cbc call 0x12527390 */
  push32(0x12523cc1u); f_12527390();
L_12523cc1:;
  /* 12523cc1 mov esi, esp */
  ESI = (ESP);
  /* 12523cc3 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12523cc5 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523ccbu);
  /* 12523ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523cd0 call 0x12527390 */
  push32(0x12523cd5u); f_12527390();
  /* 12523cd5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523cdc je 0x12523d1c */
  if (C.zf) goto L_12523d1c;
  /* 12523cde mov esi, esp */
  ESI = (ESP);
  /* 12523ce0 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 12523ce5 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523cea call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x12523cf0u);
  /* 12523cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523cf5 call 0x12527390 */
  push32(0x12523cfau); f_12527390();
  /* 12523cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523cfc jle 0x12523d1c */
  if ((C.zf||C.sf!=C.of)) goto L_12523d1c;
  /* 12523cfe mov esi, esp */
  ESI = (ESP);
  /* 12523d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523d02 push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12523d07 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 12523d0c call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523d12u);
  /* 12523d12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d17 call 0x12527390 */
  push32(0x12523d1cu); f_12527390();
L_12523d1c:;
  /* 12523d1c mov esi, esp */
  ESI = (ESP);
  /* 12523d1e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12523d20 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523d26u);
  /* 12523d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d2b call 0x12527390 */
  push32(0x12523d30u); f_12527390();
  /* 12523d30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523d37 je 0x12523dd5 */
  if (C.zf) goto L_12523dd5;
  /* 12523d3d mov esi, esp */
  ESI = (ESP);
  /* 12523d3f push 4 */
  push32((uint32_t)(0x4u));
  /* 12523d41 call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523d47u);
  /* 12523d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d4c call 0x12527390 */
  push32(0x12523d51u); f_12527390();
  /* 12523d51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523d58 je 0x12523dd5 */
  if (C.zf) goto L_12523dd5;
  /* 12523d5a mov esi, esp */
  ESI = (ESP);
  /* 12523d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12523d5e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12523d60 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523d66u);
  /* 12523d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d6b call 0x12527390 */
  push32(0x12523d70u); f_12527390();
  /* 12523d70 mov esi, esp */
  ESI = (ESP);
  /* 12523d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523d74 push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 12523d79 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523d7fu);
  /* 12523d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d84 call 0x12527390 */
  push32(0x12523d89u); f_12527390();
  /* 12523d89 mov esi, esp */
  ESI = (ESP);
  /* 12523d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12523d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12523d8f call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523d95u);
  /* 12523d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523d9a call 0x12527390 */
  push32(0x12523d9fu); f_12527390();
  /* 12523d9f mov esi, esp */
  ESI = (ESP);
  /* 12523da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523da5 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523daa push 1 */
  push32((uint32_t)(0x1u));
  /* 12523dac call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12523db2u);
  /* 12523db2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523db7 call 0x12527390 */
  push32(0x12523dbcu); f_12527390();
  /* 12523dbc mov esi, esp */
  ESI = (ESP);
  /* 12523dbe push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12523dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 12523dc5 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523dcbu);
  /* 12523dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523dce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523dd0 call 0x12527390 */
  push32(0x12523dd5u); f_12527390();
L_12523dd5:;
  /* 12523dd5 mov esi, esp */
  ESI = (ESP);
  /* 12523dd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12523dd9 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523ddfu);
  /* 12523ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523de2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523de4 call 0x12527390 */
  push32(0x12523de9u); f_12527390();
  /* 12523de9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523df0 je 0x12523e30 */
  if (C.zf) goto L_12523e30;
  /* 12523df2 mov esi, esp */
  ESI = (ESP);
  /* 12523df4 push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 12523df9 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523dfe call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x12523e04u);
  /* 12523e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e09 call 0x12527390 */
  push32(0x12523e0eu); f_12527390();
  /* 12523e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523e10 jle 0x12523e30 */
  if ((C.zf||C.sf!=C.of)) goto L_12523e30;
  /* 12523e12 mov esi, esp */
  ESI = (ESP);
  /* 12523e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523e16 push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12523e1b push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 12523e20 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523e26u);
  /* 12523e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e2b call 0x12527390 */
  push32(0x12523e30u); f_12527390();
L_12523e30:;
  /* 12523e30 mov esi, esp */
  ESI = (ESP);
  /* 12523e32 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12523e34 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523e3au);
  /* 12523e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e3f call 0x12527390 */
  push32(0x12523e44u); f_12527390();
  /* 12523e44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523e4b je 0x12523ee9 */
  if (C.zf) goto L_12523ee9;
  /* 12523e51 mov esi, esp */
  ESI = (ESP);
  /* 12523e53 push 5 */
  push32((uint32_t)(0x5u));
  /* 12523e55 call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523e5bu);
  /* 12523e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e60 call 0x12527390 */
  push32(0x12523e65u); f_12527390();
  /* 12523e65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523e6c je 0x12523ee9 */
  if (C.zf) goto L_12523ee9;
  /* 12523e6e mov esi, esp */
  ESI = (ESP);
  /* 12523e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523e72 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12523e74 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523e7au);
  /* 12523e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e7f call 0x12527390 */
  push32(0x12523e84u); f_12527390();
  /* 12523e84 mov esi, esp */
  ESI = (ESP);
  /* 12523e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523e88 push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12523e8d call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523e93u);
  /* 12523e93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523e98 call 0x12527390 */
  push32(0x12523e9du); f_12527390();
  /* 12523e9d mov esi, esp */
  ESI = (ESP);
  /* 12523e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12523ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523ea3 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523ea9u);
  /* 12523ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523eae call 0x12527390 */
  push32(0x12523eb3u); f_12527390();
  /* 12523eb3 mov esi, esp */
  ESI = (ESP);
  /* 12523eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523eb9 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523ebe push 1 */
  push32((uint32_t)(0x1u));
  /* 12523ec0 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12523ec6u);
  /* 12523ec6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523ecb call 0x12527390 */
  push32(0x12523ed0u); f_12527390();
  /* 12523ed0 mov esi, esp */
  ESI = (ESP);
  /* 12523ed2 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12523ed7 push 6 */
  push32((uint32_t)(0x6u));
  /* 12523ed9 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12523edfu);
  /* 12523edf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523ee4 call 0x12527390 */
  push32(0x12523ee9u); f_12527390();
L_12523ee9:;
  /* 12523ee9 mov esi, esp */
  ESI = (ESP);
  /* 12523eeb push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12523eed call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523ef3u);
  /* 12523ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523ef8 call 0x12527390 */
  push32(0x12523efdu); f_12527390();
  /* 12523efd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523f04 je 0x12523f44 */
  if (C.zf) goto L_12523f44;
  /* 12523f06 mov esi, esp */
  ESI = (ESP);
  /* 12523f08 push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12523f0d push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523f12 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x12523f18u);
  /* 12523f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523f1d call 0x12527390 */
  push32(0x12523f22u); f_12527390();
  /* 12523f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523f24 jle 0x12523f44 */
  if ((C.zf||C.sf!=C.of)) goto L_12523f44;
  /* 12523f26 mov esi, esp */
  ESI = (ESP);
  /* 12523f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523f2a push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12523f2f push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12523f34 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12523f3au);
  /* 12523f3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523f3f call 0x12527390 */
  push32(0x12523f44u); f_12527390();
L_12523f44:;
  /* 12523f44 mov esi, esp */
  ESI = (ESP);
  /* 12523f46 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12523f48 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523f4eu);
  /* 12523f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523f53 call 0x12527390 */
  push32(0x12523f58u); f_12527390();
  /* 12523f58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523f5f je 0x12523fe0 */
  if (C.zf) goto L_12523fe0;
  /* 12523f61 mov esi, esp */
  ESI = (ESP);
  /* 12523f63 push 6 */
  push32((uint32_t)(0x6u));
  /* 12523f65 call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12523f6bu);
  /* 12523f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523f70 call 0x12527390 */
  push32(0x12523f75u); f_12527390();
  /* 12523f75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523f7c je 0x12523fe0 */
  if (C.zf) goto L_12523fe0;
  /* 12523f7e mov esi, esp */
  ESI = (ESP);
  /* 12523f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523f82 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12523f84 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12523f8au);
  /* 12523f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523f8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523f8f call 0x12527390 */
  push32(0x12523f94u); f_12527390();
  /* 12523f94 mov esi, esp */
  ESI = (ESP);
  /* 12523f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523f98 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12523f9d call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12523fa3u);
  /* 12523fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523fa8 call 0x12527390 */
  push32(0x12523fadu); f_12527390();
  /* 12523fad mov esi, esp */
  ESI = (ESP);
  /* 12523faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12523fb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12523fb3 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12523fb9u);
  /* 12523fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523fbe call 0x12527390 */
  push32(0x12523fc3u); f_12527390();
  /* 12523fc3 mov esi, esp */
  ESI = (ESP);
  /* 12523fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12523fc9 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12523fce push 1 */
  push32((uint32_t)(0x1u));
  /* 12523fd0 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12523fd6u);
  /* 12523fd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523fd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523fdb call 0x12527390 */
  push32(0x12523fe0u); f_12527390();
L_12523fe0:;
  /* 12523fe0 mov esi, esp */
  ESI = (ESP);
  /* 12523fe2 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 12523fe4 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12523feau);
  /* 12523fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12523fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12523fef call 0x12527390 */
  push32(0x12523ff4u); f_12527390();
  /* 12523ff4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12523ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12523ffb je 0x1252403b */
  if (C.zf) goto L_1252403b;
  /* 12523ffd mov esi, esp */
  ESI = (ESP);
  /* 12523fff push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12524004 push 0x12554568 */
  push32((uint32_t)(0x12554568u));
  /* 12524009 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x1252400fu);
  /* 1252400f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524014 call 0x12527390 */
  push32(0x12524019u); f_12527390();
  /* 12524019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252401b jle 0x1252403b */
  if ((C.zf||C.sf!=C.of)) goto L_1252403b;
  /* 1252401d mov esi, esp */
  ESI = (ESP);
  /* 1252401f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524021 push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12524026 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 1252402b call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12524031u);
  /* 12524031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524036 call 0x12527390 */
  push32(0x1252403bu); f_12527390();
L_1252403b:;
  /* 1252403b mov esi, esp */
  ESI = (ESP);
  /* 1252403d push 0x26 */
  push32((uint32_t)(0x26u));
  /* 1252403f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524045u);
  /* 12524045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524048 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252404a call 0x12527390 */
  push32(0x1252404fu); f_12527390();
  /* 1252404f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524056 je 0x125241a7 */
  if (C.zf) goto L_125241a7;
  /* 1252405c mov esi, esp */
  ESI = (ESP);
  /* 1252405e push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12524060 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524066u);
  /* 12524066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524069 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252406b call 0x12527390 */
  push32(0x12524070u); f_12527390();
  /* 12524070 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524077 jne 0x125241a7 */
  if (!C.zf) goto L_125241a7;
  /* 1252407d mov esi, esp */
  ESI = (ESP);
  /* 1252407f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524081 push 0x12554550 */
  push32((uint32_t)(0x12554550u));
  /* 12524086 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x1252408cu);
  /* 1252408c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252408f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524091 call 0x12527390 */
  push32(0x12524096u); f_12527390();
  /* 12524096 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524099 jg 0x125241a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_125241a7;
  /* 1252409f mov esi, esp */
  ESI = (ESP);
  /* 125240a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125240a3 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125240a5 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125240abu);
  /* 125240ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125240ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125240b0 call 0x12527390 */
  push32(0x125240b5u); f_12527390();
  /* 125240b5 mov esi, esp */
  ESI = (ESP);
  /* 125240b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125240b9 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125240bb call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125240c1u);
  /* 125240c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125240c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125240c6 call 0x12527390 */
  push32(0x125240cbu); f_12527390();
  /* 125240cb mov esi, esp */
  ESI = (ESP);
  /* 125240cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125240cf push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125240d1 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125240d7u);
  /* 125240d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125240da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125240dc call 0x12527390 */
  push32(0x125240e1u); f_12527390();
  /* 125240e1 mov esi, esp */
  ESI = (ESP);
  /* 125240e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125240e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 125240e7 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125240edu);
  /* 125240ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125240f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125240f2 call 0x12527390 */
  push32(0x125240f7u); f_12527390();
  /* 125240f7 mov esi, esp */
  ESI = (ESP);
  /* 125240f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125240fb push 0x27 */
  push32((uint32_t)(0x27u));
  /* 125240fd call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524103u);
  /* 12524103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524108 call 0x12527390 */
  push32(0x1252410du); f_12527390();
  /* 1252410d mov esi, esp */
  ESI = (ESP);
  /* 1252410f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524111 push 0x12554690 */
  push32((uint32_t)(0x12554690u));
  /* 12524116 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252411cu);
  /* 1252411c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252411f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524121 call 0x12527390 */
  push32(0x12524126u); f_12527390();
  /* 12524126 mov esi, esp */
  ESI = (ESP);
  /* 12524128 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252412a push 0x12554450 */
  push32((uint32_t)(0x12554450u));
  /* 1252412f call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524135u);
  /* 12524135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524138 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252413a call 0x12527390 */
  push32(0x1252413fu); f_12527390();
  /* 1252413f mov esi, esp */
  ESI = (ESP);
  /* 12524141 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524143 push 0x12554730 */
  push32((uint32_t)(0x12554730u));
  /* 12524148 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252414eu);
  /* 1252414e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524153 call 0x12527390 */
  push32(0x12524158u); f_12527390();
  /* 12524158 mov esi, esp */
  ESI = (ESP);
  /* 1252415a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252415c push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12524161 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524167u);
  /* 12524167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252416a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252416c call 0x12527390 */
  push32(0x12524171u); f_12527390();
  /* 12524171 mov esi, esp */
  ESI = (ESP);
  /* 12524173 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524175 push 0x12554438 */
  push32((uint32_t)(0x12554438u));
  /* 1252417a call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524180u);
  /* 12524180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524183 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524185 call 0x12527390 */
  push32(0x1252418au); f_12527390();
  /* 1252418a mov esi, esp */
  ESI = (ESP);
  /* 1252418c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252418e push 0 */
  push32((uint32_t)(0x0u));
  /* 12524190 push 0x12554410 */
  push32((uint32_t)(0x12554410u));
  /* 12524195 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524197 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x1252419du);
  /* 1252419d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125241a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125241a2 call 0x12527390 */
  push32(0x125241a7u); f_12527390();
L_125241a7:;
  /* 125241a7 mov esi, esp */
  ESI = (ESP);
  /* 125241a9 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125241ab call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125241b1u);
  /* 125241b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125241b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125241b6 call 0x12527390 */
  push32(0x125241bbu); f_12527390();
  /* 125241bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125241c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125241c2 je 0x12524305 */
  if (C.zf) goto L_12524305;
  /* 125241c8 mov esi, esp */
  ESI = (ESP);
  /* 125241ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125241cc push 0x12554530 */
  push32((uint32_t)(0x12554530u));
  /* 125241d1 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125241d7u);
  /* 125241d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125241da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125241dc call 0x12527390 */
  push32(0x125241e1u); f_12527390();
  /* 125241e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125241e3 jle 0x12524305 */
  if ((C.zf||C.sf!=C.of)) goto L_12524305;
  /* 125241e9 mov esi, esp */
  ESI = (ESP);
  /* 125241eb push 0 */
  push32((uint32_t)(0x0u));
  /* 125241ed push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125241ef call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125241f5u);
  /* 125241f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125241f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125241fa call 0x12527390 */
  push32(0x125241ffu); f_12527390();
  /* 125241ff mov esi, esp */
  ESI = (ESP);
  /* 12524201 push 0x1254f694 */
  push32((uint32_t)(0x1254f694u));
  /* 12524206 call dword ptr [0x125574c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574c8))), 0x1252420cu);
  /* 1252420c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252420f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524211 call 0x12527390 */
  push32(0x12524216u); f_12527390();
  /* 12524216 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252421b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252421d je 0x125242b8 */
  if (C.zf) goto L_125242b8;
  /* 12524223 mov esi, esp */
  ESI = (ESP);
  /* 12524225 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12524227 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252422b call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12524231u);
  /* 12524231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524236 call 0x12527390 */
  push32(0x1252423bu); f_12527390();
  /* 1252423b mov esi, esp */
  ESI = (ESP);
  /* 1252423d push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12524242 push 4 */
  push32((uint32_t)(0x4u));
  /* 12524244 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524246 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252424cu);
  /* 1252424c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252424f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524251 call 0x12527390 */
  push32(0x12524256u); f_12527390();
  /* 12524256 mov esi, esp */
  ESI = (ESP);
  /* 12524258 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 1252425d push 5 */
  push32((uint32_t)(0x5u));
  /* 1252425f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524261 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12524267u);
  /* 12524267 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252426a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252426c call 0x12527390 */
  push32(0x12524271u); f_12527390();
  /* 12524271 mov esi, esp */
  ESI = (ESP);
  /* 12524273 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524275 push 0x12554768 */
  push32((uint32_t)(0x12554768u));
  /* 1252427a call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524280u);
  /* 12524280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524285 call 0x12527390 */
  push32(0x1252428au); f_12527390();
  /* 1252428a mov esi, esp */
  ESI = (ESP);
  /* 1252428c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252428e push 6 */
  push32((uint32_t)(0x6u));
  /* 12524290 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12524296u);
  /* 12524296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252429b call 0x12527390 */
  push32(0x125242a0u); f_12527390();
  /* 125242a0 mov esi, esp */
  ESI = (ESP);
  /* 125242a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125242a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125242a6 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x125242acu);
  /* 125242ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125242af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125242b1 call 0x12527390 */
  push32(0x125242b6u); f_12527390();
  /* 125242b6 jmp 0x12524305 */
  goto L_12524305;
L_125242b8:;
  /* 125242b8 mov esi, esp */
  ESI = (ESP);
  /* 125242ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125242bc push 0x12554768 */
  push32((uint32_t)(0x12554768u));
  /* 125242c1 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125242c7u);
  /* 125242c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125242ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125242cc call 0x12527390 */
  push32(0x125242d1u); f_12527390();
  /* 125242d1 mov esi, esp */
  ESI = (ESP);
  /* 125242d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125242d5 push 6 */
  push32((uint32_t)(0x6u));
  /* 125242d7 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x125242ddu);
  /* 125242dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125242e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125242e2 call 0x12527390 */
  push32(0x125242e7u); f_12527390();
  /* 125242e7 mov esi, esp */
  ESI = (ESP);
  /* 125242e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125242eb push 0x12554530 */
  push32((uint32_t)(0x12554530u));
  /* 125242f0 push 0x12554768 */
  push32((uint32_t)(0x12554768u));
  /* 125242f5 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x125242fbu);
  /* 125242fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125242fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524300 call 0x12527390 */
  push32(0x12524305u); f_12527390();
L_12524305:;
  /* 12524305 mov esi, esp */
  ESI = (ESP);
  /* 12524307 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12524309 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252430fu);
  /* 1252430f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524312 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524314 call 0x12527390 */
  push32(0x12524319u); f_12527390();
  /* 12524319 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252431e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524320 je 0x125243b5 */
  if (C.zf) goto L_125243b5;
  /* 12524326 push 0x12554768 */
  push32((uint32_t)(0x12554768u));
  /* 1252432b call 0x12521005 */
  push32(0x12524330u); f_12521005();
  /* 12524330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524335 jne 0x125243b5 */
  if (!C.zf) goto L_125243b5;
  /* 12524337 mov esi, esp */
  ESI = (ESP);
  /* 12524339 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252433b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1252433d call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524343u);
  /* 12524343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524346 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524348 call 0x12527390 */
  push32(0x1252434du); f_12527390();
  /* 1252434d mov esi, esp */
  ESI = (ESP);
  /* 1252434f push 0x1254f68c */
  push32((uint32_t)(0x1254f68cu));
  /* 12524354 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x1252435au);
  /* 1252435a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252435d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252435f call 0x12527390 */
  push32(0x12524364u); f_12527390();
  /* 12524364 mov esi, esp */
  ESI = (ESP);
  /* 12524366 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1252436b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252436d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252436f call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x12524375u);
  /* 12524375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252437a call 0x12527390 */
  push32(0x1252437fu); f_12527390();
  /* 1252437f mov esi, esp */
  ESI = (ESP);
  /* 12524381 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12524386 push 4 */
  push32((uint32_t)(0x4u));
  /* 12524388 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252438a call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x12524390u);
  /* 12524390 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524395 call 0x12527390 */
  push32(0x1252439au); f_12527390();
  /* 1252439a mov esi, esp */
  ESI = (ESP);
  /* 1252439c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125243a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 125243a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125243a5 call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x125243abu);
  /* 125243ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125243ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125243b0 call 0x12527390 */
  push32(0x125243b5u); f_12527390();
L_125243b5:;
  /* 125243b5 mov esi, esp */
  ESI = (ESP);
  /* 125243b7 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125243b9 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125243bfu);
  /* 125243bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125243c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125243c4 call 0x12527390 */
  push32(0x125243c9u); f_12527390();
  /* 125243c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125243ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125243d0 je 0x1252448f */
  if (C.zf) goto L_1252448f;
  /* 125243d6 mov esi, esp */
  ESI = (ESP);
  /* 125243d8 push 7 */
  push32((uint32_t)(0x7u));
  /* 125243da call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125243e0u);
  /* 125243e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125243e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125243e5 call 0x12527390 */
  push32(0x125243eau); f_12527390();
  /* 125243ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125243ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125243f1 je 0x1252448f */
  if (C.zf) goto L_1252448f;
  /* 125243f7 mov esi, esp */
  ESI = (ESP);
  /* 125243f9 push 0xa */
  push32((uint32_t)(0xau));
  /* 125243fb call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524401u);
  /* 12524401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524404 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524406 call 0x12527390 */
  push32(0x1252440bu); f_12527390();
  /* 1252440b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524412 je 0x1252448f */
  if (C.zf) goto L_1252448f;
  /* 12524414 mov esi, esp */
  ESI = (ESP);
  /* 12524416 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252441a call dword ptr [0x125574c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574c4))), 0x12524420u);
  /* 12524420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524425 call 0x12527390 */
  push32(0x1252442au); f_12527390();
  /* 1252442a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252442c je 0x12524462 */
  if (C.zf) goto L_12524462;
  /* 1252442e mov esi, esp */
  ESI = (ESP);
  /* 12524430 push 5 */
  push32((uint32_t)(0x5u));
  /* 12524432 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524434 call dword ptr [0x125574c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574c4))), 0x1252443au);
  /* 1252443a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252443d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252443f call 0x12527390 */
  push32(0x12524444u); f_12527390();
  /* 12524444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524446 je 0x12524462 */
  if (C.zf) goto L_12524462;
  /* 12524448 mov esi, esp */
  ESI = (ESP);
  /* 1252444a push 4 */
  push32((uint32_t)(0x4u));
  /* 1252444c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252444e call dword ptr [0x125574c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574c4))), 0x12524454u);
  /* 12524454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524459 call 0x12527390 */
  push32(0x1252445eu); f_12527390();
  /* 1252445e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524460 jne 0x1252448f */
  if (!C.zf) goto L_1252448f;
L_12524462:;
  /* 12524462 mov esi, esp */
  ESI = (ESP);
  /* 12524464 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524466 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12524468 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252446eu);
  /* 1252446e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524471 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524473 call 0x12527390 */
  push32(0x12524478u); f_12527390();
  /* 12524478 mov esi, esp */
  ESI = (ESP);
  /* 1252447a push 0x1254f684 */
  push32((uint32_t)(0x1254f684u));
  /* 1252447f call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12524485u);
  /* 12524485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252448a call 0x12527390 */
  push32(0x1252448fu); f_12527390();
L_1252448f:;
  /* 1252448f mov esi, esp */
  ESI = (ESP);
  /* 12524491 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12524493 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524499u);
  /* 12524499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252449c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252449e call 0x12527390 */
  push32(0x125244a3u); f_12527390();
  /* 125244a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125244a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125244aa je 0x12524538 */
  if (C.zf) goto L_12524538;
  /* 125244b0 mov esi, esp */
  ESI = (ESP);
  /* 125244b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125244b4 push 0x12554510 */
  push32((uint32_t)(0x12554510u));
  /* 125244b9 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125244bfu);
  /* 125244bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125244c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125244c4 call 0x12527390 */
  push32(0x125244c9u); f_12527390();
  /* 125244c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125244cb jg 0x125244df */
  if ((!C.zf&&C.sf==C.of)) goto L_125244df;
  /* 125244cd push 0x12554790 */
  push32((uint32_t)(0x12554790u));
  /* 125244d2 call 0x12521005 */
  push32(0x125244d7u); f_12521005();
  /* 125244d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125244da cmp eax, 0x29 */
  { uint32_t _a=(EAX),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125244dd jge 0x12524538 */
  if ((C.sf==C.of)) goto L_12524538;
L_125244df:;
  /* 125244df mov esi, esp */
  ESI = (ESP);
  /* 125244e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125244e3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125244e5 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125244ebu);
  /* 125244eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125244ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125244f0 call 0x12527390 */
  push32(0x125244f5u); f_12527390();
  /* 125244f5 mov esi, esp */
  ESI = (ESP);
  /* 125244f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125244f9 push 0x12554748 */
  push32((uint32_t)(0x12554748u));
  /* 125244fe call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524504u);
  /* 12524504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524507 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524509 call 0x12527390 */
  push32(0x1252450eu); f_12527390();
  /* 1252450e mov esi, esp */
  ESI = (ESP);
  /* 12524510 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524512 call dword ptr [0x125574a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a0))), 0x12524518u);
  /* 12524518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252451b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252451d call 0x12527390 */
  push32(0x12524522u); f_12527390();
  /* 12524522 mov esi, esp */
  ESI = (ESP);
  /* 12524524 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12524526 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524528 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x1252452eu);
  /* 1252452e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524533 call 0x12527390 */
  push32(0x12524538u); f_12527390();
L_12524538:;
  /* 12524538 mov esi, esp */
  ESI = (ESP);
  /* 1252453a push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1252453c call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524542u);
  /* 12524542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524545 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524547 call 0x12527390 */
  push32(0x1252454cu); f_12527390();
  /* 1252454c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524553 je 0x1252461b */
  if (C.zf) goto L_1252461b;
  /* 12524559 mov esi, esp */
  ESI = (ESP);
  /* 1252455b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252455d call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12524563u);
  /* 12524563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524568 call 0x12527390 */
  push32(0x1252456du); f_12527390();
  /* 1252456d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524574 je 0x1252461b */
  if (C.zf) goto L_1252461b;
  /* 1252457a mov esi, esp */
  ESI = (ESP);
  /* 1252457c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252457e push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12524580 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524586u);
  /* 12524586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252458b call 0x12527390 */
  push32(0x12524590u); f_12527390();
  /* 12524590 mov esi, esp */
  ESI = (ESP);
  /* 12524592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524594 push 0x12554790 */
  push32((uint32_t)(0x12554790u));
  /* 12524599 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252459fu);
  /* 1252459f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125245a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125245a4 call 0x12527390 */
  push32(0x125245a9u); f_12527390();
  /* 125245a9 mov esi, esp */
  ESI = (ESP);
  /* 125245ab push 0 */
  push32((uint32_t)(0x0u));
  /* 125245ad push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 125245b2 push 0x125544b8 */
  push32((uint32_t)(0x125544b8u));
  /* 125245b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125245b9 call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x125245bfu);
  /* 125245bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125245c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125245c4 call 0x12527390 */
  push32(0x125245c9u); f_12527390();
  /* 125245c9 mov esi, esp */
  ESI = (ESP);
  /* 125245cb push 0 */
  push32((uint32_t)(0x0u));
  /* 125245cd push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 125245d2 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125245d8u);
  /* 125245d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125245db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125245dd call 0x12527390 */
  push32(0x125245e2u); f_12527390();
  /* 125245e2 mov esi, esp */
  ESI = (ESP);
  /* 125245e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125245e6 push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 125245eb call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125245f1u);
  /* 125245f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125245f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125245f6 call 0x12527390 */
  push32(0x125245fbu); f_12527390();
  /* 125245fb mov esi, esp */
  ESI = (ESP);
  /* 125245fd push 0 */
  push32((uint32_t)(0x0u));
  /* 125245ff push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12524604 push 0x125544b8 */
  push32((uint32_t)(0x125544b8u));
  /* 12524609 push 6 */
  push32((uint32_t)(0x6u));
  /* 1252460b call dword ptr [0x125574b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b8))), 0x12524611u);
  /* 12524611 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524616 call 0x12527390 */
  push32(0x1252461bu); f_12527390();
L_1252461b:;
  /* 1252461b mov esi, esp */
  ESI = (ESP);
  /* 1252461d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1252461f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524625u);
  /* 12524625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252462a call 0x12527390 */
  push32(0x1252462fu); f_12527390();
  /* 1252462f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524636 je 0x125246a7 */
  if (C.zf) goto L_125246a7;
  /* 12524638 mov esi, esp */
  ESI = (ESP);
  /* 1252463a push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 1252463f push 0x125544b8 */
  push32((uint32_t)(0x125544b8u));
  /* 12524644 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x1252464au);
  /* 1252464a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252464d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252464f call 0x12527390 */
  push32(0x12524654u); f_12527390();
  /* 12524654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524656 jg 0x12524678 */
  if ((!C.zf&&C.sf==C.of)) goto L_12524678;
  /* 12524658 mov esi, esp */
  ESI = (ESP);
  /* 1252465a push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 1252465f push 0x125544b8 */
  push32((uint32_t)(0x125544b8u));
  /* 12524664 call dword ptr [0x1255748c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255748c))), 0x1252466au);
  /* 1252466a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252466d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252466f call 0x12527390 */
  push32(0x12524674u); f_12527390();
  /* 12524674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524676 jle 0x125246a7 */
  if ((C.zf||C.sf!=C.of)) goto L_125246a7;
L_12524678:;
  /* 12524678 mov esi, esp */
  ESI = (ESP);
  /* 1252467a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252467c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1252467e call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524684u);
  /* 12524684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524689 call 0x12527390 */
  push32(0x1252468eu); f_12527390();
  /* 1252468e mov esi, esp */
  ESI = (ESP);
  /* 12524690 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12524695 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12524697 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x1252469du);
  /* 1252469d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125246a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125246a2 call 0x12527390 */
  push32(0x125246a7u); f_12527390();
L_125246a7:;
  /* 125246a7 mov esi, esp */
  ESI = (ESP);
  /* 125246a9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125246ab call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125246b1u);
  /* 125246b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125246b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125246b6 call 0x12527390 */
  push32(0x125246bbu); f_12527390();
  /* 125246bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125246c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125246c2 je 0x12524741 */
  if (C.zf) goto L_12524741;
  /* 125246c4 mov esi, esp */
  ESI = (ESP);
  /* 125246c6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 125246c8 call dword ptr [0x125574d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d4))), 0x125246ceu);
  /* 125246ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125246d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125246d3 call 0x12527390 */
  push32(0x125246d8u); f_12527390();
  /* 125246d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125246dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125246df je 0x12524741 */
  if (C.zf) goto L_12524741;
  /* 125246e1 mov esi, esp */
  ESI = (ESP);
  /* 125246e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125246e5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125246e7 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125246edu);
  /* 125246ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125246f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125246f2 call 0x12527390 */
  push32(0x125246f7u); f_12527390();
  /* 125246f7 mov esi, esp */
  ESI = (ESP);
  /* 125246f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125246fb push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 12524700 push 6 */
  push32((uint32_t)(0x6u));
  /* 12524702 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524708u);
  /* 12524708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252470b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252470d call 0x12527390 */
  push32(0x12524712u); f_12527390();
  /* 12524712 mov esi, esp */
  ESI = (ESP);
  /* 12524714 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524716 push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 1252471b push 6 */
  push32((uint32_t)(0x6u));
  /* 1252471d call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524723u);
  /* 12524723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524728 call 0x12527390 */
  push32(0x1252472du); f_12527390();
  /* 1252472d mov esi, esp */
  ESI = (ESP);
  /* 1252472f push 6 */
  push32((uint32_t)(0x6u));
  /* 12524731 call dword ptr [0x125574d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d8))), 0x12524737u);
  /* 12524737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252473a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252473c call 0x12527390 */
  push32(0x12524741u); f_12527390();
L_12524741:;
  /* 12524741 mov esi, esp */
  ESI = (ESP);
  /* 12524743 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12524745 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252474bu);
  /* 1252474b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252474e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524750 call 0x12527390 */
  push32(0x12524755u); f_12527390();
  /* 12524755 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252475a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252475c je 0x1252486c */
  if (C.zf) goto L_1252486c;
  /* 12524762 push 0x12554790 */
  push32((uint32_t)(0x12554790u));
  /* 12524767 call 0x12521005 */
  push32(0x1252476cu); f_12521005();
  /* 1252476c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252476f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524771 jne 0x1252486c */
  if (!C.zf) goto L_1252486c;
  /* 12524777 mov esi, esp */
  ESI = (ESP);
  /* 12524779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252477b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1252477d call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524783u);
  /* 12524783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524788 call 0x12527390 */
  push32(0x1252478du); f_12527390();
  /* 1252478d mov esi, esp */
  ESI = (ESP);
  /* 1252478f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524791 push 0x12554760 */
  push32((uint32_t)(0x12554760u));
  /* 12524796 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x1252479cu);
  /* 1252479c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252479f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125247a1 call 0x12527390 */
  push32(0x125247a6u); f_12527390();
  /* 125247a6 mov esi, esp */
  ESI = (ESP);
  /* 125247a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125247aa push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 125247af call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125247b5u);
  /* 125247b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125247b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125247ba call 0x12527390 */
  push32(0x125247bfu); f_12527390();
  /* 125247bf mov esi, esp */
  ESI = (ESP);
  /* 125247c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125247c3 push 6 */
  push32((uint32_t)(0x6u));
  /* 125247c5 call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x125247cbu);
  /* 125247cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125247ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125247d0 call 0x12527390 */
  push32(0x125247d5u); f_12527390();
  /* 125247d5 mov esi, esp */
  ESI = (ESP);
  /* 125247d7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125247dc push 1 */
  push32((uint32_t)(0x1u));
  /* 125247de push 0 */
  push32((uint32_t)(0x0u));
  /* 125247e0 call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x125247e6u);
  /* 125247e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125247e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125247eb call 0x12527390 */
  push32(0x125247f0u); f_12527390();
  /* 125247f0 mov esi, esp */
  ESI = (ESP);
  /* 125247f2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125247f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 125247f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125247fb call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x12524801u);
  /* 12524801 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524804 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524806 call 0x12527390 */
  push32(0x1252480bu); f_12527390();
  /* 1252480b mov esi, esp */
  ESI = (ESP);
  /* 1252480d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12524812 push 5 */
  push32((uint32_t)(0x5u));
  /* 12524814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524816 call dword ptr [0x125574cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574cc))), 0x1252481cu);
  /* 1252481c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252481f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524821 call 0x12527390 */
  push32(0x12524826u); f_12527390();
  /* 12524826 mov esi, esp */
  ESI = (ESP);
  /* 12524828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252482a push 0x12554778 */
  push32((uint32_t)(0x12554778u));
  /* 1252482f call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524835u);
  /* 12524835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252483a call 0x12527390 */
  push32(0x1252483fu); f_12527390();
  /* 1252483f mov esi, esp */
  ESI = (ESP);
  /* 12524841 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524843 push 6 */
  push32((uint32_t)(0x6u));
  /* 12524845 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x1252484bu);
  /* 1252484b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252484e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524850 call 0x12527390 */
  push32(0x12524855u); f_12527390();
  /* 12524855 mov esi, esp */
  ESI = (ESP);
  /* 12524857 push 0x1254f67c */
  push32((uint32_t)(0x1254f67cu));
  /* 1252485c call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12524862u);
  /* 12524862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524867 call 0x12527390 */
  push32(0x1252486cu); f_12527390();
L_1252486c:;
  /* 1252486c mov esi, esp */
  ESI = (ESP);
  /* 1252486e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12524870 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524876u);
  /* 12524876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252487b call 0x12527390 */
  push32(0x12524880u); f_12527390();
  /* 12524880 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524887 je 0x125248fa */
  if (C.zf) goto L_125248fa;
  /* 12524889 push 0x12554790 */
  push32((uint32_t)(0x12554790u));
  /* 1252488e call 0x12521005 */
  push32(0x12524893u); f_12521005();
  /* 12524893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524898 je 0x125248b7 */
  if (C.zf) goto L_125248b7;
  /* 1252489a mov esi, esp */
  ESI = (ESP);
  /* 1252489c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252489e push 0x125544b0 */
  push32((uint32_t)(0x125544b0u));
  /* 125248a3 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125248a9u);
  /* 125248a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125248ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125248ae call 0x12527390 */
  push32(0x125248b3u); f_12527390();
  /* 125248b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125248b5 jle 0x125248fa */
  if ((C.zf||C.sf!=C.of)) goto L_125248fa;
L_125248b7:;
  /* 125248b7 mov esi, esp */
  ESI = (ESP);
  /* 125248b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125248bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125248bd call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125248c3u);
  /* 125248c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125248c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125248c8 call 0x12527390 */
  push32(0x125248cdu); f_12527390();
  /* 125248cd mov esi, esp */
  ESI = (ESP);
  /* 125248cf push 0 */
  push32((uint32_t)(0x0u));
  /* 125248d1 push 0x12554748 */
  push32((uint32_t)(0x12554748u));
  /* 125248d6 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x125248dcu);
  /* 125248dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125248df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125248e1 call 0x12527390 */
  push32(0x125248e6u); f_12527390();
  /* 125248e6 mov esi, esp */
  ESI = (ESP);
  /* 125248e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125248ea call dword ptr [0x125574a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a8))), 0x125248f0u);
  /* 125248f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125248f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125248f5 call 0x12527390 */
  push32(0x125248fau); f_12527390();
L_125248fa:;
  /* 125248fa mov esi, esp */
  ESI = (ESP);
  /* 125248fc push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125248fe call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524904u);
  /* 12524904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524909 call 0x12527390 */
  push32(0x1252490eu); f_12527390();
  /* 1252490e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524915 je 0x1252499e */
  if (C.zf) goto L_1252499e;
  /* 1252491b mov esi, esp */
  ESI = (ESP);
  /* 1252491d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252491f push 0x12554528 */
  push32((uint32_t)(0x12554528u));
  /* 12524924 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x1252492au);
  /* 1252492a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252492d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252492f call 0x12527390 */
  push32(0x12524934u); f_12527390();
  /* 12524934 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524937 jl 0x1252499e */
  if ((C.sf!=C.of)) goto L_1252499e;
  /* 12524939 mov esi, esp */
  ESI = (ESP);
  /* 1252493b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252493d push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1252493f call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524945u);
  /* 12524945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252494a call 0x12527390 */
  push32(0x1252494fu); f_12527390();
  /* 1252494f mov esi, esp */
  ESI = (ESP);
  /* 12524951 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524953 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 12524958 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252495a call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524960u);
  /* 12524960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524963 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524965 call 0x12527390 */
  push32(0x1252496au); f_12527390();
  /* 1252496a mov esi, esp */
  ESI = (ESP);
  /* 1252496c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252496e push 0x12554670 */
  push32((uint32_t)(0x12554670u));
  /* 12524973 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524975 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252497bu);
  /* 1252497b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252497e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524980 call 0x12527390 */
  push32(0x12524985u); f_12527390();
  /* 12524985 mov esi, esp */
  ESI = (ESP);
  /* 12524987 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 1252498c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252498e call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12524994u);
  /* 12524994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524997 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524999 call 0x12527390 */
  push32(0x1252499eu); f_12527390();
L_1252499e:;
  /* 1252499e mov esi, esp */
  ESI = (ESP);
  /* 125249a0 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 125249a2 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125249a8u);
  /* 125249a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125249ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125249ad call 0x12527390 */
  push32(0x125249b2u); f_12527390();
  /* 125249b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125249b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125249b9 je 0x12524a42 */
  if (C.zf) goto L_12524a42;
  /* 125249bf mov esi, esp */
  ESI = (ESP);
  /* 125249c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125249c3 push 0x125544a8 */
  push32((uint32_t)(0x125544a8u));
  /* 125249c8 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125249ceu);
  /* 125249ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125249d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125249d3 call 0x12527390 */
  push32(0x125249d8u); f_12527390();
  /* 125249d8 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125249db jl 0x12524a42 */
  if ((C.sf!=C.of)) goto L_12524a42;
  /* 125249dd mov esi, esp */
  ESI = (ESP);
  /* 125249df push 0 */
  push32((uint32_t)(0x0u));
  /* 125249e1 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 125249e3 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125249e9u);
  /* 125249e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125249ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125249ee call 0x12527390 */
  push32(0x125249f3u); f_12527390();
  /* 125249f3 mov esi, esp */
  ESI = (ESP);
  /* 125249f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125249f7 push 0x12554668 */
  push32((uint32_t)(0x12554668u));
  /* 125249fc push 1 */
  push32((uint32_t)(0x1u));
  /* 125249fe call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524a04u);
  /* 12524a04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a09 call 0x12527390 */
  push32(0x12524a0eu); f_12527390();
  /* 12524a0e mov esi, esp */
  ESI = (ESP);
  /* 12524a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524a12 push 0x12554670 */
  push32((uint32_t)(0x12554670u));
  /* 12524a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524a19 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524a1fu);
  /* 12524a1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a24 call 0x12527390 */
  push32(0x12524a29u); f_12527390();
  /* 12524a29 mov esi, esp */
  ESI = (ESP);
  /* 12524a2b push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 12524a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524a32 call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12524a38u);
  /* 12524a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a3d call 0x12527390 */
  push32(0x12524a42u); f_12527390();
L_12524a42:;
  /* 12524a42 mov esi, esp */
  ESI = (ESP);
  /* 12524a44 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12524a46 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524a4cu);
  /* 12524a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a51 call 0x12527390 */
  push32(0x12524a56u); f_12527390();
  /* 12524a56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524a5d je 0x12524ae4 */
  if (C.zf) goto L_12524ae4;
  /* 12524a63 push 0x12554808 */
  push32((uint32_t)(0x12554808u));
  /* 12524a68 call 0x12521005 */
  push32(0x12524a6du); f_12521005();
  /* 12524a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a70 cmp eax, 0x2c */
  { uint32_t _a=(EAX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a73 jge 0x12524ae4 */
  if ((C.sf==C.of)) goto L_12524ae4;
  /* 12524a75 mov esi, esp */
  ESI = (ESP);
  /* 12524a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524a79 push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524a7e call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12524a84u);
  /* 12524a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524a89 call 0x12527390 */
  push32(0x12524a8eu); f_12527390();
  /* 12524a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524a90 jle 0x12524ae4 */
  if ((C.zf||C.sf!=C.of)) goto L_12524ae4;
  /* 12524a92 mov esi, esp */
  ESI = (ESP);
  /* 12524a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524a96 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12524a98 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524a9eu);
  /* 12524a9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524aa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524aa3 call 0x12527390 */
  push32(0x12524aa8u); f_12527390();
  /* 12524aa8 mov esi, esp */
  ESI = (ESP);
  /* 12524aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12524aac push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524ab1 push 0x12554720 */
  push32((uint32_t)(0x12554720u));
  /* 12524ab6 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12524abcu);
  /* 12524abc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ac1 call 0x12527390 */
  push32(0x12524ac6u); f_12527390();
  /* 12524ac6 mov esi, esp */
  ESI = (ESP);
  /* 12524ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524aca push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524acf push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 12524ad4 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12524adau);
  /* 12524ada add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524adf call 0x12527390 */
  push32(0x12524ae4u); f_12527390();
L_12524ae4:;
  /* 12524ae4 mov esi, esp */
  ESI = (ESP);
  /* 12524ae6 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12524ae8 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524aeeu);
  /* 12524aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524af3 call 0x12527390 */
  push32(0x12524af8u); f_12527390();
  /* 12524af8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524aff je 0x12524bbe */
  if (C.zf) goto L_12524bbe;
  /* 12524b05 mov esi, esp */
  ESI = (ESP);
  /* 12524b07 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12524b09 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524b0fu);
  /* 12524b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b14 call 0x12527390 */
  push32(0x12524b19u); f_12527390();
  /* 12524b19 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524b20 jne 0x12524bbe */
  if (!C.zf) goto L_12524bbe;
  /* 12524b26 mov esi, esp */
  ESI = (ESP);
  /* 12524b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524b2a push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524b2f call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12524b35u);
  /* 12524b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b3a call 0x12527390 */
  push32(0x12524b3fu); f_12527390();
  /* 12524b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524b41 jne 0x12524bbe */
  if (!C.zf) goto L_12524bbe;
  /* 12524b43 mov esi, esp */
  ESI = (ESP);
  /* 12524b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524b47 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12524b49 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524b4fu);
  /* 12524b4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b54 call 0x12527390 */
  push32(0x12524b59u); f_12527390();
  /* 12524b59 mov esi, esp */
  ESI = (ESP);
  /* 12524b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12524b5d push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12524b5f call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524b65u);
  /* 12524b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b6a call 0x12527390 */
  push32(0x12524b6fu); f_12527390();
  /* 12524b6f mov esi, esp */
  ESI = (ESP);
  /* 12524b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524b73 push 0x12554720 */
  push32((uint32_t)(0x12554720u));
  /* 12524b78 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524b7eu);
  /* 12524b7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b83 call 0x12527390 */
  push32(0x12524b88u); f_12527390();
  /* 12524b88 mov esi, esp */
  ESI = (ESP);
  /* 12524b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12524b8c push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 12524b91 call dword ptr [0x12557468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557468))), 0x12524b97u);
  /* 12524b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524b9c call 0x12527390 */
  push32(0x12524ba1u); f_12527390();
  /* 12524ba1 mov esi, esp */
  ESI = (ESP);
  /* 12524ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524ba5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12524ba7 push 0x12554580 */
  push32((uint32_t)(0x12554580u));
  /* 12524bac push 1 */
  push32((uint32_t)(0x1u));
  /* 12524bae call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x12524bb4u);
  /* 12524bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524bb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524bb9 call 0x12527390 */
  push32(0x12524bbeu); f_12527390();
L_12524bbe:;
  /* 12524bbe mov esi, esp */
  ESI = (ESP);
  /* 12524bc0 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12524bc2 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524bc8u);
  /* 12524bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524bcd call 0x12527390 */
  push32(0x12524bd2u); f_12527390();
  /* 12524bd2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524bd9 je 0x12524c6b */
  if (C.zf) goto L_12524c6b;
  /* 12524bdf mov esi, esp */
  ESI = (ESP);
  /* 12524be1 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12524be3 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524be9u);
  /* 12524be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524bec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524bee call 0x12527390 */
  push32(0x12524bf3u); f_12527390();
  /* 12524bf3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524bfa jne 0x12524c6b */
  if (!C.zf) goto L_12524c6b;
  /* 12524bfc mov esi, esp */
  ESI = (ESP);
  /* 12524bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12524c00 push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524c05 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12524c0bu);
  /* 12524c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c10 call 0x12527390 */
  push32(0x12524c15u); f_12527390();
  /* 12524c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524c17 jle 0x12524c6b */
  if ((C.zf||C.sf!=C.of)) goto L_12524c6b;
  /* 12524c19 mov esi, esp */
  ESI = (ESP);
  /* 12524c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12524c1d push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12524c1f call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524c25u);
  /* 12524c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c2a call 0x12527390 */
  push32(0x12524c2fu); f_12527390();
  /* 12524c2f mov esi, esp */
  ESI = (ESP);
  /* 12524c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524c33 push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524c38 push 0x12554720 */
  push32((uint32_t)(0x12554720u));
  /* 12524c3d call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12524c43u);
  /* 12524c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c48 call 0x12527390 */
  push32(0x12524c4du); f_12527390();
  /* 12524c4d mov esi, esp */
  ESI = (ESP);
  /* 12524c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12524c51 push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 12524c56 push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 12524c5b call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12524c61u);
  /* 12524c61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c66 call 0x12527390 */
  push32(0x12524c6bu); f_12527390();
L_12524c6b:;
  /* 12524c6b mov esi, esp */
  ESI = (ESP);
  /* 12524c6d push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12524c6f call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524c75u);
  /* 12524c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c7a call 0x12527390 */
  push32(0x12524c7fu); f_12527390();
  /* 12524c7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524c86 je 0x12524d14 */
  if (C.zf) goto L_12524d14;
  /* 12524c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12524c8e push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12524c93 call 0x1252100f */
  push32(0x12524c98u); f_1252100f();
  /* 12524c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524c9b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524c9e jl 0x12524d14 */
  if ((C.sf!=C.of)) goto L_12524d14;
  /* 12524ca0 mov esi, esp */
  ESI = (ESP);
  /* 12524ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524ca4 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12524ca6 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524cacu);
  /* 12524cac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524caf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524cb1 call 0x12527390 */
  push32(0x12524cb6u); f_12527390();
  /* 12524cb6 mov esi, esp */
  ESI = (ESP);
  /* 12524cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524cba push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 12524cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12524cc1 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524cc7u);
  /* 12524cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ccc call 0x12527390 */
  push32(0x12524cd1u); f_12527390();
  /* 12524cd1 mov esi, esp */
  ESI = (ESP);
  /* 12524cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524cd5 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x12524cdbu);
  /* 12524cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ce0 call 0x12527390 */
  push32(0x12524ce5u); f_12527390();
  /* 12524ce5 mov esi, esp */
  ESI = (ESP);
  /* 12524ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524ce9 push 0x12554738 */
  push32((uint32_t)(0x12554738u));
  /* 12524cee push 0 */
  push32((uint32_t)(0x0u));
  /* 12524cf0 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12524cf6u);
  /* 12524cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524cf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524cfb call 0x12527390 */
  push32(0x12524d00u); f_12527390();
  /* 12524d00 mov esi, esp */
  ESI = (ESP);
  /* 12524d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524d04 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x12524d0au);
  /* 12524d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524d0f call 0x12527390 */
  push32(0x12524d14u); f_12527390();
L_12524d14:;
  /* 12524d14 mov esi, esp */
  ESI = (ESP);
  /* 12524d16 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 12524d18 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524d1eu);
  /* 12524d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524d23 call 0x12527390 */
  push32(0x12524d28u); f_12527390();
  /* 12524d28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524d2f je 0x12524dab */
  if (C.zf) goto L_12524dab;
  /* 12524d31 mov esi, esp */
  ESI = (ESP);
  /* 12524d33 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12524d35 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524d3bu);
  /* 12524d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524d40 call 0x12527390 */
  push32(0x12524d45u); f_12527390();
  /* 12524d45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524d4c je 0x12524dab */
  if (C.zf) goto L_12524dab;
  /* 12524d4e mov esi, esp */
  ESI = (ESP);
  /* 12524d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524d52 push 0x125544a0 */
  push32((uint32_t)(0x125544a0u));
  /* 12524d57 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12524d5du);
  /* 12524d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524d62 call 0x12527390 */
  push32(0x12524d67u); f_12527390();
  /* 12524d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524d69 jle 0x12524dab */
  if ((C.zf||C.sf!=C.of)) goto L_12524dab;
  /* 12524d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12524d6d push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12524d72 call 0x1252100f */
  push32(0x12524d77u); f_1252100f();
  /* 12524d77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524d7c jne 0x12524dab */
  if (!C.zf) goto L_12524dab;
  /* 12524d7e mov esi, esp */
  ESI = (ESP);
  /* 12524d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524d82 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 12524d84 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524d8au);
  /* 12524d8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524d8f call 0x12527390 */
  push32(0x12524d94u); f_12527390();
  /* 12524d94 mov esi, esp */
  ESI = (ESP);
  /* 12524d96 push 0x1254f670 */
  push32((uint32_t)(0x1254f670u));
  /* 12524d9b call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12524da1u);
  /* 12524da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524da6 call 0x12527390 */
  push32(0x12524dabu); f_12527390();
L_12524dab:;
  /* 12524dab mov esi, esp */
  ESI = (ESP);
  /* 12524dad push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12524daf call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524db5u);
  /* 12524db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524db8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524dba call 0x12527390 */
  push32(0x12524dbfu); f_12527390();
  /* 12524dbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524dc6 je 0x12524f1d */
  if (C.zf) goto L_12524f1d;
  /* 12524dcc mov esi, esp */
  ESI = (ESP);
  /* 12524dce push 0 */
  push32((uint32_t)(0x0u));
  /* 12524dd0 push 0x125544a0 */
  push32((uint32_t)(0x125544a0u));
  /* 12524dd5 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12524ddbu);
  /* 12524ddb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524dde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524de0 call 0x12527390 */
  push32(0x12524de5u); f_12527390();
  /* 12524de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524de7 jle 0x12524f1d */
  if ((C.zf||C.sf!=C.of)) goto L_12524f1d;
  /* 12524ded push 0 */
  push32((uint32_t)(0x0u));
  /* 12524def push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12524df4 call 0x1252100f */
  push32(0x12524df9u); f_1252100f();
  /* 12524df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524dfe jle 0x12524f1d */
  if ((C.zf||C.sf!=C.of)) goto L_12524f1d;
  /* 12524e04 mov esi, esp */
  ESI = (ESP);
  /* 12524e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524e08 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12524e0a call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524e10u);
  /* 12524e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e15 call 0x12527390 */
  push32(0x12524e1au); f_12527390();
  /* 12524e1a mov esi, esp */
  ESI = (ESP);
  /* 12524e1c push 0x1254f664 */
  push32((uint32_t)(0x1254f664u));
  /* 12524e21 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12524e27u);
  /* 12524e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e2c call 0x12527390 */
  push32(0x12524e31u); f_12527390();
  /* 12524e31 mov esi, esp */
  ESI = (ESP);
  /* 12524e33 push 0x1254f658 */
  push32((uint32_t)(0x1254f658u));
  /* 12524e38 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12524e3eu);
  /* 12524e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e43 call 0x12527390 */
  push32(0x12524e48u); f_12527390();
  /* 12524e48 mov esi, esp */
  ESI = (ESP);
  /* 12524e4a push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12524e4f push 8 */
  push32((uint32_t)(0x8u));
  /* 12524e51 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12524e57u);
  /* 12524e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e5c call 0x12527390 */
  push32(0x12524e61u); f_12527390();
  /* 12524e61 mov esi, esp */
  ESI = (ESP);
  /* 12524e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524e67 push 0x125545f8 */
  push32((uint32_t)(0x125545f8u));
  /* 12524e6c call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x12524e72u);
  /* 12524e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e77 call 0x12527390 */
  push32(0x12524e7cu); f_12527390();
  /* 12524e7c mov esi, esp */
  ESI = (ESP);
  /* 12524e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12524e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524e82 push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12524e87 call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x12524e8du);
  /* 12524e8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524e92 call 0x12527390 */
  push32(0x12524e97u); f_12527390();
  /* 12524e97 mov esi, esp */
  ESI = (ESP);
  /* 12524e99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12524e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12524e9d call dword ptr [0x125574d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d0))), 0x12524ea3u);
  /* 12524ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ea8 call 0x12527390 */
  push32(0x12524eadu); f_12527390();
  /* 12524ead mov esi, esp */
  ESI = (ESP);
  /* 12524eaf push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 12524eb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12524eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524eb8 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x12524ebeu);
  /* 12524ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524ec1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ec3 call 0x12527390 */
  push32(0x12524ec8u); f_12527390();
  /* 12524ec8 mov esi, esp */
  ESI = (ESP);
  /* 12524eca push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 12524ecf push 0xe */
  push32((uint32_t)(0xeu));
  /* 12524ed1 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12524ed7u);
  /* 12524ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524edc call 0x12527390 */
  push32(0x12524ee1u); f_12527390();
  /* 12524ee1 mov esi, esp */
  ESI = (ESP);
  /* 12524ee3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12524ee5 call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x12524eebu);
  /* 12524eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ef0 call 0x12527390 */
  push32(0x12524ef5u); f_12527390();
  /* 12524ef5 mov esi, esp */
  ESI = (ESP);
  /* 12524ef7 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12524ef9 call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x12524effu);
  /* 12524eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f04 call 0x12527390 */
  push32(0x12524f09u); f_12527390();
  /* 12524f09 mov esi, esp */
  ESI = (ESP);
  /* 12524f0b push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12524f0d call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x12524f13u);
  /* 12524f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f18 call 0x12527390 */
  push32(0x12524f1du); f_12527390();
L_12524f1d:;
  /* 12524f1d mov esi, esp */
  ESI = (ESP);
  /* 12524f1f push 4 */
  push32((uint32_t)(0x4u));
  /* 12524f21 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524f27u);
  /* 12524f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f2c call 0x12527390 */
  push32(0x12524f31u); f_12527390();
  /* 12524f31 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524f38 je 0x12524f6d */
  if (C.zf) goto L_12524f6d;
  /* 12524f3a mov esi, esp */
  ESI = (ESP);
  /* 12524f3c push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12524f3e call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524f44u);
  /* 12524f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f49 call 0x12527390 */
  push32(0x12524f4eu); f_12527390();
  /* 12524f4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524f53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524f55 jne 0x12524f6d */
  if (!C.zf) goto L_12524f6d;
  /* 12524f57 mov esi, esp */
  ESI = (ESP);
  /* 12524f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524f5b push 4 */
  push32((uint32_t)(0x4u));
  /* 12524f5d call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12524f63u);
  /* 12524f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f68 call 0x12527390 */
  push32(0x12524f6du); f_12527390();
L_12524f6d:;
  /* 12524f6d mov esi, esp */
  ESI = (ESP);
  /* 12524f6f push 6 */
  push32((uint32_t)(0x6u));
  /* 12524f71 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524f77u);
  /* 12524f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524f7c call 0x12527390 */
  push32(0x12524f81u); f_12527390();
  /* 12524f81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524f86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524f88 je 0x12524fe4 */
  if (C.zf) goto L_12524fe4;
  /* 12524f8a mov esi, esp */
  ESI = (ESP);
  /* 12524f8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12524f8e push 0x12554590 */
  push32((uint32_t)(0x12554590u));
  /* 12524f93 push 0x125547e0 */
  push32((uint32_t)(0x125547e0u));
  /* 12524f98 call dword ptr [0x125574e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e4))), 0x12524f9eu);
  /* 12524f9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524fa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524fa3 call 0x12527390 */
  push32(0x12524fa8u); f_12527390();
  /* 12524fa8 mov esi, esp */
  ESI = (ESP);
  /* 12524faa push 0 */
  push32((uint32_t)(0x0u));
  /* 12524fac push 0x12554558 */
  push32((uint32_t)(0x12554558u));
  /* 12524fb1 push 0x12554710 */
  push32((uint32_t)(0x12554710u));
  /* 12524fb6 call dword ptr [0x125574e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e4))), 0x12524fbcu);
  /* 12524fbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524fc1 call 0x12527390 */
  push32(0x12524fc6u); f_12527390();
  /* 12524fc6 mov esi, esp */
  ESI = (ESP);
  /* 12524fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12524fca push 0x12554570 */
  push32((uint32_t)(0x12554570u));
  /* 12524fcf push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 12524fd4 call dword ptr [0x125574e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e4))), 0x12524fdau);
  /* 12524fda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524fdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524fdf call 0x12527390 */
  push32(0x12524fe4u); f_12527390();
L_12524fe4:;
  /* 12524fe4 mov esi, esp */
  ESI = (ESP);
  /* 12524fe6 push 5 */
  push32((uint32_t)(0x5u));
  /* 12524fe8 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12524feeu);
  /* 12524fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12524ff1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12524ff3 call 0x12527390 */
  push32(0x12524ff8u); f_12527390();
  /* 12524ff8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12524ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12524fff je 0x125250a6 */
  if (C.zf) goto L_125250a6;
  /* 12525005 mov esi, esp */
  ESI = (ESP);
  /* 12525007 push 4 */
  push32((uint32_t)(0x4u));
  /* 12525009 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252500fu);
  /* 1252500f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525014 call 0x12527390 */
  push32(0x12525019u); f_12527390();
  /* 12525019 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252501e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525020 jne 0x125250a6 */
  if (!C.zf) goto L_125250a6;
  /* 12525026 mov esi, esp */
  ESI = (ESP);
  /* 12525028 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1252502a call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12525030u);
  /* 12525030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525033 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525035 call 0x12527390 */
  push32(0x1252503au); f_12527390();
  /* 1252503a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252503f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525041 je 0x125250a6 */
  if (C.zf) goto L_125250a6;
  /* 12525043 mov esi, esp */
  ESI = (ESP);
  /* 12525045 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525047 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525049 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252504fu);
  /* 1252504f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525054 call 0x12527390 */
  push32(0x12525059u); f_12527390();
  /* 12525059 mov esi, esp */
  ESI = (ESP);
  /* 1252505b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252505d push 0x125547d0 */
  push32((uint32_t)(0x125547d0u));
  /* 12525062 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525064 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252506au);
  /* 1252506a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252506d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252506f call 0x12527390 */
  push32(0x12525074u); f_12527390();
  /* 12525074 mov esi, esp */
  ESI = (ESP);
  /* 12525076 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 1252507b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252507d call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12525083u);
  /* 12525083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525086 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525088 call 0x12527390 */
  push32(0x1252508du); f_12527390();
  /* 1252508d mov esi, esp */
  ESI = (ESP);
  /* 1252508f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 12525094 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12525096 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x1252509cu);
  /* 1252509c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252509f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125250a1 call 0x12527390 */
  push32(0x125250a6u); f_12527390();
L_125250a6:;
  /* 125250a6 mov esi, esp */
  ESI = (ESP);
  /* 125250a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125250aa call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125250b0u);
  /* 125250b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125250b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125250b5 call 0x12527390 */
  push32(0x125250bau); f_12527390();
  /* 125250ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125250bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125250c1 je 0x12525147 */
  if (C.zf) goto L_12525147;
  /* 125250c7 mov esi, esp */
  ESI = (ESP);
  /* 125250c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125250cb call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x125250d1u);
  /* 125250d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125250d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125250d6 call 0x12527390 */
  push32(0x125250dbu); f_12527390();
  /* 125250db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125250e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125250e2 je 0x12525147 */
  if (C.zf) goto L_12525147;
  /* 125250e4 mov esi, esp */
  ESI = (ESP);
  /* 125250e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125250e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125250ea call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125250f0u);
  /* 125250f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125250f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125250f5 call 0x12527390 */
  push32(0x125250fau); f_12527390();
  /* 125250fa mov esi, esp */
  ESI = (ESP);
  /* 125250fc push 0 */
  push32((uint32_t)(0x0u));
  /* 125250fe push 0x125547d0 */
  push32((uint32_t)(0x125547d0u));
  /* 12525103 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525105 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252510bu);
  /* 1252510b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252510e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525110 call 0x12527390 */
  push32(0x12525115u); f_12527390();
  /* 12525115 mov esi, esp */
  ESI = (ESP);
  /* 12525117 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 1252511c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252511e call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12525124u);
  /* 12525124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525127 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525129 call 0x12527390 */
  push32(0x1252512eu); f_12527390();
  /* 1252512e mov esi, esp */
  ESI = (ESP);
  /* 12525130 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 12525135 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12525137 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x1252513du);
  /* 1252513d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525140 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525142 call 0x12527390 */
  push32(0x12525147u); f_12527390();
L_12525147:;
  /* 12525147 mov esi, esp */
  ESI = (ESP);
  /* 12525149 push 3 */
  push32((uint32_t)(0x3u));
  /* 1252514b call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525151u);
  /* 12525151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525156 call 0x12527390 */
  push32(0x1252515bu); f_12527390();
  /* 1252515b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525162 je 0x125251e8 */
  if (C.zf) goto L_125251e8;
  /* 12525168 mov esi, esp */
  ESI = (ESP);
  /* 1252516a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1252516c call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12525172u);
  /* 12525172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525177 call 0x12527390 */
  push32(0x1252517cu); f_12527390();
  /* 1252517c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525183 je 0x125251e8 */
  if (C.zf) goto L_125251e8;
  /* 12525185 mov esi, esp */
  ESI = (ESP);
  /* 12525187 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525189 push 3 */
  push32((uint32_t)(0x3u));
  /* 1252518b call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525191u);
  /* 12525191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525196 call 0x12527390 */
  push32(0x1252519bu); f_12527390();
  /* 1252519b mov esi, esp */
  ESI = (ESP);
  /* 1252519d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252519f push 0x125547d8 */
  push32((uint32_t)(0x125547d8u));
  /* 125251a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125251a6 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125251acu);
  /* 125251ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125251af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125251b1 call 0x12527390 */
  push32(0x125251b6u); f_12527390();
  /* 125251b6 mov esi, esp */
  ESI = (ESP);
  /* 125251b8 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 125251bd push 1 */
  push32((uint32_t)(0x1u));
  /* 125251bf call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x125251c5u);
  /* 125251c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125251c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125251ca call 0x12527390 */
  push32(0x125251cfu); f_12527390();
  /* 125251cf mov esi, esp */
  ESI = (ESP);
  /* 125251d1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 125251d6 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 125251d8 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x125251deu);
  /* 125251de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125251e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125251e3 call 0x12527390 */
  push32(0x125251e8u); f_12527390();
L_125251e8:;
  /* 125251e8 mov esi, esp */
  ESI = (ESP);
  /* 125251ea push 1 */
  push32((uint32_t)(0x1u));
  /* 125251ec call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125251f2u);
  /* 125251f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125251f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125251f7 call 0x12527390 */
  push32(0x125251fcu); f_12527390();
  /* 125251fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525203 je 0x1252526c */
  if (C.zf) goto L_1252526c;
  /* 12525205 mov esi, esp */
  ESI = (ESP);
  /* 12525207 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12525209 call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x1252520fu);
  /* 1252520f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525212 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525214 call 0x12527390 */
  push32(0x12525219u); f_12527390();
  /* 12525219 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252521e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525220 je 0x1252526c */
  if (C.zf) goto L_1252526c;
  /* 12525222 mov esi, esp */
  ESI = (ESP);
  /* 12525224 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525226 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525228 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252522eu);
  /* 1252522e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525233 call 0x12527390 */
  push32(0x12525238u); f_12527390();
  /* 12525238 mov esi, esp */
  ESI = (ESP);
  /* 1252523a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252523c push 0x12554840 */
  push32((uint32_t)(0x12554840u));
  /* 12525241 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525243 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525249u);
  /* 12525249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252524c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252524e call 0x12527390 */
  push32(0x12525253u); f_12527390();
  /* 12525253 mov esi, esp */
  ESI = (ESP);
  /* 12525255 push 0x12554418 */
  push32((uint32_t)(0x12554418u));
  /* 1252525a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252525c call dword ptr [0x125574a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574a4))), 0x12525262u);
  /* 12525262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525265 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525267 call 0x12527390 */
  push32(0x1252526cu); f_12527390();
L_1252526c:;
  /* 1252526c mov esi, esp */
  ESI = (ESP);
  /* 1252526e push 0x65 */
  push32((uint32_t)(0x65u));
  /* 12525270 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525276u);
  /* 12525276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525279 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252527b call 0x12527390 */
  push32(0x12525280u); f_12527390();
  /* 12525280 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525287 je 0x125252d5 */
  if (C.zf) goto L_125252d5;
  /* 12525289 mov esi, esp */
  ESI = (ESP);
  /* 1252528b push 0x23 */
  push32((uint32_t)(0x23u));
  /* 1252528d call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525293u);
  /* 12525293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525298 call 0x12527390 */
  push32(0x1252529du); f_12527390();
  /* 1252529d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125252a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125252a4 jne 0x125252d5 */
  if (!C.zf) goto L_125252d5;
  /* 125252a6 mov esi, esp */
  ESI = (ESP);
  /* 125252a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125252aa push 1 */
  push32((uint32_t)(0x1u));
  /* 125252ac push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 125252b1 call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x125252b7u);
  /* 125252b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125252ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125252bc call 0x12527390 */
  push32(0x125252c1u); f_12527390();
  /* 125252c1 mov esi, esp */
  ESI = (ESP);
  /* 125252c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125252c5 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x125252cbu);
  /* 125252cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125252ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125252d0 call 0x12527390 */
  push32(0x125252d5u); f_12527390();
L_125252d5:;
  /* 125252d5 mov esi, esp */
  ESI = (ESP);
  /* 125252d7 push 0x66 */
  push32((uint32_t)(0x66u));
  /* 125252d9 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125252dfu);
  /* 125252df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125252e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125252e4 call 0x12527390 */
  push32(0x125252e9u); f_12527390();
  /* 125252e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125252ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125252f0 je 0x12525334 */
  if (C.zf) goto L_12525334;
  /* 125252f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125252f4 push 0x12554600 */
  push32((uint32_t)(0x12554600u));
  /* 125252f9 call 0x1252100f */
  push32(0x125252feu); f_1252100f();
  /* 125252fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525303 jle 0x12525334 */
  if ((C.zf||C.sf!=C.of)) goto L_12525334;
  /* 12525305 mov esi, esp */
  ESI = (ESP);
  /* 12525307 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252530b push 0x12554600 */
  push32((uint32_t)(0x12554600u));
  /* 12525310 call dword ptr [0x125574b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b0))), 0x12525316u);
  /* 12525316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252531b call 0x12527390 */
  push32(0x12525320u); f_12527390();
  /* 12525320 mov esi, esp */
  ESI = (ESP);
  /* 12525322 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525324 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x1252532au);
  /* 1252532a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252532d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252532f call 0x12527390 */
  push32(0x12525334u); f_12527390();
L_12525334:;
  /* 12525334 mov esi, esp */
  ESI = (ESP);
  /* 12525336 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12525338 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252533eu);
  /* 1252533e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525343 call 0x12527390 */
  push32(0x12525348u); f_12527390();
  /* 12525348 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252534d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252534f je 0x12525483 */
  if (C.zf) goto L_12525483;
  /* 12525355 mov esi, esp */
  ESI = (ESP);
  /* 12525357 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525359 push 0x125544a0 */
  push32((uint32_t)(0x125544a0u));
  /* 1252535e call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12525364u);
  /* 12525364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525367 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525369 call 0x12527390 */
  push32(0x1252536eu); f_12527390();
  /* 1252536e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525370 jle 0x12525483 */
  if ((C.zf||C.sf!=C.of)) goto L_12525483;
  /* 12525376 push 0x12554720 */
  push32((uint32_t)(0x12554720u));
  /* 1252537b call 0x12521005 */
  push32(0x12525380u); f_12521005();
  /* 12525380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525383 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525386 jle 0x12525483 */
  if ((C.zf||C.sf!=C.of)) goto L_12525483;
  /* 1252538c mov esi, esp */
  ESI = (ESP);
  /* 1252538e push 0 */
  push32((uint32_t)(0x0u));
  /* 12525390 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12525392 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525398u);
  /* 12525398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252539b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252539d call 0x12527390 */
  push32(0x125253a2u); f_12527390();
  /* 125253a2 mov esi, esp */
  ESI = (ESP);
  /* 125253a4 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 125253a9 push 0x12554578 */
  push32((uint32_t)(0x12554578u));
  /* 125253ae push 1 */
  push32((uint32_t)(0x1u));
  /* 125253b0 push 0x12554608 */
  push32((uint32_t)(0x12554608u));
  /* 125253b5 push 0x125544d0 */
  push32((uint32_t)(0x125544d0u));
  /* 125253ba push 0x125543f8 */
  push32((uint32_t)(0x125543f8u));
  /* 125253bf call dword ptr [0x125574dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574dc))), 0x125253c5u);
  /* 125253c5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125253c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125253ca call 0x12527390 */
  push32(0x125253cfu); f_12527390();
  /* 125253cf mov esi, esp */
  ESI = (ESP);
  /* 125253d1 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 125253d6 push 0x12554560 */
  push32((uint32_t)(0x12554560u));
  /* 125253db push 1 */
  push32((uint32_t)(0x1u));
  /* 125253dd push 0x12554608 */
  push32((uint32_t)(0x12554608u));
  /* 125253e2 push 0x125544d0 */
  push32((uint32_t)(0x125544d0u));
  /* 125253e7 push 0x125543f0 */
  push32((uint32_t)(0x125543f0u));
  /* 125253ec call dword ptr [0x125574dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574dc))), 0x125253f2u);
  /* 125253f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125253f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125253f7 call 0x12527390 */
  push32(0x125253fcu); f_12527390();
  /* 125253fc mov esi, esp */
  ESI = (ESP);
  /* 125253fe push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12525403 push 0x12554548 */
  push32((uint32_t)(0x12554548u));
  /* 12525408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252540a push 0x12554608 */
  push32((uint32_t)(0x12554608u));
  /* 1252540f push 0x125544d0 */
  push32((uint32_t)(0x125544d0u));
  /* 12525414 push 0x125543e0 */
  push32((uint32_t)(0x125543e0u));
  /* 12525419 call dword ptr [0x125574dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574dc))), 0x1252541fu);
  /* 1252541f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525424 call 0x12527390 */
  push32(0x12525429u); f_12527390();
  /* 12525429 mov esi, esp */
  ESI = (ESP);
  /* 1252542b push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12525430 push 0x12554538 */
  push32((uint32_t)(0x12554538u));
  /* 12525435 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525437 push 0x12554608 */
  push32((uint32_t)(0x12554608u));
  /* 1252543c push 0x125544d0 */
  push32((uint32_t)(0x125544d0u));
  /* 12525441 push 0x12554408 */
  push32((uint32_t)(0x12554408u));
  /* 12525446 call dword ptr [0x125574dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574dc))), 0x1252544cu);
  /* 1252544c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252544f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525451 call 0x12527390 */
  push32(0x12525456u); f_12527390();
  /* 12525456 mov esi, esp */
  ESI = (ESP);
  /* 12525458 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1252545d push 0x12554500 */
  push32((uint32_t)(0x12554500u));
  /* 12525462 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525464 push 0x12554610 */
  push32((uint32_t)(0x12554610u));
  /* 12525469 push 0x12554518 */
  push32((uint32_t)(0x12554518u));
  /* 1252546e push 0x12554400 */
  push32((uint32_t)(0x12554400u));
  /* 12525473 call dword ptr [0x125574dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574dc))), 0x12525479u);
  /* 12525479 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252547c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252547e call 0x12527390 */
  push32(0x12525483u); f_12527390();
L_12525483:;
  /* 12525483 mov esi, esp */
  ESI = (ESP);
  /* 12525485 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12525487 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252548du);
  /* 1252548d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525492 call 0x12527390 */
  push32(0x12525497u); f_12527390();
  /* 12525497 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252549c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252549e je 0x125255e9 */
  if (C.zf) goto L_125255e9;
  /* 125254a4 mov esi, esp */
  ESI = (ESP);
  /* 125254a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 125254a8 call dword ptr [0x125574d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d4))), 0x125254aeu);
  /* 125254ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125254b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125254b3 call 0x12527390 */
  push32(0x125254b8u); f_12527390();
  /* 125254b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125254bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125254bf je 0x125255e9 */
  if (C.zf) goto L_125255e9;
  /* 125254c5 mov esi, esp */
  ESI = (ESP);
  /* 125254c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125254c9 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 125254cb call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125254d1u);
  /* 125254d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125254d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125254d6 call 0x12527390 */
  push32(0x125254dbu); f_12527390();
  /* 125254db mov esi, esp */
  ESI = (ESP);
  /* 125254dd push 0x1254f64c */
  push32((uint32_t)(0x1254f64cu));
  /* 125254e2 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x125254e8u);
  /* 125254e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125254eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125254ed call 0x12527390 */
  push32(0x125254f2u); f_12527390();
  /* 125254f2 mov esi, esp */
  ESI = (ESP);
  /* 125254f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125254f6 push 0x12554820 */
  push32((uint32_t)(0x12554820u));
  /* 125254fb push 5 */
  push32((uint32_t)(0x5u));
  /* 125254fd call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525503u);
  /* 12525503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525508 call 0x12527390 */
  push32(0x1252550du); f_12527390();
  /* 1252550d mov esi, esp */
  ESI = (ESP);
  /* 1252550f push 1 */
  push32((uint32_t)(0x1u));
  /* 12525511 push 0x12554800 */
  push32((uint32_t)(0x12554800u));
  /* 12525516 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525518 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252551eu);
  /* 1252551e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525523 call 0x12527390 */
  push32(0x12525528u); f_12527390();
  /* 12525528 mov esi, esp */
  ESI = (ESP);
  /* 1252552a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252552c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252552e push 0x12554500 */
  push32((uint32_t)(0x12554500u));
  /* 12525533 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525535 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x1252553bu);
  /* 1252553b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252553e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525540 call 0x12527390 */
  push32(0x12525545u); f_12527390();
  /* 12525545 mov esi, esp */
  ESI = (ESP);
  /* 12525547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525549 push 0x12554750 */
  push32((uint32_t)(0x12554750u));
  /* 1252554e push 5 */
  push32((uint32_t)(0x5u));
  /* 12525550 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525556u);
  /* 12525556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525559 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252555b call 0x12527390 */
  push32(0x12525560u); f_12527390();
  /* 12525560 mov esi, esp */
  ESI = (ESP);
  /* 12525562 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525564 push 0x12554828 */
  push32((uint32_t)(0x12554828u));
  /* 12525569 push 5 */
  push32((uint32_t)(0x5u));
  /* 1252556b call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525571u);
  /* 12525571 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525576 call 0x12527390 */
  push32(0x1252557bu); f_12527390();
  /* 1252557b mov esi, esp */
  ESI = (ESP);
  /* 1252557d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252557f push 0x125547f0 */
  push32((uint32_t)(0x125547f0u));
  /* 12525584 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525586 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252558cu);
  /* 1252558c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252558f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525591 call 0x12527390 */
  push32(0x12525596u); f_12527390();
  /* 12525596 mov esi, esp */
  ESI = (ESP);
  /* 12525598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252559a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252559c push 0x12554598 */
  push32((uint32_t)(0x12554598u));
  /* 125255a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 125255a3 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x125255a9u);
  /* 125255a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125255ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125255ae call 0x12527390 */
  push32(0x125255b3u); f_12527390();
  /* 125255b3 mov esi, esp */
  ESI = (ESP);
  /* 125255b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125255b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125255b9 push 0x12554520 */
  push32((uint32_t)(0x12554520u));
  /* 125255be push 5 */
  push32((uint32_t)(0x5u));
  /* 125255c0 call dword ptr [0x12557490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557490))), 0x125255c6u);
  /* 125255c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125255c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125255cb call 0x12527390 */
  push32(0x125255d0u); f_12527390();
  /* 125255d0 mov esi, esp */
  ESI = (ESP);
  /* 125255d2 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 125255d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 125255d9 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x125255dfu);
  /* 125255df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125255e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125255e4 call 0x12527390 */
  push32(0x125255e9u); f_12527390();
L_125255e9:;
  /* 125255e9 mov esi, esp */
  ESI = (ESP);
  /* 125255eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125255ed call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125255f3u);
  /* 125255f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125255f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125255f8 call 0x12527390 */
  push32(0x125255fdu); f_12527390();
  /* 125255fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525604 je 0x125256ef */
  if (C.zf) goto L_125256ef;
  /* 1252560a push 0x12554800 */
  push32((uint32_t)(0x12554800u));
  /* 1252560f call 0x12521005 */
  push32(0x12525614u); f_12521005();
  /* 12525614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525619 jne 0x125256ef */
  if (!C.zf) goto L_125256ef;
  /* 1252561f mov esi, esp */
  ESI = (ESP);
  /* 12525621 push 9 */
  push32((uint32_t)(0x9u));
  /* 12525623 call dword ptr [0x125574d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d4))), 0x12525629u);
  /* 12525629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252562c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252562e call 0x12527390 */
  push32(0x12525633u); f_12527390();
  /* 12525633 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252563a je 0x125256ef */
  if (C.zf) goto L_125256ef;
  /* 12525640 mov esi, esp */
  ESI = (ESP);
  /* 12525642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525644 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12525646 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252564cu);
  /* 1252564c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252564f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525651 call 0x12527390 */
  push32(0x12525656u); f_12527390();
  /* 12525656 mov esi, esp */
  ESI = (ESP);
  /* 12525658 push 0x1254f640 */
  push32((uint32_t)(0x1254f640u));
  /* 1252565d call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12525663u);
  /* 12525663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525666 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525668 call 0x12527390 */
  push32(0x1252566du); f_12527390();
  /* 1252566d mov esi, esp */
  ESI = (ESP);
  /* 1252566f push 0 */
  push32((uint32_t)(0x0u));
  /* 12525671 push 0x12554820 */
  push32((uint32_t)(0x12554820u));
  /* 12525676 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525678 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252567eu);
  /* 1252567e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525683 call 0x12527390 */
  push32(0x12525688u); f_12527390();
  /* 12525688 mov esi, esp */
  ESI = (ESP);
  /* 1252568a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252568c push 0x12554828 */
  push32((uint32_t)(0x12554828u));
  /* 12525691 push 5 */
  push32((uint32_t)(0x5u));
  /* 12525693 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525699u);
  /* 12525699 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252569c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252569e call 0x12527390 */
  push32(0x125256a3u); f_12527390();
  /* 125256a3 mov esi, esp */
  ESI = (ESP);
  /* 125256a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125256a7 push 0x125547f0 */
  push32((uint32_t)(0x125547f0u));
  /* 125256ac push 5 */
  push32((uint32_t)(0x5u));
  /* 125256ae call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125256b4u);
  /* 125256b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125256b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125256b9 call 0x12527390 */
  push32(0x125256beu); f_12527390();
  /* 125256be mov esi, esp */
  ESI = (ESP);
  /* 125256c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125256c2 push 0x12554750 */
  push32((uint32_t)(0x12554750u));
  /* 125256c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 125256c9 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125256cfu);
  /* 125256cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125256d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125256d4 call 0x12527390 */
  push32(0x125256d9u); f_12527390();
  /* 125256d9 mov esi, esp */
  ESI = (ESP);
  /* 125256db push 0 */
  push32((uint32_t)(0x0u));
  /* 125256dd push 5 */
  push32((uint32_t)(0x5u));
  /* 125256df call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x125256e5u);
  /* 125256e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125256e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125256ea call 0x12527390 */
  push32(0x125256efu); f_12527390();
L_125256ef:;
  /* 125256ef mov esi, esp */
  ESI = (ESP);
  /* 125256f1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125256f3 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125256f9u);
  /* 125256f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125256fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125256fe call 0x12527390 */
  push32(0x12525703u); f_12527390();
  /* 12525703 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252570a je 0x125257b3 */
  if (C.zf) goto L_125257b3;
  /* 12525710 mov esi, esp */
  ESI = (ESP);
  /* 12525712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525714 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525719 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x1252571fu);
  /* 1252571f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525724 call 0x12527390 */
  push32(0x12525729u); f_12527390();
  /* 12525729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252572b jle 0x125257b3 */
  if ((C.zf||C.sf!=C.of)) goto L_125257b3;
  /* 12525731 mov esi, esp */
  ESI = (ESP);
  /* 12525733 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525735 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12525737 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252573du);
  /* 1252573d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525742 call 0x12527390 */
  push32(0x12525747u); f_12527390();
  /* 12525747 mov esi, esp */
  ESI = (ESP);
  /* 12525749 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 1252574e push 0xa */
  push32((uint32_t)(0xau));
  /* 12525750 call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x12525756u);
  /* 12525756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252575b call 0x12527390 */
  push32(0x12525760u); f_12527390();
  /* 12525760 mov esi, esp */
  ESI = (ESP);
  /* 12525762 push 0x1254f634 */
  push32((uint32_t)(0x1254f634u));
  /* 12525767 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x1252576du);
  /* 1252576d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525772 call 0x12527390 */
  push32(0x12525777u); f_12527390();
  /* 12525777 mov esi, esp */
  ESI = (ESP);
  /* 12525779 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1252577b call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x12525781u);
  /* 12525781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525786 call 0x12527390 */
  push32(0x1252578bu); f_12527390();
  /* 1252578b mov esi, esp */
  ESI = (ESP);
  /* 1252578d push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1252578f call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x12525795u);
  /* 12525795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525798 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252579a call 0x12527390 */
  push32(0x1252579fu); f_12527390();
  /* 1252579f mov esi, esp */
  ESI = (ESP);
  /* 125257a1 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125257a3 call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x125257a9u);
  /* 125257a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125257ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125257ae call 0x12527390 */
  push32(0x125257b3u); f_12527390();
L_125257b3:;
  /* 125257b3 mov esi, esp */
  ESI = (ESP);
  /* 125257b5 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 125257b7 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125257bdu);
  /* 125257bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125257c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125257c2 call 0x12527390 */
  push32(0x125257c7u); f_12527390();
  /* 125257c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125257cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125257ce je 0x125258bd */
  if (C.zf) goto L_125258bd;
  /* 125257d4 mov esi, esp */
  ESI = (ESP);
  /* 125257d6 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125257d8 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125257deu);
  /* 125257de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125257e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125257e3 call 0x12527390 */
  push32(0x125257e8u); f_12527390();
  /* 125257e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125257ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125257ef jne 0x125258bd */
  if (!C.zf) goto L_125258bd;
  /* 125257f5 mov esi, esp */
  ESI = (ESP);
  /* 125257f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125257f9 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 125257fe call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12525804u);
  /* 12525804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525809 call 0x12527390 */
  push32(0x1252580eu); f_12527390();
  /* 1252580e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525810 jne 0x125258bd */
  if (!C.zf) goto L_125258bd;
  /* 12525816 mov esi, esp */
  ESI = (ESP);
  /* 12525818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252581a push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 1252581f call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12525825u);
  /* 12525825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252582a call 0x12527390 */
  push32(0x1252582fu); f_12527390();
  /* 1252582f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525831 jle 0x125258bd */
  if ((C.zf||C.sf!=C.of)) goto L_125258bd;
  /* 12525837 mov esi, esp */
  ESI = (ESP);
  /* 12525839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252583b push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1252583d call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525843u);
  /* 12525843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525848 call 0x12527390 */
  push32(0x1252584du); f_12527390();
  /* 1252584d mov esi, esp */
  ESI = (ESP);
  /* 1252584f push 0x1254f628 */
  push32((uint32_t)(0x1254f628u));
  /* 12525854 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x1252585au);
  /* 1252585a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252585d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252585f call 0x12527390 */
  push32(0x12525864u); f_12527390();
  /* 12525864 mov esi, esp */
  ESI = (ESP);
  /* 12525866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525868 push 0x12554818 */
  push32((uint32_t)(0x12554818u));
  /* 1252586d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252586f call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525875u);
  /* 12525875 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252587a call 0x12527390 */
  push32(0x1252587fu); f_12527390();
  /* 1252587f mov esi, esp */
  ESI = (ESP);
  /* 12525881 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525883 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525885 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x1252588bu);
  /* 1252588b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252588e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525890 call 0x12527390 */
  push32(0x12525895u); f_12527390();
  /* 12525895 mov esi, esp */
  ESI = (ESP);
  /* 12525897 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1252589c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1252589e call dword ptr [0x12557484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557484))), 0x125258a4u);
  /* 125258a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125258a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125258a9 call 0x12527390 */
  push32(0x125258aeu); f_12527390();
  /* 125258ae mov esi, esp */
  ESI = (ESP);
  /* 125258b0 call dword ptr [0x125574ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ec))), 0x125258b6u);
  /* 125258b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125258b8 call 0x12527390 */
  push32(0x125258bdu); f_12527390();
L_125258bd:;
  /* 125258bd mov esi, esp */
  ESI = (ESP);
  /* 125258bf push 0xf */
  push32((uint32_t)(0xfu));
  /* 125258c1 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x125258c7u);
  /* 125258c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125258ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125258cc call 0x12527390 */
  push32(0x125258d1u); f_12527390();
  /* 125258d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125258d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125258d8 je 0x12525abc */
  if (C.zf) goto L_12525abc;
  /* 125258de mov esi, esp */
  ESI = (ESP);
  /* 125258e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 125258e2 call dword ptr [0x125574d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574d4))), 0x125258e8u);
  /* 125258e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125258eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125258ed call 0x12527390 */
  push32(0x125258f2u); f_12527390();
  /* 125258f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125258f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125258f9 je 0x12525abc */
  if (C.zf) goto L_12525abc;
  /* 125258ff mov esi, esp */
  ESI = (ESP);
  /* 12525901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525903 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12525905 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x1252590bu);
  /* 1252590b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252590e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525910 call 0x12527390 */
  push32(0x12525915u); f_12527390();
  /* 12525915 mov esi, esp */
  ESI = (ESP);
  /* 12525917 push 0x1254f61c */
  push32((uint32_t)(0x1254f61cu));
  /* 1252591c call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12525922u);
  /* 12525922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525927 call 0x12527390 */
  push32(0x1252592cu); f_12527390();
  /* 1252592c mov esi, esp */
  ESI = (ESP);
  /* 1252592e push 0 */
  push32((uint32_t)(0x0u));
  /* 12525930 push 0x12554788 */
  push32((uint32_t)(0x12554788u));
  /* 12525935 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525937 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252593du);
  /* 1252593d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525942 call 0x12527390 */
  push32(0x12525947u); f_12527390();
  /* 12525947 mov esi, esp */
  ESI = (ESP);
  /* 12525949 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252594b push 0x125547a0 */
  push32((uint32_t)(0x125547a0u));
  /* 12525950 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525952 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525958u);
  /* 12525958 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252595b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252595d call 0x12527390 */
  push32(0x12525962u); f_12527390();
  /* 12525962 mov esi, esp */
  ESI = (ESP);
  /* 12525964 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525966 push 0x125547c8 */
  push32((uint32_t)(0x125547c8u));
  /* 1252596b push 1 */
  push32((uint32_t)(0x1u));
  /* 1252596d call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525973u);
  /* 12525973 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525978 call 0x12527390 */
  push32(0x1252597du); f_12527390();
  /* 1252597d mov esi, esp */
  ESI = (ESP);
  /* 1252597f push 1 */
  push32((uint32_t)(0x1u));
  /* 12525981 push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 12525986 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525988 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x1252598eu);
  /* 1252598e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525991 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525993 call 0x12527390 */
  push32(0x12525998u); f_12527390();
  /* 12525998 mov esi, esp */
  ESI = (ESP);
  /* 1252599a push 1 */
  push32((uint32_t)(0x1u));
  /* 1252599c push 0x125547b0 */
  push32((uint32_t)(0x125547b0u));
  /* 125259a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125259a3 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125259a9u);
  /* 125259a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125259ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125259ae call 0x12527390 */
  push32(0x125259b3u); f_12527390();
  /* 125259b3 mov esi, esp */
  ESI = (ESP);
  /* 125259b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125259b7 push 0x125546b8 */
  push32((uint32_t)(0x125546b8u));
  /* 125259bc push 1 */
  push32((uint32_t)(0x1u));
  /* 125259be call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125259c4u);
  /* 125259c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125259c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125259c9 call 0x12527390 */
  push32(0x125259ceu); f_12527390();
  /* 125259ce mov esi, esp */
  ESI = (ESP);
  /* 125259d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125259d2 push 0x125546d0 */
  push32((uint32_t)(0x125546d0u));
  /* 125259d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125259d9 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125259dfu);
  /* 125259df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125259e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125259e4 call 0x12527390 */
  push32(0x125259e9u); f_12527390();
  /* 125259e9 mov esi, esp */
  ESI = (ESP);
  /* 125259eb push 1 */
  push32((uint32_t)(0x1u));
  /* 125259ed push 0x125546f0 */
  push32((uint32_t)(0x125546f0u));
  /* 125259f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125259f4 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x125259fau);
  /* 125259fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125259fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125259ff call 0x12527390 */
  push32(0x12525a04u); f_12527390();
  /* 12525a04 mov esi, esp */
  ESI = (ESP);
  /* 12525a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a08 push 0x125546e0 */
  push32((uint32_t)(0x125546e0u));
  /* 12525a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a0f call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a15u);
  /* 12525a15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525a1a call 0x12527390 */
  push32(0x12525a1fu); f_12527390();
  /* 12525a1f mov esi, esp */
  ESI = (ESP);
  /* 12525a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a23 push 0x125547b8 */
  push32((uint32_t)(0x125547b8u));
  /* 12525a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a2a call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a30u);
  /* 12525a30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525a35 call 0x12527390 */
  push32(0x12525a3au); f_12527390();
  /* 12525a3a mov esi, esp */
  ESI = (ESP);
  /* 12525a3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a3e push 0x12554710 */
  push32((uint32_t)(0x12554710u));
  /* 12525a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a45 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a4bu);
  /* 12525a4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525a50 call 0x12527390 */
  push32(0x12525a55u); f_12527390();
  /* 12525a55 mov esi, esp */
  ESI = (ESP);
  /* 12525a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a59 push 0x125546d8 */
  push32((uint32_t)(0x125546d8u));
  /* 12525a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a60 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a66u);
  /* 12525a66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525a6b call 0x12527390 */
  push32(0x12525a70u); f_12527390();
  /* 12525a70 mov esi, esp */
  ESI = (ESP);
  /* 12525a72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a74 push 0x125546c0 */
  push32((uint32_t)(0x125546c0u));
  /* 12525a79 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a7b call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a81u);
  /* 12525a81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525a86 call 0x12527390 */
  push32(0x12525a8bu); f_12527390();
  /* 12525a8b mov esi, esp */
  ESI = (ESP);
  /* 12525a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a8f push 0x125547f8 */
  push32((uint32_t)(0x125547f8u));
  /* 12525a94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12525a96 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12525a9cu);
  /* 12525a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525aa1 call 0x12527390 */
  push32(0x12525aa6u); f_12527390();
  /* 12525aa6 mov esi, esp */
  ESI = (ESP);
  /* 12525aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525aaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12525aac call dword ptr [0x12557464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557464))), 0x12525ab2u);
  /* 12525ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525ab7 call 0x12527390 */
  push32(0x12525abcu); f_12527390();
L_12525abc:;
  /* 12525abc mov esi, esp */
  ESI = (ESP);
  /* 12525abe push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12525ac0 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525ac6u);
  /* 12525ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525acb call 0x12527390 */
  push32(0x12525ad0u); f_12527390();
  /* 12525ad0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525ad7 je 0x12525e46 */
  if (C.zf) goto L_12525e46;
  /* 12525add mov esi, esp */
  ESI = (ESP);
  /* 12525adf push 0xf */
  push32((uint32_t)(0xfu));
  /* 12525ae1 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525ae7u);
  /* 12525ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525aec call 0x12527390 */
  push32(0x12525af1u); f_12527390();
  /* 12525af1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525af8 jne 0x12525e46 */
  if (!C.zf) goto L_12525e46;
  /* 12525afe mov esi, esp */
  ESI = (ESP);
  /* 12525b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b02 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b07 push 0x12554788 */
  push32((uint32_t)(0x12554788u));
  /* 12525b0c call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525b12u);
  /* 12525b12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525b17 call 0x12527390 */
  push32(0x12525b1cu); f_12527390();
  /* 12525b1c mov esi, esp */
  ESI = (ESP);
  /* 12525b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b20 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b25 push 0x125547a0 */
  push32((uint32_t)(0x125547a0u));
  /* 12525b2a call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525b30u);
  /* 12525b30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525b35 call 0x12527390 */
  push32(0x12525b3au); f_12527390();
  /* 12525b3a mov esi, esp */
  ESI = (ESP);
  /* 12525b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b3e push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b43 push 0x125547c8 */
  push32((uint32_t)(0x125547c8u));
  /* 12525b48 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525b4eu);
  /* 12525b4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525b53 call 0x12527390 */
  push32(0x12525b58u); f_12527390();
  /* 12525b58 mov esi, esp */
  ESI = (ESP);
  /* 12525b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b5c push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b61 push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 12525b66 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525b6cu);
  /* 12525b6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525b71 call 0x12527390 */
  push32(0x12525b76u); f_12527390();
  /* 12525b76 mov esi, esp */
  ESI = (ESP);
  /* 12525b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b7a push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b7f push 0x125547b0 */
  push32((uint32_t)(0x125547b0u));
  /* 12525b84 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525b8au);
  /* 12525b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525b8f call 0x12527390 */
  push32(0x12525b94u); f_12527390();
  /* 12525b94 mov esi, esp */
  ESI = (ESP);
  /* 12525b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525b98 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525b9d push 0x125546b8 */
  push32((uint32_t)(0x125546b8u));
  /* 12525ba2 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525ba8u);
  /* 12525ba8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525bad call 0x12527390 */
  push32(0x12525bb2u); f_12527390();
  /* 12525bb2 mov esi, esp */
  ESI = (ESP);
  /* 12525bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525bb6 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525bbb push 0x125546d0 */
  push32((uint32_t)(0x125546d0u));
  /* 12525bc0 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525bc6u);
  /* 12525bc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525bcb call 0x12527390 */
  push32(0x12525bd0u); f_12527390();
  /* 12525bd0 mov esi, esp */
  ESI = (ESP);
  /* 12525bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525bd4 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525bd9 push 0x125546f0 */
  push32((uint32_t)(0x125546f0u));
  /* 12525bde call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525be4u);
  /* 12525be4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525be7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525be9 call 0x12527390 */
  push32(0x12525beeu); f_12527390();
  /* 12525bee mov esi, esp */
  ESI = (ESP);
  /* 12525bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525bf2 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525bf7 push 0x125546e0 */
  push32((uint32_t)(0x125546e0u));
  /* 12525bfc call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c02u);
  /* 12525c02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c07 call 0x12527390 */
  push32(0x12525c0cu); f_12527390();
  /* 12525c0c mov esi, esp */
  ESI = (ESP);
  /* 12525c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12525c10 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525c15 push 0x125547b8 */
  push32((uint32_t)(0x125547b8u));
  /* 12525c1a call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c20u);
  /* 12525c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c25 call 0x12527390 */
  push32(0x12525c2au); f_12527390();
  /* 12525c2a mov esi, esp */
  ESI = (ESP);
  /* 12525c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12525c2e push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525c33 push 0x12554710 */
  push32((uint32_t)(0x12554710u));
  /* 12525c38 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c3eu);
  /* 12525c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c43 call 0x12527390 */
  push32(0x12525c48u); f_12527390();
  /* 12525c48 mov esi, esp */
  ESI = (ESP);
  /* 12525c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12525c4c push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525c51 push 0x125546d8 */
  push32((uint32_t)(0x125546d8u));
  /* 12525c56 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c5cu);
  /* 12525c5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c61 call 0x12527390 */
  push32(0x12525c66u); f_12527390();
  /* 12525c66 mov esi, esp */
  ESI = (ESP);
  /* 12525c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525c6a push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525c6f push 0x125546c0 */
  push32((uint32_t)(0x125546c0u));
  /* 12525c74 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c7au);
  /* 12525c7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c7f call 0x12527390 */
  push32(0x12525c84u); f_12527390();
  /* 12525c84 mov esi, esp */
  ESI = (ESP);
  /* 12525c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525c88 push 0x12554588 */
  push32((uint32_t)(0x12554588u));
  /* 12525c8d push 0x125547f8 */
  push32((uint32_t)(0x125547f8u));
  /* 12525c92 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525c98u);
  /* 12525c98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525c9d call 0x12527390 */
  push32(0x12525ca2u); f_12527390();
  /* 12525ca2 mov esi, esp */
  ESI = (ESP);
  /* 12525ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525ca6 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525cab push 0x12554788 */
  push32((uint32_t)(0x12554788u));
  /* 12525cb0 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525cb6u);
  /* 12525cb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525cbb call 0x12527390 */
  push32(0x12525cc0u); f_12527390();
  /* 12525cc0 mov esi, esp */
  ESI = (ESP);
  /* 12525cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525cc4 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525cc9 push 0x125547a0 */
  push32((uint32_t)(0x125547a0u));
  /* 12525cce call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525cd4u);
  /* 12525cd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525cd9 call 0x12527390 */
  push32(0x12525cdeu); f_12527390();
  /* 12525cde mov esi, esp */
  ESI = (ESP);
  /* 12525ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525ce2 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525ce7 push 0x125547c8 */
  push32((uint32_t)(0x125547c8u));
  /* 12525cec call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525cf2u);
  /* 12525cf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525cf7 call 0x12527390 */
  push32(0x12525cfcu); f_12527390();
  /* 12525cfc mov esi, esp */
  ESI = (ESP);
  /* 12525cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d00 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d05 push 0x12554770 */
  push32((uint32_t)(0x12554770u));
  /* 12525d0a call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525d10u);
  /* 12525d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525d15 call 0x12527390 */
  push32(0x12525d1au); f_12527390();
  /* 12525d1a mov esi, esp */
  ESI = (ESP);
  /* 12525d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d1e push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d23 push 0x125547b0 */
  push32((uint32_t)(0x125547b0u));
  /* 12525d28 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525d2eu);
  /* 12525d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525d33 call 0x12527390 */
  push32(0x12525d38u); f_12527390();
  /* 12525d38 mov esi, esp */
  ESI = (ESP);
  /* 12525d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d3c push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d41 push 0x125546b8 */
  push32((uint32_t)(0x125546b8u));
  /* 12525d46 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525d4cu);
  /* 12525d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525d51 call 0x12527390 */
  push32(0x12525d56u); f_12527390();
  /* 12525d56 mov esi, esp */
  ESI = (ESP);
  /* 12525d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d5a push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d5f push 0x125546d0 */
  push32((uint32_t)(0x125546d0u));
  /* 12525d64 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525d6au);
  /* 12525d6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525d6f call 0x12527390 */
  push32(0x12525d74u); f_12527390();
  /* 12525d74 mov esi, esp */
  ESI = (ESP);
  /* 12525d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d78 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d7d push 0x125546f0 */
  push32((uint32_t)(0x125546f0u));
  /* 12525d82 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525d88u);
  /* 12525d88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525d8d call 0x12527390 */
  push32(0x12525d92u); f_12527390();
  /* 12525d92 mov esi, esp */
  ESI = (ESP);
  /* 12525d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525d96 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525d9b push 0x125546e0 */
  push32((uint32_t)(0x125546e0u));
  /* 12525da0 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525da6u);
  /* 12525da6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525dab call 0x12527390 */
  push32(0x12525db0u); f_12527390();
  /* 12525db0 mov esi, esp */
  ESI = (ESP);
  /* 12525db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525db4 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525db9 push 0x125547b8 */
  push32((uint32_t)(0x125547b8u));
  /* 12525dbe call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525dc4u);
  /* 12525dc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525dc9 call 0x12527390 */
  push32(0x12525dceu); f_12527390();
  /* 12525dce mov esi, esp */
  ESI = (ESP);
  /* 12525dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525dd2 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525dd7 push 0x12554710 */
  push32((uint32_t)(0x12554710u));
  /* 12525ddc call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525de2u);
  /* 12525de2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525de7 call 0x12527390 */
  push32(0x12525decu); f_12527390();
  /* 12525dec mov esi, esp */
  ESI = (ESP);
  /* 12525dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12525df0 push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525df5 push 0x125546d8 */
  push32((uint32_t)(0x125546d8u));
  /* 12525dfa call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525e00u);
  /* 12525e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525e05 call 0x12527390 */
  push32(0x12525e0au); f_12527390();
  /* 12525e0a mov esi, esp */
  ESI = (ESP);
  /* 12525e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12525e0e push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525e13 push 0x125546c0 */
  push32((uint32_t)(0x125546c0u));
  /* 12525e18 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525e1eu);
  /* 12525e1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525e23 call 0x12527390 */
  push32(0x12525e28u); f_12527390();
  /* 12525e28 mov esi, esp */
  ESI = (ESP);
  /* 12525e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12525e2c push 0x125545a8 */
  push32((uint32_t)(0x125545a8u));
  /* 12525e31 push 0x125547f8 */
  push32((uint32_t)(0x125547f8u));
  /* 12525e36 call dword ptr [0x125574ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574ac))), 0x12525e3cu);
  /* 12525e3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525e41 call 0x12527390 */
  push32(0x12525e46u); f_12527390();
L_12525e46:;
  /* 12525e46 mov esi, esp */
  ESI = (ESP);
  /* 12525e48 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12525e4a call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525e50u);
  /* 12525e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525e55 call 0x12527390 */
  push32(0x12525e5au); f_12527390();
  /* 12525e5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525e61 je 0x12525ecd */
  if (C.zf) goto L_12525ecd;
  /* 12525e63 mov esi, esp */
  ESI = (ESP);
  /* 12525e65 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12525e67 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525e6du);
  /* 12525e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525e72 call 0x12527390 */
  push32(0x12525e77u); f_12527390();
  /* 12525e77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525e7e je 0x12525ecd */
  if (C.zf) goto L_12525ecd;
  /* 12525e80 push 0x12554640 */
  push32((uint32_t)(0x12554640u));
  /* 12525e85 call 0x12521005 */
  push32(0x12525e8au); f_12521005();
  /* 12525e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525e8f jne 0x12525ecd */
  if (!C.zf) goto L_12525ecd;
  /* 12525e91 mov esi, esp */
  ESI = (ESP);
  /* 12525e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525e95 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12525e97 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525e9du);
  /* 12525e9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525ea2 call 0x12527390 */
  push32(0x12525ea7u); f_12527390();
  /* 12525ea7 mov esi, esp */
  ESI = (ESP);
  /* 12525ea9 push 0x1254f610 */
  push32((uint32_t)(0x1254f610u));
  /* 12525eae call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12525eb4u);
  /* 12525eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525eb9 call 0x12527390 */
  push32(0x12525ebeu); f_12527390();
  /* 12525ebe mov esi, esp */
  ESI = (ESP);
  /* 12525ec0 call dword ptr [0x125574f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f0))), 0x12525ec6u);
  /* 12525ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525ec8 call 0x12527390 */
  push32(0x12525ecdu); f_12527390();
L_12525ecd:;
  /* 12525ecd mov esi, esp */
  ESI = (ESP);
  /* 12525ecf push 0xe */
  push32((uint32_t)(0xeu));
  /* 12525ed1 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525ed7u);
  /* 12525ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525edc call 0x12527390 */
  push32(0x12525ee1u); f_12527390();
  /* 12525ee1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525ee8 je 0x12525f97 */
  if (C.zf) goto L_12525f97;
  /* 12525eee mov esi, esp */
  ESI = (ESP);
  /* 12525ef0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12525ef2 call dword ptr [0x125574b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574b4))), 0x12525ef8u);
  /* 12525ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525efb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525efd call 0x12527390 */
  push32(0x12525f02u); f_12527390();
  /* 12525f02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525f09 je 0x12525f97 */
  if (C.zf) goto L_12525f97;
  /* 12525f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12525f11 push 0x12554630 */
  push32((uint32_t)(0x12554630u));
  /* 12525f16 call 0x1252100f */
  push32(0x12525f1bu); f_1252100f();
  /* 12525f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525f20 jne 0x12525f97 */
  if (!C.zf) goto L_12525f97;
  /* 12525f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525f24 push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 12525f29 call 0x1252100f */
  push32(0x12525f2eu); f_1252100f();
  /* 12525f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525f33 jne 0x12525f97 */
  if (!C.zf) goto L_12525f97;
  /* 12525f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525f37 push 0x12554620 */
  push32((uint32_t)(0x12554620u));
  /* 12525f3c call 0x1252100f */
  push32(0x12525f41u); f_1252100f();
  /* 12525f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525f46 jne 0x12525f97 */
  if (!C.zf) goto L_12525f97;
  /* 12525f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525f4a push 0x125545f8 */
  push32((uint32_t)(0x125545f8u));
  /* 12525f4f call 0x1252100f */
  push32(0x12525f54u); f_1252100f();
  /* 12525f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525f59 jne 0x12525f97 */
  if (!C.zf) goto L_12525f97;
  /* 12525f5b mov esi, esp */
  ESI = (ESP);
  /* 12525f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12525f5f push 0xe */
  push32((uint32_t)(0xeu));
  /* 12525f61 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525f67u);
  /* 12525f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525f6c call 0x12527390 */
  push32(0x12525f71u); f_12527390();
  /* 12525f71 mov esi, esp */
  ESI = (ESP);
  /* 12525f73 push 0x1254f604 */
  push32((uint32_t)(0x1254f604u));
  /* 12525f78 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12525f7eu);
  /* 12525f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525f83 call 0x12527390 */
  push32(0x12525f88u); f_12527390();
  /* 12525f88 mov esi, esp */
  ESI = (ESP);
  /* 12525f8a call dword ptr [0x125574f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574f0))), 0x12525f90u);
  /* 12525f90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525f92 call 0x12527390 */
  push32(0x12525f97u); f_12527390();
L_12525f97:;
  /* 12525f97 mov esi, esp */
  ESI = (ESP);
  /* 12525f99 push 0xa */
  push32((uint32_t)(0xau));
  /* 12525f9b call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12525fa1u);
  /* 12525fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525fa6 call 0x12527390 */
  push32(0x12525fabu); f_12527390();
  /* 12525fab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12525fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525fb2 je 0x12526016 */
  if (C.zf) goto L_12526016;
  /* 12525fb4 mov esi, esp */
  ESI = (ESP);
  /* 12525fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525fb8 push 0x125545a0 */
  push32((uint32_t)(0x125545a0u));
  /* 12525fbd call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x12525fc3u);
  /* 12525fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525fc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525fc8 call 0x12527390 */
  push32(0x12525fcdu); f_12527390();
  /* 12525fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12525fcf jle 0x12526016 */
  if ((C.zf||C.sf!=C.of)) goto L_12526016;
  /* 12525fd1 mov esi, esp */
  ESI = (ESP);
  /* 12525fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12525fd5 push 0xa */
  push32((uint32_t)(0xau));
  /* 12525fd7 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x12525fddu);
  /* 12525fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525fe2 call 0x12527390 */
  push32(0x12525fe7u); f_12527390();
  /* 12525fe7 mov esi, esp */
  ESI = (ESP);
  /* 12525fe9 push 0x1254f5f8 */
  push32((uint32_t)(0x1254f5f8u));
  /* 12525fee call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x12525ff4u);
  /* 12525ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12525ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12525ff9 call 0x12527390 */
  push32(0x12525ffeu); f_12527390();
  /* 12525ffe mov esi, esp */
  ESI = (ESP);
  /* 12526000 push 0 */
  push32((uint32_t)(0x0u));
  /* 12526002 push 5 */
  push32((uint32_t)(0x5u));
  /* 12526004 push 0 */
  push32((uint32_t)(0x0u));
  /* 12526006 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252600cu);
  /* 1252600c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252600f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526011 call 0x12527390 */
  push32(0x12526016u); f_12527390();
L_12526016:;
  /* 12526016 mov esi, esp */
  ESI = (ESP);
  /* 12526018 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 1252601a call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x12526020u);
  /* 12526020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526025 call 0x12527390 */
  push32(0x1252602au); f_12527390();
  /* 1252602a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252602f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12526031 je 0x12526085 */
  if (C.zf) goto L_12526085;
  /* 12526033 mov esi, esp */
  ESI = (ESP);
  /* 12526035 push 0xa */
  push32((uint32_t)(0xau));
  /* 12526037 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252603du);
  /* 1252603d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526040 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526042 call 0x12527390 */
  push32(0x12526047u); f_12527390();
  /* 12526047 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252604c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252604e jne 0x12526085 */
  if (!C.zf) goto L_12526085;
  /* 12526050 mov esi, esp */
  ESI = (ESP);
  /* 12526052 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12526054 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252605au);
  /* 1252605a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252605d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252605f call 0x12527390 */
  push32(0x12526064u); f_12527390();
  /* 12526064 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12526069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252606b je 0x12526085 */
  if (C.zf) goto L_12526085;
  /* 1252606d mov esi, esp */
  ESI = (ESP);
  /* 1252606f push 0 */
  push32((uint32_t)(0x0u));
  /* 12526071 push 5 */
  push32((uint32_t)(0x5u));
  /* 12526073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12526075 call dword ptr [0x12557480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557480))), 0x1252607bu);
  /* 1252607b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252607e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526080 call 0x12527390 */
  push32(0x12526085u); f_12527390();
L_12526085:;
  /* 12526085 mov esi, esp */
  ESI = (ESP);
  /* 12526087 push 9 */
  push32((uint32_t)(0x9u));
  /* 12526089 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252608fu);
  /* 1252608f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526094 call 0x12527390 */
  push32(0x12526099u); f_12527390();
  /* 12526099 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252609e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125260a0 je 0x12526191 */
  if (C.zf) goto L_12526191;
  /* 125260a6 mov esi, esp */
  ESI = (ESP);
  /* 125260a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125260aa push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 125260af call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125260b5u);
  /* 125260b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125260b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125260ba call 0x12527390 */
  push32(0x125260bfu); f_12527390();
  /* 125260bf cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125260c2 jg 0x12526191 */
  if ((!C.zf&&C.sf==C.of)) goto L_12526191;
  /* 125260c8 mov esi, esp */
  ESI = (ESP);
  /* 125260ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125260cc push 0x12554540 */
  push32((uint32_t)(0x12554540u));
  /* 125260d1 call dword ptr [0x1255749c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255749c))), 0x125260d7u);
  /* 125260d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125260da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125260dc call 0x12527390 */
  push32(0x125260e1u); f_12527390();
  /* 125260e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125260e3 jle 0x12526191 */
  if ((C.zf||C.sf!=C.of)) goto L_12526191;
  /* 125260e9 mov esi, esp */
  ESI = (ESP);
  /* 125260eb push 0 */
  push32((uint32_t)(0x0u));
  /* 125260ed push 9 */
  push32((uint32_t)(0x9u));
  /* 125260ef call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125260f5u);
  /* 125260f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125260f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125260fa call 0x12527390 */
  push32(0x125260ffu); f_12527390();
  /* 125260ff mov esi, esp */
  ESI = (ESP);
  /* 12526101 push 0x1254f5ec */
  push32((uint32_t)(0x1254f5ecu));
  /* 12526106 call dword ptr [0x12557488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557488))), 0x1252610cu);
  /* 1252610c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252610f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526111 call 0x12527390 */
  push32(0x12526116u); f_12527390();
  /* 12526116 mov esi, esp */
  ESI = (ESP);
  /* 12526118 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252611a push 0x12554700 */
  push32((uint32_t)(0x12554700u));
  /* 1252611f push 1 */
  push32((uint32_t)(0x1u));
  /* 12526121 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12526127u);
  /* 12526127 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252612a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252612c call 0x12527390 */
  push32(0x12526131u); f_12527390();
  /* 12526131 mov esi, esp */
  ESI = (ESP);
  /* 12526133 push 1 */
  push32((uint32_t)(0x1u));
  /* 12526135 call dword ptr [0x12557470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557470))), 0x1252613bu);
  /* 1252613b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252613e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526140 call 0x12527390 */
  push32(0x12526145u); f_12527390();
  /* 12526145 mov esi, esp */
  ESI = (ESP);
  /* 12526147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12526149 push 0x12554810 */
  push32((uint32_t)(0x12554810u));
  /* 1252614e push 1 */
  push32((uint32_t)(0x1u));
  /* 12526150 call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12526156u);
  /* 12526156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252615b call 0x12527390 */
  push32(0x12526160u); f_12527390();
  /* 12526160 mov esi, esp */
  ESI = (ESP);
  /* 12526162 push 1 */
  push32((uint32_t)(0x1u));
  /* 12526164 push 0x12554808 */
  push32((uint32_t)(0x12554808u));
  /* 12526169 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252616b call dword ptr [0x12557478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557478))), 0x12526171u);
  /* 12526171 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526176 call 0x12527390 */
  push32(0x1252617bu); f_12527390();
  /* 1252617b mov esi, esp */
  ESI = (ESP);
  /* 1252617d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252617f push 1 */
  push32((uint32_t)(0x1u));
  /* 12526181 call dword ptr [0x1255746c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255746c))), 0x12526187u);
  /* 12526187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252618a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252618c call 0x12527390 */
  push32(0x12526191u); f_12527390();
L_12526191:;
  /* 12526191 mov esi, esp */
  ESI = (ESP);
  /* 12526193 push 0x6f */
  push32((uint32_t)(0x6fu));
  /* 12526195 call dword ptr [0x1255745c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255745c))), 0x1252619bu);
  /* 1252619b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252619e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125261a0 call 0x12527390 */
  push32(0x125261a5u); f_12527390();
  /* 125261a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125261aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125261ac je 0x12526227 */
  if (C.zf) goto L_12526227;
  /* 125261ae push 0 */
  push32((uint32_t)(0x0u));
  /* 125261b0 push 0x12554638 */
  push32((uint32_t)(0x12554638u));
  /* 125261b5 call 0x1252100f */
  push32(0x125261bau); f_1252100f();
  /* 125261ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125261bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125261bf jle 0x12526227 */
  if ((C.zf||C.sf!=C.of)) goto L_12526227;
  /* 125261c1 mov esi, esp */
  ESI = (ESP);
  /* 125261c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125261c5 push 0x6f */
  push32((uint32_t)(0x6fu));
  /* 125261c7 call dword ptr [0x12557460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557460))), 0x125261cdu);
  /* 125261cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125261d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125261d2 call 0x12527390 */
  push32(0x125261d7u); f_12527390();
  /* 125261d7 mov esi, esp */
  ESI = (ESP);
  /* 125261d9 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125261db call dword ptr [0x1255747c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255747c))), 0x125261e1u);
  /* 125261e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125261e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125261e6 call 0x12527390 */
  push32(0x125261ebu); f_12527390();
  /* 125261eb mov esi, esp */
  ESI = (ESP);
  /* 125261ed push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125261ef call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x125261f5u);
  /* 125261f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125261f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125261fa call 0x12527390 */
  push32(0x125261ffu); f_12527390();
  /* 125261ff mov esi, esp */
  ESI = (ESP);
  /* 12526201 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12526203 call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x12526209u);
  /* 12526209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252620c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252620e call 0x12527390 */
  push32(0x12526213u); f_12527390();
  /* 12526213 mov esi, esp */
  ESI = (ESP);
  /* 12526215 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12526217 call dword ptr [0x125574e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125574e0))), 0x1252621du);
  /* 1252621d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12526220 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12526222 call 0x12527390 */
  push32(0x12526227u); f_12527390();
L_12526227:;
  /* 12526227 pop edi */
  EDI = (pop32());
  /* 12526228 pop esi */
  ESI = (pop32());
  /* 12526229 pop ebx */
  EBX = (pop32());
  /* 1252622a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252622d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252622f call 0x12527390 */
  push32(0x12526234u); f_12527390();
  /* 12526234 mov esp, ebp */
  ESP = (EBP);
  /* 12526236 pop ebp */
  EBP = (pop32());
  /* 12526237 ret  */
  ESPCHK(0x125223f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x125271d0 (63 bytes, 26 insns) */
void f_125271d0(void) {
  FTRACE(0x125271d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125271d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125271d1 mov ebp, esp */
  EBP = (ESP);
  /* 125271d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125271d6 push ebx */
  push32((uint32_t)(EBX));
  /* 125271d7 push esi */
  push32((uint32_t)(ESI));
  /* 125271d8 push edi */
  push32((uint32_t)(EDI));
  /* 125271d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125271dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125271e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125271e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125271e8 mov esi, esp */
  ESI = (ESP);
  /* 125271ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125271ed push eax */
  push32((uint32_t)(EAX));
  /* 125271ee call dword ptr [0x12557450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557450))), 0x125271f4u);
  /* 125271f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125271f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125271f9 call 0x12527390 */
  push32(0x125271feu); f_12527390();
  /* 125271fe pop edi */
  EDI = (pop32());
  /* 125271ff pop esi */
  ESI = (pop32());
  /* 12527200 pop ebx */
  EBX = (pop32());
  /* 12527201 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527204 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527206 call 0x12527390 */
  push32(0x1252720bu); f_12527390();
  /* 1252720b mov esp, ebp */
  ESP = (EBP);
  /* 1252720d pop ebp */
  EBP = (pop32());
  /* 1252720e ret  */
  ESPCHK(0x125271d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x12527220 (67 bytes, 28 insns) */
void f_12527220(void) {
  FTRACE(0x12527220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527220 push ebp */
  push32((uint32_t)(EBP));
  /* 12527221 mov ebp, esp */
  EBP = (ESP);
  /* 12527223 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12527226 push ebx */
  push32((uint32_t)(EBX));
  /* 12527227 push esi */
  push32((uint32_t)(ESI));
  /* 12527228 push edi */
  push32((uint32_t)(EDI));
  /* 12527229 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1252722c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12527231 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12527236 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12527238 mov esi, esp */
  ESI = (ESP);
  /* 1252723a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1252723d push eax */
  push32((uint32_t)(EAX));
  /* 1252723e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527241 push ecx */
  push32((uint32_t)(ECX));
  /* 12527242 call dword ptr [0x12557454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557454))), 0x12527248u);
  /* 12527248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252724b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252724d call 0x12527390 */
  push32(0x12527252u); f_12527390();
  /* 12527252 pop edi */
  EDI = (pop32());
  /* 12527253 pop esi */
  ESI = (pop32());
  /* 12527254 pop ebx */
  EBX = (pop32());
  /* 12527255 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527258 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252725a call 0x12527390 */
  push32(0x1252725fu); f_12527390();
  /* 1252725f mov esp, ebp */
  ESP = (EBP);
  /* 12527261 pop ebp */
  EBP = (pop32());
  /* 12527262 ret  */
  ESPCHK(0x12527220u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12527390 (56 bytes, 28 insns) */
void f_12527390(void) {
  FTRACE(0x12527390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527390 jne 0x12527393 */
  if (!C.zf) goto L_12527393;
  /* 12527392 ret  */
  ESPCHK(0x12527390u, _esp0);
  ESP += 4; return;
L_12527393:;
  /* 12527393 push ebp */
  push32((uint32_t)(EBP));
  /* 12527394 mov ebp, esp */
  EBP = (ESP);
  /* 12527396 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12527399 push eax */
  push32((uint32_t)(EAX));
  /* 1252739a push edx */
  push32((uint32_t)(EDX));
  /* 1252739b push ebx */
  push32((uint32_t)(EBX));
  /* 1252739c push esi */
  push32((uint32_t)(ESI));
  /* 1252739d push edi */
  push32((uint32_t)(EDI));
  /* 1252739e push 0x1254f6f0 */
  push32((uint32_t)(0x1254f6f0u));
  /* 125273a3 push 0x1254f6ec */
  push32((uint32_t)(0x1254f6ecu));
  /* 125273a8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125273aa push 0x1254f6dc */
  push32((uint32_t)(0x1254f6dcu));
  /* 125273af push 1 */
  push32((uint32_t)(0x1u));
  /* 125273b1 call 0x12527760 */
  push32(0x125273b6u); f_12527760();
  /* 125273b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125273b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125273bc jne 0x125273bf */
  if (!C.zf) goto L_125273bf;
  /* 125273be int3  */
  x86_unimpl("int3 @ 0x125273be");
L_125273bf:;
  /* 125273bf pop edi */
  EDI = (pop32());
  /* 125273c0 pop esi */
  ESI = (pop32());
  /* 125273c1 pop ebx */
  EBX = (pop32());
  /* 125273c2 pop edx */
  EDX = (pop32());
  /* 125273c3 pop eax */
  EAX = (pop32());
  /* 125273c4 mov esp, ebp */
  ESP = (EBP);
  /* 125273c6 pop ebp */
  EBP = (pop32());
  /* 125273c7 ret  */
  ESPCHK(0x12527390u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x125273d0 (313 bytes, 78 insns) */
void f_125273d0(void) {
  FTRACE(0x125273d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125273d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125273d1 mov ebp, esp */
  EBP = (ESP);
  /* 125273d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125273d7 jne 0x12527497 */
  if (!C.zf) goto L_12527497;
  /* 125273dd call dword ptr [0x1255738c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255738c))), 0x125273e3u);
  /* 125273e3 mov dword ptr [0x1255494c], eax */
  w32((uint32_t)(0x1255494c), (EAX));
  /* 125273e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125273ea call 0x1252ae90 */
  push32(0x125273efu); f_1252ae90();
  /* 125273ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125273f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125273f4 jne 0x125273fd */
  if (!C.zf) goto L_125273fd;
  /* 125273f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125273f8 jmp 0x12527505 */
  goto L_12527505;
L_125273fd:;
  /* 125273fd mov eax, dword ptr [0x1255494c] */
  EAX = (r32((uint32_t)(0x1255494c)));
  /* 12527402 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12527405 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252740a mov dword ptr [0x12554958], eax */
  w32((uint32_t)(0x12554958), (EAX));
  /* 1252740f mov ecx, dword ptr [0x1255494c] */
  ECX = (r32((uint32_t)(0x1255494c)));
  /* 12527415 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252741b mov dword ptr [0x12554954], ecx */
  w32((uint32_t)(0x12554954), (ECX));
  /* 12527421 mov edx, dword ptr [0x12554954] */
  EDX = (r32((uint32_t)(0x12554954)));
  /* 12527427 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1252742a add edx, dword ptr [0x12554958] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12554958))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12527430 mov dword ptr [0x12554950], edx */
  w32((uint32_t)(0x12554950), (EDX));
  /* 12527436 mov eax, dword ptr [0x1255494c] */
  EAX = (r32((uint32_t)(0x1255494c)));
  /* 1252743b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1252743e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12527443 mov dword ptr [0x1255494c], eax */
  w32((uint32_t)(0x1255494c), (EAX));
  /* 12527448 call 0x12528000 */
  push32(0x1252744du); f_12528000();
  /* 1252744d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252744f jne 0x1252745d */
  if (!C.zf) goto L_1252745d;
  /* 12527451 call 0x1252aee0 */
  push32(0x12527456u); f_1252aee0();
  /* 12527456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12527458 jmp 0x12527505 */
  goto L_12527505;
L_1252745d:;
  /* 1252745d call dword ptr [0x12557388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557388))), 0x12527463u);
  /* 12527463 mov dword ptr [0x1255648c], eax */
  w32((uint32_t)(0x1255648c), (EAX));
  /* 12527468 call 0x1252ac70 */
  push32(0x1252746du); f_1252ac70();
  /* 1252746d mov dword ptr [0x12554934], eax */
  w32((uint32_t)(0x12554934), (EAX));
  /* 12527472 call 0x125282b0 */
  push32(0x12527477u); f_125282b0();
  /* 12527477 call 0x1252a760 */
  push32(0x1252747cu); f_1252a760();
  /* 1252747c call 0x1252a610 */
  push32(0x12527481u); f_1252a610();
  /* 12527481 call 0x12527e00 */
  push32(0x12527486u); f_12527e00();
  /* 12527486 mov ecx, dword ptr [0x12554930] */
  ECX = (r32((uint32_t)(0x12554930)));
  /* 1252748c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252748f mov dword ptr [0x12554930], ecx */
  w32((uint32_t)(0x12554930), (ECX));
  /* 12527495 jmp 0x12527500 */
  goto L_12527500;
L_12527497:;
  /* 12527497 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252749b jne 0x125274f0 */
  if (!C.zf) goto L_125274f0;
  /* 1252749d cmp dword ptr [0x12554930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125274a4 jle 0x125274ea */
  if ((C.zf||C.sf!=C.of)) goto L_125274ea;
  /* 125274a6 mov edx, dword ptr [0x12554930] */
  EDX = (r32((uint32_t)(0x12554930)));
  /* 125274ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125274af mov dword ptr [0x12554930], edx */
  w32((uint32_t)(0x12554930), (EDX));
  /* 125274b5 cmp dword ptr [0x12554984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125274bc jne 0x125274c3 */
  if (!C.zf) goto L_125274c3;
  /* 125274be call 0x12527e80 */
  push32(0x125274c3u); f_12527e80();
L_125274c3:;
  /* 125274c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125274c5 call 0x12529bb0 */
  push32(0x125274cau); f_12529bb0();
  /* 125274ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125274cd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125274d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125274d2 je 0x125274d9 */
  if (C.zf) goto L_125274d9;
  /* 125274d4 call 0x1252a4c0 */
  push32(0x125274d9u); f_1252a4c0();
L_125274d9:;
  /* 125274d9 call 0x125285e0 */
  push32(0x125274deu); f_125285e0();
  /* 125274de call 0x12528090 */
  push32(0x125274e3u); f_12528090();
  /* 125274e3 call 0x1252aee0 */
  push32(0x125274e8u); f_1252aee0();
  /* 125274e8 jmp 0x125274ee */
  goto L_125274ee;
L_125274ea:;
  /* 125274ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125274ec jmp 0x12527505 */
  goto L_12527505;
L_125274ee:;
  /* 125274ee jmp 0x12527500 */
  goto L_12527500;
L_125274f0:;
  /* 125274f0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125274f4 jne 0x12527500 */
  if (!C.zf) goto L_12527500;
  /* 125274f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125274f8 call 0x12528180 */
  push32(0x125274fdu); f_12528180();
  /* 125274fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527500:;
  /* 12527500 mov eax, 1 */
  EAX = (0x1u);
L_12527505:;
  /* 12527505 pop ebp */
  EBP = (pop32());
  /* 12527506 ret 0xc */
  ESPCHK(0x125273d0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12527510 (243 bytes, 86 insns) */
void f_12527510(void) {
  FTRACE(0x12527510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527510 push ebp */
  push32((uint32_t)(EBP));
  /* 12527511 mov ebp, esp */
  EBP = (ESP);
  /* 12527513 push ecx */
  push32((uint32_t)(ECX));
  /* 12527514 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1252751b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252751f jne 0x12527531 */
  if (!C.zf) goto L_12527531;
  /* 12527521 cmp dword ptr [0x12554930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527528 jne 0x12527531 */
  if (!C.zf) goto L_12527531;
  /* 1252752a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252752c jmp 0x125275fd */
  goto L_125275fd;
L_12527531:;
  /* 12527531 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527535 je 0x1252753d */
  if (C.zf) goto L_1252753d;
  /* 12527537 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252753b jne 0x1252757f */
  if (!C.zf) goto L_1252757f;
L_1252753d:;
  /* 1252753d cmp dword ptr [0x1255649c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255649c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527544 je 0x1252755b */
  if (C.zf) goto L_1252755b;
  /* 12527546 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527549 push eax */
  push32((uint32_t)(EAX));
  /* 1252754a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252754d push ecx */
  push32((uint32_t)(ECX));
  /* 1252754e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527551 push edx */
  push32((uint32_t)(EDX));
  /* 12527552 call dword ptr [0x1255649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255649c))), 0x12527558u);
  /* 12527558 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252755b:;
  /* 1252755b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252755f je 0x12527575 */
  if (C.zf) goto L_12527575;
  /* 12527561 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527564 push eax */
  push32((uint32_t)(EAX));
  /* 12527565 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527568 push ecx */
  push32((uint32_t)(ECX));
  /* 12527569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252756c push edx */
  push32((uint32_t)(EDX));
  /* 1252756d call 0x125273d0 */
  push32(0x12527572u); f_125273d0();
  /* 12527572 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12527575:;
  /* 12527575 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527579 jne 0x1252757f */
  if (!C.zf) goto L_1252757f;
  /* 1252757b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252757d jmp 0x125275fd */
  goto L_125275fd;
L_1252757f:;
  /* 1252757f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527582 push eax */
  push32((uint32_t)(EAX));
  /* 12527583 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527586 push ecx */
  push32((uint32_t)(ECX));
  /* 12527587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252758a push edx */
  push32((uint32_t)(EDX));
  /* 1252758b call 0x12521014 */
  push32(0x12527590u); f_12521014();
  /* 12527590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12527593 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527597 jne 0x125275ae */
  if (!C.zf) goto L_125275ae;
  /* 12527599 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252759d jne 0x125275ae */
  if (!C.zf) goto L_125275ae;
  /* 1252759f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125275a2 push eax */
  push32((uint32_t)(EAX));
  /* 125275a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125275a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125275a8 push ecx */
  push32((uint32_t)(ECX));
  /* 125275a9 call 0x125273d0 */
  push32(0x125275aeu); f_125273d0();
L_125275ae:;
  /* 125275ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125275b2 je 0x125275ba */
  if (C.zf) goto L_125275ba;
  /* 125275b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125275b8 jne 0x125275fa */
  if (!C.zf) goto L_125275fa;
L_125275ba:;
  /* 125275ba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125275bd push edx */
  push32((uint32_t)(EDX));
  /* 125275be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125275c1 push eax */
  push32((uint32_t)(EAX));
  /* 125275c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125275c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125275c6 call 0x125273d0 */
  push32(0x125275cbu); f_125273d0();
  /* 125275cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125275cd jne 0x125275d6 */
  if (!C.zf) goto L_125275d6;
  /* 125275cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125275d6:;
  /* 125275d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125275da je 0x125275fa */
  if (C.zf) goto L_125275fa;
  /* 125275dc cmp dword ptr [0x1255649c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255649c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125275e3 je 0x125275fa */
  if (C.zf) goto L_125275fa;
  /* 125275e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125275e8 push edx */
  push32((uint32_t)(EDX));
  /* 125275e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125275ec push eax */
  push32((uint32_t)(EAX));
  /* 125275ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125275f0 push ecx */
  push32((uint32_t)(ECX));
  /* 125275f1 call dword ptr [0x1255649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255649c))), 0x125275f7u);
  /* 125275f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125275fa:;
  /* 125275fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125275fd:;
  /* 125275fd mov esp, ebp */
  ESP = (EBP);
  /* 125275ff pop ebp */
  EBP = (pop32());
  /* 12527600 ret 0xc */
  ESPCHK(0x12527510u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12527610 (58 bytes, 18 insns) */
void f_12527610(void) {
  FTRACE(0x12527610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527610 push ebp */
  push32((uint32_t)(EBP));
  /* 12527611 mov ebp, esp */
  EBP = (ESP);
  /* 12527613 cmp dword ptr [0x1255493c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252761a je 0x1252762e */
  if (C.zf) goto L_1252762e;
  /* 1252761c cmp dword ptr [0x1255493c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527623 jne 0x12527633 */
  if (!C.zf) goto L_12527633;
  /* 12527625 cmp dword ptr [0x12554940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252762c jne 0x12527633 */
  if (!C.zf) goto L_12527633;
L_1252762e:;
  /* 1252762e call 0x1252af80 */
  push32(0x12527633u); f_1252af80();
L_12527633:;
  /* 12527633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527636 push eax */
  push32((uint32_t)(EAX));
  /* 12527637 call 0x1252afd0 */
  push32(0x1252763cu); f_1252afd0();
  /* 1252763c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252763f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12527644 call dword ptr [0x12552a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12552a30))), 0x1252764au);
  /* 1252764a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252764d pop ebp */
  EBP = (pop32());
  /* 1252764e ret  */
  ESPCHK(0x12527610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x12527650 (11 bytes, 5 insns) */
void f_12527650(void) {
  FTRACE(0x12527650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527650 push ebp */
  push32((uint32_t)(EBP));
  /* 12527651 mov ebp, esp */
  EBP = (ESP);
  /* 12527653 call dword ptr [0x12557390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557390))), 0x12527659u);
  /* 12527659 pop ebp */
  EBP = (pop32());
  /* 1252765a ret  */
  ESPCHK(0x12527650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007660 @ 0x12527660 (87 bytes, 30 insns) */
void f_12527660(void) {
  FTRACE(0x12527660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527660 push ebp */
  push32((uint32_t)(EBP));
  /* 12527661 mov ebp, esp */
  EBP = (ESP);
  /* 12527663 push ecx */
  push32((uint32_t)(ECX));
  /* 12527664 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527668 jl 0x12527670 */
  if ((C.sf!=C.of)) goto L_12527670;
  /* 1252766a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252766e jl 0x12527675 */
  if ((C.sf!=C.of)) goto L_12527675;
L_12527670:;
  /* 12527670 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12527673 jmp 0x125276b3 */
  goto L_125276b3;
L_12527675:;
  /* 12527675 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527679 jne 0x12527687 */
  if (!C.zf) goto L_12527687;
  /* 1252767b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252767e mov eax, dword ptr [eax*4 + 0x12552a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12552a38)));
  /* 12527685 jmp 0x125276b3 */
  goto L_125276b3;
L_12527687:;
  /* 12527687 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252768a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1252768d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252768f je 0x12527696 */
  if (C.zf) goto L_12527696;
  /* 12527691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12527694 jmp 0x125276b3 */
  goto L_125276b3;
L_12527696:;
  /* 12527696 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527699 mov eax, dword ptr [edx*4 + 0x12552a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12552a38)));
  /* 125276a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125276a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125276a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125276a9 mov dword ptr [ecx*4 + 0x12552a38], edx */
  w32((uint32_t)(ECX*4 + 0x12552a38), (EDX));
  /* 125276b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125276b3:;
  /* 125276b3 mov esp, ebp */
  ESP = (EBP);
  /* 125276b5 pop ebp */
  EBP = (pop32());
  /* 125276b6 ret  */
  ESPCHK(0x12527660u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x125276c0 (126 bytes, 38 insns) */
void f_125276c0(void) {
  FTRACE(0x125276c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125276c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125276c1 mov ebp, esp */
  EBP = (ESP);
  /* 125276c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125276c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125276c8 jl 0x125276d0 */
  if ((C.sf!=C.of)) goto L_125276d0;
  /* 125276ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125276ce jl 0x125276d7 */
  if ((C.sf!=C.of)) goto L_125276d7;
L_125276d0:;
  /* 125276d0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 125276d5 jmp 0x1252773a */
  goto L_1252773a;
L_125276d7:;
  /* 125276d7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125276db jne 0x125276e9 */
  if (!C.zf) goto L_125276e9;
  /* 125276dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125276e0 mov eax, dword ptr [eax*4 + 0x12552a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12552a44)));
  /* 125276e7 jmp 0x1252773a */
  goto L_1252773a;
L_125276e9:;
  /* 125276e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125276ec mov edx, dword ptr [ecx*4 + 0x12552a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a44)));
  /* 125276f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125276f6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125276fa jne 0x12527710 */
  if (!C.zf) goto L_12527710;
  /* 125276fc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125276fe call dword ptr [0x12557394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557394))), 0x12527704u);
  /* 12527704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527707 mov dword ptr [ecx*4 + 0x12552a44], eax */
  w32((uint32_t)(ECX*4 + 0x12552a44), (EAX));
  /* 1252770e jmp 0x12527737 */
  goto L_12527737;
L_12527710:;
  /* 12527710 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527714 jne 0x1252772a */
  if (!C.zf) goto L_1252772a;
  /* 12527716 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12527718 call dword ptr [0x12557394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557394))), 0x1252771eu);
  /* 1252771e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527721 mov dword ptr [edx*4 + 0x12552a44], eax */
  w32((uint32_t)(EDX*4 + 0x12552a44), (EAX));
  /* 12527728 jmp 0x12527737 */
  goto L_12527737;
L_1252772a:;
  /* 1252772a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252772d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527730 mov dword ptr [eax*4 + 0x12552a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12552a44), (ECX));
L_12527737:;
  /* 12527737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1252773a:;
  /* 1252773a mov esp, ebp */
  ESP = (EBP);
  /* 1252773c pop ebp */
  EBP = (pop32());
  /* 1252773d ret  */
  ESPCHK(0x125276c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x12527740 (28 bytes, 11 insns) */
void f_12527740(void) {
  FTRACE(0x12527740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527740 push ebp */
  push32((uint32_t)(EBP));
  /* 12527741 mov ebp, esp */
  EBP = (ESP);
  /* 12527743 push ecx */
  push32((uint32_t)(ECX));
  /* 12527744 mov eax, dword ptr [0x12556480] */
  EAX = (r32((uint32_t)(0x12556480)));
  /* 12527749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252774c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252774f mov dword ptr [0x12556480], ecx */
  w32((uint32_t)(0x12556480), (ECX));
  /* 12527755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527758 mov esp, ebp */
  ESP = (EBP);
  /* 1252775a pop ebp */
  EBP = (pop32());
  /* 1252775b ret  */
  ESPCHK(0x12527740u, _esp0);
  ESP += 4; return;
}

/* FUN_10007760 @ 0x12527760 (912 bytes, 248 insns) */
void f_12527760(void) {
  FTRACE(0x12527760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527760 push ebp */
  push32((uint32_t)(EBP));
  /* 12527761 mov ebp, esp */
  EBP = (ESP);
  /* 12527763 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12527768 call 0x1252b840 */
  push32(0x1252776du); f_1252b840();
  /* 1252776d push edi */
  push32((uint32_t)(EDI));
  /* 1252776e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12527775 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1252777a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252777c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12527782 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12527784 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12527786 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12527787 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1252778e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12527793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12527795 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1252779b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1252779d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1252779f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 125277a0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 125277a7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 125277ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125277ae lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 125277b4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125277b6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 125277b8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 125277b9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 125277bc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 125277c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125277c6 jl 0x125277ce */
  if ((C.sf!=C.of)) goto L_125277ce;
  /* 125277c8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125277cc jl 0x125277d6 */
  if ((C.sf!=C.of)) goto L_125277d6;
L_125277ce:;
  /* 125277ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125277d1 jmp 0x12527aeb */
  goto L_12527aeb;
L_125277d6:;
  /* 125277d6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125277da jne 0x12527880 */
  if (!C.zf) goto L_12527880;
  /* 125277e0 push 0x12552a34 */
  push32((uint32_t)(0x12552a34u));
  /* 125277e5 call dword ptr [0x125573ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573ac))), 0x125277ebu);
  /* 125277eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125277ed jle 0x12527880 */
  if ((C.zf||C.sf!=C.of)) goto L_12527880;
  /* 125277f3 cmp dword ptr [0x12554944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125277fa jne 0x1252783e */
  if (!C.zf) goto L_1252783e;
  /* 125277fc push 0x1254f898 */
  push32((uint32_t)(0x1254f898u));
  /* 12527801 call dword ptr [0x125573a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a8))), 0x12527807u);
  /* 12527807 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1252780d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527814 je 0x12527836 */
  if (C.zf) goto L_12527836;
  /* 12527816 push 0x1254f88c */
  push32((uint32_t)(0x1254f88cu));
  /* 1252781b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12527821 push ecx */
  push32((uint32_t)(ECX));
  /* 12527822 call dword ptr [0x125573a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a4))), 0x12527828u);
  /* 12527828 mov dword ptr [0x12554944], eax */
  w32((uint32_t)(0x12554944), (EAX));
  /* 1252782d cmp dword ptr [0x12554944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527834 jne 0x1252783e */
  if (!C.zf) goto L_1252783e;
L_12527836:;
  /* 12527836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12527839 jmp 0x12527aeb */
  goto L_12527aeb;
L_1252783e:;
  /* 1252783e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527841 push edx */
  push32((uint32_t)(EDX));
  /* 12527842 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527845 push eax */
  push32((uint32_t)(EAX));
  /* 12527846 push 0x1254f858 */
  push32((uint32_t)(0x1254f858u));
  /* 1252784b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12527851 push ecx */
  push32((uint32_t)(ECX));
  /* 12527852 call dword ptr [0x12554944] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554944))), 0x12527858u);
  /* 12527858 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252785b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12527861 push edx */
  push32((uint32_t)(EDX));
  /* 12527862 call dword ptr [0x125573a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a0))), 0x12527868u);
  /* 12527868 push 0x12552a34 */
  push32((uint32_t)(0x12552a34u));
  /* 1252786d call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12527873u);
  /* 12527873 call 0x12527650 */
  push32(0x12527878u); f_12527650();
  /* 12527878 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252787b jmp 0x12527aeb */
  goto L_12527aeb;
L_12527880:;
  /* 12527880 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527884 je 0x125278bd */
  if (C.zf) goto L_125278bd;
  /* 12527886 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1252788c push eax */
  push32((uint32_t)(EAX));
  /* 1252788d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12527890 push ecx */
  push32((uint32_t)(ECX));
  /* 12527891 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12527896 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1252789c push edx */
  push32((uint32_t)(EDX));
  /* 1252789d call 0x1252b740 */
  push32(0x125278a2u); f_1252b740();
  /* 125278a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125278a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125278a7 jge 0x125278bd */
  if ((C.sf==C.of)) goto L_125278bd;
  /* 125278a9 push 0x1254f82c */
  push32((uint32_t)(0x1254f82cu));
  /* 125278ae lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 125278b4 push eax */
  push32((uint32_t)(EAX));
  /* 125278b5 call 0x1252b650 */
  push32(0x125278bau); f_1252b650();
  /* 125278ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125278bd:;
  /* 125278bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125278c1 jne 0x125278f5 */
  if (!C.zf) goto L_125278f5;
  /* 125278c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125278c7 je 0x125278d5 */
  if (C.zf) goto L_125278d5;
  /* 125278c9 mov dword ptr [ebp - 0x3028], 0x1254f818 */
  w32((uint32_t)(EBP + -0x3028), (0x1254f818u));
  /* 125278d3 jmp 0x125278df */
  goto L_125278df;
L_125278d5:;
  /* 125278d5 mov dword ptr [ebp - 0x3028], 0x1254f804 */
  w32((uint32_t)(EBP + -0x3028), (0x1254f804u));
L_125278df:;
  /* 125278df mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 125278e5 push ecx */
  push32((uint32_t)(ECX));
  /* 125278e6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 125278ec push edx */
  push32((uint32_t)(EDX));
  /* 125278ed call 0x1252b650 */
  push32(0x125278f2u); f_1252b650();
  /* 125278f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125278f5:;
  /* 125278f5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 125278fb push eax */
  push32((uint32_t)(EAX));
  /* 125278fc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12527902 push ecx */
  push32((uint32_t)(ECX));
  /* 12527903 call 0x1252b660 */
  push32(0x12527908u); f_1252b660();
  /* 12527908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252790b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252790f jne 0x1252794a */
  if (!C.zf) goto L_1252794a;
  /* 12527911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527914 mov eax, dword ptr [edx*4 + 0x12552a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12552a38)));
  /* 1252791b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1252791e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12527920 je 0x12527936 */
  if (C.zf) goto L_12527936;
  /* 12527922 push 0x1254f800 */
  push32((uint32_t)(0x1254f800u));
  /* 12527927 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1252792d push ecx */
  push32((uint32_t)(ECX));
  /* 1252792e call 0x1252b660 */
  push32(0x12527933u); f_1252b660();
  /* 12527933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527936:;
  /* 12527936 push 0x1254f7fc */
  push32((uint32_t)(0x1254f7fcu));
  /* 1252793b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12527941 push edx */
  push32((uint32_t)(EDX));
  /* 12527942 call 0x1252b660 */
  push32(0x12527947u); f_1252b660();
  /* 12527947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252794a:;
  /* 1252794a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252794e je 0x12527992 */
  if (C.zf) goto L_12527992;
  /* 12527950 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12527956 push eax */
  push32((uint32_t)(EAX));
  /* 12527957 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252795a push ecx */
  push32((uint32_t)(ECX));
  /* 1252795b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252795e push edx */
  push32((uint32_t)(EDX));
  /* 1252795f push 0x1254f7f0 */
  push32((uint32_t)(0x1254f7f0u));
  /* 12527964 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12527969 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1252796f push eax */
  push32((uint32_t)(EAX));
  /* 12527970 call 0x1252b550 */
  push32(0x12527975u); f_1252b550();
  /* 12527975 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252797a jge 0x12527990 */
  if ((C.sf==C.of)) goto L_12527990;
  /* 1252797c push 0x1254f82c */
  push32((uint32_t)(0x1254f82cu));
  /* 12527981 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12527987 push ecx */
  push32((uint32_t)(ECX));
  /* 12527988 call 0x1252b650 */
  push32(0x1252798du); f_1252b650();
  /* 1252798d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527990:;
  /* 12527990 jmp 0x125279a8 */
  goto L_125279a8;
L_12527992:;
  /* 12527992 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12527998 push edx */
  push32((uint32_t)(EDX));
  /* 12527999 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1252799f push eax */
  push32((uint32_t)(EAX));
  /* 125279a0 call 0x1252b650 */
  push32(0x125279a5u); f_1252b650();
  /* 125279a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125279a8:;
  /* 125279a8 cmp dword ptr [0x12556480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125279af je 0x125279ec */
  if (C.zf) goto L_125279ec;
  /* 125279b1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 125279b7 push ecx */
  push32((uint32_t)(ECX));
  /* 125279b8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 125279be push edx */
  push32((uint32_t)(EDX));
  /* 125279bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125279c2 push eax */
  push32((uint32_t)(EAX));
  /* 125279c3 call dword ptr [0x12556480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12556480))), 0x125279c9u);
  /* 125279c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125279cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125279ce je 0x125279ec */
  if (C.zf) goto L_125279ec;
  /* 125279d0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125279d4 jne 0x125279e1 */
  if (!C.zf) goto L_125279e1;
  /* 125279d6 push 0x12552a34 */
  push32((uint32_t)(0x12552a34u));
  /* 125279db call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x125279e1u);
L_125279e1:;
  /* 125279e1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 125279e7 jmp 0x12527aeb */
  goto L_12527aeb;
L_125279ec:;
  /* 125279ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125279ef mov edx, dword ptr [ecx*4 + 0x12552a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a38)));
  /* 125279f6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125279f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125279fb je 0x12527a3b */
  if (C.zf) goto L_12527a3b;
  /* 125279fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527a00 cmp dword ptr [eax*4 + 0x12552a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12552a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527a08 je 0x12527a3b */
  if (C.zf) goto L_12527a3b;
  /* 12527a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12527a0c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12527a12 push ecx */
  push32((uint32_t)(ECX));
  /* 12527a13 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12527a19 push edx */
  push32((uint32_t)(EDX));
  /* 12527a1a call 0x1252b4d0 */
  push32(0x12527a1fu); f_1252b4d0();
  /* 12527a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527a22 push eax */
  push32((uint32_t)(EAX));
  /* 12527a23 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12527a29 push eax */
  push32((uint32_t)(EAX));
  /* 12527a2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527a2d mov edx, dword ptr [ecx*4 + 0x12552a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a44)));
  /* 12527a34 push edx */
  push32((uint32_t)(EDX));
  /* 12527a35 call dword ptr [0x12557398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557398))), 0x12527a3bu);
L_12527a3b:;
  /* 12527a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527a3e mov ecx, dword ptr [eax*4 + 0x12552a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12552a38)));
  /* 12527a45 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12527a48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12527a4a je 0x12527a59 */
  if (C.zf) goto L_12527a59;
  /* 12527a4c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12527a52 push edx */
  push32((uint32_t)(EDX));
  /* 12527a53 call dword ptr [0x125573a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a0))), 0x12527a59u);
L_12527a59:;
  /* 12527a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527a5c mov ecx, dword ptr [eax*4 + 0x12552a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12552a38)));
  /* 12527a63 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12527a66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12527a68 je 0x12527ad8 */
  if (C.zf) goto L_12527ad8;
  /* 12527a6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527a6e je 0x12527a8d */
  if (C.zf) goto L_12527a8d;
  /* 12527a70 push 0xa */
  push32((uint32_t)(0xau));
  /* 12527a72 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12527a78 push edx */
  push32((uint32_t)(EDX));
  /* 12527a79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527a7c push eax */
  push32((uint32_t)(EAX));
  /* 12527a7d call 0x1252b1e0 */
  push32(0x12527a82u); f_1252b1e0();
  /* 12527a82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527a85 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12527a8b jmp 0x12527a97 */
  goto L_12527a97;
L_12527a8d:;
  /* 12527a8d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12527a97:;
  /* 12527a97 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12527a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12527a9e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12527aa1 push edx */
  push32((uint32_t)(EDX));
  /* 12527aa2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12527aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12527aa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527aac push ecx */
  push32((uint32_t)(ECX));
  /* 12527aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527ab0 push edx */
  push32((uint32_t)(EDX));
  /* 12527ab1 call 0x12527af0 */
  push32(0x12527ab6u); f_12527af0();
  /* 12527ab6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527ab9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12527abf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527ac3 jne 0x12527ad0 */
  if (!C.zf) goto L_12527ad0;
  /* 12527ac5 push 0x12552a34 */
  push32((uint32_t)(0x12552a34u));
  /* 12527aca call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12527ad0u);
L_12527ad0:;
  /* 12527ad0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12527ad6 jmp 0x12527aeb */
  goto L_12527aeb;
L_12527ad8:;
  /* 12527ad8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527adc jne 0x12527ae9 */
  if (!C.zf) goto L_12527ae9;
  /* 12527ade push 0x12552a34 */
  push32((uint32_t)(0x12552a34u));
  /* 12527ae3 call dword ptr [0x1255739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255739c))), 0x12527ae9u);
L_12527ae9:;
  /* 12527ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12527aeb:;
  /* 12527aeb pop edi */
  EDI = (pop32());
  /* 12527aec mov esp, ebp */
  ESP = (EBP);
  /* 12527aee pop ebp */
  EBP = (pop32());
  /* 12527aef ret  */
  ESPCHK(0x12527760u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x12527af0 (780 bytes, 197 insns) */
void f_12527af0(void) {
  FTRACE(0x12527af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527af1 mov ebp, esp */
  EBP = (ESP);
  /* 12527af3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12527af8 call 0x1252b840 */
  push32(0x12527afdu); f_1252b840();
L_12527afd:;
  /* 12527afd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527b01 jne 0x12527b28 */
  if (!C.zf) goto L_12527b28;
  /* 12527b03 push 0x1254f9e8 */
  push32((uint32_t)(0x1254f9e8u));
  /* 12527b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527b0a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12527b0f push 0x1254f9dc */
  push32((uint32_t)(0x1254f9dcu));
  /* 12527b14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12527b16 call 0x12527760 */
  push32(0x12527b1bu); f_12527760();
  /* 12527b1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527b1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527b21 jne 0x12527b28 */
  if (!C.zf) goto L_12527b28;
  /* 12527b23 call 0x12527650 */
  push32(0x12527b28u); f_12527650();
L_12527b28:;
  /* 12527b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12527b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12527b2c jne 0x12527afd */
  if (!C.zf) goto L_12527afd;
  /* 12527b2e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12527b33 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12527b39 push ecx */
  push32((uint32_t)(ECX));
  /* 12527b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12527b3c call dword ptr [0x125573b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b0))), 0x12527b42u);
  /* 12527b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12527b44 jne 0x12527b5a */
  if (!C.zf) goto L_12527b5a;
  /* 12527b46 push 0x1254f9c4 */
  push32((uint32_t)(0x1254f9c4u));
  /* 12527b4b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12527b51 push edx */
  push32((uint32_t)(EDX));
  /* 12527b52 call 0x1252b650 */
  push32(0x12527b57u); f_1252b650();
  /* 12527b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527b5a:;
  /* 12527b5a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12527b60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12527b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527b66 push ecx */
  push32((uint32_t)(ECX));
  /* 12527b67 call 0x1252b4d0 */
  push32(0x12527b6cu); f_1252b4d0();
  /* 12527b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527b6f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527b72 jbe 0x12527b9d */
  if ((C.cf||C.zf)) goto L_12527b9d;
  /* 12527b74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527b77 push edx */
  push32((uint32_t)(EDX));
  /* 12527b78 call 0x1252b4d0 */
  push32(0x12527b7du); f_1252b4d0();
  /* 12527b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527b80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527b83 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12527b87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12527b8a push 3 */
  push32((uint32_t)(0x3u));
  /* 12527b8c push 0x1254f9c0 */
  push32((uint32_t)(0x1254f9c0u));
  /* 12527b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527b94 push eax */
  push32((uint32_t)(EAX));
  /* 12527b95 call 0x1252bec0 */
  push32(0x12527b9au); f_1252bec0();
  /* 12527b9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527b9d:;
  /* 12527b9d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12527ba0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12527ba6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527bad je 0x12527bf8 */
  if (C.zf) goto L_12527bf8;
  /* 12527baf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12527bb5 push edx */
  push32((uint32_t)(EDX));
  /* 12527bb6 call 0x1252b4d0 */
  push32(0x12527bbbu); f_1252b4d0();
  /* 12527bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527bbe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527bc1 jbe 0x12527bf8 */
  if ((C.cf||C.zf)) goto L_12527bf8;
  /* 12527bc3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12527bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12527bca call 0x1252b4d0 */
  push32(0x12527bcfu); f_1252b4d0();
  /* 12527bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527bd2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12527bd8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12527bdc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12527be2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12527be4 push 0x1254f9c0 */
  push32((uint32_t)(0x1254f9c0u));
  /* 12527be9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12527bef push eax */
  push32((uint32_t)(EAX));
  /* 12527bf0 call 0x1252bec0 */
  push32(0x12527bf5u); f_1252bec0();
  /* 12527bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527bf8:;
  /* 12527bf8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527bfc jne 0x12527c0a */
  if (!C.zf) goto L_12527c0a;
  /* 12527bfe mov dword ptr [ebp - 0x1114], 0x1254f94c */
  w32((uint32_t)(EBP + -0x1114), (0x1254f94cu));
  /* 12527c08 jmp 0x12527c14 */
  goto L_12527c14;
L_12527c0a:;
  /* 12527c0a mov dword ptr [ebp - 0x1114], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1114), (0x1254f6ecu));
L_12527c14:;
  /* 12527c14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12527c17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12527c1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12527c1c je 0x12527c29 */
  if (C.zf) goto L_12527c29;
  /* 12527c1e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12527c21 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12527c27 jmp 0x12527c33 */
  goto L_12527c33;
L_12527c29:;
  /* 12527c29 mov dword ptr [ebp - 0x1118], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1118), (0x1254f6ecu));
L_12527c33:;
  /* 12527c33 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12527c36 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12527c39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12527c3b je 0x12527c4f */
  if (C.zf) goto L_12527c4f;
  /* 12527c3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527c41 jne 0x12527c4f */
  if (!C.zf) goto L_12527c4f;
  /* 12527c43 mov dword ptr [ebp - 0x111c], 0x1254f93c */
  w32((uint32_t)(EBP + -0x111c), (0x1254f93cu));
  /* 12527c4d jmp 0x12527c59 */
  goto L_12527c59;
L_12527c4f:;
  /* 12527c4f mov dword ptr [ebp - 0x111c], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x111c), (0x1254f6ecu));
L_12527c59:;
  /* 12527c59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12527c5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12527c5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12527c61 je 0x12527c6f */
  if (C.zf) goto L_12527c6f;
  /* 12527c63 mov dword ptr [ebp - 0x1120], 0x1254f938 */
  w32((uint32_t)(EBP + -0x1120), (0x1254f938u));
  /* 12527c6d jmp 0x12527c79 */
  goto L_12527c79;
L_12527c6f:;
  /* 12527c6f mov dword ptr [ebp - 0x1120], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1120), (0x1254f6ecu));
L_12527c79:;
  /* 12527c79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527c7d je 0x12527c8a */
  if (C.zf) goto L_12527c8a;
  /* 12527c7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12527c82 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12527c88 jmp 0x12527c94 */
  goto L_12527c94;
L_12527c8a:;
  /* 12527c8a mov dword ptr [ebp - 0x1124], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1124), (0x1254f6ecu));
L_12527c94:;
  /* 12527c94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527c98 je 0x12527ca6 */
  if (C.zf) goto L_12527ca6;
  /* 12527c9a mov dword ptr [ebp - 0x1128], 0x1254f930 */
  w32((uint32_t)(EBP + -0x1128), (0x1254f930u));
  /* 12527ca4 jmp 0x12527cb0 */
  goto L_12527cb0;
L_12527ca6:;
  /* 12527ca6 mov dword ptr [ebp - 0x1128], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1128), (0x1254f6ecu));
L_12527cb0:;
  /* 12527cb0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527cb4 je 0x12527cc1 */
  if (C.zf) goto L_12527cc1;
  /* 12527cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12527cb9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12527cbf jmp 0x12527ccb */
  goto L_12527ccb;
L_12527cc1:;
  /* 12527cc1 mov dword ptr [ebp - 0x112c], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x112c), (0x1254f6ecu));
L_12527ccb:;
  /* 12527ccb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527ccf je 0x12527cdd */
  if (C.zf) goto L_12527cdd;
  /* 12527cd1 mov dword ptr [ebp - 0x1130], 0x1254f928 */
  w32((uint32_t)(EBP + -0x1130), (0x1254f928u));
  /* 12527cdb jmp 0x12527ce7 */
  goto L_12527ce7;
L_12527cdd:;
  /* 12527cdd mov dword ptr [ebp - 0x1130], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1130), (0x1254f6ecu));
L_12527ce7:;
  /* 12527ce7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527cee je 0x12527cfe */
  if (C.zf) goto L_12527cfe;
  /* 12527cf0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12527cf6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12527cfc jmp 0x12527d08 */
  goto L_12527d08;
L_12527cfe:;
  /* 12527cfe mov dword ptr [ebp - 0x1134], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1134), (0x1254f6ecu));
L_12527d08:;
  /* 12527d08 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527d0f je 0x12527d1d */
  if (C.zf) goto L_12527d1d;
  /* 12527d11 mov dword ptr [ebp - 0x1138], 0x1254f91c */
  w32((uint32_t)(EBP + -0x1138), (0x1254f91cu));
  /* 12527d1b jmp 0x12527d27 */
  goto L_12527d27;
L_12527d1d:;
  /* 12527d1d mov dword ptr [ebp - 0x1138], 0x1254f6ec */
  w32((uint32_t)(EBP + -0x1138), (0x1254f6ecu));
L_12527d27:;
  /* 12527d27 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12527d2d push edx */
  push32((uint32_t)(EDX));
  /* 12527d2e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12527d34 push eax */
  push32((uint32_t)(EAX));
  /* 12527d35 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12527d3b push ecx */
  push32((uint32_t)(ECX));
  /* 12527d3c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12527d42 push edx */
  push32((uint32_t)(EDX));
  /* 12527d43 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12527d49 push eax */
  push32((uint32_t)(EAX));
  /* 12527d4a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12527d50 push ecx */
  push32((uint32_t)(ECX));
  /* 12527d51 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12527d57 push edx */
  push32((uint32_t)(EDX));
  /* 12527d58 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12527d5e push eax */
  push32((uint32_t)(EAX));
  /* 12527d5f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12527d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12527d66 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12527d6c push edx */
  push32((uint32_t)(EDX));
  /* 12527d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527d70 push eax */
  push32((uint32_t)(EAX));
  /* 12527d71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527d74 mov edx, dword ptr [ecx*4 + 0x12552a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a50)));
  /* 12527d7b push edx */
  push32((uint32_t)(EDX));
  /* 12527d7c push 0x1254f8c8 */
  push32((uint32_t)(0x1254f8c8u));
  /* 12527d81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12527d86 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12527d8c push eax */
  push32((uint32_t)(EAX));
  /* 12527d8d call 0x1252b550 */
  push32(0x12527d92u); f_1252b550();
  /* 12527d92 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12527d97 jge 0x12527dad */
  if ((C.sf==C.of)) goto L_12527dad;
  /* 12527d99 push 0x1254f82c */
  push32((uint32_t)(0x1254f82cu));
  /* 12527d9e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12527da4 push ecx */
  push32((uint32_t)(ECX));
  /* 12527da5 call 0x1252b650 */
  push32(0x12527daau); f_1252b650();
  /* 12527daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527dad:;
  /* 12527dad push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12527db2 push 0x1254f8a4 */
  push32((uint32_t)(0x1254f8a4u));
  /* 12527db7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12527dbd push edx */
  push32((uint32_t)(EDX));
  /* 12527dbe call 0x1252be00 */
  push32(0x12527dc3u); f_1252be00();
  /* 12527dc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527dc6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12527dcc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527dd3 jne 0x12527de6 */
  if (!C.zf) goto L_12527de6;
  /* 12527dd5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12527dd7 call 0x1252bb40 */
  push32(0x12527ddcu); f_1252bb40();
  /* 12527ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527ddf push 3 */
  push32((uint32_t)(0x3u));
  /* 12527de1 call 0x12527e60 */
  push32(0x12527de6u); f_12527e60();
L_12527de6:;
  /* 12527de6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527ded jne 0x12527df6 */
  if (!C.zf) goto L_12527df6;
  /* 12527def mov eax, 1 */
  EAX = (0x1u);
  /* 12527df4 jmp 0x12527df8 */
  goto L_12527df8;
L_12527df6:;
  /* 12527df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12527df8:;
  /* 12527df8 mov esp, ebp */
  ESP = (EBP);
  /* 12527dfa pop ebp */
  EBP = (pop32());
  /* 12527dfb ret  */
  ESPCHK(0x12527af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x12527e00 (56 bytes, 15 insns) */
void f_12527e00(void) {
  FTRACE(0x12527e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12527e01 mov ebp, esp */
  EBP = (ESP);
  /* 12527e03 cmp dword ptr [0x1255647c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255647c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527e0a je 0x12527e12 */
  if (C.zf) goto L_12527e12;
  /* 12527e0c call dword ptr [0x1255647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255647c))), 0x12527e12u);
L_12527e12:;
  /* 12527e12 push 0x12552418 */
  push32((uint32_t)(0x12552418u));
  /* 12527e17 push 0x12552208 */
  push32((uint32_t)(0x12552208u));
  /* 12527e1c call 0x12527fd0 */
  push32(0x12527e21u); f_12527fd0();
  /* 12527e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527e24 push 0x12552104 */
  push32((uint32_t)(0x12552104u));
  /* 12527e29 push 0x12552000 */
  push32((uint32_t)(0x12552000u));
  /* 12527e2e call 0x12527fd0 */
  push32(0x12527e33u); f_12527fd0();
  /* 12527e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527e36 pop ebp */
  EBP = (pop32());
  /* 12527e37 ret  */
  ESPCHK(0x12527e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x12527e40 (21 bytes, 10 insns) */
void f_12527e40(void) {
  FTRACE(0x12527e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12527e41 mov ebp, esp */
  EBP = (ESP);
  /* 12527e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527e4a push eax */
  push32((uint32_t)(EAX));
  /* 12527e4b call 0x12527ec0 */
  push32(0x12527e50u); f_12527ec0();
  /* 12527e50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527e53 pop ebp */
  EBP = (pop32());
  /* 12527e54 ret  */
  ESPCHK(0x12527e40u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12527e60 (21 bytes, 10 insns) */
void f_12527e60(void) {
  FTRACE(0x12527e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12527e61 mov ebp, esp */
  EBP = (ESP);
  /* 12527e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 12527e67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527e6a push eax */
  push32((uint32_t)(EAX));
  /* 12527e6b call 0x12527ec0 */
  push32(0x12527e70u); f_12527ec0();
  /* 12527e70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527e73 pop ebp */
  EBP = (pop32());
  /* 12527e74 ret  */
  ESPCHK(0x12527e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x12527e80 (19 bytes, 9 insns) */
void f_12527e80(void) {
  FTRACE(0x12527e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12527e81 mov ebp, esp */
  EBP = (ESP);
  /* 12527e83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12527e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527e89 call 0x12527ec0 */
  push32(0x12527e8eu); f_12527ec0();
  /* 12527e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527e91 pop ebp */
  EBP = (pop32());
  /* 12527e92 ret  */
  ESPCHK(0x12527e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x12527ea0 (19 bytes, 9 insns) */
void f_12527ea0(void) {
  FTRACE(0x12527ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12527ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12527ea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12527ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12527ea9 call 0x12527ec0 */
  push32(0x12527eaeu); f_12527ec0();
  /* 12527eae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527eb1 pop ebp */
  EBP = (pop32());
  /* 12527eb2 ret  */
  ESPCHK(0x12527ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x12527ec0 (227 bytes, 61 insns) */
void f_12527ec0(void) {
  FTRACE(0x12527ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12527ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12527ec4 call 0x12527fb0 */
  push32(0x12527ec9u); f_12527fb0();
  /* 12527ec9 cmp dword ptr [0x12554988], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554988))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527ed0 jne 0x12527ee3 */
  if (!C.zf) goto L_12527ee3;
  /* 12527ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527ed5 push eax */
  push32((uint32_t)(EAX));
  /* 12527ed6 call dword ptr [0x125572d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572d0))), 0x12527edcu);
  /* 12527edc push eax */
  push32((uint32_t)(EAX));
  /* 12527edd call dword ptr [0x125572cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125572cc))), 0x12527ee3u);
L_12527ee3:;
  /* 12527ee3 mov dword ptr [0x12554984], 1 */
  w32((uint32_t)(0x12554984), (0x1u));
  /* 12527eed mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12527ef0 mov byte ptr [0x12554980], cl */
  w8((uint32_t)(0x12554980), (CL));
  /* 12527ef6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527efa jne 0x12527f43 */
  if (!C.zf) goto L_12527f43;
  /* 12527efc cmp dword ptr [0x12556478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527f03 je 0x12527f31 */
  if (C.zf) goto L_12527f31;
  /* 12527f05 mov edx, dword ptr [0x12556474] */
  EDX = (r32((uint32_t)(0x12556474)));
  /* 12527f0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12527f0e:;
  /* 12527f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527f11 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12527f14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12527f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527f1a cmp ecx, dword ptr [0x12556478] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12556478))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527f20 jb 0x12527f31 */
  if (C.cf) goto L_12527f31;
  /* 12527f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527f25 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527f28 je 0x12527f2f */
  if (C.zf) goto L_12527f2f;
  /* 12527f2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12527f2d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12527f2fu);
L_12527f2f:;
  /* 12527f2f jmp 0x12527f0e */
  goto L_12527f0e;
L_12527f31:;
  /* 12527f31 push 0x12552724 */
  push32((uint32_t)(0x12552724u));
  /* 12527f36 push 0x1255251c */
  push32((uint32_t)(0x1255251cu));
  /* 12527f3b call 0x12527fd0 */
  push32(0x12527f40u); f_12527fd0();
  /* 12527f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12527f43:;
  /* 12527f43 push 0x1255292c */
  push32((uint32_t)(0x1255292cu));
  /* 12527f48 push 0x12552828 */
  push32((uint32_t)(0x12552828u));
  /* 12527f4d call 0x12527fd0 */
  push32(0x12527f52u); f_12527fd0();
  /* 12527f52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527f55 cmp dword ptr [0x1255498c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255498c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527f5c jne 0x12527f7e */
  if (!C.zf) goto L_12527f7e;
  /* 12527f5e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12527f60 call 0x12529bb0 */
  push32(0x12527f65u); f_12529bb0();
  /* 12527f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527f68 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12527f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12527f6d je 0x12527f7e */
  if (C.zf) goto L_12527f7e;
  /* 12527f6f mov dword ptr [0x1255498c], 1 */
  w32((uint32_t)(0x1255498c), (0x1u));
  /* 12527f79 call 0x1252a4c0 */
  push32(0x12527f7eu); f_1252a4c0();
L_12527f7e:;
  /* 12527f7e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527f82 je 0x12527f8b */
  if (C.zf) goto L_12527f8b;
  /* 12527f84 call 0x12527fc0 */
  push32(0x12527f89u); f_12527fc0();
  /* 12527f89 jmp 0x12527f9f */
  goto L_12527f9f;
L_12527f8b:;
  /* 12527f8b mov dword ptr [0x12554988], 1 */
  w32((uint32_t)(0x12554988), (0x1u));
  /* 12527f95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527f98 push ecx */
  push32((uint32_t)(ECX));
  /* 12527f99 call dword ptr [0x125573b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b4))), 0x12527f9fu);
L_12527f9f:;
  /* 12527f9f mov esp, ebp */
  ESP = (EBP);
  /* 12527fa1 pop ebp */
  EBP = (pop32());
  /* 12527fa2 ret  */
  ESPCHK(0x12527ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x12527fb0 (15 bytes, 7 insns) */
void f_12527fb0(void) {
  FTRACE(0x12527fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12527fb3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12527fb5 call 0x1252c0a0 */
  push32(0x12527fbau); f_1252c0a0();
  /* 12527fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527fbd pop ebp */
  EBP = (pop32());
  /* 12527fbe ret  */
  ESPCHK(0x12527fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc0 @ 0x12527fc0 (15 bytes, 7 insns) */
void f_12527fc0(void) {
  FTRACE(0x12527fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12527fc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12527fc5 call 0x1252c140 */
  push32(0x12527fcau); f_1252c140();
  /* 12527fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12527fcd pop ebp */
  EBP = (pop32());
  /* 12527fce ret  */
  ESPCHK(0x12527fc0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12527fd0 (37 bytes, 16 insns) */
void f_12527fd0(void) {
  FTRACE(0x12527fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12527fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12527fd1 mov ebp, esp */
  EBP = (ESP);
L_12527fd3:;
  /* 12527fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527fd6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527fd9 jae 0x12527ff3 */
  if (!C.cf) goto L_12527ff3;
  /* 12527fdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527fde cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12527fe1 je 0x12527fe8 */
  if (C.zf) goto L_12527fe8;
  /* 12527fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527fe6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12527fe8u);
L_12527fe8:;
  /* 12527fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12527feb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12527fee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12527ff1 jmp 0x12527fd3 */
  goto L_12527fd3;
L_12527ff3:;
  /* 12527ff3 pop ebp */
  EBP = (pop32());
  /* 12527ff4 ret  */
  ESPCHK(0x12527fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12528000 (130 bytes, 42 insns) */
void f_12528000(void) {
  FTRACE(0x12528000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528000 push ebp */
  push32((uint32_t)(EBP));
  /* 12528001 mov ebp, esp */
  EBP = (ESP);
  /* 12528003 push ecx */
  push32((uint32_t)(ECX));
  /* 12528004 call 0x1252bfc0 */
  push32(0x12528009u); f_1252bfc0();
  /* 12528009 call dword ptr [0x125573c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c8))), 0x1252800fu);
  /* 1252800f mov dword ptr [0x12552a5c], eax */
  w32((uint32_t)(0x12552a5c), (EAX));
  /* 12528014 cmp dword ptr [0x12552a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12552a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252801b jne 0x12528021 */
  if (!C.zf) goto L_12528021;
  /* 1252801d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252801f jmp 0x1252807e */
  goto L_1252807e;
L_12528021:;
  /* 12528021 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12528023 push 0x1254fa00 */
  push32((uint32_t)(0x1254fa00u));
  /* 12528028 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252802a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1252802c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252802e call 0x12528ab0 */
  push32(0x12528033u); f_12528ab0();
  /* 12528033 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528036 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12528039 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252803d je 0x12528054 */
  if (C.zf) goto L_12528054;
  /* 1252803f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528042 push eax */
  push32((uint32_t)(EAX));
  /* 12528043 mov ecx, dword ptr [0x12552a5c] */
  ECX = (r32((uint32_t)(0x12552a5c)));
  /* 12528049 push ecx */
  push32((uint32_t)(ECX));
  /* 1252804a call dword ptr [0x125573c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c4))), 0x12528050u);
  /* 12528050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528052 jne 0x12528058 */
  if (!C.zf) goto L_12528058;
L_12528054:;
  /* 12528054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528056 jmp 0x1252807e */
  goto L_1252807e;
L_12528058:;
  /* 12528058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252805b push edx */
  push32((uint32_t)(EDX));
  /* 1252805c call 0x125280c0 */
  push32(0x12528061u); f_125280c0();
  /* 12528061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528064 call dword ptr [0x125573c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c0))), 0x1252806au);
  /* 1252806a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252806d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252806f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528072 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12528079 mov eax, 1 */
  EAX = (0x1u);
L_1252807e:;
  /* 1252807e mov esp, ebp */
  ESP = (EBP);
  /* 12528080 pop ebp */
  EBP = (pop32());
  /* 12528081 ret  */
  ESPCHK(0x12528000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x12528090 (41 bytes, 11 insns) */
void f_12528090(void) {
  FTRACE(0x12528090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528090 push ebp */
  push32((uint32_t)(EBP));
  /* 12528091 mov ebp, esp */
  EBP = (ESP);
  /* 12528093 call 0x1252c000 */
  push32(0x12528098u); f_1252c000();
  /* 12528098 cmp dword ptr [0x12552a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12552a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252809f je 0x125280b7 */
  if (C.zf) goto L_125280b7;
  /* 125280a1 mov eax, dword ptr [0x12552a5c] */
  EAX = (r32((uint32_t)(0x12552a5c)));
  /* 125280a6 push eax */
  push32((uint32_t)(EAX));
  /* 125280a7 call dword ptr [0x125573cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573cc))), 0x125280adu);
  /* 125280ad mov dword ptr [0x12552a5c], 0xffffffff */
  w32((uint32_t)(0x12552a5c), (0xffffffffu));
L_125280b7:;
  /* 125280b7 pop ebp */
  EBP = (pop32());
  /* 125280b8 ret  */
  ESPCHK(0x12528090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x125280c0 (25 bytes, 8 insns) */
void f_125280c0(void) {
  FTRACE(0x125280c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125280c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125280c1 mov ebp, esp */
  EBP = (ESP);
  /* 125280c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125280c6 mov dword ptr [eax + 0x50], 0x12552c00 */
  w32((uint32_t)(EAX + 0x50), (0x12552c00u));
  /* 125280cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125280d0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 125280d7 pop ebp */
  EBP = (pop32());
  /* 125280d8 ret  */
  ESPCHK(0x125280c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x125280e0 (152 bytes, 48 insns) */
void f_125280e0(void) {
  FTRACE(0x125280e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125280e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125280e1 mov ebp, esp */
  EBP = (ESP);
  /* 125280e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125280e6 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x125280ecu);
  /* 125280ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125280ef mov eax, dword ptr [0x12552a5c] */
  EAX = (r32((uint32_t)(0x12552a5c)));
  /* 125280f4 push eax */
  push32((uint32_t)(EAX));
  /* 125280f5 call dword ptr [0x125573d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d4))), 0x125280fbu);
  /* 125280fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125280fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528102 jne 0x12528167 */
  if (!C.zf) goto L_12528167;
  /* 12528104 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12528109 push 0x1254fa00 */
  push32((uint32_t)(0x1254fa00u));
  /* 1252810e push 2 */
  push32((uint32_t)(0x2u));
  /* 12528110 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12528112 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528114 call 0x12528ab0 */
  push32(0x12528119u); f_12528ab0();
  /* 12528119 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252811c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252811f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528123 je 0x1252815d */
  if (C.zf) goto L_1252815d;
  /* 12528125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528128 push ecx */
  push32((uint32_t)(ECX));
  /* 12528129 mov edx, dword ptr [0x12552a5c] */
  EDX = (r32((uint32_t)(0x12552a5c)));
  /* 1252812f push edx */
  push32((uint32_t)(EDX));
  /* 12528130 call dword ptr [0x125573c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c4))), 0x12528136u);
  /* 12528136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528138 je 0x1252815d */
  if (C.zf) goto L_1252815d;
  /* 1252813a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252813d push eax */
  push32((uint32_t)(EAX));
  /* 1252813e call 0x125280c0 */
  push32(0x12528143u); f_125280c0();
  /* 12528143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528146 call dword ptr [0x125573c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c0))), 0x1252814cu);
  /* 1252814c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252814f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12528151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528154 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1252815b jmp 0x12528167 */
  goto L_12528167;
L_1252815d:;
  /* 1252815d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1252815f call 0x12527610 */
  push32(0x12528164u); f_12527610();
  /* 12528164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528167:;
  /* 12528167 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252816a push eax */
  push32((uint32_t)(EAX));
  /* 1252816b call dword ptr [0x125573d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d0))), 0x12528171u);
  /* 12528171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528174 mov esp, ebp */
  ESP = (EBP);
  /* 12528176 pop ebp */
  EBP = (pop32());
  /* 12528177 ret  */
  ESPCHK(0x125280e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x12528180 (263 bytes, 86 insns) */
void f_12528180(void) {
  FTRACE(0x12528180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528180 push ebp */
  push32((uint32_t)(EBP));
  /* 12528181 mov ebp, esp */
  EBP = (ESP);
  /* 12528183 cmp dword ptr [0x12552a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12552a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252818a je 0x12528285 */
  if (C.zf) goto L_12528285;
  /* 12528190 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528194 jne 0x125281a5 */
  if (!C.zf) goto L_125281a5;
  /* 12528196 mov eax, dword ptr [0x12552a5c] */
  EAX = (r32((uint32_t)(0x12552a5c)));
  /* 1252819b push eax */
  push32((uint32_t)(EAX));
  /* 1252819c call dword ptr [0x125573d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d4))), 0x125281a2u);
  /* 125281a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125281a5:;
  /* 125281a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125281a9 je 0x12528276 */
  if (C.zf) goto L_12528276;
  /* 125281af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281b2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125281b6 je 0x125281c9 */
  if (C.zf) goto L_125281c9;
  /* 125281b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125281ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281bd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 125281c0 push eax */
  push32((uint32_t)(EAX));
  /* 125281c1 call 0x12529130 */
  push32(0x125281c6u); f_12529130();
  /* 125281c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125281c9:;
  /* 125281c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281cc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125281d0 je 0x125281e3 */
  if (C.zf) goto L_125281e3;
  /* 125281d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125281d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281d7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 125281da push eax */
  push32((uint32_t)(EAX));
  /* 125281db call 0x12529130 */
  push32(0x125281e0u); f_12529130();
  /* 125281e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125281e3:;
  /* 125281e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281e6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125281ea je 0x125281fd */
  if (C.zf) goto L_125281fd;
  /* 125281ec push 2 */
  push32((uint32_t)(0x2u));
  /* 125281ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125281f1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 125281f4 push eax */
  push32((uint32_t)(EAX));
  /* 125281f5 call 0x12529130 */
  push32(0x125281fau); f_12529130();
  /* 125281fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125281fd:;
  /* 125281fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528200 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528204 je 0x12528217 */
  if (C.zf) goto L_12528217;
  /* 12528206 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252820b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1252820e push eax */
  push32((uint32_t)(EAX));
  /* 1252820f call 0x12529130 */
  push32(0x12528214u); f_12529130();
  /* 12528214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528217:;
  /* 12528217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252821a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252821e je 0x12528231 */
  if (C.zf) goto L_12528231;
  /* 12528220 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528222 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528225 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12528228 push eax */
  push32((uint32_t)(EAX));
  /* 12528229 call 0x12529130 */
  push32(0x1252822eu); f_12529130();
  /* 1252822e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528231:;
  /* 12528231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528234 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528238 je 0x1252824b */
  if (C.zf) goto L_1252824b;
  /* 1252823a push 2 */
  push32((uint32_t)(0x2u));
  /* 1252823c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252823f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12528242 push eax */
  push32((uint32_t)(EAX));
  /* 12528243 call 0x12529130 */
  push32(0x12528248u); f_12529130();
  /* 12528248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252824b:;
  /* 1252824b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252824e cmp dword ptr [ecx + 0x50], 0x12552c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12552c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528255 je 0x12528268 */
  if (C.zf) goto L_12528268;
  /* 12528257 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252825c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1252825f push eax */
  push32((uint32_t)(EAX));
  /* 12528260 call 0x12529130 */
  push32(0x12528265u); f_12529130();
  /* 12528265 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528268:;
  /* 12528268 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252826a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252826d push ecx */
  push32((uint32_t)(ECX));
  /* 1252826e call 0x12529130 */
  push32(0x12528273u); f_12529130();
  /* 12528273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528276:;
  /* 12528276 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528278 mov edx, dword ptr [0x12552a5c] */
  EDX = (r32((uint32_t)(0x12552a5c)));
  /* 1252827e push edx */
  push32((uint32_t)(EDX));
  /* 1252827f call dword ptr [0x125573c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c4))), 0x12528285u);
L_12528285:;
  /* 12528285 pop ebp */
  EBP = (pop32());
  /* 12528286 ret  */
  ESPCHK(0x12528180u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x12528290 (11 bytes, 5 insns) */
void f_12528290(void) {
  FTRACE(0x12528290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528290 push ebp */
  push32((uint32_t)(EBP));
  /* 12528291 mov ebp, esp */
  EBP = (ESP);
  /* 12528293 call dword ptr [0x125573c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573c0))), 0x12528299u);
  /* 12528299 pop ebp */
  EBP = (pop32());
  /* 1252829a ret  */
  ESPCHK(0x12528290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x125282a0 (11 bytes, 5 insns) */
void f_125282a0(void) {
  FTRACE(0x125282a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125282a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125282a1 mov ebp, esp */
  EBP = (ESP);
  /* 125282a3 call dword ptr [0x125573dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573dc))), 0x125282a9u);
  /* 125282a9 pop ebp */
  EBP = (pop32());
  /* 125282aa ret  */
  ESPCHK(0x125282a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x125282b0 (804 bytes, 236 insns) */
void f_125282b0(void) {
  FTRACE(0x125282b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125282b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125282b1 mov ebp, esp */
  EBP = (ESP);
  /* 125282b3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125282b6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 125282bb push 0x1254fa0c */
  push32((uint32_t)(0x1254fa0cu));
  /* 125282c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125282c2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125282c7 call 0x125286a0 */
  push32(0x125282ccu); f_125286a0();
  /* 125282cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125282cf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 125282d2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125282d6 jne 0x125282e2 */
  if (!C.zf) goto L_125282e2;
  /* 125282d8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 125282da call 0x12527610 */
  push32(0x125282dfu); f_12527610();
  /* 125282df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125282e2:;
  /* 125282e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125282e5 mov dword ptr [0x12556320], eax */
  w32((uint32_t)(0x12556320), (EAX));
  /* 125282ea mov dword ptr [0x1255645c], 0x20 */
  w32((uint32_t)(0x1255645c), (0x20u));
  /* 125282f4 jmp 0x125282ff */
  goto L_125282ff;
L_125282f6:;
  /* 125282f6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125282f9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125282fc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_125282ff:;
  /* 125282ff mov edx, dword ptr [0x12556320] */
  EDX = (r32((uint32_t)(0x12556320)));
  /* 12528305 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252830b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252830e jae 0x12528333 */
  if (!C.cf) goto L_12528333;
  /* 12528310 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528313 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12528317 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252831a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12528320 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528323 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12528327 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252832a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12528331 jmp 0x125282f6 */
  goto L_125282f6;
L_12528333:;
  /* 12528333 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12528336 push ecx */
  push32((uint32_t)(ECX));
  /* 12528337 call dword ptr [0x125573e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573e8))), 0x1252833du);
  /* 1252833d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12528340 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12528346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12528348 je 0x125284d5 */
  if (C.zf) goto L_125284d5;
  /* 1252834e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528352 je 0x125284d5 */
  if (C.zf) goto L_125284d5;
  /* 12528358 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252835b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252835d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12528360 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12528363 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528366 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12528369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252836c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252836f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12528372 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528379 jge 0x12528383 */
  if ((C.sf==C.of)) goto L_12528383;
  /* 1252837b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1252837e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12528381 jmp 0x1252838a */
  goto L_1252838a;
L_12528383:;
  /* 12528383 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1252838a:;
  /* 1252838a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1252838d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12528390 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12528397 jmp 0x125283a2 */
  goto L_125283a2;
L_12528399:;
  /* 12528399 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1252839c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252839f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_125283a2:;
  /* 125283a2 mov ecx, dword ptr [0x1255645c] */
  ECX = (r32((uint32_t)(0x1255645c)));
  /* 125283a8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125283ab jge 0x12528442 */
  if ((C.sf==C.of)) goto L_12528442;
  /* 125283b1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 125283b6 push 0x1254fa0c */
  push32((uint32_t)(0x1254fa0cu));
  /* 125283bb push 2 */
  push32((uint32_t)(0x2u));
  /* 125283bd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125283c2 call 0x125286a0 */
  push32(0x125283c7u); f_125286a0();
  /* 125283c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125283ca mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 125283cd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125283d1 jne 0x125283de */
  if (!C.zf) goto L_125283de;
  /* 125283d3 mov edx, dword ptr [0x1255645c] */
  EDX = (r32((uint32_t)(0x1255645c)));
  /* 125283d9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 125283dc jmp 0x12528442 */
  goto L_12528442;
L_125283de:;
  /* 125283de mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 125283e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125283e4 mov dword ptr [eax*4 + 0x12556320], ecx */
  w32((uint32_t)(EAX*4 + 0x12556320), (ECX));
  /* 125283eb mov edx, dword ptr [0x1255645c] */
  EDX = (r32((uint32_t)(0x1255645c)));
  /* 125283f1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125283f4 mov dword ptr [0x1255645c], edx */
  w32((uint32_t)(0x1255645c), (EDX));
  /* 125283fa jmp 0x12528405 */
  goto L_12528405;
L_125283fc:;
  /* 125283fc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125283ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528402 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12528405:;
  /* 12528405 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12528408 mov edx, dword ptr [ecx*4 + 0x12556320] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12556320)));
  /* 1252840f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528415 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528418 jae 0x1252843d */
  if (!C.cf) goto L_1252843d;
  /* 1252841a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252841d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12528421 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528424 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1252842a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252842d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12528431 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528434 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1252843b jmp 0x125283fc */
  goto L_125283fc;
L_1252843d:;
  /* 1252843d jmp 0x12528399 */
  goto L_12528399;
L_12528442:;
  /* 12528442 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12528449 jmp 0x12528466 */
  goto L_12528466;
L_1252844b:;
  /* 1252844b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1252844e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528451 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12528454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528457 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252845a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252845d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12528460 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528463 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12528466:;
  /* 12528466 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12528469 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252846c jge 0x125284d5 */
  if ((C.sf==C.of)) goto L_125284d5;
  /* 1252846e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12528471 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528474 je 0x125284d0 */
  if (C.zf) goto L_125284d0;
  /* 12528476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528479 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252847c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1252847f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12528481 je 0x125284d0 */
  if (C.zf) goto L_125284d0;
  /* 12528483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528486 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12528489 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1252848c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252848e jne 0x125284a0 */
  if (!C.zf) goto L_125284a0;
  /* 12528490 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12528493 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12528495 push edx */
  push32((uint32_t)(EDX));
  /* 12528496 call dword ptr [0x125573e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573e4))), 0x1252849cu);
  /* 1252849c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252849e je 0x125284d0 */
  if (C.zf) goto L_125284d0;
L_125284a0:;
  /* 125284a0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 125284a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125284a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125284a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125284ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125284af mov edx, dword ptr [eax*4 + 0x12556320] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 125284b6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125284b8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 125284bb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125284be mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 125284c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125284c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125284c5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125284c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125284cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125284cd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_125284d0:;
  /* 125284d0 jmp 0x1252844b */
  goto L_1252844b;
L_125284d5:;
  /* 125284d5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 125284dc jmp 0x125284e7 */
  goto L_125284e7;
L_125284de:;
  /* 125284de mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 125284e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125284e4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_125284e7:;
  /* 125284e7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125284eb jge 0x125285c4 */
  if ((C.sf==C.of)) goto L_125285c4;
  /* 125284f1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125284f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125284f7 mov edx, dword ptr [0x12556320] */
  EDX = (r32((uint32_t)(0x12556320)));
  /* 125284fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125284ff mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12528502 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528505 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528508 jne 0x125285b0 */
  if (!C.zf) goto L_125285b0;
  /* 1252850e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528511 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12528515 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528519 jne 0x12528524 */
  if (!C.zf) goto L_12528524;
  /* 1252851b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12528522 jmp 0x12528534 */
  goto L_12528534;
L_12528524:;
  /* 12528524 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12528527 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252852a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252852c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252852e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528531 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12528534:;
  /* 12528534 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12528537 push eax */
  push32((uint32_t)(EAX));
  /* 12528538 call dword ptr [0x12557394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557394))), 0x1252853eu);
  /* 1252853e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12528541 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528545 je 0x1252859f */
  if (C.zf) goto L_1252859f;
  /* 12528547 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252854a push ecx */
  push32((uint32_t)(ECX));
  /* 1252854b call dword ptr [0x125573e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573e4))), 0x12528551u);
  /* 12528551 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12528554 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528558 je 0x1252859f */
  if (C.zf) goto L_1252859f;
  /* 1252855a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252855d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12528560 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12528562 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12528565 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252856b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252856e jne 0x12528580 */
  if (!C.zf) goto L_12528580;
  /* 12528570 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528573 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12528576 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12528578 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252857b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1252857e jmp 0x1252859d */
  goto L_1252859d;
L_12528580:;
  /* 12528580 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12528583 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12528589 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252858c jne 0x1252859d */
  if (!C.zf) goto L_1252859d;
  /* 1252858e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12528591 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12528594 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12528597 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252859a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1252859d:;
  /* 1252859d jmp 0x125285ae */
  goto L_125285ae;
L_1252859f:;
  /* 1252859f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125285a2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125285a5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 125285a8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125285ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_125285ae:;
  /* 125285ae jmp 0x125285bf */
  goto L_125285bf;
L_125285b0:;
  /* 125285b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125285b3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125285b6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 125285b9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125285bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_125285bf:;
  /* 125285bf jmp 0x125284de */
  goto L_125284de;
L_125285c4:;
  /* 125285c4 mov eax, dword ptr [0x1255645c] */
  EAX = (r32((uint32_t)(0x1255645c)));
  /* 125285c9 push eax */
  push32((uint32_t)(EAX));
  /* 125285ca call dword ptr [0x125573e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573e0))), 0x125285d0u);
  /* 125285d0 mov esp, ebp */
  ESP = (EBP);
  /* 125285d2 pop ebp */
  EBP = (pop32());
  /* 125285d3 ret  */
  ESPCHK(0x125282b0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x125285e0 (155 bytes, 45 insns) */
void f_125285e0(void) {
  FTRACE(0x125285e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125285e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125285e1 mov ebp, esp */
  EBP = (ESP);
  /* 125285e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125285e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125285ed jmp 0x125285f8 */
  goto L_125285f8;
L_125285ef:;
  /* 125285ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125285f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125285f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125285f8:;
  /* 125285f8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125285fc jge 0x12528677 */
  if ((C.sf==C.of)) goto L_12528677;
  /* 125285fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528601 cmp dword ptr [ecx*4 + 0x12556320], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12556320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528609 je 0x12528672 */
  if (C.zf) goto L_12528672;
  /* 1252860b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252860e mov eax, dword ptr [edx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 12528615 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12528618 jmp 0x12528623 */
  goto L_12528623;
L_1252861a:;
  /* 1252861a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252861d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528620 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12528623:;
  /* 12528623 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528626 mov eax, dword ptr [edx*4 + 0x12556320] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12556320)));
  /* 1252862d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528632 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528635 jae 0x1252864f */
  if (!C.cf) goto L_1252864f;
  /* 12528637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252863a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252863e je 0x1252864d */
  if (C.zf) goto L_1252864d;
  /* 12528640 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528643 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528646 push edx */
  push32((uint32_t)(EDX));
  /* 12528647 call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252864du);
L_1252864d:;
  /* 1252864d jmp 0x1252861a */
  goto L_1252861a;
L_1252864f:;
  /* 1252864f push 2 */
  push32((uint32_t)(0x2u));
  /* 12528651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528654 mov ecx, dword ptr [eax*4 + 0x12556320] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12556320)));
  /* 1252865b push ecx */
  push32((uint32_t)(ECX));
  /* 1252865c call 0x12529130 */
  push32(0x12528661u); f_12529130();
  /* 12528661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528664 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528667 mov dword ptr [edx*4 + 0x12556320], 0 */
  w32((uint32_t)(EDX*4 + 0x12556320), (0x0u));
L_12528672:;
  /* 12528672 jmp 0x125285ef */
  goto L_125285ef;
L_12528677:;
  /* 12528677 mov esp, ebp */
  ESP = (EBP);
  /* 12528679 pop ebp */
  EBP = (pop32());
  /* 1252867a ret  */
  ESPCHK(0x125285e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x12528680 (29 bytes, 13 insns) */
void f_12528680(void) {
  FTRACE(0x12528680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528680 push ebp */
  push32((uint32_t)(EBP));
  /* 12528681 mov ebp, esp */
  EBP = (ESP);
  /* 12528683 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528685 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528687 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528689 mov eax, dword ptr [0x12554b30] */
  EAX = (r32((uint32_t)(0x12554b30)));
  /* 1252868e push eax */
  push32((uint32_t)(EAX));
  /* 1252868f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528692 push ecx */
  push32((uint32_t)(ECX));
  /* 12528693 call 0x125286f0 */
  push32(0x12528698u); f_125286f0();
  /* 12528698 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252869b pop ebp */
  EBP = (pop32());
  /* 1252869c ret  */
  ESPCHK(0x12528680u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a0 @ 0x125286a0 (35 bytes, 16 insns) */
void f_125286a0(void) {
  FTRACE(0x125286a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125286a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125286a1 mov ebp, esp */
  EBP = (ESP);
  /* 125286a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125286a6 push eax */
  push32((uint32_t)(EAX));
  /* 125286a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125286aa push ecx */
  push32((uint32_t)(ECX));
  /* 125286ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125286ae push edx */
  push32((uint32_t)(EDX));
  /* 125286af mov eax, dword ptr [0x12554b30] */
  EAX = (r32((uint32_t)(0x12554b30)));
  /* 125286b4 push eax */
  push32((uint32_t)(EAX));
  /* 125286b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125286b8 push ecx */
  push32((uint32_t)(ECX));
  /* 125286b9 call 0x125286f0 */
  push32(0x125286beu); f_125286f0();
  /* 125286be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125286c1 pop ebp */
  EBP = (pop32());
  /* 125286c2 ret  */
  ESPCHK(0x125286a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x125286d0 (27 bytes, 13 insns) */
void f_125286d0(void) {
  FTRACE(0x125286d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125286d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125286d1 mov ebp, esp */
  EBP = (ESP);
  /* 125286d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125286d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125286d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125286d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125286dc push eax */
  push32((uint32_t)(EAX));
  /* 125286dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125286e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125286e1 call 0x125286f0 */
  push32(0x125286e6u); f_125286f0();
  /* 125286e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125286e9 pop ebp */
  EBP = (pop32());
  /* 125286ea ret  */
  ESPCHK(0x125286d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x125286f0 (94 bytes, 38 insns) */
void f_125286f0(void) {
  FTRACE(0x125286f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125286f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125286f1 mov ebp, esp */
  EBP = (ESP);
  /* 125286f3 push ecx */
  push32((uint32_t)(ECX));
L_125286f4:;
  /* 125286f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 125286f6 call 0x1252c0a0 */
  push32(0x125286fbu); f_1252c0a0();
  /* 125286fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125286fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528701 push eax */
  push32((uint32_t)(EAX));
  /* 12528702 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528705 push ecx */
  push32((uint32_t)(ECX));
  /* 12528706 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528709 push edx */
  push32((uint32_t)(EDX));
  /* 1252870a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252870d push eax */
  push32((uint32_t)(EAX));
  /* 1252870e call 0x12528770 */
  push32(0x12528713u); f_12528770();
  /* 12528713 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528716 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12528719 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252871b call 0x1252c140 */
  push32(0x12528720u); f_1252c140();
  /* 12528720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528723 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528727 jne 0x1252872f */
  if (!C.zf) goto L_1252872f;
  /* 12528729 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252872d jne 0x12528734 */
  if (!C.zf) goto L_12528734;
L_1252872f:;
  /* 1252872f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528732 jmp 0x1252874a */
  goto L_1252874a;
L_12528734:;
  /* 12528734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528737 push ecx */
  push32((uint32_t)(ECX));
  /* 12528738 call 0x1252c3e0 */
  push32(0x1252873du); f_1252c3e0();
  /* 1252873d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528742 jne 0x12528748 */
  if (!C.zf) goto L_12528748;
  /* 12528744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528746 jmp 0x1252874a */
  goto L_1252874a;
L_12528748:;
  /* 12528748 jmp 0x125286f4 */
  goto L_125286f4;
L_1252874a:;
  /* 1252874a mov esp, ebp */
  ESP = (EBP);
  /* 1252874c pop ebp */
  EBP = (pop32());
  /* 1252874d ret  */
  ESPCHK(0x125286f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x12528750 (23 bytes, 11 insns) */
void f_12528750(void) {
  FTRACE(0x12528750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528750 push ebp */
  push32((uint32_t)(EBP));
  /* 12528751 mov ebp, esp */
  EBP = (ESP);
  /* 12528753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528755 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528757 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252875c push eax */
  push32((uint32_t)(EAX));
  /* 1252875d call 0x12528770 */
  push32(0x12528762u); f_12528770();
  /* 12528762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528765 pop ebp */
  EBP = (pop32());
  /* 12528766 ret  */
  ESPCHK(0x12528750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x12528770 (787 bytes, 254 insns) */
void f_12528770(void) {
  FTRACE(0x12528770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528770 push ebp */
  push32((uint32_t)(EBP));
  /* 12528771 mov ebp, esp */
  EBP = (ESP);
  /* 12528773 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528776 push ebx */
  push32((uint32_t)(EBX));
  /* 12528777 push esi */
  push32((uint32_t)(ESI));
  /* 12528778 push edi */
  push32((uint32_t)(EDI));
  /* 12528779 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12528780 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12528785 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12528788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252878a je 0x125287bc */
  if (C.zf) goto L_125287bc;
L_1252878c:;
  /* 1252878c call 0x12529840 */
  push32(0x12528791u); f_12529840();
  /* 12528791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528793 jne 0x125287b6 */
  if (!C.zf) goto L_125287b6;
  /* 12528795 push 0x1254fb00 */
  push32((uint32_t)(0x1254fb00u));
  /* 1252879a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252879c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 125287a1 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 125287a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125287a8 call 0x12527760 */
  push32(0x125287adu); f_12527760();
  /* 125287ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125287b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125287b3 jne 0x125287b6 */
  if (!C.zf) goto L_125287b6;
  /* 125287b5 int3  */
  x86_unimpl("int3 @ 0x125287b5");
L_125287b6:;
  /* 125287b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125287b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125287ba jne 0x1252878c */
  if (!C.zf) goto L_1252878c;
L_125287bc:;
  /* 125287bc mov edx, dword ptr [0x12552a88] */
  EDX = (r32((uint32_t)(0x12552a88)));
  /* 125287c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125287c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125287c8 cmp eax, dword ptr [0x12552a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12552a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125287ce jne 0x125287d1 */
  if (!C.zf) goto L_125287d1;
  /* 125287d0 int3  */
  x86_unimpl("int3 @ 0x125287d0");
L_125287d1:;
  /* 125287d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125287d4 push ecx */
  push32((uint32_t)(ECX));
  /* 125287d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125287d8 push edx */
  push32((uint32_t)(EDX));
  /* 125287d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125287dc push eax */
  push32((uint32_t)(EAX));
  /* 125287dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125287e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125287e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125287e4 push edx */
  push32((uint32_t)(EDX));
  /* 125287e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125287e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125287e9 call dword ptr [0x12552c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12552c90))), 0x125287efu);
  /* 125287ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125287f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125287f4 jne 0x12528854 */
  if (!C.zf) goto L_12528854;
  /* 125287f6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125287fa je 0x12528827 */
  if (C.zf) goto L_12528827;
L_125287fc:;
  /* 125287fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125287ff push eax */
  push32((uint32_t)(EAX));
  /* 12528800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528803 push ecx */
  push32((uint32_t)(ECX));
  /* 12528804 push 0x1254fabc */
  push32((uint32_t)(0x1254fabcu));
  /* 12528809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252880b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252880d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252880f push 0 */
  push32((uint32_t)(0x0u));
  /* 12528811 call 0x12527760 */
  push32(0x12528816u); f_12527760();
  /* 12528816 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528819 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252881c jne 0x1252881f */
  if (!C.zf) goto L_1252881f;
  /* 1252881e int3  */
  x86_unimpl("int3 @ 0x1252881e");
L_1252881f:;
  /* 1252881f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12528821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12528823 jne 0x125287fc */
  if (!C.zf) goto L_125287fc;
  /* 12528825 jmp 0x1252884d */
  goto L_1252884d;
L_12528827:;
  /* 12528827 push 0x1254fa98 */
  push32((uint32_t)(0x1254fa98u));
  /* 1252882c push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12528831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528833 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528837 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528839 call 0x12527760 */
  push32(0x1252883eu); f_12527760();
  /* 1252883e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528841 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528844 jne 0x12528847 */
  if (!C.zf) goto L_12528847;
  /* 12528846 int3  */
  x86_unimpl("int3 @ 0x12528846");
L_12528847:;
  /* 12528847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252884b jne 0x12528827 */
  if (!C.zf) goto L_12528827;
L_1252884d:;
  /* 1252884d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252884f jmp 0x12528a7c */
  goto L_12528a7c;
L_12528854:;
  /* 12528854 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528857 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252885d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528860 je 0x12528876 */
  if (C.zf) goto L_12528876;
  /* 12528862 mov edx, dword ptr [0x12552a84] */
  EDX = (r32((uint32_t)(0x12552a84)));
  /* 12528868 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1252886b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252886d jne 0x12528876 */
  if (!C.zf) goto L_12528876;
  /* 1252886f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12528876:;
  /* 12528876 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252887a ja 0x12528887 */
  if ((!C.cf&&!C.zf)) goto L_12528887;
  /* 1252887c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252887f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528882 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528885 jbe 0x125288b3 */
  if ((C.cf||C.zf)) goto L_125288b3;
L_12528887:;
  /* 12528887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252888a push ecx */
  push32((uint32_t)(ECX));
  /* 1252888b push 0x1254fa70 */
  push32((uint32_t)(0x1254fa70u));
  /* 12528890 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528892 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528896 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528898 call 0x12527760 */
  push32(0x1252889du); f_12527760();
  /* 1252889d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125288a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288a3 jne 0x125288a6 */
  if (!C.zf) goto L_125288a6;
  /* 125288a5 int3  */
  x86_unimpl("int3 @ 0x125288a5");
L_125288a6:;
  /* 125288a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125288a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125288aa jne 0x12528887 */
  if (!C.zf) goto L_12528887;
  /* 125288ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125288ae jmp 0x12528a7c */
  goto L_12528a7c;
L_125288b3:;
  /* 125288b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125288b6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125288bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288be je 0x12528900 */
  if (C.zf) goto L_12528900;
  /* 125288c0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288c4 je 0x12528900 */
  if (C.zf) goto L_12528900;
  /* 125288c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125288c9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125288cf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288d2 je 0x12528900 */
  if (C.zf) goto L_12528900;
  /* 125288d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288d8 je 0x12528900 */
  if (C.zf) goto L_12528900;
L_125288da:;
  /* 125288da push 0x1254fa3c */
  push32((uint32_t)(0x1254fa3cu));
  /* 125288df push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 125288e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125288e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125288e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125288ea push 1 */
  push32((uint32_t)(0x1u));
  /* 125288ec call 0x12527760 */
  push32(0x125288f1u); f_12527760();
  /* 125288f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125288f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125288f7 jne 0x125288fa */
  if (!C.zf) goto L_125288fa;
  /* 125288f9 int3  */
  x86_unimpl("int3 @ 0x125288f9");
L_125288fa:;
  /* 125288fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125288fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125288fe jne 0x125288da */
  if (!C.zf) goto L_125288da;
L_12528900:;
  /* 12528900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528903 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528906 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12528909 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252890c push ecx */
  push32((uint32_t)(ECX));
  /* 1252890d call 0x1252c4f0 */
  push32(0x12528912u); f_1252c4f0();
  /* 12528912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12528918 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252891c jne 0x12528925 */
  if (!C.zf) goto L_12528925;
  /* 1252891e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528920 jmp 0x12528a7c */
  goto L_12528a7c;
L_12528925:;
  /* 12528925 mov edx, dword ptr [0x12552a88] */
  EDX = (r32((uint32_t)(0x12552a88)));
  /* 1252892b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252892e mov dword ptr [0x12552a88], edx */
  w32((uint32_t)(0x12552a88), (EDX));
  /* 12528934 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528938 je 0x12528983 */
  if (C.zf) goto L_12528983;
  /* 1252893a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252893d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12528943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528946 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1252894d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528950 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12528957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252895a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12528961 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528967 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1252896a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252896d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12528974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528977 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1252897e jmp 0x12528a23 */
  goto L_12528a23;
L_12528983:;
  /* 12528983 mov edx, dword ptr [0x12554994] */
  EDX = (r32((uint32_t)(0x12554994)));
  /* 12528989 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252898c mov dword ptr [0x12554994], edx */
  w32((uint32_t)(0x12554994), (EDX));
  /* 12528992 mov eax, dword ptr [0x1255499c] */
  EAX = (r32((uint32_t)(0x1255499c)));
  /* 12528997 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252899a mov dword ptr [0x1255499c], eax */
  w32((uint32_t)(0x1255499c), (EAX));
  /* 1252899f mov ecx, dword ptr [0x1255499c] */
  ECX = (r32((uint32_t)(0x1255499c)));
  /* 125289a5 cmp ecx, dword ptr [0x125549a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125549a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125289ab jbe 0x125289b9 */
  if ((C.cf||C.zf)) goto L_125289b9;
  /* 125289ad mov edx, dword ptr [0x1255499c] */
  EDX = (r32((uint32_t)(0x1255499c)));
  /* 125289b3 mov dword ptr [0x125549a0], edx */
  w32((uint32_t)(0x125549a0), (EDX));
L_125289b9:;
  /* 125289b9 cmp dword ptr [0x12554998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125289c0 je 0x125289cf */
  if (C.zf) goto L_125289cf;
  /* 125289c2 mov eax, dword ptr [0x12554998] */
  EAX = (r32((uint32_t)(0x12554998)));
  /* 125289c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125289cd jmp 0x125289d8 */
  goto L_125289d8;
L_125289cf:;
  /* 125289cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289d2 mov dword ptr [0x12554990], edx */
  w32((uint32_t)(0x12554990), (EDX));
L_125289d8:;
  /* 125289d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289db mov ecx, dword ptr [0x12554998] */
  ECX = (r32((uint32_t)(0x12554998)));
  /* 125289e1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125289e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289e6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 125289ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125289f3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125289f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125289f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125289fc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 125289ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528a05 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12528a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528a0e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12528a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528a17 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12528a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a1d mov dword ptr [0x12554998], ecx */
  w32((uint32_t)(0x12554998), (ECX));
L_12528a23:;
  /* 12528a23 push 4 */
  push32((uint32_t)(0x4u));
  /* 12528a25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12528a27 mov dl, byte ptr [0x12552a90] */
  DL = (r8((uint32_t)(0x12552a90)));
  /* 12528a2d push edx */
  push32((uint32_t)(EDX));
  /* 12528a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a31 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528a34 push eax */
  push32((uint32_t)(EAX));
  /* 12528a35 call 0x1252c410 */
  push32(0x12528a3au); f_1252c410();
  /* 12528a3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528a3d push 4 */
  push32((uint32_t)(0x4u));
  /* 12528a3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12528a41 mov cl, byte ptr [0x12552a90] */
  CL = (r8((uint32_t)(0x12552a90)));
  /* 12528a47 push ecx */
  push32((uint32_t)(ECX));
  /* 12528a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a4e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12528a52 push ecx */
  push32((uint32_t)(ECX));
  /* 12528a53 call 0x1252c410 */
  push32(0x12528a58u); f_1252c410();
  /* 12528a58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528a5e push edx */
  push32((uint32_t)(EDX));
  /* 12528a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528a61 mov al, byte ptr [0x12552a92] */
  AL = (r8((uint32_t)(0x12552a92)));
  /* 12528a66 push eax */
  push32((uint32_t)(EAX));
  /* 12528a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a6a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528a6d push ecx */
  push32((uint32_t)(ECX));
  /* 12528a6e call 0x1252c410 */
  push32(0x12528a73u); f_1252c410();
  /* 12528a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528a79 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12528a7c:;
  /* 12528a7c pop edi */
  EDI = (pop32());
  /* 12528a7d pop esi */
  ESI = (pop32());
  /* 12528a7e pop ebx */
  EBX = (pop32());
  /* 12528a7f mov esp, ebp */
  ESP = (EBP);
  /* 12528a81 pop ebp */
  EBP = (pop32());
  /* 12528a82 ret  */
  ESPCHK(0x12528770u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a90 @ 0x12528a90 (27 bytes, 13 insns) */
void f_12528a90(void) {
  FTRACE(0x12528a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12528a91 mov ebp, esp */
  EBP = (ESP);
  /* 12528a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528a9c push eax */
  push32((uint32_t)(EAX));
  /* 12528a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12528aa1 call 0x12528ab0 */
  push32(0x12528aa6u); f_12528ab0();
  /* 12528aa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528aa9 pop ebp */
  EBP = (pop32());
  /* 12528aaa ret  */
  ESPCHK(0x12528a90u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12528ab0 (96 bytes, 37 insns) */
void f_12528ab0(void) {
  FTRACE(0x12528ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12528ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12528ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528ab9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12528abd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12528ac0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12528ac4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528ac7 push edx */
  push32((uint32_t)(EDX));
  /* 12528ac8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528acb push eax */
  push32((uint32_t)(EAX));
  /* 12528acc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528acf push ecx */
  push32((uint32_t)(ECX));
  /* 12528ad0 call 0x125286a0 */
  push32(0x12528ad5u); f_125286a0();
  /* 12528ad5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528ad8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12528adb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528adf je 0x12528b09 */
  if (C.zf) goto L_12528b09;
  /* 12528ae1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528ae4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12528ae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528aea add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528aed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12528af0:;
  /* 12528af0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528af3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528af6 jae 0x12528b09 */
  if (!C.cf) goto L_12528b09;
  /* 12528af8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528afb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12528afe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528b01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12528b07 jmp 0x12528af0 */
  goto L_12528af0;
L_12528b09:;
  /* 12528b09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528b0c mov esp, ebp */
  ESP = (EBP);
  /* 12528b0e pop ebp */
  EBP = (pop32());
  /* 12528b0f ret  */
  ESPCHK(0x12528ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x12528b10 (27 bytes, 13 insns) */
void f_12528b10(void) {
  FTRACE(0x12528b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12528b11 mov ebp, esp */
  EBP = (ESP);
  /* 12528b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528b19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528b1c push eax */
  push32((uint32_t)(EAX));
  /* 12528b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528b20 push ecx */
  push32((uint32_t)(ECX));
  /* 12528b21 call 0x12528b30 */
  push32(0x12528b26u); f_12528b30();
  /* 12528b26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b29 pop ebp */
  EBP = (pop32());
  /* 12528b2a ret  */
  ESPCHK(0x12528b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b30 @ 0x12528b30 (64 bytes, 27 insns) */
void f_12528b30(void) {
  FTRACE(0x12528b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12528b31 mov ebp, esp */
  EBP = (ESP);
  /* 12528b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12528b34 push 9 */
  push32((uint32_t)(0x9u));
  /* 12528b36 call 0x1252c0a0 */
  push32(0x12528b3bu); f_1252c0a0();
  /* 12528b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12528b40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528b43 push eax */
  push32((uint32_t)(EAX));
  /* 12528b44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528b47 push ecx */
  push32((uint32_t)(ECX));
  /* 12528b48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528b4b push edx */
  push32((uint32_t)(EDX));
  /* 12528b4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528b4f push eax */
  push32((uint32_t)(EAX));
  /* 12528b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528b53 push ecx */
  push32((uint32_t)(ECX));
  /* 12528b54 call 0x12528b70 */
  push32(0x12528b59u); f_12528b70();
  /* 12528b59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12528b5f push 9 */
  push32((uint32_t)(0x9u));
  /* 12528b61 call 0x1252c140 */
  push32(0x12528b66u); f_1252c140();
  /* 12528b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528b6c mov esp, ebp */
  ESP = (EBP);
  /* 12528b6e pop ebp */
  EBP = (pop32());
  /* 12528b6f ret  */
  ESPCHK(0x12528b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b70 @ 0x12528b70 (1297 bytes, 431 insns) */
void f_12528b70(void) {
  FTRACE(0x12528b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12528b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12528b71 mov ebp, esp */
  EBP = (ESP);
  /* 12528b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528b76 push ebx */
  push32((uint32_t)(EBX));
  /* 12528b77 push esi */
  push32((uint32_t)(ESI));
  /* 12528b78 push edi */
  push32((uint32_t)(EDI));
  /* 12528b79 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12528b80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528b84 jne 0x12528ba3 */
  if (!C.zf) goto L_12528ba3;
  /* 12528b86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528b89 push eax */
  push32((uint32_t)(EAX));
  /* 12528b8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528b8d push ecx */
  push32((uint32_t)(ECX));
  /* 12528b8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528b91 push edx */
  push32((uint32_t)(EDX));
  /* 12528b92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528b95 push eax */
  push32((uint32_t)(EAX));
  /* 12528b96 call 0x125286a0 */
  push32(0x12528b9bu); f_125286a0();
  /* 12528b9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528b9e jmp 0x1252907a */
  goto L_1252907a;
L_12528ba3:;
  /* 12528ba3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528ba7 je 0x12528bc6 */
  if (C.zf) goto L_12528bc6;
  /* 12528ba9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528bad jne 0x12528bc6 */
  if (!C.zf) goto L_12528bc6;
  /* 12528baf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12528bb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528bb6 push edx */
  push32((uint32_t)(EDX));
  /* 12528bb7 call 0x12529130 */
  push32(0x12528bbcu); f_12529130();
  /* 12528bbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528bc1 jmp 0x1252907a */
  goto L_1252907a;
L_12528bc6:;
  /* 12528bc6 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12528bcb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12528bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528bd0 je 0x12528c02 */
  if (C.zf) goto L_12528c02;
L_12528bd2:;
  /* 12528bd2 call 0x12529840 */
  push32(0x12528bd7u); f_12529840();
  /* 12528bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528bd9 jne 0x12528bfc */
  if (!C.zf) goto L_12528bfc;
  /* 12528bdb push 0x1254fb00 */
  push32((uint32_t)(0x1254fb00u));
  /* 12528be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528be2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12528be7 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528bec push 2 */
  push32((uint32_t)(0x2u));
  /* 12528bee call 0x12527760 */
  push32(0x12528bf3u); f_12527760();
  /* 12528bf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528bf6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528bf9 jne 0x12528bfc */
  if (!C.zf) goto L_12528bfc;
  /* 12528bfb int3  */
  x86_unimpl("int3 @ 0x12528bfb");
L_12528bfc:;
  /* 12528bfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12528bfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12528c00 jne 0x12528bd2 */
  if (!C.zf) goto L_12528bd2;
L_12528c02:;
  /* 12528c02 mov edx, dword ptr [0x12552a88] */
  EDX = (r32((uint32_t)(0x12552a88)));
  /* 12528c08 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12528c0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12528c0e cmp eax, dword ptr [0x12552a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12552a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528c14 jne 0x12528c17 */
  if (!C.zf) goto L_12528c17;
  /* 12528c16 int3  */
  x86_unimpl("int3 @ 0x12528c16");
L_12528c17:;
  /* 12528c17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12528c1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528c1e push edx */
  push32((uint32_t)(EDX));
  /* 12528c1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12528c22 push eax */
  push32((uint32_t)(EAX));
  /* 12528c23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528c26 push ecx */
  push32((uint32_t)(ECX));
  /* 12528c27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528c2a push edx */
  push32((uint32_t)(EDX));
  /* 12528c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528c2e push eax */
  push32((uint32_t)(EAX));
  /* 12528c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12528c31 call dword ptr [0x12552c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12552c90))), 0x12528c37u);
  /* 12528c37 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528c3c jne 0x12528c9c */
  if (!C.zf) goto L_12528c9c;
  /* 12528c3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528c42 je 0x12528c6f */
  if (C.zf) goto L_12528c6f;
L_12528c44:;
  /* 12528c44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528c47 push ecx */
  push32((uint32_t)(ECX));
  /* 12528c48 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528c4b push edx */
  push32((uint32_t)(EDX));
  /* 12528c4c push 0x1254fc7c */
  push32((uint32_t)(0x1254fc7cu));
  /* 12528c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c59 call 0x12527760 */
  push32(0x12528c5eu); f_12527760();
  /* 12528c5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528c61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528c64 jne 0x12528c67 */
  if (!C.zf) goto L_12528c67;
  /* 12528c66 int3  */
  x86_unimpl("int3 @ 0x12528c66");
L_12528c67:;
  /* 12528c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528c6b jne 0x12528c44 */
  if (!C.zf) goto L_12528c44;
  /* 12528c6d jmp 0x12528c95 */
  goto L_12528c95;
L_12528c6f:;
  /* 12528c6f push 0x1254fc58 */
  push32((uint32_t)(0x1254fc58u));
  /* 12528c74 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12528c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12528c81 call 0x12527760 */
  push32(0x12528c86u); f_12527760();
  /* 12528c86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528c8c jne 0x12528c8f */
  if (!C.zf) goto L_12528c8f;
  /* 12528c8e int3  */
  x86_unimpl("int3 @ 0x12528c8e");
L_12528c8f:;
  /* 12528c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12528c91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12528c93 jne 0x12528c6f */
  if (!C.zf) goto L_12528c6f;
L_12528c95:;
  /* 12528c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528c97 jmp 0x1252907a */
  goto L_1252907a;
L_12528c9c:;
  /* 12528c9c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528ca0 jbe 0x12528cce */
  if ((C.cf||C.zf)) goto L_12528cce;
L_12528ca2:;
  /* 12528ca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528ca5 push edx */
  push32((uint32_t)(EDX));
  /* 12528ca6 push 0x1254fc28 */
  push32((uint32_t)(0x1254fc28u));
  /* 12528cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12528cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12528caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12528cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528cb3 call 0x12527760 */
  push32(0x12528cb8u); f_12527760();
  /* 12528cb8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528cbb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528cbe jne 0x12528cc1 */
  if (!C.zf) goto L_12528cc1;
  /* 12528cc0 int3  */
  x86_unimpl("int3 @ 0x12528cc0");
L_12528cc1:;
  /* 12528cc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528cc5 jne 0x12528ca2 */
  if (!C.zf) goto L_12528ca2;
  /* 12528cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528cc9 jmp 0x1252907a */
  goto L_1252907a;
L_12528cce:;
  /* 12528cce cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528cd2 je 0x12528d16 */
  if (C.zf) goto L_12528d16;
  /* 12528cd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528cd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12528cdd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528ce0 je 0x12528d16 */
  if (C.zf) goto L_12528d16;
  /* 12528ce2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528ce5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12528ceb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528cee je 0x12528d16 */
  if (C.zf) goto L_12528d16;
L_12528cf0:;
  /* 12528cf0 push 0x1254fa3c */
  push32((uint32_t)(0x1254fa3cu));
  /* 12528cf5 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12528cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12528cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12528cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12528d00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12528d02 call 0x12527760 */
  push32(0x12528d07u); f_12527760();
  /* 12528d07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528d0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d0d jne 0x12528d10 */
  if (!C.zf) goto L_12528d10;
  /* 12528d0f int3  */
  x86_unimpl("int3 @ 0x12528d0f");
L_12528d10:;
  /* 12528d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528d14 jne 0x12528cf0 */
  if (!C.zf) goto L_12528cf0;
L_12528d16:;
  /* 12528d16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528d19 push ecx */
  push32((uint32_t)(ECX));
  /* 12528d1a call 0x12529ca0 */
  push32(0x12528d1fu); f_12529ca0();
  /* 12528d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12528d24 jne 0x12528d47 */
  if (!C.zf) goto L_12528d47;
  /* 12528d26 push 0x1254fc04 */
  push32((uint32_t)(0x1254fc04u));
  /* 12528d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12528d2d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12528d32 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528d37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528d39 call 0x12527760 */
  push32(0x12528d3eu); f_12527760();
  /* 12528d3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528d41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d44 jne 0x12528d47 */
  if (!C.zf) goto L_12528d47;
  /* 12528d46 int3  */
  x86_unimpl("int3 @ 0x12528d46");
L_12528d47:;
  /* 12528d47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12528d49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12528d4b jne 0x12528d16 */
  if (!C.zf) goto L_12528d16;
  /* 12528d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12528d50 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528d53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12528d56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528d59 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d5d jne 0x12528d66 */
  if (!C.zf) goto L_12528d66;
  /* 12528d5f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12528d66:;
  /* 12528d66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d6a je 0x12528daa */
  if (C.zf) goto L_12528daa;
L_12528d6c:;
  /* 12528d6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528d6f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d76 jne 0x12528d81 */
  if (!C.zf) goto L_12528d81;
  /* 12528d78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528d7b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d7f je 0x12528da2 */
  if (C.zf) goto L_12528da2;
L_12528d81:;
  /* 12528d81 push 0x1254fbbc */
  push32((uint32_t)(0x1254fbbcu));
  /* 12528d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12528d88 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12528d8d push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528d94 call 0x12527760 */
  push32(0x12528d99u); f_12527760();
  /* 12528d99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528d9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528d9f jne 0x12528da2 */
  if (!C.zf) goto L_12528da2;
  /* 12528da1 int3  */
  x86_unimpl("int3 @ 0x12528da1");
L_12528da2:;
  /* 12528da2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12528da4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12528da6 jne 0x12528d6c */
  if (!C.zf) goto L_12528d6c;
  /* 12528da8 jmp 0x12528e0e */
  goto L_12528e0e;
L_12528daa:;
  /* 12528daa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528dad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12528db0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12528db5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528db8 jne 0x12528dcf */
  if (!C.zf) goto L_12528dcf;
  /* 12528dba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528dbd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12528dc3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528dc6 jne 0x12528dcf */
  if (!C.zf) goto L_12528dcf;
  /* 12528dc8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12528dcf:;
  /* 12528dcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528dd2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12528dd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12528dda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12528ddd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12528de3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528de5 je 0x12528e08 */
  if (C.zf) goto L_12528e08;
  /* 12528de7 push 0x1254fb80 */
  push32((uint32_t)(0x1254fb80u));
  /* 12528dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12528dee push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12528df3 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528dfa call 0x12527760 */
  push32(0x12528dffu); f_12527760();
  /* 12528dff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528e05 jne 0x12528e08 */
  if (!C.zf) goto L_12528e08;
  /* 12528e07 int3  */
  x86_unimpl("int3 @ 0x12528e07");
L_12528e08:;
  /* 12528e08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12528e0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12528e0c jne 0x12528dcf */
  if (!C.zf) goto L_12528dcf;
L_12528e0e:;
  /* 12528e0e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528e12 je 0x12528e39 */
  if (C.zf) goto L_12528e39;
  /* 12528e14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528e17 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e1a push eax */
  push32((uint32_t)(EAX));
  /* 12528e1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528e1e push ecx */
  push32((uint32_t)(ECX));
  /* 12528e1f call 0x1252c620 */
  push32(0x12528e24u); f_1252c620();
  /* 12528e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12528e2a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528e2e jne 0x12528e37 */
  if (!C.zf) goto L_12528e37;
  /* 12528e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528e32 jmp 0x1252907a */
  goto L_1252907a;
L_12528e37:;
  /* 12528e37 jmp 0x12528e5c */
  goto L_12528e5c;
L_12528e39:;
  /* 12528e39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528e3c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e3f push edx */
  push32((uint32_t)(EDX));
  /* 12528e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12528e43 push eax */
  push32((uint32_t)(EAX));
  /* 12528e44 call 0x1252c570 */
  push32(0x12528e49u); f_1252c570();
  /* 12528e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12528e4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528e53 jne 0x12528e5c */
  if (!C.zf) goto L_12528e5c;
  /* 12528e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528e57 jmp 0x1252907a */
  goto L_1252907a;
L_12528e5c:;
  /* 12528e5c mov ecx, dword ptr [0x12552a88] */
  ECX = (r32((uint32_t)(0x12552a88)));
  /* 12528e62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e65 mov dword ptr [0x12552a88], ecx */
  w32((uint32_t)(0x12552a88), (ECX));
  /* 12528e6b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528e6f jne 0x12528ec7 */
  if (!C.zf) goto L_12528ec7;
  /* 12528e71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528e74 mov eax, dword ptr [0x12554994] */
  EAX = (r32((uint32_t)(0x12554994)));
  /* 12528e79 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528e7c mov dword ptr [0x12554994], eax */
  w32((uint32_t)(0x12554994), (EAX));
  /* 12528e81 mov ecx, dword ptr [0x12554994] */
  ECX = (r32((uint32_t)(0x12554994)));
  /* 12528e87 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528e8a mov dword ptr [0x12554994], ecx */
  w32((uint32_t)(0x12554994), (ECX));
  /* 12528e90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528e93 mov eax, dword ptr [0x1255499c] */
  EAX = (r32((uint32_t)(0x1255499c)));
  /* 12528e98 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528e9b mov dword ptr [0x1255499c], eax */
  w32((uint32_t)(0x1255499c), (EAX));
  /* 12528ea0 mov ecx, dword ptr [0x1255499c] */
  ECX = (r32((uint32_t)(0x1255499c)));
  /* 12528ea6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528ea9 mov dword ptr [0x1255499c], ecx */
  w32((uint32_t)(0x1255499c), (ECX));
  /* 12528eaf mov edx, dword ptr [0x1255499c] */
  EDX = (r32((uint32_t)(0x1255499c)));
  /* 12528eb5 cmp edx, dword ptr [0x125549a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125549a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528ebb jbe 0x12528ec7 */
  if ((C.cf||C.zf)) goto L_12528ec7;
  /* 12528ebd mov eax, dword ptr [0x1255499c] */
  EAX = (r32((uint32_t)(0x1255499c)));
  /* 12528ec2 mov dword ptr [0x125549a0], eax */
  w32((uint32_t)(0x125549a0), (EAX));
L_12528ec7:;
  /* 12528ec7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528eca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528ecd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12528ed0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528ed3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528ed6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528ed9 jbe 0x12528eff */
  if ((C.cf||C.zf)) goto L_12528eff;
  /* 12528edb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528ede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528ee1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12528ee4 push edx */
  push32((uint32_t)(EDX));
  /* 12528ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528ee7 mov al, byte ptr [0x12552a92] */
  AL = (r8((uint32_t)(0x12552a92)));
  /* 12528eec push eax */
  push32((uint32_t)(EAX));
  /* 12528eed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528ef0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528ef3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528ef6 push edx */
  push32((uint32_t)(EDX));
  /* 12528ef7 call 0x1252c410 */
  push32(0x12528efcu); f_1252c410();
  /* 12528efc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12528eff:;
  /* 12528eff push 4 */
  push32((uint32_t)(0x4u));
  /* 12528f01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12528f03 mov al, byte ptr [0x12552a90] */
  AL = (r8((uint32_t)(0x12552a90)));
  /* 12528f08 push eax */
  push32((uint32_t)(EAX));
  /* 12528f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528f0c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12528f0f push ecx */
  push32((uint32_t)(ECX));
  /* 12528f10 call 0x1252c410 */
  push32(0x12528f15u); f_1252c410();
  /* 12528f15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528f18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f1c jne 0x12528f39 */
  if (!C.zf) goto L_12528f39;
  /* 12528f1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12528f24 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12528f27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f2a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12528f2d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12528f30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f33 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12528f36 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12528f39:;
  /* 12528f39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12528f3f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12528f42:;
  /* 12528f42 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f46 jne 0x12528f77 */
  if (!C.zf) goto L_12528f77;
  /* 12528f48 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f4c jne 0x12528f56 */
  if (!C.zf) goto L_12528f56;
  /* 12528f4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f51 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f54 je 0x12528f77 */
  if (C.zf) goto L_12528f77;
L_12528f56:;
  /* 12528f56 push 0x1254fb4c */
  push32((uint32_t)(0x1254fb4cu));
  /* 12528f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12528f5d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12528f62 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528f69 call 0x12527760 */
  push32(0x12528f6eu); f_12527760();
  /* 12528f6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528f71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f74 jne 0x12528f77 */
  if (!C.zf) goto L_12528f77;
  /* 12528f76 int3  */
  x86_unimpl("int3 @ 0x12528f76");
L_12528f77:;
  /* 12528f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12528f79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12528f7b jne 0x12528f42 */
  if (!C.zf) goto L_12528f42;
  /* 12528f7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f80 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f83 je 0x12528f8b */
  if (C.zf) goto L_12528f8b;
  /* 12528f85 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f89 je 0x12528f93 */
  if (C.zf) goto L_12528f93;
L_12528f8b:;
  /* 12528f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12528f8e jmp 0x1252907a */
  goto L_1252907a;
L_12528f93:;
  /* 12528f93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528f99 je 0x12528fab */
  if (C.zf) goto L_12528fab;
  /* 12528f9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528f9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12528fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528fa3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12528fa6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12528fa9 jmp 0x12528fe7 */
  goto L_12528fe7;
L_12528fab:;
  /* 12528fab mov eax, dword ptr [0x12554990] */
  EAX = (r32((uint32_t)(0x12554990)));
  /* 12528fb0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528fb3 je 0x12528fd6 */
  if (C.zf) goto L_12528fd6;
  /* 12528fb5 push 0x1254fb30 */
  push32((uint32_t)(0x1254fb30u));
  /* 12528fba push 0 */
  push32((uint32_t)(0x0u));
  /* 12528fbc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12528fc1 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12528fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12528fc8 call 0x12527760 */
  push32(0x12528fcdu); f_12527760();
  /* 12528fcd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12528fd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528fd3 jne 0x12528fd6 */
  if (!C.zf) goto L_12528fd6;
  /* 12528fd5 int3  */
  x86_unimpl("int3 @ 0x12528fd5");
L_12528fd6:;
  /* 12528fd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12528fd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12528fda jne 0x12528fab */
  if (!C.zf) goto L_12528fab;
  /* 12528fdc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528fdf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12528fe2 mov dword ptr [0x12554990], eax */
  w32((uint32_t)(0x12554990), (EAX));
L_12528fe7:;
  /* 12528fe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528fea cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12528fee je 0x12528fff */
  if (C.zf) goto L_12528fff;
  /* 12528ff0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528ff3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12528ff6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12528ff9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12528ffb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12528ffd jmp 0x1252903a */
  goto L_1252903a;
L_12528fff:;
  /* 12528fff mov eax, dword ptr [0x12554998] */
  EAX = (r32((uint32_t)(0x12554998)));
  /* 12529004 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529007 je 0x1252902a */
  if (C.zf) goto L_1252902a;
  /* 12529009 push 0x1254fb14 */
  push32((uint32_t)(0x1254fb14u));
  /* 1252900e push 0 */
  push32((uint32_t)(0x0u));
  /* 12529010 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12529015 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252901a push 2 */
  push32((uint32_t)(0x2u));
  /* 1252901c call 0x12527760 */
  push32(0x12529021u); f_12527760();
  /* 12529021 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529024 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529027 jne 0x1252902a */
  if (!C.zf) goto L_1252902a;
  /* 12529029 int3  */
  x86_unimpl("int3 @ 0x12529029");
L_1252902a:;
  /* 1252902a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252902c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252902e jne 0x12528fff */
  if (!C.zf) goto L_12528fff;
  /* 12529030 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12529033 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12529035 mov dword ptr [0x12554998], eax */
  w32((uint32_t)(0x12554998), (EAX));
L_1252903a:;
  /* 1252903a cmp dword ptr [0x12554998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529041 je 0x12529051 */
  if (C.zf) goto L_12529051;
  /* 12529043 mov ecx, dword ptr [0x12554998] */
  ECX = (r32((uint32_t)(0x12554998)));
  /* 12529049 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252904c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1252904f jmp 0x12529059 */
  goto L_12529059;
L_12529051:;
  /* 12529051 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12529054 mov dword ptr [0x12554990], eax */
  w32((uint32_t)(0x12554990), (EAX));
L_12529059:;
  /* 12529059 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252905c mov edx, dword ptr [0x12554998] */
  EDX = (r32((uint32_t)(0x12554998)));
  /* 12529062 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12529064 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12529067 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1252906e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12529071 mov dword ptr [0x12554998], ecx */
  w32((uint32_t)(0x12554998), (ECX));
  /* 12529077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1252907a:;
  /* 1252907a pop edi */
  EDI = (pop32());
  /* 1252907b pop esi */
  ESI = (pop32());
  /* 1252907c pop ebx */
  EBX = (pop32());
  /* 1252907d mov esp, ebp */
  ESP = (EBP);
  /* 1252907f pop ebp */
  EBP = (pop32());
  /* 12529080 ret  */
  ESPCHK(0x12528b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009090 @ 0x12529090 (27 bytes, 13 insns) */
void f_12529090(void) {
  FTRACE(0x12529090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529090 push ebp */
  push32((uint32_t)(EBP));
  /* 12529091 mov ebp, esp */
  EBP = (ESP);
  /* 12529093 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529095 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529097 push 1 */
  push32((uint32_t)(0x1u));
  /* 12529099 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252909c push eax */
  push32((uint32_t)(EAX));
  /* 1252909d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125290a0 push ecx */
  push32((uint32_t)(ECX));
  /* 125290a1 call 0x125290b0 */
  push32(0x125290a6u); f_125290b0();
  /* 125290a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125290a9 pop ebp */
  EBP = (pop32());
  /* 125290aa ret  */
  ESPCHK(0x12529090u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x125290b0 (64 bytes, 27 insns) */
void f_125290b0(void) {
  FTRACE(0x125290b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125290b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125290b1 mov ebp, esp */
  EBP = (ESP);
  /* 125290b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125290b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 125290b6 call 0x1252c0a0 */
  push32(0x125290bbu); f_1252c0a0();
  /* 125290bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125290be push 0 */
  push32((uint32_t)(0x0u));
  /* 125290c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125290c3 push eax */
  push32((uint32_t)(EAX));
  /* 125290c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125290c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125290c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125290cb push edx */
  push32((uint32_t)(EDX));
  /* 125290cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125290cf push eax */
  push32((uint32_t)(EAX));
  /* 125290d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125290d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125290d4 call 0x12528b70 */
  push32(0x125290d9u); f_12528b70();
  /* 125290d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125290dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125290df push 9 */
  push32((uint32_t)(0x9u));
  /* 125290e1 call 0x1252c140 */
  push32(0x125290e6u); f_1252c140();
  /* 125290e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125290e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125290ec mov esp, ebp */
  ESP = (EBP);
  /* 125290ee pop ebp */
  EBP = (pop32());
  /* 125290ef ret  */
  ESPCHK(0x125290b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x125290f0 (19 bytes, 9 insns) */
void f_125290f0(void) {
  FTRACE(0x125290f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125290f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125290f1 mov ebp, esp */
  EBP = (ESP);
  /* 125290f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125290f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125290f8 push eax */
  push32((uint32_t)(EAX));
  /* 125290f9 call 0x12529130 */
  push32(0x125290feu); f_12529130();
  /* 125290fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529101 pop ebp */
  EBP = (pop32());
  /* 12529102 ret  */
  ESPCHK(0x125290f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x12529110 (19 bytes, 9 insns) */
void f_12529110(void) {
  FTRACE(0x12529110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529110 push ebp */
  push32((uint32_t)(EBP));
  /* 12529111 mov ebp, esp */
  EBP = (ESP);
  /* 12529113 push 1 */
  push32((uint32_t)(0x1u));
  /* 12529115 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529118 push eax */
  push32((uint32_t)(EAX));
  /* 12529119 call 0x12529160 */
  push32(0x1252911eu); f_12529160();
  /* 1252911e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529121 pop ebp */
  EBP = (pop32());
  /* 12529122 ret  */
  ESPCHK(0x12529110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x12529130 (41 bytes, 16 insns) */
void f_12529130(void) {
  FTRACE(0x12529130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529130 push ebp */
  push32((uint32_t)(EBP));
  /* 12529131 mov ebp, esp */
  EBP = (ESP);
  /* 12529133 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529135 call 0x1252c0a0 */
  push32(0x1252913au); f_1252c0a0();
  /* 1252913a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252913d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529140 push eax */
  push32((uint32_t)(EAX));
  /* 12529141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529144 push ecx */
  push32((uint32_t)(ECX));
  /* 12529145 call 0x12529160 */
  push32(0x1252914au); f_12529160();
  /* 1252914a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252914d push 9 */
  push32((uint32_t)(0x9u));
  /* 1252914f call 0x1252c140 */
  push32(0x12529154u); f_1252c140();
  /* 12529154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529157 pop ebp */
  EBP = (pop32());
  /* 12529158 ret  */
  ESPCHK(0x12529130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009160 @ 0x12529160 (1004 bytes, 342 insns) */
void f_12529160(void) {
  FTRACE(0x12529160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529160 push ebp */
  push32((uint32_t)(EBP));
  /* 12529161 mov ebp, esp */
  EBP = (ESP);
  /* 12529163 push ecx */
  push32((uint32_t)(ECX));
  /* 12529164 push ebx */
  push32((uint32_t)(EBX));
  /* 12529165 push esi */
  push32((uint32_t)(ESI));
  /* 12529166 push edi */
  push32((uint32_t)(EDI));
  /* 12529167 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 1252916c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1252916f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529171 je 0x125291a3 */
  if (C.zf) goto L_125291a3;
L_12529173:;
  /* 12529173 call 0x12529840 */
  push32(0x12529178u); f_12529840();
  /* 12529178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252917a jne 0x1252919d */
  if (!C.zf) goto L_1252919d;
  /* 1252917c push 0x1254fb00 */
  push32((uint32_t)(0x1254fb00u));
  /* 12529181 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529183 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12529188 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252918d push 2 */
  push32((uint32_t)(0x2u));
  /* 1252918f call 0x12527760 */
  push32(0x12529194u); f_12527760();
  /* 12529194 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529197 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252919a jne 0x1252919d */
  if (!C.zf) goto L_1252919d;
  /* 1252919c int3  */
  x86_unimpl("int3 @ 0x1252919c");
L_1252919d:;
  /* 1252919d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252919f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125291a1 jne 0x12529173 */
  if (!C.zf) goto L_12529173;
L_125291a3:;
  /* 125291a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125291a7 jne 0x125291ae */
  if (!C.zf) goto L_125291ae;
  /* 125291a9 jmp 0x12529545 */
  goto L_12529545;
L_125291ae:;
  /* 125291ae push 0 */
  push32((uint32_t)(0x0u));
  /* 125291b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125291b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125291b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125291b7 push edx */
  push32((uint32_t)(EDX));
  /* 125291b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125291ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125291bd push eax */
  push32((uint32_t)(EAX));
  /* 125291be push 3 */
  push32((uint32_t)(0x3u));
  /* 125291c0 call dword ptr [0x12552c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12552c90))), 0x125291c6u);
  /* 125291c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125291c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125291cb jne 0x125291f8 */
  if (!C.zf) goto L_125291f8;
L_125291cd:;
  /* 125291cd push 0x1254fdc4 */
  push32((uint32_t)(0x1254fdc4u));
  /* 125291d2 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 125291d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125291d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125291db push 0 */
  push32((uint32_t)(0x0u));
  /* 125291dd push 0 */
  push32((uint32_t)(0x0u));
  /* 125291df call 0x12527760 */
  push32(0x125291e4u); f_12527760();
  /* 125291e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125291e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125291ea jne 0x125291ed */
  if (!C.zf) goto L_125291ed;
  /* 125291ec int3  */
  x86_unimpl("int3 @ 0x125291ec");
L_125291ed:;
  /* 125291ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125291ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125291f1 jne 0x125291cd */
  if (!C.zf) goto L_125291cd;
  /* 125291f3 jmp 0x12529545 */
  goto L_12529545;
L_125291f8:;
  /* 125291f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125291fb push edx */
  push32((uint32_t)(EDX));
  /* 125291fc call 0x12529ca0 */
  push32(0x12529201u); f_12529ca0();
  /* 12529201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529206 jne 0x12529229 */
  if (!C.zf) goto L_12529229;
  /* 12529208 push 0x1254fc04 */
  push32((uint32_t)(0x1254fc04u));
  /* 1252920d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252920f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12529214 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12529219 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252921b call 0x12527760 */
  push32(0x12529220u); f_12527760();
  /* 12529220 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529223 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529226 jne 0x12529229 */
  if (!C.zf) goto L_12529229;
  /* 12529228 int3  */
  x86_unimpl("int3 @ 0x12529228");
L_12529229:;
  /* 12529229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252922b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252922d jne 0x125291f8 */
  if (!C.zf) goto L_125291f8;
  /* 1252922f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529232 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529235 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12529238:;
  /* 12529238 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252923b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252923e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529243 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529246 je 0x1252928b */
  if (C.zf) goto L_1252928b;
  /* 12529248 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252924b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252924f je 0x1252928b */
  if (C.zf) goto L_1252928b;
  /* 12529251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529254 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529257 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252925c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252925f je 0x1252928b */
  if (C.zf) goto L_1252928b;
  /* 12529261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529264 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529268 je 0x1252928b */
  if (C.zf) goto L_1252928b;
  /* 1252926a push 0x1254fd9c */
  push32((uint32_t)(0x1254fd9cu));
  /* 1252926f push 0 */
  push32((uint32_t)(0x0u));
  /* 12529271 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12529276 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252927b push 2 */
  push32((uint32_t)(0x2u));
  /* 1252927d call 0x12527760 */
  push32(0x12529282u); f_12527760();
  /* 12529282 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529285 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529288 jne 0x1252928b */
  if (!C.zf) goto L_1252928b;
  /* 1252928a int3  */
  x86_unimpl("int3 @ 0x1252928a");
L_1252928b:;
  /* 1252928b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252928d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252928f jne 0x12529238 */
  if (!C.zf) goto L_12529238;
  /* 12529291 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12529296 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12529299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252929b jne 0x12529366 */
  if (!C.zf) goto L_12529366;
  /* 125292a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 125292a3 mov cl, byte ptr [0x12552a90] */
  CL = (r8((uint32_t)(0x12552a90)));
  /* 125292a9 push ecx */
  push32((uint32_t)(ECX));
  /* 125292aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125292ad add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125292b0 push edx */
  push32((uint32_t)(EDX));
  /* 125292b1 call 0x125297b0 */
  push32(0x125292b6u); f_125297b0();
  /* 125292b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125292b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125292bb jne 0x12529300 */
  if (!C.zf) goto L_12529300;
L_125292bd:;
  /* 125292bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125292c0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125292c3 push eax */
  push32((uint32_t)(EAX));
  /* 125292c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125292c7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125292ca push edx */
  push32((uint32_t)(EDX));
  /* 125292cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125292ce mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125292d1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125292d7 mov edx, dword ptr [ecx*4 + 0x12552a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a94)));
  /* 125292de push edx */
  push32((uint32_t)(EDX));
  /* 125292df push 0x1254fd70 */
  push32((uint32_t)(0x1254fd70u));
  /* 125292e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125292e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125292e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125292ea push 1 */
  push32((uint32_t)(0x1u));
  /* 125292ec call 0x12527760 */
  push32(0x125292f1u); f_12527760();
  /* 125292f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125292f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125292f7 jne 0x125292fa */
  if (!C.zf) goto L_125292fa;
  /* 125292f9 int3  */
  x86_unimpl("int3 @ 0x125292f9");
L_125292fa:;
  /* 125292fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125292fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125292fe jne 0x125292bd */
  if (!C.zf) goto L_125292bd;
L_12529300:;
  /* 12529300 push 4 */
  push32((uint32_t)(0x4u));
  /* 12529302 mov cl, byte ptr [0x12552a90] */
  CL = (r8((uint32_t)(0x12552a90)));
  /* 12529308 push ecx */
  push32((uint32_t)(ECX));
  /* 12529309 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252930c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252930f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529312 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12529316 push edx */
  push32((uint32_t)(EDX));
  /* 12529317 call 0x125297b0 */
  push32(0x1252931cu); f_125297b0();
  /* 1252931c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252931f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529321 jne 0x12529366 */
  if (!C.zf) goto L_12529366;
L_12529323:;
  /* 12529323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529326 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529329 push eax */
  push32((uint32_t)(EAX));
  /* 1252932a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252932d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12529330 push edx */
  push32((uint32_t)(EDX));
  /* 12529331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529334 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12529337 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252933d mov edx, dword ptr [ecx*4 + 0x12552a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a94)));
  /* 12529344 push edx */
  push32((uint32_t)(EDX));
  /* 12529345 push 0x1254fd44 */
  push32((uint32_t)(0x1254fd44u));
  /* 1252934a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252934c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252934e push 0 */
  push32((uint32_t)(0x0u));
  /* 12529350 push 1 */
  push32((uint32_t)(0x1u));
  /* 12529352 call 0x12527760 */
  push32(0x12529357u); f_12527760();
  /* 12529357 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252935a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252935d jne 0x12529360 */
  if (!C.zf) goto L_12529360;
  /* 1252935f int3  */
  x86_unimpl("int3 @ 0x1252935f");
L_12529360:;
  /* 12529360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529364 jne 0x12529323 */
  if (!C.zf) goto L_12529323;
L_12529366:;
  /* 12529366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529369 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252936d jne 0x125293db */
  if (!C.zf) goto L_125293db;
L_1252936f:;
  /* 1252936f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529372 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529379 jne 0x12529384 */
  if (!C.zf) goto L_12529384;
  /* 1252937b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252937e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529382 je 0x125293a5 */
  if (C.zf) goto L_125293a5;
L_12529384:;
  /* 12529384 push 0x1254fd04 */
  push32((uint32_t)(0x1254fd04u));
  /* 12529389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252938b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12529390 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12529395 push 2 */
  push32((uint32_t)(0x2u));
  /* 12529397 call 0x12527760 */
  push32(0x1252939cu); f_12527760();
  /* 1252939c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252939f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125293a2 jne 0x125293a5 */
  if (!C.zf) goto L_125293a5;
  /* 125293a4 int3  */
  x86_unimpl("int3 @ 0x125293a4");
L_125293a5:;
  /* 125293a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125293a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125293a9 jne 0x1252936f */
  if (!C.zf) goto L_1252936f;
  /* 125293ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125293ae mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125293b1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125293b4 push eax */
  push32((uint32_t)(EAX));
  /* 125293b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125293b7 mov cl, byte ptr [0x12552a91] */
  CL = (r8((uint32_t)(0x12552a91)));
  /* 125293bd push ecx */
  push32((uint32_t)(ECX));
  /* 125293be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125293c1 push edx */
  push32((uint32_t)(EDX));
  /* 125293c2 call 0x1252c410 */
  push32(0x125293c7u); f_1252c410();
  /* 125293c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125293ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125293cd push eax */
  push32((uint32_t)(EAX));
  /* 125293ce call 0x1252c810 */
  push32(0x125293d3u); f_1252c810();
  /* 125293d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125293d6 jmp 0x12529545 */
  goto L_12529545;
L_125293db:;
  /* 125293db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125293de cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125293e2 jne 0x125293f1 */
  if (!C.zf) goto L_125293f1;
  /* 125293e4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125293e8 jne 0x125293f1 */
  if (!C.zf) goto L_125293f1;
  /* 125293ea mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_125293f1:;
  /* 125293f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125293f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125293f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125293fa je 0x1252941d */
  if (C.zf) goto L_1252941d;
  /* 125293fc push 0x1254fce4 */
  push32((uint32_t)(0x1254fce4u));
  /* 12529401 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529403 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12529408 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252940d push 2 */
  push32((uint32_t)(0x2u));
  /* 1252940f call 0x12527760 */
  push32(0x12529414u); f_12527760();
  /* 12529414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252941a jne 0x1252941d */
  if (!C.zf) goto L_1252941d;
  /* 1252941c int3  */
  x86_unimpl("int3 @ 0x1252941c");
L_1252941d:;
  /* 1252941d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252941f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12529421 jne 0x125293f1 */
  if (!C.zf) goto L_125293f1;
  /* 12529423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529426 mov eax, dword ptr [0x1255499c] */
  EAX = (r32((uint32_t)(0x1255499c)));
  /* 1252942b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252942e mov dword ptr [0x1255499c], eax */
  w32((uint32_t)(0x1255499c), (EAX));
  /* 12529433 mov ecx, dword ptr [0x12552a84] */
  ECX = (r32((uint32_t)(0x12552a84)));
  /* 12529439 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1252943c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252943e jne 0x1252951c */
  if (!C.zf) goto L_1252951c;
  /* 12529444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529447 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252944a je 0x1252945c */
  if (C.zf) goto L_1252945c;
  /* 1252944c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252944f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12529451 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529454 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12529457 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1252945a jmp 0x1252949a */
  goto L_1252949a;
L_1252945c:;
  /* 1252945c mov ecx, dword ptr [0x12554990] */
  ECX = (r32((uint32_t)(0x12554990)));
  /* 12529462 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529465 je 0x12529488 */
  if (C.zf) goto L_12529488;
  /* 12529467 push 0x1254fccc */
  push32((uint32_t)(0x1254fcccu));
  /* 1252946c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252946e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12529473 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12529478 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252947a call 0x12527760 */
  push32(0x1252947fu); f_12527760();
  /* 1252947f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529482 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529485 jne 0x12529488 */
  if (!C.zf) goto L_12529488;
  /* 12529487 int3  */
  x86_unimpl("int3 @ 0x12529487");
L_12529488:;
  /* 12529488 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252948a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252948c jne 0x1252945c */
  if (!C.zf) goto L_1252945c;
  /* 1252948e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529491 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12529494 mov dword ptr [0x12554990], ecx */
  w32((uint32_t)(0x12554990), (ECX));
L_1252949a:;
  /* 1252949a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252949d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125294a1 je 0x125294b2 */
  if (C.zf) goto L_125294b2;
  /* 125294a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125294a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125294a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125294ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125294ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125294b0 jmp 0x125294ef */
  goto L_125294ef;
L_125294b2:;
  /* 125294b2 mov ecx, dword ptr [0x12554998] */
  ECX = (r32((uint32_t)(0x12554998)));
  /* 125294b8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125294bb je 0x125294de */
  if (C.zf) goto L_125294de;
  /* 125294bd push 0x1254fcb4 */
  push32((uint32_t)(0x1254fcb4u));
  /* 125294c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125294c4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 125294c9 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 125294ce push 2 */
  push32((uint32_t)(0x2u));
  /* 125294d0 call 0x12527760 */
  push32(0x125294d5u); f_12527760();
  /* 125294d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125294d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125294db jne 0x125294de */
  if (!C.zf) goto L_125294de;
  /* 125294dd int3  */
  x86_unimpl("int3 @ 0x125294dd");
L_125294de:;
  /* 125294de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125294e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125294e2 jne 0x125294b2 */
  if (!C.zf) goto L_125294b2;
  /* 125294e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125294e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125294e9 mov dword ptr [0x12554998], ecx */
  w32((uint32_t)(0x12554998), (ECX));
L_125294ef:;
  /* 125294ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125294f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125294f5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125294f8 push eax */
  push32((uint32_t)(EAX));
  /* 125294f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125294fb mov cl, byte ptr [0x12552a91] */
  CL = (r8((uint32_t)(0x12552a91)));
  /* 12529501 push ecx */
  push32((uint32_t)(ECX));
  /* 12529502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529505 push edx */
  push32((uint32_t)(EDX));
  /* 12529506 call 0x1252c410 */
  push32(0x1252950bu); f_1252c410();
  /* 1252950b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252950e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529511 push eax */
  push32((uint32_t)(EAX));
  /* 12529512 call 0x1252c810 */
  push32(0x12529517u); f_1252c810();
  /* 12529517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252951a jmp 0x12529545 */
  goto L_12529545;
L_1252951c:;
  /* 1252951c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252951f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12529526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529529 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252952c push eax */
  push32((uint32_t)(EAX));
  /* 1252952d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252952f mov cl, byte ptr [0x12552a91] */
  CL = (r8((uint32_t)(0x12552a91)));
  /* 12529535 push ecx */
  push32((uint32_t)(ECX));
  /* 12529536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529539 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252953c push edx */
  push32((uint32_t)(EDX));
  /* 1252953d call 0x1252c410 */
  push32(0x12529542u); f_1252c410();
  /* 12529542 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12529545:;
  /* 12529545 pop edi */
  EDI = (pop32());
  /* 12529546 pop esi */
  ESI = (pop32());
  /* 12529547 pop ebx */
  EBX = (pop32());
  /* 12529548 mov esp, ebp */
  ESP = (EBP);
  /* 1252954a pop ebp */
  EBP = (pop32());
  /* 1252954b ret  */
  ESPCHK(0x12529160u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x12529550 (19 bytes, 9 insns) */
void f_12529550(void) {
  FTRACE(0x12529550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529550 push ebp */
  push32((uint32_t)(EBP));
  /* 12529551 mov ebp, esp */
  EBP = (ESP);
  /* 12529553 push 1 */
  push32((uint32_t)(0x1u));
  /* 12529555 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529558 push eax */
  push32((uint32_t)(EAX));
  /* 12529559 call 0x12529570 */
  push32(0x1252955eu); f_12529570();
  /* 1252955e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529561 pop ebp */
  EBP = (pop32());
  /* 12529562 ret  */
  ESPCHK(0x12529550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x12529570 (342 bytes, 119 insns) */
void f_12529570(void) {
  FTRACE(0x12529570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529570 push ebp */
  push32((uint32_t)(EBP));
  /* 12529571 mov ebp, esp */
  EBP = (ESP);
  /* 12529573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529576 push ebx */
  push32((uint32_t)(EBX));
  /* 12529577 push esi */
  push32((uint32_t)(ESI));
  /* 12529578 push edi */
  push32((uint32_t)(EDI));
  /* 12529579 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 1252957e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12529581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529583 je 0x125295b5 */
  if (C.zf) goto L_125295b5;
L_12529585:;
  /* 12529585 call 0x12529840 */
  push32(0x1252958au); f_12529840();
  /* 1252958a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252958c jne 0x125295af */
  if (!C.zf) goto L_125295af;
  /* 1252958e push 0x1254fb00 */
  push32((uint32_t)(0x1254fb00u));
  /* 12529593 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529595 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1252959a push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252959f push 2 */
  push32((uint32_t)(0x2u));
  /* 125295a1 call 0x12527760 */
  push32(0x125295a6u); f_12527760();
  /* 125295a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125295a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125295ac jne 0x125295af */
  if (!C.zf) goto L_125295af;
  /* 125295ae int3  */
  x86_unimpl("int3 @ 0x125295ae");
L_125295af:;
  /* 125295af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125295b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125295b3 jne 0x12529585 */
  if (!C.zf) goto L_12529585;
L_125295b5:;
  /* 125295b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 125295b7 call 0x1252c0a0 */
  push32(0x125295bcu); f_1252c0a0();
  /* 125295bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125295bf:;
  /* 125295bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125295c2 push edx */
  push32((uint32_t)(EDX));
  /* 125295c3 call 0x12529ca0 */
  push32(0x125295c8u); f_12529ca0();
  /* 125295c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125295cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125295cd jne 0x125295f0 */
  if (!C.zf) goto L_125295f0;
  /* 125295cf push 0x1254fc04 */
  push32((uint32_t)(0x1254fc04u));
  /* 125295d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125295d6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 125295db push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 125295e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125295e2 call 0x12527760 */
  push32(0x125295e7u); f_12527760();
  /* 125295e7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125295ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125295ed jne 0x125295f0 */
  if (!C.zf) goto L_125295f0;
  /* 125295ef int3  */
  x86_unimpl("int3 @ 0x125295ef");
L_125295f0:;
  /* 125295f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125295f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125295f4 jne 0x125295bf */
  if (!C.zf) goto L_125295bf;
  /* 125295f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125295f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125295fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125295ff:;
  /* 125295ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529602 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529605 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252960a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252960d je 0x12529652 */
  if (C.zf) goto L_12529652;
  /* 1252960f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529612 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529616 je 0x12529652 */
  if (C.zf) goto L_12529652;
  /* 12529618 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252961b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252961e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529623 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529626 je 0x12529652 */
  if (C.zf) goto L_12529652;
  /* 12529628 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252962b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252962f je 0x12529652 */
  if (C.zf) goto L_12529652;
  /* 12529631 push 0x1254fd9c */
  push32((uint32_t)(0x1254fd9cu));
  /* 12529636 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529638 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1252963d push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12529642 push 2 */
  push32((uint32_t)(0x2u));
  /* 12529644 call 0x12527760 */
  push32(0x12529649u); f_12527760();
  /* 12529649 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252964c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252964f jne 0x12529652 */
  if (!C.zf) goto L_12529652;
  /* 12529651 int3  */
  x86_unimpl("int3 @ 0x12529651");
L_12529652:;
  /* 12529652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12529654 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12529656 jne 0x125295ff */
  if (!C.zf) goto L_125295ff;
  /* 12529658 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252965b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252965f jne 0x1252966e */
  if (!C.zf) goto L_1252966e;
  /* 12529661 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529665 jne 0x1252966e */
  if (!C.zf) goto L_1252966e;
  /* 12529667 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1252966e:;
  /* 1252966e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529671 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529675 je 0x125296a9 */
  if (C.zf) goto L_125296a9;
L_12529677:;
  /* 12529677 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252967a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252967d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529680 je 0x125296a3 */
  if (C.zf) goto L_125296a3;
  /* 12529682 push 0x1254fce4 */
  push32((uint32_t)(0x1254fce4u));
  /* 12529687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529689 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1252968e push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 12529693 push 2 */
  push32((uint32_t)(0x2u));
  /* 12529695 call 0x12527760 */
  push32(0x1252969au); f_12527760();
  /* 1252969a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252969d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125296a0 jne 0x125296a3 */
  if (!C.zf) goto L_125296a3;
  /* 125296a2 int3  */
  x86_unimpl("int3 @ 0x125296a2");
L_125296a3:;
  /* 125296a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125296a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125296a7 jne 0x12529677 */
  if (!C.zf) goto L_12529677;
L_125296a9:;
  /* 125296a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125296ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125296af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125296b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 125296b4 call 0x1252c140 */
  push32(0x125296b9u); f_1252c140();
  /* 125296b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125296bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125296bf pop edi */
  EDI = (pop32());
  /* 125296c0 pop esi */
  ESI = (pop32());
  /* 125296c1 pop ebx */
  EBX = (pop32());
  /* 125296c2 mov esp, ebp */
  ESP = (EBP);
  /* 125296c4 pop ebp */
  EBP = (pop32());
  /* 125296c5 ret  */
  ESPCHK(0x12529570u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x125296d0 (28 bytes, 11 insns) */
void f_125296d0(void) {
  FTRACE(0x125296d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125296d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125296d1 mov ebp, esp */
  EBP = (ESP);
  /* 125296d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125296d4 mov eax, dword ptr [0x12552a8c] */
  EAX = (r32((uint32_t)(0x12552a8c)));
  /* 125296d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125296dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125296df mov dword ptr [0x12552a8c], ecx */
  w32((uint32_t)(0x12552a8c), (ECX));
  /* 125296e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125296e8 mov esp, ebp */
  ESP = (EBP);
  /* 125296ea pop ebp */
  EBP = (pop32());
  /* 125296eb ret  */
  ESPCHK(0x125296d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096f0 @ 0x125296f0 (157 bytes, 59 insns) */
void f_125296f0(void) {
  FTRACE(0x125296f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125296f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125296f1 mov ebp, esp */
  EBP = (ESP);
  /* 125296f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125296f4 push ebx */
  push32((uint32_t)(EBX));
  /* 125296f5 push esi */
  push32((uint32_t)(ESI));
  /* 125296f6 push edi */
  push32((uint32_t)(EDI));
  /* 125296f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 125296f9 call 0x1252c0a0 */
  push32(0x125296feu); f_1252c0a0();
  /* 125296fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529704 push eax */
  push32((uint32_t)(EAX));
  /* 12529705 call 0x12529ca0 */
  push32(0x1252970au); f_12529ca0();
  /* 1252970a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252970d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252970f je 0x1252977c */
  if (C.zf) goto L_1252977c;
  /* 12529711 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529714 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529717 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252971a:;
  /* 1252971a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252971d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529720 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529725 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529728 je 0x1252976d */
  if (C.zf) goto L_1252976d;
  /* 1252972a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252972d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529731 je 0x1252976d */
  if (C.zf) goto L_1252976d;
  /* 12529733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529736 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529739 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252973e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529741 je 0x1252976d */
  if (C.zf) goto L_1252976d;
  /* 12529743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529746 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252974a je 0x1252976d */
  if (C.zf) goto L_1252976d;
  /* 1252974c push 0x1254fd9c */
  push32((uint32_t)(0x1254fd9cu));
  /* 12529751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529753 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12529758 push 0x1254faf4 */
  push32((uint32_t)(0x1254faf4u));
  /* 1252975d push 2 */
  push32((uint32_t)(0x2u));
  /* 1252975f call 0x12527760 */
  push32(0x12529764u); f_12527760();
  /* 12529764 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529767 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252976a jne 0x1252976d */
  if (!C.zf) goto L_1252976d;
  /* 1252976c int3  */
  x86_unimpl("int3 @ 0x1252976c");
L_1252976d:;
  /* 1252976d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252976f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12529771 jne 0x1252971a */
  if (!C.zf) goto L_1252971a;
  /* 12529773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529776 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529779 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1252977c:;
  /* 1252977c push 9 */
  push32((uint32_t)(0x9u));
  /* 1252977e call 0x1252c140 */
  push32(0x12529783u); f_1252c140();
  /* 12529783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529786 pop edi */
  EDI = (pop32());
  /* 12529787 pop esi */
  ESI = (pop32());
  /* 12529788 pop ebx */
  EBX = (pop32());
  /* 12529789 mov esp, ebp */
  ESP = (EBP);
  /* 1252978b pop ebp */
  EBP = (pop32());
  /* 1252978c ret  */
  ESPCHK(0x125296f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x12529790 (28 bytes, 11 insns) */
void f_12529790(void) {
  FTRACE(0x12529790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529790 push ebp */
  push32((uint32_t)(EBP));
  /* 12529791 mov ebp, esp */
  EBP = (ESP);
  /* 12529793 push ecx */
  push32((uint32_t)(ECX));
  /* 12529794 mov eax, dword ptr [0x12552c90] */
  EAX = (r32((uint32_t)(0x12552c90)));
  /* 12529799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252979c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252979f mov dword ptr [0x12552c90], ecx */
  w32((uint32_t)(0x12552c90), (ECX));
  /* 125297a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125297a8 mov esp, ebp */
  ESP = (EBP);
  /* 125297aa pop ebp */
  EBP = (pop32());
  /* 125297ab ret  */
  ESPCHK(0x12529790u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x125297b0 (136 bytes, 55 insns) */
void f_125297b0(void) {
  FTRACE(0x125297b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125297b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125297b1 mov ebp, esp */
  EBP = (ESP);
  /* 125297b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125297b4 push ebx */
  push32((uint32_t)(EBX));
  /* 125297b5 push esi */
  push32((uint32_t)(ESI));
  /* 125297b6 push edi */
  push32((uint32_t)(EDI));
  /* 125297b7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_125297be:;
  /* 125297be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125297c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125297c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125297c7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125297ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125297cc je 0x1252982e */
  if (C.zf) goto L_1252982e;
  /* 125297ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125297d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125297d3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125297d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125297d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125297de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125297e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125297e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125297e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125297e9 je 0x1252982c */
  if (C.zf) goto L_1252982c;
L_125297eb:;
  /* 125297eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125297ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125297f3 push eax */
  push32((uint32_t)(EAX));
  /* 125297f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125297f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125297f9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 125297fc push edx */
  push32((uint32_t)(EDX));
  /* 125297fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529800 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529803 push eax */
  push32((uint32_t)(EAX));
  /* 12529804 push 0x1254fde0 */
  push32((uint32_t)(0x1254fde0u));
  /* 12529809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252980b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252980d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252980f push 0 */
  push32((uint32_t)(0x0u));
  /* 12529811 call 0x12527760 */
  push32(0x12529816u); f_12527760();
  /* 12529816 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529819 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252981c jne 0x1252981f */
  if (!C.zf) goto L_1252981f;
  /* 1252981e int3  */
  x86_unimpl("int3 @ 0x1252981e");
L_1252981f:;
  /* 1252981f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12529821 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12529823 jne 0x125297eb */
  if (!C.zf) goto L_125297eb;
  /* 12529825 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1252982c:;
  /* 1252982c jmp 0x125297be */
  goto L_125297be;
L_1252982e:;
  /* 1252982e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529831 pop edi */
  EDI = (pop32());
  /* 12529832 pop esi */
  ESI = (pop32());
  /* 12529833 pop ebx */
  EBX = (pop32());
  /* 12529834 mov esp, ebp */
  ESP = (EBP);
  /* 12529836 pop ebp */
  EBP = (pop32());
  /* 12529837 ret  */
  ESPCHK(0x125297b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x12529840 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12529840(void) {
  FTRACE(0x12529840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529840 push ebp */
  push32((uint32_t)(EBP));
  /* 12529841 mov ebp, esp */
  EBP = (ESP);
  /* 12529843 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529846 push ebx */
  push32((uint32_t)(EBX));
  /* 12529847 push esi */
  push32((uint32_t)(ESI));
  /* 12529848 push edi */
  push32((uint32_t)(EDI));
  /* 12529849 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12529850 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12529855 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12529858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252985a jne 0x12529866 */
  if (!C.zf) goto L_12529866;
  /* 1252985c mov eax, 1 */
  EAX = (0x1u);
  /* 12529861 jmp 0x12529b98 */
  goto L_12529b98;
L_12529866:;
  /* 12529866 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529868 call 0x1252c0a0 */
  push32(0x1252986du); f_1252c0a0();
  /* 1252986d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529870 call 0x1252c880 */
  push32(0x12529875u); f_1252c880();
  /* 12529875 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12529878 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252987c je 0x12529989 */
  if (C.zf) goto L_12529989;
  /* 12529882 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529886 je 0x12529989 */
  if (C.zf) goto L_12529989;
  /* 1252988c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252988f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12529892 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12529895 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529898 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1252989b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252989f ja 0x12529952 */
  if ((!C.cf&&!C.zf)) goto L_12529952;
  /* 125298a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125298a8 jmp dword ptr [eax*4 + 0x12529b9f] */
  switch (EAX) {
    case 0: goto L_1252992a;
    case 1: goto L_12529902;
    case 2: goto L_125298da;
    case 3: goto L_125298af;
    default: x86_unimpl("switch@0x125298a8 out of table"); return;
  }
L_125298af:;
  /* 125298af push 0x1254ff34 */
  push32((uint32_t)(0x1254ff34u));
  /* 125298b4 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 125298b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125298bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125298bd push 0 */
  push32((uint32_t)(0x0u));
  /* 125298bf push 0 */
  push32((uint32_t)(0x0u));
  /* 125298c1 call 0x12527760 */
  push32(0x125298c6u); f_12527760();
  /* 125298c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125298c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125298cc jne 0x125298cf */
  if (!C.zf) goto L_125298cf;
  /* 125298ce int3  */
  x86_unimpl("int3 @ 0x125298ce");
L_125298cf:;
  /* 125298cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125298d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125298d3 jne 0x125298af */
  if (!C.zf) goto L_125298af;
  /* 125298d5 jmp 0x12529978 */
  goto L_12529978;
L_125298da:;
  /* 125298da push 0x1254ff10 */
  push32((uint32_t)(0x1254ff10u));
  /* 125298df push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 125298e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125298e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125298e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125298ea push 0 */
  push32((uint32_t)(0x0u));
  /* 125298ec call 0x12527760 */
  push32(0x125298f1u); f_12527760();
  /* 125298f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125298f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125298f7 jne 0x125298fa */
  if (!C.zf) goto L_125298fa;
  /* 125298f9 int3  */
  x86_unimpl("int3 @ 0x125298f9");
L_125298fa:;
  /* 125298fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125298fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125298fe jne 0x125298da */
  if (!C.zf) goto L_125298da;
  /* 12529900 jmp 0x12529978 */
  goto L_12529978;
L_12529902:;
  /* 12529902 push 0x1254feec */
  push32((uint32_t)(0x1254feecu));
  /* 12529907 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 1252990c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252990e push 0 */
  push32((uint32_t)(0x0u));
  /* 12529910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529912 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529914 call 0x12527760 */
  push32(0x12529919u); f_12527760();
  /* 12529919 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252991c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252991f jne 0x12529922 */
  if (!C.zf) goto L_12529922;
  /* 12529921 int3  */
  x86_unimpl("int3 @ 0x12529921");
L_12529922:;
  /* 12529922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529926 jne 0x12529902 */
  if (!C.zf) goto L_12529902;
  /* 12529928 jmp 0x12529978 */
  goto L_12529978;
L_1252992a:;
  /* 1252992a push 0x1254fec8 */
  push32((uint32_t)(0x1254fec8u));
  /* 1252992f push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12529934 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529936 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252993a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252993c call 0x12527760 */
  push32(0x12529941u); f_12527760();
  /* 12529941 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529944 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529947 jne 0x1252994a */
  if (!C.zf) goto L_1252994a;
  /* 12529949 int3  */
  x86_unimpl("int3 @ 0x12529949");
L_1252994a:;
  /* 1252994a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252994c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252994e jne 0x1252992a */
  if (!C.zf) goto L_1252992a;
  /* 12529950 jmp 0x12529978 */
  goto L_12529978;
L_12529952:;
  /* 12529952 push 0x1254fe9c */
  push32((uint32_t)(0x1254fe9cu));
  /* 12529957 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 1252995c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252995e push 0 */
  push32((uint32_t)(0x0u));
  /* 12529960 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529964 call 0x12527760 */
  push32(0x12529969u); f_12527760();
  /* 12529969 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252996c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252996f jne 0x12529972 */
  if (!C.zf) goto L_12529972;
  /* 12529971 int3  */
  x86_unimpl("int3 @ 0x12529971");
L_12529972:;
  /* 12529972 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12529974 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12529976 jne 0x12529952 */
  if (!C.zf) goto L_12529952;
L_12529978:;
  /* 12529978 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252997a call 0x1252c140 */
  push32(0x1252997fu); f_1252c140();
  /* 1252997f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529984 jmp 0x12529b98 */
  goto L_12529b98;
L_12529989:;
  /* 12529989 mov eax, dword ptr [0x12554998] */
  EAX = (r32((uint32_t)(0x12554998)));
  /* 1252998e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12529991 jmp 0x1252999b */
  goto L_1252999b;
L_12529993:;
  /* 12529993 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12529998 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252999b:;
  /* 1252999b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252999f je 0x12529b8b */
  if (C.zf) goto L_12529b8b;
  /* 125299a5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125299ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125299af mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125299b2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125299b8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125299bb je 0x125299e0 */
  if (C.zf) goto L_125299e0;
  /* 125299bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125299c0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125299c4 je 0x125299e0 */
  if (C.zf) goto L_125299e0;
  /* 125299c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125299c9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125299cc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125299d2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125299d5 je 0x125299e0 */
  if (C.zf) goto L_125299e0;
  /* 125299d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125299da cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125299de jne 0x125299f8 */
  if (!C.zf) goto L_125299f8;
L_125299e0:;
  /* 125299e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125299e3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125299e6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125299ec mov edx, dword ptr [ecx*4 + 0x12552a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a94)));
  /* 125299f3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125299f6 jmp 0x125299ff */
  goto L_125299ff;
L_125299f8:;
  /* 125299f8 mov dword ptr [ebp - 0x14], 0x1254fe94 */
  w32((uint32_t)(EBP + -0x14), (0x1254fe94u));
L_125299ff:;
  /* 125299ff push 4 */
  push32((uint32_t)(0x4u));
  /* 12529a01 mov al, byte ptr [0x12552a90] */
  AL = (r8((uint32_t)(0x12552a90)));
  /* 12529a06 push eax */
  push32((uint32_t)(EAX));
  /* 12529a07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a0a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a0d push ecx */
  push32((uint32_t)(ECX));
  /* 12529a0e call 0x125297b0 */
  push32(0x12529a13u); f_125297b0();
  /* 12529a13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529a18 jne 0x12529a54 */
  if (!C.zf) goto L_12529a54;
L_12529a1a:;
  /* 12529a1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a1d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a20 push edx */
  push32((uint32_t)(EDX));
  /* 12529a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a24 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12529a27 push ecx */
  push32((uint32_t)(ECX));
  /* 12529a28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12529a2b push edx */
  push32((uint32_t)(EDX));
  /* 12529a2c push 0x1254fd70 */
  push32((uint32_t)(0x1254fd70u));
  /* 12529a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a39 call 0x12527760 */
  push32(0x12529a3eu); f_12527760();
  /* 12529a3e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529a44 jne 0x12529a47 */
  if (!C.zf) goto L_12529a47;
  /* 12529a46 int3  */
  x86_unimpl("int3 @ 0x12529a46");
L_12529a47:;
  /* 12529a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529a4b jne 0x12529a1a */
  if (!C.zf) goto L_12529a1a;
  /* 12529a4d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12529a54:;
  /* 12529a54 push 4 */
  push32((uint32_t)(0x4u));
  /* 12529a56 mov cl, byte ptr [0x12552a90] */
  CL = (r8((uint32_t)(0x12552a90)));
  /* 12529a5c push ecx */
  push32((uint32_t)(ECX));
  /* 12529a5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a60 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12529a63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a66 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12529a6a push edx */
  push32((uint32_t)(EDX));
  /* 12529a6b call 0x125297b0 */
  push32(0x12529a70u); f_125297b0();
  /* 12529a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529a75 jne 0x12529ab1 */
  if (!C.zf) goto L_12529ab1;
L_12529a77:;
  /* 12529a77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a7a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a7d push eax */
  push32((uint32_t)(EAX));
  /* 12529a7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529a81 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12529a84 push edx */
  push32((uint32_t)(EDX));
  /* 12529a85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12529a88 push eax */
  push32((uint32_t)(EAX));
  /* 12529a89 push 0x1254fd44 */
  push32((uint32_t)(0x1254fd44u));
  /* 12529a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529a96 call 0x12527760 */
  push32(0x12529a9bu); f_12527760();
  /* 12529a9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529a9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529aa1 jne 0x12529aa4 */
  if (!C.zf) goto L_12529aa4;
  /* 12529aa3 int3  */
  x86_unimpl("int3 @ 0x12529aa3");
L_12529aa4:;
  /* 12529aa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12529aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12529aa8 jne 0x12529a77 */
  if (!C.zf) goto L_12529a77;
  /* 12529aaa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12529ab1:;
  /* 12529ab1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ab4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529ab8 jne 0x12529b0a */
  if (!C.zf) goto L_12529b0a;
  /* 12529aba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529abd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12529ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 12529ac1 mov dl, byte ptr [0x12552a91] */
  DL = (r8((uint32_t)(0x12552a91)));
  /* 12529ac7 push edx */
  push32((uint32_t)(EDX));
  /* 12529ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529acb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529ace push eax */
  push32((uint32_t)(EAX));
  /* 12529acf call 0x125297b0 */
  push32(0x12529ad4u); f_125297b0();
  /* 12529ad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529ad9 jne 0x12529b0a */
  if (!C.zf) goto L_12529b0a;
L_12529adb:;
  /* 12529adb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ade add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12529ae2 push 0x1254fe68 */
  push32((uint32_t)(0x1254fe68u));
  /* 12529ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12529aed push 0 */
  push32((uint32_t)(0x0u));
  /* 12529aef call 0x12527760 */
  push32(0x12529af4u); f_12527760();
  /* 12529af4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529af7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529afa jne 0x12529afd */
  if (!C.zf) goto L_12529afd;
  /* 12529afc int3  */
  x86_unimpl("int3 @ 0x12529afc");
L_12529afd:;
  /* 12529afd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12529aff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12529b01 jne 0x12529adb */
  if (!C.zf) goto L_12529adb;
  /* 12529b03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12529b0a:;
  /* 12529b0a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529b0e jne 0x12529b86 */
  if (!C.zf) goto L_12529b86;
  /* 12529b10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529b13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529b17 je 0x12529b4c */
  if (C.zf) goto L_12529b4c;
L_12529b19:;
  /* 12529b19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529b1c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12529b1f push edx */
  push32((uint32_t)(EDX));
  /* 12529b20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529b23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12529b26 push ecx */
  push32((uint32_t)(ECX));
  /* 12529b27 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12529b2a push edx */
  push32((uint32_t)(EDX));
  /* 12529b2b push 0x1254fe48 */
  push32((uint32_t)(0x1254fe48u));
  /* 12529b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b38 call 0x12527760 */
  push32(0x12529b3du); f_12527760();
  /* 12529b3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529b40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529b43 jne 0x12529b46 */
  if (!C.zf) goto L_12529b46;
  /* 12529b45 int3  */
  x86_unimpl("int3 @ 0x12529b45");
L_12529b46:;
  /* 12529b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529b4a jne 0x12529b19 */
  if (!C.zf) goto L_12529b19;
L_12529b4c:;
  /* 12529b4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529b4f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12529b52 push edx */
  push32((uint32_t)(EDX));
  /* 12529b53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529b56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529b59 push eax */
  push32((uint32_t)(EAX));
  /* 12529b5a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12529b5d push ecx */
  push32((uint32_t)(ECX));
  /* 12529b5e push 0x1254fe1c */
  push32((uint32_t)(0x1254fe1cu));
  /* 12529b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529b6b call 0x12527760 */
  push32(0x12529b70u); f_12527760();
  /* 12529b70 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529b73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529b76 jne 0x12529b79 */
  if (!C.zf) goto L_12529b79;
  /* 12529b78 int3  */
  x86_unimpl("int3 @ 0x12529b78");
L_12529b79:;
  /* 12529b79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12529b7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12529b7d jne 0x12529b4c */
  if (!C.zf) goto L_12529b4c;
  /* 12529b7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12529b86:;
  /* 12529b86 jmp 0x12529993 */
  goto L_12529993;
L_12529b8b:;
  /* 12529b8b push 9 */
  push32((uint32_t)(0x9u));
  /* 12529b8d call 0x1252c140 */
  push32(0x12529b92u); f_1252c140();
  /* 12529b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12529b98:;
  /* 12529b98 pop edi */
  EDI = (pop32());
  /* 12529b99 pop esi */
  ESI = (pop32());
  /* 12529b9a pop ebx */
  EBX = (pop32());
  /* 12529b9b mov esp, ebp */
  ESP = (EBP);
  /* 12529b9d pop ebp */
  EBP = (pop32());
  /* 12529b9e ret  */
  ESPCHK(0x12529840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bb0 @ 0x12529bb0 (34 bytes, 13 insns) */
void f_12529bb0(void) {
  FTRACE(0x12529bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12529bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12529bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12529bb4 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12529bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12529bbc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529bc0 je 0x12529bcb */
  if (C.zf) goto L_12529bcb;
  /* 12529bc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529bc5 mov dword ptr [0x12552a84], ecx */
  w32((uint32_t)(0x12552a84), (ECX));
L_12529bcb:;
  /* 12529bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529bce mov esp, ebp */
  ESP = (EBP);
  /* 12529bd0 pop ebp */
  EBP = (pop32());
  /* 12529bd1 ret  */
  ESPCHK(0x12529bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x12529be0 (103 bytes, 38 insns) */
void f_12529be0(void) {
  FTRACE(0x12529be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12529be1 mov ebp, esp */
  EBP = (ESP);
  /* 12529be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12529be4 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 12529be9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12529bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529bee jne 0x12529bf2 */
  if (!C.zf) goto L_12529bf2;
  /* 12529bf0 jmp 0x12529c43 */
  goto L_12529c43;
L_12529bf2:;
  /* 12529bf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529bf4 call 0x1252c0a0 */
  push32(0x12529bf9u); f_1252c0a0();
  /* 12529bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529bfc mov ecx, dword ptr [0x12554998] */
  ECX = (r32((uint32_t)(0x12554998)));
  /* 12529c02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12529c05 jmp 0x12529c0f */
  goto L_12529c0f;
L_12529c07:;
  /* 12529c07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529c0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12529c0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12529c0f:;
  /* 12529c0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529c13 je 0x12529c39 */
  if (C.zf) goto L_12529c39;
  /* 12529c15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529c18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12529c1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12529c21 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529c24 jne 0x12529c37 */
  if (!C.zf) goto L_12529c37;
  /* 12529c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529c29 push eax */
  push32((uint32_t)(EAX));
  /* 12529c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529c2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529c30 push ecx */
  push32((uint32_t)(ECX));
  /* 12529c31 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12529c34u);
  /* 12529c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12529c37:;
  /* 12529c37 jmp 0x12529c07 */
  goto L_12529c07;
L_12529c39:;
  /* 12529c39 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529c3b call 0x1252c140 */
  push32(0x12529c40u); f_1252c140();
  /* 12529c40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12529c43:;
  /* 12529c43 mov esp, ebp */
  ESP = (EBP);
  /* 12529c45 pop ebp */
  EBP = (pop32());
  /* 12529c46 ret  */
  ESPCHK(0x12529be0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12529c50 (75 bytes, 28 insns) */
void f_12529c50(void) {
  FTRACE(0x12529c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12529c51 mov ebp, esp */
  EBP = (ESP);
  /* 12529c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12529c54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529c58 je 0x12529c8d */
  if (C.zf) goto L_12529c8d;
  /* 12529c5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529c5d push eax */
  push32((uint32_t)(EAX));
  /* 12529c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529c61 push ecx */
  push32((uint32_t)(ECX));
  /* 12529c62 call dword ptr [0x125573bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573bc))), 0x12529c68u);
  /* 12529c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529c6a jne 0x12529c8d */
  if (!C.zf) goto L_12529c8d;
  /* 12529c6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529c70 je 0x12529c84 */
  if (C.zf) goto L_12529c84;
  /* 12529c72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529c75 push edx */
  push32((uint32_t)(EDX));
  /* 12529c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529c79 push eax */
  push32((uint32_t)(EAX));
  /* 12529c7a call dword ptr [0x12557384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557384))), 0x12529c80u);
  /* 12529c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529c82 jne 0x12529c8d */
  if (!C.zf) goto L_12529c8d;
L_12529c84:;
  /* 12529c84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12529c8b jmp 0x12529c94 */
  goto L_12529c94;
L_12529c8d:;
  /* 12529c8d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12529c94:;
  /* 12529c94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529c97 mov esp, ebp */
  ESP = (EBP);
  /* 12529c99 pop ebp */
  EBP = (pop32());
  /* 12529c9a ret  */
  ESPCHK(0x12529c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x12529ca0 (134 bytes, 50 insns) */
void f_12529ca0(void) {
  FTRACE(0x12529ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12529ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12529ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12529ca4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529ca8 jne 0x12529cae */
  if (!C.zf) goto L_12529cae;
  /* 12529caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529cac jmp 0x12529d22 */
  goto L_12529d22;
L_12529cae:;
  /* 12529cae push 1 */
  push32((uint32_t)(0x1u));
  /* 12529cb0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12529cb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529cb5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12529cb9 call 0x12529c50 */
  push32(0x12529cbeu); f_12529c50();
  /* 12529cbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529cc3 jne 0x12529cc9 */
  if (!C.zf) goto L_12529cc9;
  /* 12529cc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529cc7 jmp 0x12529d22 */
  goto L_12529d22;
L_12529cc9:;
  /* 12529cc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529ccc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529ccf push ecx */
  push32((uint32_t)(ECX));
  /* 12529cd0 call 0x1252c9a0 */
  push32(0x12529cd5u); f_1252c9a0();
  /* 12529cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12529cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529cdf je 0x12529cf6 */
  if (C.zf) goto L_12529cf6;
  /* 12529ce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529ce4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12529ce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529ceb push eax */
  push32((uint32_t)(EAX));
  /* 12529cec call 0x1252ca00 */
  push32(0x12529cf1u); f_1252ca00();
  /* 12529cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529cf4 jmp 0x12529d22 */
  goto L_12529d22;
L_12529cf6:;
  /* 12529cf6 mov ecx, dword ptr [0x1255494c] */
  ECX = (r32((uint32_t)(0x1255494c)));
  /* 12529cfc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12529d02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12529d04 je 0x12529d0d */
  if (C.zf) goto L_12529d0d;
  /* 12529d06 mov eax, 1 */
  EAX = (0x1u);
  /* 12529d0b jmp 0x12529d22 */
  goto L_12529d22;
L_12529d0d:;
  /* 12529d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529d10 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529d13 push edx */
  push32((uint32_t)(EDX));
  /* 12529d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529d16 mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 12529d1b push eax */
  push32((uint32_t)(EAX));
  /* 12529d1c call dword ptr [0x1255737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255737c))), 0x12529d22u);
L_12529d22:;
  /* 12529d22 mov esp, ebp */
  ESP = (EBP);
  /* 12529d24 pop ebp */
  EBP = (pop32());
  /* 12529d25 ret  */
  ESPCHK(0x12529ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x12529d30 (227 bytes, 80 insns) */
void f_12529d30(void) {
  FTRACE(0x12529d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12529d31 mov ebp, esp */
  EBP = (ESP);
  /* 12529d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12529d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529d37 push eax */
  push32((uint32_t)(EAX));
  /* 12529d38 call 0x12529ca0 */
  push32(0x12529d3du); f_12529ca0();
  /* 12529d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529d42 jne 0x12529d4b */
  if (!C.zf) goto L_12529d4b;
  /* 12529d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529d46 jmp 0x12529e0f */
  goto L_12529e0f;
L_12529d4b:;
  /* 12529d4b push 9 */
  push32((uint32_t)(0x9u));
  /* 12529d4d call 0x1252c0a0 */
  push32(0x12529d52u); f_1252c0a0();
  /* 12529d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529d55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529d58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12529d5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529d61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529d64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529d69 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529d6c je 0x12529d90 */
  if (C.zf) goto L_12529d90;
  /* 12529d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529d71 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529d75 je 0x12529d90 */
  if (C.zf) goto L_12529d90;
  /* 12529d77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529d7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529d7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529d82 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529d85 je 0x12529d90 */
  if (C.zf) goto L_12529d90;
  /* 12529d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529d8a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529d8e jne 0x12529e03 */
  if (!C.zf) goto L_12529e03;
L_12529d90:;
  /* 12529d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12529d92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12529d95 push edx */
  push32((uint32_t)(EDX));
  /* 12529d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529d99 push eax */
  push32((uint32_t)(EAX));
  /* 12529d9a call 0x12529c50 */
  push32(0x12529d9fu); f_12529c50();
  /* 12529d9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529da4 je 0x12529e03 */
  if (C.zf) goto L_12529e03;
  /* 12529da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529da9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12529dac cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529daf jne 0x12529e03 */
  if (!C.zf) goto L_12529e03;
  /* 12529db1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529db4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12529db7 cmp ecx, dword ptr [0x12552a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12552a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529dbd jg 0x12529e03 */
  if ((!C.zf&&C.sf==C.of)) goto L_12529e03;
  /* 12529dbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529dc3 je 0x12529dd0 */
  if (C.zf) goto L_12529dd0;
  /* 12529dc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12529dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529dcb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12529dce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12529dd0:;
  /* 12529dd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529dd4 je 0x12529de1 */
  if (C.zf) goto L_12529de1;
  /* 12529dd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12529dd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529ddc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12529ddf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12529de1:;
  /* 12529de1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529de5 je 0x12529df2 */
  if (C.zf) goto L_12529df2;
  /* 12529de7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12529dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529ded mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12529df0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12529df2:;
  /* 12529df2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529df4 call 0x1252c140 */
  push32(0x12529df9u); f_1252c140();
  /* 12529df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529dfc mov eax, 1 */
  EAX = (0x1u);
  /* 12529e01 jmp 0x12529e0f */
  goto L_12529e0f;
L_12529e03:;
  /* 12529e03 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529e05 call 0x1252c140 */
  push32(0x12529e0au); f_1252c140();
  /* 12529e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529e0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12529e0f:;
  /* 12529e0f mov esp, ebp */
  ESP = (EBP);
  /* 12529e11 pop ebp */
  EBP = (pop32());
  /* 12529e12 ret  */
  ESPCHK(0x12529d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e20 @ 0x12529e20 (28 bytes, 11 insns) */
void f_12529e20(void) {
  FTRACE(0x12529e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12529e21 mov ebp, esp */
  EBP = (ESP);
  /* 12529e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12529e24 mov eax, dword ptr [0x125562f8] */
  EAX = (r32((uint32_t)(0x125562f8)));
  /* 12529e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12529e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529e2f mov dword ptr [0x125562f8], ecx */
  w32((uint32_t)(0x125562f8), (ECX));
  /* 12529e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529e38 mov esp, ebp */
  ESP = (EBP);
  /* 12529e3a pop ebp */
  EBP = (pop32());
  /* 12529e3b ret  */
  ESPCHK(0x12529e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e40 @ 0x12529e40 (362 bytes, 116 insns) */
void f_12529e40(void) {
  FTRACE(0x12529e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12529e41 mov ebp, esp */
  EBP = (ESP);
  /* 12529e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529e46 push ebx */
  push32((uint32_t)(EBX));
  /* 12529e47 push esi */
  push32((uint32_t)(ESI));
  /* 12529e48 push edi */
  push32((uint32_t)(EDI));
  /* 12529e49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529e4d jne 0x12529e7a */
  if (!C.zf) goto L_12529e7a;
L_12529e4f:;
  /* 12529e4f push 0x1254ff7c */
  push32((uint32_t)(0x1254ff7cu));
  /* 12529e54 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12529e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12529e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12529e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12529e61 call 0x12527760 */
  push32(0x12529e66u); f_12527760();
  /* 12529e66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529e69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529e6c jne 0x12529e6f */
  if (!C.zf) goto L_12529e6f;
  /* 12529e6e int3  */
  x86_unimpl("int3 @ 0x12529e6e");
L_12529e6f:;
  /* 12529e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529e73 jne 0x12529e4f */
  if (!C.zf) goto L_12529e4f;
  /* 12529e75 jmp 0x12529fa3 */
  goto L_12529fa3;
L_12529e7a:;
  /* 12529e7a push 9 */
  push32((uint32_t)(0x9u));
  /* 12529e7c call 0x1252c0a0 */
  push32(0x12529e81u); f_1252c0a0();
  /* 12529e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529e87 mov edx, dword ptr [0x12554998] */
  EDX = (r32((uint32_t)(0x12554998)));
  /* 12529e8d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12529e8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12529e96 jmp 0x12529ea1 */
  goto L_12529ea1;
L_12529e98:;
  /* 12529e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529e9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529e9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12529ea1:;
  /* 12529ea1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529ea5 jge 0x12529ec5 */
  if ((C.sf==C.of)) goto L_12529ec5;
  /* 12529ea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529ead mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12529eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12529eb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529ebb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12529ec3 jmp 0x12529e98 */
  goto L_12529e98;
L_12529ec5:;
  /* 12529ec5 mov edx, dword ptr [0x12554998] */
  EDX = (r32((uint32_t)(0x12554998)));
  /* 12529ecb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12529ece jmp 0x12529ed8 */
  goto L_12529ed8;
L_12529ed0:;
  /* 12529ed0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ed3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12529ed5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12529ed8:;
  /* 12529ed8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529edc je 0x12529f81 */
  if (C.zf) goto L_12529f81;
  /* 12529ee2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ee5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529ee8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529eef jl 0x12529f57 */
  if ((C.sf!=C.of)) goto L_12529f57;
  /* 12529ef1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ef4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12529ef7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12529efd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529f00 jge 0x12529f57 */
  if ((C.sf==C.of)) goto L_12529f57;
  /* 12529f02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f05 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12529f08 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12529f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f11 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12529f15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529f18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f1b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12529f1e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12529f24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f27 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12529f2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f2e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12529f31 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f39 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12529f3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f40 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12529f43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f46 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12529f49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12529f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f51 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12529f55 jmp 0x12529f7c */
  goto L_12529f7c;
L_12529f57:;
  /* 12529f57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529f5a push edx */
  push32((uint32_t)(EDX));
  /* 12529f5b push 0x1254ff58 */
  push32((uint32_t)(0x1254ff58u));
  /* 12529f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529f68 call 0x12527760 */
  push32(0x12529f6du); f_12527760();
  /* 12529f6d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529f70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529f73 jne 0x12529f76 */
  if (!C.zf) goto L_12529f76;
  /* 12529f75 int3  */
  x86_unimpl("int3 @ 0x12529f75");
L_12529f76:;
  /* 12529f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529f7a jne 0x12529f57 */
  if (!C.zf) goto L_12529f57;
L_12529f7c:;
  /* 12529f7c jmp 0x12529ed0 */
  goto L_12529ed0;
L_12529f81:;
  /* 12529f81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f84 mov edx, dword ptr [0x125549a0] */
  EDX = (r32((uint32_t)(0x125549a0)));
  /* 12529f8a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12529f8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12529f90 mov ecx, dword ptr [0x12554994] */
  ECX = (r32((uint32_t)(0x12554994)));
  /* 12529f96 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12529f99 push 9 */
  push32((uint32_t)(0x9u));
  /* 12529f9b call 0x1252c140 */
  push32(0x12529fa0u); f_1252c140();
  /* 12529fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12529fa3:;
  /* 12529fa3 pop edi */
  EDI = (pop32());
  /* 12529fa4 pop esi */
  ESI = (pop32());
  /* 12529fa5 pop ebx */
  EBX = (pop32());
  /* 12529fa6 mov esp, ebp */
  ESP = (EBP);
  /* 12529fa8 pop ebp */
  EBP = (pop32());
  /* 12529fa9 ret  */
  ESPCHK(0x12529e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x12529fb0 (291 bytes, 95 insns) */
void f_12529fb0(void) {
  FTRACE(0x12529fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12529fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12529fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12529fb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12529fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12529fb7 push esi */
  push32((uint32_t)(ESI));
  /* 12529fb8 push edi */
  push32((uint32_t)(EDI));
  /* 12529fb9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12529fc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529fc4 je 0x12529fd2 */
  if (C.zf) goto L_12529fd2;
  /* 12529fc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529fca je 0x12529fd2 */
  if (C.zf) goto L_12529fd2;
  /* 12529fcc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529fd0 jne 0x1252a000 */
  if (!C.zf) goto L_1252a000;
L_12529fd2:;
  /* 12529fd2 push 0x1254ffa4 */
  push32((uint32_t)(0x1254ffa4u));
  /* 12529fd7 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 12529fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12529fde push 0 */
  push32((uint32_t)(0x0u));
  /* 12529fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12529fe4 call 0x12527760 */
  push32(0x12529fe9u); f_12527760();
  /* 12529fe9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12529fec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12529fef jne 0x12529ff2 */
  if (!C.zf) goto L_12529ff2;
  /* 12529ff1 int3  */
  x86_unimpl("int3 @ 0x12529ff1");
L_12529ff2:;
  /* 12529ff2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12529ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12529ff6 jne 0x12529fd2 */
  if (!C.zf) goto L_12529fd2;
  /* 12529ff8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12529ffb jmp 0x1252a0cc */
  goto L_1252a0cc;
L_1252a000:;
  /* 1252a000 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252a007 jmp 0x1252a012 */
  goto L_1252a012;
L_1252a009:;
  /* 1252a009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a00c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a00f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252a012:;
  /* 1252a012 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a016 jge 0x1252a09c */
  if ((C.sf==C.of)) goto L_1252a09c;
  /* 1252a01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a01f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a025 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a028 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1252a02c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a036 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1252a03a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a03d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a040 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a043 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a046 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1252a04a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a04e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a054 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 1252a058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a05b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a05e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a063 jne 0x1252a072 */
  if (!C.zf) goto L_1252a072;
  /* 1252a065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a06b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a070 je 0x1252a097 */
  if (C.zf) goto L_1252a097;
L_1252a072:;
  /* 1252a072 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a076 je 0x1252a097 */
  if (C.zf) goto L_1252a097;
  /* 1252a078 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a07c jne 0x1252a090 */
  if (!C.zf) goto L_1252a090;
  /* 1252a07e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a082 jne 0x1252a097 */
  if (!C.zf) goto L_1252a097;
  /* 1252a084 mov eax, dword ptr [0x12552a84] */
  EAX = (r32((uint32_t)(0x12552a84)));
  /* 1252a089 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1252a08c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a08e je 0x1252a097 */
  if (C.zf) goto L_1252a097;
L_1252a090:;
  /* 1252a090 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1252a097:;
  /* 1252a097 jmp 0x1252a009 */
  goto L_1252a009;
L_1252a09c:;
  /* 1252a09c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a09f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a0a2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1252a0a5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a0a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a0ab mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1252a0ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a0b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a0b4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 1252a0b7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a0ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a0bd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 1252a0c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a0c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1252a0c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1252a0cc:;
  /* 1252a0cc pop edi */
  EDI = (pop32());
  /* 1252a0cd pop esi */
  ESI = (pop32());
  /* 1252a0ce pop ebx */
  EBX = (pop32());
  /* 1252a0cf mov esp, ebp */
  ESP = (EBP);
  /* 1252a0d1 pop ebp */
  EBP = (pop32());
  /* 1252a0d2 ret  */
  ESPCHK(0x12529fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e0 @ 0x1252a0e0 (697 bytes, 253 insns) */
void f_1252a0e0(void) {
  FTRACE(0x1252a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1252a0e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a0e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1252a0e7 push esi */
  push32((uint32_t)(ESI));
  /* 1252a0e8 push edi */
  push32((uint32_t)(EDI));
  /* 1252a0e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1252a0f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252a0f2 call 0x1252c0a0 */
  push32(0x1252a0f7u); f_1252c0a0();
  /* 1252a0f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a0fa:;
  /* 1252a0fa push 0x1255009c */
  push32((uint32_t)(0x1255009cu));
  /* 1252a0ff push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 1252a104 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a106 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a10a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a10c call 0x12527760 */
  push32(0x1252a111u); f_12527760();
  /* 1252a111 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a114 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a117 jne 0x1252a11a */
  if (!C.zf) goto L_1252a11a;
  /* 1252a119 int3  */
  x86_unimpl("int3 @ 0x1252a119");
L_1252a11a:;
  /* 1252a11a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a11c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a11e jne 0x1252a0fa */
  if (!C.zf) goto L_1252a0fa;
  /* 1252a120 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a124 je 0x1252a12e */
  if (C.zf) goto L_1252a12e;
  /* 1252a126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a129 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252a12b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252a12e:;
  /* 1252a12e mov eax, dword ptr [0x12554998] */
  EAX = (r32((uint32_t)(0x12554998)));
  /* 1252a133 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252a136 jmp 0x1252a140 */
  goto L_1252a140;
L_1252a138:;
  /* 1252a138 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a13b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252a13d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252a140:;
  /* 1252a140 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a144 je 0x1252a362 */
  if (C.zf) goto L_1252a362;
  /* 1252a14a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a14d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a150 je 0x1252a362 */
  if (C.zf) goto L_1252a362;
  /* 1252a156 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a159 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1252a15c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a162 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a165 je 0x1252a194 */
  if (C.zf) goto L_1252a194;
  /* 1252a167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a16a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1252a16d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252a173 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a175 je 0x1252a194 */
  if (C.zf) goto L_1252a194;
  /* 1252a177 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a17a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252a17d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252a182 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a185 jne 0x1252a199 */
  if (!C.zf) goto L_1252a199;
  /* 1252a187 mov ecx, dword ptr [0x12552a84] */
  ECX = (r32((uint32_t)(0x12552a84)));
  /* 1252a18d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1252a190 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a192 jne 0x1252a199 */
  if (!C.zf) goto L_1252a199;
L_1252a194:;
  /* 1252a194 jmp 0x1252a35d */
  goto L_1252a35d;
L_1252a199:;
  /* 1252a199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a19c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a1a0 je 0x1252a212 */
  if (C.zf) goto L_1252a212;
  /* 1252a1a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252a1a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a1a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1252a1ac push ecx */
  push32((uint32_t)(ECX));
  /* 1252a1ad call 0x12529c50 */
  push32(0x1252a1b2u); f_12529c50();
  /* 1252a1b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a1b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a1b7 jne 0x1252a1e3 */
  if (!C.zf) goto L_1252a1e3;
L_1252a1b9:;
  /* 1252a1b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a1bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252a1bf push eax */
  push32((uint32_t)(EAX));
  /* 1252a1c0 push 0x12550088 */
  push32((uint32_t)(0x12550088u));
  /* 1252a1c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1cd call 0x12527760 */
  push32(0x1252a1d2u); f_12527760();
  /* 1252a1d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a1d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a1d8 jne 0x1252a1db */
  if (!C.zf) goto L_1252a1db;
  /* 1252a1da int3  */
  x86_unimpl("int3 @ 0x1252a1da");
L_1252a1db:;
  /* 1252a1db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252a1dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a1df jne 0x1252a1b9 */
  if (!C.zf) goto L_1252a1b9;
  /* 1252a1e1 jmp 0x1252a212 */
  goto L_1252a212;
L_1252a1e3:;
  /* 1252a1e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a1e6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252a1e9 push eax */
  push32((uint32_t)(EAX));
  /* 1252a1ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a1ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252a1f0 push edx */
  push32((uint32_t)(EDX));
  /* 1252a1f1 push 0x1255007c */
  push32((uint32_t)(0x1255007cu));
  /* 1252a1f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a1fe call 0x12527760 */
  push32(0x1252a203u); f_12527760();
  /* 1252a203 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a206 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a209 jne 0x1252a20c */
  if (!C.zf) goto L_1252a20c;
  /* 1252a20b int3  */
  x86_unimpl("int3 @ 0x1252a20b");
L_1252a20c:;
  /* 1252a20c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a20e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a210 jne 0x1252a1e3 */
  if (!C.zf) goto L_1252a1e3;
L_1252a212:;
  /* 1252a212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a215 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1252a218 push edx */
  push32((uint32_t)(EDX));
  /* 1252a219 push 0x12550074 */
  push32((uint32_t)(0x12550074u));
  /* 1252a21e push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a222 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a224 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a226 call 0x12527760 */
  push32(0x1252a22bu); f_12527760();
  /* 1252a22b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a22e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a231 jne 0x1252a234 */
  if (!C.zf) goto L_1252a234;
  /* 1252a233 int3  */
  x86_unimpl("int3 @ 0x1252a233");
L_1252a234:;
  /* 1252a234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a238 jne 0x1252a212 */
  if (!C.zf) goto L_1252a212;
  /* 1252a23a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a23d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1252a240 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a246 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a249 jne 0x1252a2bc */
  if (!C.zf) goto L_1252a2bc;
L_1252a24b:;
  /* 1252a24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a24e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252a251 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a255 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252a258 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1252a25b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252a260 push eax */
  push32((uint32_t)(EAX));
  /* 1252a261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a264 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a267 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a268 push 0x12550040 */
  push32((uint32_t)(0x12550040u));
  /* 1252a26d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a26f push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a271 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a273 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a275 call 0x12527760 */
  push32(0x1252a27au); f_12527760();
  /* 1252a27a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a27d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a280 jne 0x1252a283 */
  if (!C.zf) goto L_1252a283;
  /* 1252a282 int3  */
  x86_unimpl("int3 @ 0x1252a282");
L_1252a283:;
  /* 1252a283 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a285 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a287 jne 0x1252a24b */
  if (!C.zf) goto L_1252a24b;
  /* 1252a289 cmp dword ptr [0x125562f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125562f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a290 je 0x1252a2ab */
  if (C.zf) goto L_1252a2ab;
  /* 1252a292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a295 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252a298 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a29c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a29f push edx */
  push32((uint32_t)(EDX));
  /* 1252a2a0 call dword ptr [0x125562f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125562f8))), 0x1252a2a6u);
  /* 1252a2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a2a9 jmp 0x1252a2b7 */
  goto L_1252a2b7;
L_1252a2ab:;
  /* 1252a2ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a2ae push eax */
  push32((uint32_t)(EAX));
  /* 1252a2af call 0x1252a3a0 */
  push32(0x1252a2b4u); f_1252a3a0();
  /* 1252a2b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a2b7:;
  /* 1252a2b7 jmp 0x1252a35d */
  goto L_1252a35d;
L_1252a2bc:;
  /* 1252a2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a2bf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a2c3 jne 0x1252a302 */
  if (!C.zf) goto L_1252a302;
L_1252a2c5:;
  /* 1252a2c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a2c8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252a2cb push eax */
  push32((uint32_t)(EAX));
  /* 1252a2cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a2cf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a2d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a2d3 push 0x12550018 */
  push32((uint32_t)(0x12550018u));
  /* 1252a2d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a2da push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a2dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a2de push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a2e0 call 0x12527760 */
  push32(0x1252a2e5u); f_12527760();
  /* 1252a2e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a2e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a2eb jne 0x1252a2ee */
  if (!C.zf) goto L_1252a2ee;
  /* 1252a2ed int3  */
  x86_unimpl("int3 @ 0x1252a2ed");
L_1252a2ee:;
  /* 1252a2ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a2f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a2f2 jne 0x1252a2c5 */
  if (!C.zf) goto L_1252a2c5;
  /* 1252a2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a2f7 push eax */
  push32((uint32_t)(EAX));
  /* 1252a2f8 call 0x1252a3a0 */
  push32(0x1252a2fdu); f_1252a3a0();
  /* 1252a2fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a300 jmp 0x1252a35d */
  goto L_1252a35d;
L_1252a302:;
  /* 1252a302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a305 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1252a308 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a30e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a311 jne 0x1252a35d */
  if (!C.zf) goto L_1252a35d;
L_1252a313:;
  /* 1252a313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a316 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1252a319 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a31a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a31d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1252a320 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1252a323 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252a328 push eax */
  push32((uint32_t)(EAX));
  /* 1252a329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a32c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a32f push ecx */
  push32((uint32_t)(ECX));
  /* 1252a330 push 0x1254ffe4 */
  push32((uint32_t)(0x1254ffe4u));
  /* 1252a335 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a337 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a339 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a33b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a33d call 0x12527760 */
  push32(0x1252a342u); f_12527760();
  /* 1252a342 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a345 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a348 jne 0x1252a34b */
  if (!C.zf) goto L_1252a34b;
  /* 1252a34a int3  */
  x86_unimpl("int3 @ 0x1252a34a");
L_1252a34b:;
  /* 1252a34b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a34d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a34f jne 0x1252a313 */
  if (!C.zf) goto L_1252a313;
  /* 1252a351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a354 push eax */
  push32((uint32_t)(EAX));
  /* 1252a355 call 0x1252a3a0 */
  push32(0x1252a35au); f_1252a3a0();
  /* 1252a35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a35d:;
  /* 1252a35d jmp 0x1252a138 */
  goto L_1252a138;
L_1252a362:;
  /* 1252a362 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252a364 call 0x1252c140 */
  push32(0x1252a369u); f_1252c140();
  /* 1252a369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a36c:;
  /* 1252a36c push 0x1254ffcc */
  push32((uint32_t)(0x1254ffccu));
  /* 1252a371 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 1252a376 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a37a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a37c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a37e call 0x12527760 */
  push32(0x1252a383u); f_12527760();
  /* 1252a383 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a386 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a389 jne 0x1252a38c */
  if (!C.zf) goto L_1252a38c;
  /* 1252a38b int3  */
  x86_unimpl("int3 @ 0x1252a38b");
L_1252a38c:;
  /* 1252a38c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252a38e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a390 jne 0x1252a36c */
  if (!C.zf) goto L_1252a36c;
  /* 1252a392 pop edi */
  EDI = (pop32());
  /* 1252a393 pop esi */
  ESI = (pop32());
  /* 1252a394 pop ebx */
  EBX = (pop32());
  /* 1252a395 mov esp, ebp */
  ESP = (EBP);
  /* 1252a397 pop ebp */
  EBP = (pop32());
  /* 1252a398 ret  */
  ESPCHK(0x1252a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x1252a3a0 (276 bytes, 89 insns) */
void f_1252a3a0(void) {
  FTRACE(0x1252a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1252a3a3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a3a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1252a3a7 push esi */
  push32((uint32_t)(ESI));
  /* 1252a3a8 push edi */
  push32((uint32_t)(EDI));
  /* 1252a3a9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 1252a3b0 jmp 0x1252a3bb */
  goto L_1252a3bb;
L_1252a3b2:;
  /* 1252a3b2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252a3b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a3b8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1252a3bb:;
  /* 1252a3bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a3be cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a3c2 jge 0x1252a3cf */
  if ((C.sf==C.of)) goto L_1252a3cf;
  /* 1252a3c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a3c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1252a3ca mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1252a3cd jmp 0x1252a3d6 */
  goto L_1252a3d6;
L_1252a3cf:;
  /* 1252a3cf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_1252a3d6:;
  /* 1252a3d6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252a3d9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a3dc jge 0x1252a47c */
  if ((C.sf==C.of)) goto L_1252a47c;
  /* 1252a3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a3e5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a3e8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1252a3eb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1252a3ee cmp dword ptr [0x12552ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12552ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a3f5 jle 0x1252a413 */
  if ((C.zf||C.sf!=C.of)) goto L_1252a413;
  /* 1252a3f7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1252a3fc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252a3ff and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252a405 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a406 call 0x1252e6b0 */
  push32(0x1252a40bu); f_1252e6b0();
  /* 1252a40b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a40e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 1252a411 jmp 0x1252a430 */
  goto L_1252a430;
L_1252a413:;
  /* 1252a413 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252a416 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a41c mov eax, dword ptr [0x12552c98] */
  EAX = (r32((uint32_t)(0x12552c98)));
  /* 1252a421 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252a423 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1252a427 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1252a42d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_1252a430:;
  /* 1252a430 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a434 je 0x1252a444 */
  if (C.zf) goto L_1252a444;
  /* 1252a436 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252a439 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a43f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 1252a442 jmp 0x1252a44b */
  goto L_1252a44b;
L_1252a444:;
  /* 1252a444 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1252a44b:;
  /* 1252a44b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252a44e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 1252a451 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 1252a455 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1252a458 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a45e push edx */
  push32((uint32_t)(EDX));
  /* 1252a45f push 0x125500c0 */
  push32((uint32_t)(0x125500c0u));
  /* 1252a464 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252a467 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252a46a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1252a46e push ecx */
  push32((uint32_t)(ECX));
  /* 1252a46f call 0x1252e5b0 */
  push32(0x1252a474u); f_1252e5b0();
  /* 1252a474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a477 jmp 0x1252a3b2 */
  goto L_1252a3b2;
L_1252a47c:;
  /* 1252a47c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1252a47f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_1252a484:;
  /* 1252a484 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1252a487 push eax */
  push32((uint32_t)(EAX));
  /* 1252a488 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1252a48b push ecx */
  push32((uint32_t)(ECX));
  /* 1252a48c push 0x125500b0 */
  push32((uint32_t)(0x125500b0u));
  /* 1252a491 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a493 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a495 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a497 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a499 call 0x12527760 */
  push32(0x1252a49eu); f_12527760();
  /* 1252a49e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a4a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a4a4 jne 0x1252a4a7 */
  if (!C.zf) goto L_1252a4a7;
  /* 1252a4a6 int3  */
  x86_unimpl("int3 @ 0x1252a4a6");
L_1252a4a7:;
  /* 1252a4a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a4a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a4ab jne 0x1252a484 */
  if (!C.zf) goto L_1252a484;
  /* 1252a4ad pop edi */
  EDI = (pop32());
  /* 1252a4ae pop esi */
  ESI = (pop32());
  /* 1252a4af pop ebx */
  EBX = (pop32());
  /* 1252a4b0 mov esp, ebp */
  ESP = (EBP);
  /* 1252a4b2 pop ebp */
  EBP = (pop32());
  /* 1252a4b3 ret  */
  ESPCHK(0x1252a3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x1252a4c0 (116 bytes, 46 insns) */
void f_1252a4c0(void) {
  FTRACE(0x1252a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1252a4c3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a4c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1252a4c7 push esi */
  push32((uint32_t)(ESI));
  /* 1252a4c8 push edi */
  push32((uint32_t)(EDI));
  /* 1252a4c9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1252a4cc push eax */
  push32((uint32_t)(EAX));
  /* 1252a4cd call 0x12529e40 */
  push32(0x1252a4d2u); f_12529e40();
  /* 1252a4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a4d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a4d9 jne 0x1252a4f4 */
  if (!C.zf) goto L_1252a4f4;
  /* 1252a4db cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a4df jne 0x1252a4f4 */
  if (!C.zf) goto L_1252a4f4;
  /* 1252a4e1 mov ecx, dword ptr [0x12552a84] */
  ECX = (r32((uint32_t)(0x12552a84)));
  /* 1252a4e7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1252a4ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a4ec je 0x1252a52b */
  if (C.zf) goto L_1252a52b;
  /* 1252a4ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a4f2 je 0x1252a52b */
  if (C.zf) goto L_1252a52b;
L_1252a4f4:;
  /* 1252a4f4 push 0x125500c8 */
  push32((uint32_t)(0x125500c8u));
  /* 1252a4f9 push 0x1254fa94 */
  push32((uint32_t)(0x1254fa94u));
  /* 1252a4fe push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a500 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a502 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a504 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a506 call 0x12527760 */
  push32(0x1252a50bu); f_12527760();
  /* 1252a50b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a50e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a511 jne 0x1252a514 */
  if (!C.zf) goto L_1252a514;
  /* 1252a513 int3  */
  x86_unimpl("int3 @ 0x1252a513");
L_1252a514:;
  /* 1252a514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a518 jne 0x1252a4f4 */
  if (!C.zf) goto L_1252a4f4;
  /* 1252a51a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a51c call 0x1252a0e0 */
  push32(0x1252a521u); f_1252a0e0();
  /* 1252a521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a524 mov eax, 1 */
  EAX = (0x1u);
  /* 1252a529 jmp 0x1252a52d */
  goto L_1252a52d;
L_1252a52b:;
  /* 1252a52b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252a52d:;
  /* 1252a52d pop edi */
  EDI = (pop32());
  /* 1252a52e pop esi */
  ESI = (pop32());
  /* 1252a52f pop ebx */
  EBX = (pop32());
  /* 1252a530 mov esp, ebp */
  ESP = (EBP);
  /* 1252a532 pop ebp */
  EBP = (pop32());
  /* 1252a533 ret  */
  ESPCHK(0x1252a4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a540 @ 0x1252a540 (197 bytes, 79 insns) */
void f_1252a540(void) {
  FTRACE(0x1252a540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a540 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a541 mov ebp, esp */
  EBP = (ESP);
  /* 1252a543 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a544 push ebx */
  push32((uint32_t)(EBX));
  /* 1252a545 push esi */
  push32((uint32_t)(ESI));
  /* 1252a546 push edi */
  push32((uint32_t)(EDI));
  /* 1252a547 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a54b jne 0x1252a552 */
  if (!C.zf) goto L_1252a552;
  /* 1252a54d jmp 0x1252a5fe */
  goto L_1252a5fe;
L_1252a552:;
  /* 1252a552 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252a559 jmp 0x1252a564 */
  goto L_1252a564;
L_1252a55b:;
  /* 1252a55b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a55e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a561 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252a564:;
  /* 1252a564 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a568 jge 0x1252a5ae */
  if ((C.sf==C.of)) goto L_1252a5ae;
L_1252a56a:;
  /* 1252a56a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a56d mov edx, dword ptr [ecx*4 + 0x12552a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552a94)));
  /* 1252a574 push edx */
  push32((uint32_t)(EDX));
  /* 1252a575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a578 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a57b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1252a57f push edx */
  push32((uint32_t)(EDX));
  /* 1252a580 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a586 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1252a58a push edx */
  push32((uint32_t)(EDX));
  /* 1252a58b push 0x12550124 */
  push32((uint32_t)(0x12550124u));
  /* 1252a590 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a592 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a594 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a596 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a598 call 0x12527760 */
  push32(0x1252a59du); f_12527760();
  /* 1252a59d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a5a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a5a3 jne 0x1252a5a6 */
  if (!C.zf) goto L_1252a5a6;
  /* 1252a5a5 int3  */
  x86_unimpl("int3 @ 0x1252a5a5");
L_1252a5a6:;
  /* 1252a5a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a5a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a5aa jne 0x1252a56a */
  if (!C.zf) goto L_1252a56a;
  /* 1252a5ac jmp 0x1252a55b */
  goto L_1252a55b;
L_1252a5ae:;
  /* 1252a5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a5b1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1252a5b4 push edx */
  push32((uint32_t)(EDX));
  /* 1252a5b5 push 0x12550100 */
  push32((uint32_t)(0x12550100u));
  /* 1252a5ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5be push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5c2 call 0x12527760 */
  push32(0x1252a5c7u); f_12527760();
  /* 1252a5c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a5ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a5cd jne 0x1252a5d0 */
  if (!C.zf) goto L_1252a5d0;
  /* 1252a5cf int3  */
  x86_unimpl("int3 @ 0x1252a5cf");
L_1252a5d0:;
  /* 1252a5d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a5d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a5d4 jne 0x1252a5ae */
  if (!C.zf) goto L_1252a5ae;
L_1252a5d6:;
  /* 1252a5d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a5d9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1252a5dc push edx */
  push32((uint32_t)(EDX));
  /* 1252a5dd push 0x125500e0 */
  push32((uint32_t)(0x125500e0u));
  /* 1252a5e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a5ea call 0x12527760 */
  push32(0x1252a5efu); f_12527760();
  /* 1252a5ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a5f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a5f5 jne 0x1252a5f8 */
  if (!C.zf) goto L_1252a5f8;
  /* 1252a5f7 int3  */
  x86_unimpl("int3 @ 0x1252a5f7");
L_1252a5f8:;
  /* 1252a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a5fc jne 0x1252a5d6 */
  if (!C.zf) goto L_1252a5d6;
L_1252a5fe:;
  /* 1252a5fe pop edi */
  EDI = (pop32());
  /* 1252a5ff pop esi */
  ESI = (pop32());
  /* 1252a600 pop ebx */
  EBX = (pop32());
  /* 1252a601 mov esp, ebp */
  ESP = (EBP);
  /* 1252a603 pop ebp */
  EBP = (pop32());
  /* 1252a604 ret  */
  ESPCHK(0x1252a540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x1252a610 (329 bytes, 102 insns) */
void f_1252a610(void) {
  FTRACE(0x1252a610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a610 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a611 mov ebp, esp */
  EBP = (ESP);
  /* 1252a613 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a616 cmp dword ptr [0x12556470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a61d jne 0x1252a624 */
  if (!C.zf) goto L_1252a624;
  /* 1252a61f call 0x1252ef50 */
  push32(0x1252a624u); f_1252ef50();
L_1252a624:;
  /* 1252a624 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1252a62b mov eax, dword ptr [0x12554934] */
  EAX = (r32((uint32_t)(0x12554934)));
  /* 1252a630 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252a633:;
  /* 1252a633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a636 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252a639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a63b je 0x1252a669 */
  if (C.zf) goto L_1252a669;
  /* 1252a63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a640 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252a643 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a646 je 0x1252a651 */
  if (C.zf) goto L_1252a651;
  /* 1252a648 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252a64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a64e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252a651:;
  /* 1252a651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a654 push eax */
  push32((uint32_t)(EAX));
  /* 1252a655 call 0x1252b4d0 */
  push32(0x1252a65au); f_1252b4d0();
  /* 1252a65a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a65d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a660 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1252a664 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252a667 jmp 0x1252a633 */
  goto L_1252a633;
L_1252a669:;
  /* 1252a669 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1252a66b push 0x12550144 */
  push32((uint32_t)(0x12550144u));
  /* 1252a670 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252a672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252a675 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1252a67c push ecx */
  push32((uint32_t)(ECX));
  /* 1252a67d call 0x125286a0 */
  push32(0x1252a682u); f_125286a0();
  /* 1252a682 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a685 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252a688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a68b mov dword ptr [0x12554968], edx */
  w32((uint32_t)(0x12554968), (EDX));
  /* 1252a691 cmp dword ptr [0x12554968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a698 jne 0x1252a6a4 */
  if (!C.zf) goto L_1252a6a4;
  /* 1252a69a push 9 */
  push32((uint32_t)(0x9u));
  /* 1252a69c call 0x12527610 */
  push32(0x1252a6a1u); f_12527610();
  /* 1252a6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a6a4:;
  /* 1252a6a4 mov eax, dword ptr [0x12554934] */
  EAX = (r32((uint32_t)(0x12554934)));
  /* 1252a6a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252a6ac jmp 0x1252a6b7 */
  goto L_1252a6b7;
L_1252a6ae:;
  /* 1252a6ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a6b1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a6b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252a6b7:;
  /* 1252a6b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a6ba movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252a6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a6bf je 0x1252a727 */
  if (C.zf) goto L_1252a727;
  /* 1252a6c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a6c5 call 0x1252b4d0 */
  push32(0x1252a6cau); f_1252b4d0();
  /* 1252a6ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a6cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a6d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252a6d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a6d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252a6d9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a6dc je 0x1252a725 */
  if (C.zf) goto L_1252a725;
  /* 1252a6de push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1252a6e0 push 0x12550144 */
  push32((uint32_t)(0x12550144u));
  /* 1252a6e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252a6e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252a6ea push ecx */
  push32((uint32_t)(ECX));
  /* 1252a6eb call 0x125286a0 */
  push32(0x1252a6f0u); f_125286a0();
  /* 1252a6f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a6f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a6f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1252a6f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a6fb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a6fe jne 0x1252a70a */
  if (!C.zf) goto L_1252a70a;
  /* 1252a700 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252a702 call 0x12527610 */
  push32(0x1252a707u); f_12527610();
  /* 1252a707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a70a:;
  /* 1252a70a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a70d push ecx */
  push32((uint32_t)(ECX));
  /* 1252a70e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a711 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252a713 push eax */
  push32((uint32_t)(EAX));
  /* 1252a714 call 0x1252b650 */
  push32(0x1252a719u); f_1252b650();
  /* 1252a719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a71f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a722 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1252a725:;
  /* 1252a725 jmp 0x1252a6ae */
  goto L_1252a6ae;
L_1252a727:;
  /* 1252a727 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252a729 mov edx, dword ptr [0x12554934] */
  EDX = (r32((uint32_t)(0x12554934)));
  /* 1252a72f push edx */
  push32((uint32_t)(EDX));
  /* 1252a730 call 0x12529130 */
  push32(0x1252a735u); f_12529130();
  /* 1252a735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a738 mov dword ptr [0x12554934], 0 */
  w32((uint32_t)(0x12554934), (0x0u));
  /* 1252a742 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a745 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1252a74b mov dword ptr [0x12556460], 1 */
  w32((uint32_t)(0x12556460), (0x1u));
  /* 1252a755 mov esp, ebp */
  ESP = (EBP);
  /* 1252a757 pop ebp */
  EBP = (pop32());
  /* 1252a758 ret  */
  ESPCHK(0x1252a610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a760 @ 0x1252a760 (216 bytes, 69 insns) */
void f_1252a760(void) {
  FTRACE(0x1252a760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a760 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a761 mov ebp, esp */
  EBP = (ESP);
  /* 1252a763 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a766 cmp dword ptr [0x12556470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12556470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a76d jne 0x1252a774 */
  if (!C.zf) goto L_1252a774;
  /* 1252a76f call 0x1252ef50 */
  push32(0x1252a774u); f_1252ef50();
L_1252a774:;
  /* 1252a774 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1252a779 push 0x125549a4 */
  push32((uint32_t)(0x125549a4u));
  /* 1252a77e push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a780 call dword ptr [0x125573b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b0))), 0x1252a786u);
  /* 1252a786 mov dword ptr [0x12554978], 0x125549a4 */
  w32((uint32_t)(0x12554978), (0x125549a4u));
  /* 1252a790 mov eax, dword ptr [0x1255648c] */
  EAX = (r32((uint32_t)(0x1255648c)));
  /* 1252a795 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252a798 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252a79a jne 0x1252a7a7 */
  if (!C.zf) goto L_1252a7a7;
  /* 1252a79c mov edx, dword ptr [0x12554978] */
  EDX = (r32((uint32_t)(0x12554978)));
  /* 1252a7a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1252a7a5 jmp 0x1252a7af */
  goto L_1252a7af;
L_1252a7a7:;
  /* 1252a7a7 mov eax, dword ptr [0x1255648c] */
  EAX = (r32((uint32_t)(0x1255648c)));
  /* 1252a7ac mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1252a7af:;
  /* 1252a7af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252a7b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252a7b5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1252a7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1252a7b9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1252a7bc push eax */
  push32((uint32_t)(EAX));
  /* 1252a7bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a7bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1252a7c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252a7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a7c5 call 0x1252a840 */
  push32(0x1252a7cau); f_1252a840();
  /* 1252a7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a7cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1252a7d2 push 0x12550150 */
  push32((uint32_t)(0x12550150u));
  /* 1252a7d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252a7d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a7dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a7df lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 1252a7e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a7e3 call 0x125286a0 */
  push32(0x1252a7e8u); f_125286a0();
  /* 1252a7e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a7eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252a7ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a7f2 jne 0x1252a7fe */
  if (!C.zf) goto L_1252a7fe;
  /* 1252a7f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1252a7f6 call 0x12527610 */
  push32(0x1252a7fbu); f_12527610();
  /* 1252a7fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252a7fe:;
  /* 1252a7fe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1252a801 push edx */
  push32((uint32_t)(EDX));
  /* 1252a802 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1252a805 push eax */
  push32((uint32_t)(EAX));
  /* 1252a806 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a809 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252a80c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1252a80f push eax */
  push32((uint32_t)(EAX));
  /* 1252a810 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252a813 push ecx */
  push32((uint32_t)(ECX));
  /* 1252a814 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252a817 push edx */
  push32((uint32_t)(EDX));
  /* 1252a818 call 0x1252a840 */
  push32(0x1252a81du); f_1252a840();
  /* 1252a81d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a820 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a823 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a826 mov dword ptr [0x1255495c], eax */
  w32((uint32_t)(0x1255495c), (EAX));
  /* 1252a82b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252a82e mov dword ptr [0x12554960], ecx */
  w32((uint32_t)(0x12554960), (ECX));
  /* 1252a834 mov esp, ebp */
  ESP = (EBP);
  /* 1252a836 pop ebp */
  EBP = (pop32());
  /* 1252a837 ret  */
  ESPCHK(0x1252a760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a840 @ 0x1252a840 (1060 bytes, 360 insns) */
void f_1252a840(void) {
  FTRACE(0x1252a840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252a840 push ebp */
  push32((uint32_t)(EBP));
  /* 1252a841 mov ebp, esp */
  EBP = (ESP);
  /* 1252a843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252a846 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a849 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1252a84f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252a852 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 1252a858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252a85b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252a85e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a862 je 0x1252a875 */
  if (C.zf) goto L_1252a875;
  /* 1252a864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a867 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a86a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1252a86c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252a86f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a872 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_1252a875:;
  /* 1252a875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a878 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252a87b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a87e jne 0x1252a94d */
  if (!C.zf) goto L_1252a94d;
L_1252a884:;
  /* 1252a884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a887 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a88a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252a88d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a890 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252a893 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a896 je 0x1252a912 */
  if (C.zf) goto L_1252a912;
  /* 1252a898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a89b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252a89e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a8a0 je 0x1252a912 */
  if (C.zf) goto L_1252a912;
  /* 1252a8a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a8a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a8a7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252a8a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252a8ab mov al, byte ptr [edx + 0x125561c1] */
  AL = (r8((uint32_t)(EDX + 0x125561c1)));
  /* 1252a8b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1252a8b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a8b6 je 0x1252a8e7 */
  if (C.zf) goto L_1252a8e7;
  /* 1252a8b8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a8bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252a8bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a8c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a8c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1252a8c5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a8c9 je 0x1252a8e7 */
  if (C.zf) goto L_1252a8e7;
  /* 1252a8cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a8ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a8d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1252a8d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1252a8d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a8d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a8db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1252a8de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a8e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a8e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252a8e7:;
  /* 1252a8e7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a8ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252a8ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a8ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a8f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252a8f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a8f8 je 0x1252a90d */
  if (C.zf) goto L_1252a90d;
  /* 1252a8fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a8fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a900 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252a902 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252a904 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a907 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a90a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1252a90d:;
  /* 1252a90d jmp 0x1252a884 */
  goto L_1252a884;
L_1252a912:;
  /* 1252a912 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a915 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252a917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a91a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a91d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1252a91f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a923 je 0x1252a934 */
  if (C.zf) goto L_1252a934;
  /* 1252a925 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a928 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1252a92b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a92e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a931 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1252a934:;
  /* 1252a934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a937 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252a93a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a93d jne 0x1252a948 */
  if (!C.zf) goto L_1252a948;
  /* 1252a93f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a942 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a945 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252a948:;
  /* 1252a948 jmp 0x1252aa1c */
  goto L_1252aa1c;
L_1252a94d:;
  /* 1252a94d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a950 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252a952 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a955 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a958 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252a95a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a95e je 0x1252a973 */
  if (C.zf) goto L_1252a973;
  /* 1252a960 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a966 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252a968 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252a96a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a96d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a970 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1252a973:;
  /* 1252a973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a976 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252a978 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1252a97b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a97e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a981 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252a984 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a987 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252a98d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252a98f mov dl, byte ptr [ecx + 0x125561c1] */
  DL = (r8((uint32_t)(ECX + 0x125561c1)));
  /* 1252a995 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1252a998 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252a99a je 0x1252a9cb */
  if (C.zf) goto L_1252a9cb;
  /* 1252a99c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a99f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252a9a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a9a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252a9a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252a9a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a9ad je 0x1252a9c2 */
  if (C.zf) goto L_1252a9c2;
  /* 1252a9af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a9b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a9b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252a9b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252a9b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252a9bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a9bf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1252a9c2:;
  /* 1252a9c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252a9c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252a9c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252a9cb:;
  /* 1252a9cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a9ce and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252a9d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a9d7 je 0x1252a9f7 */
  if (C.zf) goto L_1252a9f7;
  /* 1252a9d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a9dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252a9e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252a9e3 je 0x1252a9f7 */
  if (C.zf) goto L_1252a9f7;
  /* 1252a9e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a9e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252a9ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252a9f1 jne 0x1252a94d */
  if (!C.zf) goto L_1252a94d;
L_1252a9f7:;
  /* 1252a9f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252a9fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252aa00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252aa02 jne 0x1252aa0f */
  if (!C.zf) goto L_1252aa0f;
  /* 1252aa04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252aa0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252aa0d jmp 0x1252aa1c */
  goto L_1252aa1c;
L_1252aa0f:;
  /* 1252aa0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aa13 je 0x1252aa1c */
  if (C.zf) goto L_1252aa1c;
  /* 1252aa15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252aa18 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1252aa1c:;
  /* 1252aa1c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1252aa23:;
  /* 1252aa23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252aa29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252aa2b je 0x1252aa4e */
  if (C.zf) goto L_1252aa4e;
L_1252aa2d:;
  /* 1252aa2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252aa33 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aa36 je 0x1252aa43 */
  if (C.zf) goto L_1252aa43;
  /* 1252aa38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa3b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252aa3e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aa41 jne 0x1252aa4e */
  if (!C.zf) goto L_1252aa4e;
L_1252aa43:;
  /* 1252aa43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aa49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252aa4c jmp 0x1252aa2d */
  goto L_1252aa2d;
L_1252aa4e:;
  /* 1252aa4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252aa54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252aa56 jne 0x1252aa5d */
  if (!C.zf) goto L_1252aa5d;
  /* 1252aa58 jmp 0x1252ac3b */
  goto L_1252ac3b;
L_1252aa5d:;
  /* 1252aa5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aa61 je 0x1252aa74 */
  if (C.zf) goto L_1252aa74;
  /* 1252aa63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252aa66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252aa69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1252aa6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252aa6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aa71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1252aa74:;
  /* 1252aa74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252aa77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252aa79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aa7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252aa7f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1252aa81:;
  /* 1252aa81 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1252aa88 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1252aa8f:;
  /* 1252aa8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252aa95 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aa98 jne 0x1252aaae */
  if (!C.zf) goto L_1252aaae;
  /* 1252aa9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aa9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aaa0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252aaa3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252aaa6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aaa9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1252aaac jmp 0x1252aa8f */
  goto L_1252aa8f;
L_1252aaae:;
  /* 1252aaae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aab1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252aab4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aab7 jne 0x1252ab0a */
  if (!C.zf) goto L_1252ab0a;
  /* 1252aab9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252aabc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252aabe mov ecx, 2 */
  ECX = (0x2u);
  /* 1252aac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252aac5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252aac7 jne 0x1252ab02 */
  if (!C.zf) goto L_1252ab02;
  /* 1252aac9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aacd je 0x1252aaef */
  if (C.zf) goto L_1252aaef;
  /* 1252aacf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aad2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1252aad6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aad9 jne 0x1252aae6 */
  if (!C.zf) goto L_1252aae6;
  /* 1252aadb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aae1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252aae4 jmp 0x1252aaed */
  goto L_1252aaed;
L_1252aae6:;
  /* 1252aae6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1252aaed:;
  /* 1252aaed jmp 0x1252aaf6 */
  goto L_1252aaf6;
L_1252aaef:;
  /* 1252aaef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1252aaf6:;
  /* 1252aaf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252aaf8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aafc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1252aaff mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1252ab02:;
  /* 1252ab02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ab05 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1252ab07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1252ab0a:;
  /* 1252ab0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ab0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ab10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ab13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1252ab16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ab18 je 0x1252ab3e */
  if (C.zf) goto L_1252ab3e;
  /* 1252ab1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab1e je 0x1252ab2f */
  if (C.zf) goto L_1252ab2f;
  /* 1252ab20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ab23 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 1252ab26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ab29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ab2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1252ab2f:;
  /* 1252ab2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252ab32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252ab34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ab37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252ab3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252ab3c jmp 0x1252ab0a */
  goto L_1252ab0a;
L_1252ab3e:;
  /* 1252ab3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ab41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1252ab44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252ab46 je 0x1252ab64 */
  if (C.zf) goto L_1252ab64;
  /* 1252ab48 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab4c jne 0x1252ab69 */
  if (!C.zf) goto L_1252ab69;
  /* 1252ab4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ab51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252ab54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab57 je 0x1252ab64 */
  if (C.zf) goto L_1252ab64;
  /* 1252ab59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ab5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1252ab5f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab62 jne 0x1252ab69 */
  if (!C.zf) goto L_1252ab69;
L_1252ab64:;
  /* 1252ab64 jmp 0x1252ac14 */
  goto L_1252ac14;
L_1252ab69:;
  /* 1252ab69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab6d je 0x1252ac06 */
  if (C.zf) goto L_1252ac06;
  /* 1252ab73 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ab77 je 0x1252abcd */
  if (C.zf) goto L_1252abcd;
  /* 1252ab79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ab7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ab7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1252ab80 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252ab82 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252ab88 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1252ab8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252ab8d je 0x1252abb8 */
  if (C.zf) goto L_1252abb8;
  /* 1252ab8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ab92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ab95 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1252ab97 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1252ab99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ab9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ab9f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 1252aba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aba5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aba8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252abab mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252abae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252abb0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252abb3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252abb6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1252abb8:;
  /* 1252abb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252abbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252abbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1252abc0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1252abc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252abc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252abc8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1252abcb jmp 0x1252abf9 */
  goto L_1252abf9;
L_1252abcd:;
  /* 1252abcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252abd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252abd2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1252abd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252abd6 mov cl, byte ptr [eax + 0x125561c1] */
  CL = (r8((uint32_t)(EAX + 0x125561c1)));
  /* 1252abdc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1252abdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252abe1 je 0x1252abf9 */
  if (C.zf) goto L_1252abf9;
  /* 1252abe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252abe6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252abe9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252abec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252abef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252abf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252abf4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252abf7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252abf9:;
  /* 1252abf9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252abfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252abfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252ac04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1252ac06:;
  /* 1252ac06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ac09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252ac0f jmp 0x1252aa81 */
  goto L_1252aa81;
L_1252ac14:;
  /* 1252ac14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ac18 je 0x1252ac29 */
  if (C.zf) goto L_1252ac29;
  /* 1252ac1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ac1d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1252ac20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252ac23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac26 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1252ac29:;
  /* 1252ac29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252ac2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252ac2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1252ac34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252ac36 jmp 0x1252aa23 */
  goto L_1252aa23;
L_1252ac3b:;
  /* 1252ac3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ac3f je 0x1252ac53 */
  if (C.zf) goto L_1252ac53;
  /* 1252ac41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ac44 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1252ac4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ac4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac50 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1252ac53:;
  /* 1252ac53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252ac56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252ac58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ac5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252ac5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252ac60 mov esp, ebp */
  ESP = (EBP);
  /* 1252ac62 pop ebp */
  EBP = (pop32());
  /* 1252ac63 ret  */
  ESPCHK(0x1252a840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x1252ac70 (537 bytes, 173 insns) */
void f_1252ac70(void) {
  FTRACE(0x1252ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ac71 mov ebp, esp */
  EBP = (ESP);
  /* 1252ac73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ac76 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1252ac7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1252ac84 cmp dword ptr [0x12554aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ac8b jne 0x1252acca */
  if (!C.zf) goto L_1252acca;
  /* 1252ac8d call dword ptr [0x12557374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557374))), 0x1252ac93u);
  /* 1252ac93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1252ac96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ac9a je 0x1252aca8 */
  if (C.zf) goto L_1252aca8;
  /* 1252ac9c mov dword ptr [0x12554aa8], 1 */
  w32((uint32_t)(0x12554aa8), (0x1u));
  /* 1252aca6 jmp 0x1252acca */
  goto L_1252acca;
L_1252aca8:;
  /* 1252aca8 call dword ptr [0x1255736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255736c))), 0x1252acaeu);
  /* 1252acae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252acb1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252acb5 je 0x1252acc3 */
  if (C.zf) goto L_1252acc3;
  /* 1252acb7 mov dword ptr [0x12554aa8], 2 */
  w32((uint32_t)(0x12554aa8), (0x2u));
  /* 1252acc1 jmp 0x1252acca */
  goto L_1252acca;
L_1252acc3:;
  /* 1252acc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252acc5 jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252acca:;
  /* 1252acca cmp dword ptr [0x12554aa8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554aa8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252acd1 jne 0x1252adce */
  if (!C.zf) goto L_1252adce;
  /* 1252acd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252acdb jne 0x1252acf3 */
  if (!C.zf) goto L_1252acf3;
  /* 1252acdd call dword ptr [0x12557374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557374))), 0x1252ace3u);
  /* 1252ace3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1252ace6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252acea jne 0x1252acf3 */
  if (!C.zf) goto L_1252acf3;
  /* 1252acec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252acee jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252acf3:;
  /* 1252acf3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252acf6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1252acf9:;
  /* 1252acf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252acfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252acfe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1252ad01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ad03 je 0x1252ad25 */
  if (C.zf) goto L_1252ad25;
  /* 1252ad05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ad08 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ad0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252ad0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ad11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252ad13 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1252ad16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ad18 jne 0x1252ad23 */
  if (!C.zf) goto L_1252ad23;
  /* 1252ad1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ad1d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ad20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1252ad23:;
  /* 1252ad23 jmp 0x1252acf9 */
  goto L_1252acf9;
L_1252ad25:;
  /* 1252ad25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ad28 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ad2b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1252ad2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ad30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252ad33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ad3e push edx */
  push32((uint32_t)(EDX));
  /* 1252ad3f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252ad42 push eax */
  push32((uint32_t)(EAX));
  /* 1252ad43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad47 call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x1252ad4du);
  /* 1252ad4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252ad50 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ad54 je 0x1252ad74 */
  if (C.zf) goto L_1252ad74;
  /* 1252ad56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1252ad58 push 0x1255015c */
  push32((uint32_t)(0x1255015cu));
  /* 1252ad5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1252ad5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ad62 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ad63 call 0x125286a0 */
  push32(0x1252ad68u); f_125286a0();
  /* 1252ad68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ad6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252ad6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ad72 jne 0x1252ad85 */
  if (!C.zf) goto L_1252ad85;
L_1252ad74:;
  /* 1252ad74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252ad77 push edx */
  push32((uint32_t)(EDX));
  /* 1252ad78 call dword ptr [0x12557380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557380))), 0x1252ad7eu);
  /* 1252ad7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ad80 jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252ad85:;
  /* 1252ad85 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ad8c push eax */
  push32((uint32_t)(EAX));
  /* 1252ad8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252ad90 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ad91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ad94 push edx */
  push32((uint32_t)(EDX));
  /* 1252ad95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252ad98 push eax */
  push32((uint32_t)(EAX));
  /* 1252ad99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad9b push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ad9d call dword ptr [0x12557370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557370))), 0x1252ada3u);
  /* 1252ada3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252ada5 jne 0x1252adbc */
  if (!C.zf) goto L_1252adbc;
  /* 1252ada7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252ada9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252adac push ecx */
  push32((uint32_t)(ECX));
  /* 1252adad call 0x12529130 */
  push32(0x1252adb2u); f_12529130();
  /* 1252adb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252adb5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1252adbc:;
  /* 1252adbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252adbf push edx */
  push32((uint32_t)(EDX));
  /* 1252adc0 call dword ptr [0x12557380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557380))), 0x1252adc6u);
  /* 1252adc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252adc9 jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252adce:;
  /* 1252adce cmp dword ptr [0x12554aa8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12554aa8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252add5 jne 0x1252ae83 */
  if (!C.zf) goto L_1252ae83;
  /* 1252addb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252addf jne 0x1252adf7 */
  if (!C.zf) goto L_1252adf7;
  /* 1252ade1 call dword ptr [0x1255736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255736c))), 0x1252ade7u);
  /* 1252ade7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252adea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252adee jne 0x1252adf7 */
  if (!C.zf) goto L_1252adf7;
  /* 1252adf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252adf2 jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252adf7:;
  /* 1252adf7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252adfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1252adfd:;
  /* 1252adfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252ae03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ae05 je 0x1252ae25 */
  if (C.zf) goto L_1252ae25;
  /* 1252ae07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ae0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252ae10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae13 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1252ae16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252ae18 jne 0x1252ae23 */
  if (!C.zf) goto L_1252ae23;
  /* 1252ae1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ae20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1252ae23:;
  /* 1252ae23 jmp 0x1252adfd */
  goto L_1252adfd;
L_1252ae25:;
  /* 1252ae25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae28 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252ae2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ae2e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252ae31 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 1252ae36 push 0x1255015c */
  push32((uint32_t)(0x1255015cu));
  /* 1252ae3b push 2 */
  push32((uint32_t)(0x2u));
  /* 1252ae3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ae40 push edx */
  push32((uint32_t)(EDX));
  /* 1252ae41 call 0x125286a0 */
  push32(0x1252ae46u); f_125286a0();
  /* 1252ae46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ae49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252ae4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ae50 jne 0x1252ae60 */
  if (!C.zf) goto L_1252ae60;
  /* 1252ae52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252ae55 push eax */
  push32((uint32_t)(EAX));
  /* 1252ae56 call dword ptr [0x12557378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557378))), 0x1252ae5cu);
  /* 1252ae5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ae5e jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252ae60:;
  /* 1252ae60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252ae63 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ae64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252ae67 push edx */
  push32((uint32_t)(EDX));
  /* 1252ae68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae6b push eax */
  push32((uint32_t)(EAX));
  /* 1252ae6c call 0x1252ef80 */
  push32(0x1252ae71u); f_1252ef80();
  /* 1252ae71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ae74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252ae77 push ecx */
  push32((uint32_t)(ECX));
  /* 1252ae78 call dword ptr [0x12557378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557378))), 0x1252ae7eu);
  /* 1252ae7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ae81 jmp 0x1252ae85 */
  goto L_1252ae85;
L_1252ae83:;
  /* 1252ae83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252ae85:;
  /* 1252ae85 mov esp, ebp */
  ESP = (EBP);
  /* 1252ae87 pop ebp */
  EBP = (pop32());
  /* 1252ae88 ret  */
  ESPCHK(0x1252ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae90 @ 0x1252ae90 (77 bytes, 25 insns) */
void f_1252ae90(void) {
  FTRACE(0x1252ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1252ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1252ae93 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252ae95 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1252ae9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252ae9c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aea0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1252aea3 push eax */
  push32((uint32_t)(EAX));
  /* 1252aea4 call dword ptr [0x12557360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557360))), 0x1252aeaau);
  /* 1252aeaa mov dword ptr [0x125562ec], eax */
  w32((uint32_t)(0x125562ec), (EAX));
  /* 1252aeaf cmp dword ptr [0x125562ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125562ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aeb6 jne 0x1252aebc */
  if (!C.zf) goto L_1252aebc;
  /* 1252aeb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252aeba jmp 0x1252aedb */
  goto L_1252aedb;
L_1252aebc:;
  /* 1252aebc call 0x1252c940 */
  push32(0x1252aec1u); f_1252c940();
  /* 1252aec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252aec3 jne 0x1252aed6 */
  if (!C.zf) goto L_1252aed6;
  /* 1252aec5 mov ecx, dword ptr [0x125562ec] */
  ECX = (r32((uint32_t)(0x125562ec)));
  /* 1252aecb push ecx */
  push32((uint32_t)(ECX));
  /* 1252aecc call dword ptr [0x12557364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557364))), 0x1252aed2u);
  /* 1252aed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252aed4 jmp 0x1252aedb */
  goto L_1252aedb;
L_1252aed6:;
  /* 1252aed6 mov eax, 1 */
  EAX = (0x1u);
L_1252aedb:;
  /* 1252aedb pop ebp */
  EBP = (pop32());
  /* 1252aedc ret  */
  ESPCHK(0x1252ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x1252aee0 (156 bytes, 48 insns) */
void f_1252aee0(void) {
  FTRACE(0x1252aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252aee1 mov ebp, esp */
  EBP = (ESP);
  /* 1252aee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252aee6 mov eax, dword ptr [0x125562e8] */
  EAX = (r32((uint32_t)(0x125562e8)));
  /* 1252aeeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252aeee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252aef5 jmp 0x1252af00 */
  goto L_1252af00;
L_1252aef7:;
  /* 1252aef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252aefa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252aefd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252af00:;
  /* 1252af00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252af03 cmp edx, dword ptr [0x125562e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125562e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252af09 jge 0x1252af56 */
  if ((C.sf==C.of)) goto L_1252af56;
  /* 1252af0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1252af10 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1252af15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252af18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1252af1b push ecx */
  push32((uint32_t)(ECX));
  /* 1252af1c call dword ptr [0x12557358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557358))), 0x1252af22u);
  /* 1252af22 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1252af27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252af29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252af2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1252af2f push eax */
  push32((uint32_t)(EAX));
  /* 1252af30 call dword ptr [0x12557358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557358))), 0x1252af36u);
  /* 1252af36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252af39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1252af3c push edx */
  push32((uint32_t)(EDX));
  /* 1252af3d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252af3f mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252af44 push eax */
  push32((uint32_t)(EAX));
  /* 1252af45 call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252af4bu);
  /* 1252af4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252af4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252af51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252af54 jmp 0x1252aef7 */
  goto L_1252aef7;
L_1252af56:;
  /* 1252af56 mov edx, dword ptr [0x125562e8] */
  EDX = (r32((uint32_t)(0x125562e8)));
  /* 1252af5c push edx */
  push32((uint32_t)(EDX));
  /* 1252af5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1252af5f mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252af64 push eax */
  push32((uint32_t)(EAX));
  /* 1252af65 call dword ptr [0x12557368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557368))), 0x1252af6bu);
  /* 1252af6b mov ecx, dword ptr [0x125562ec] */
  ECX = (r32((uint32_t)(0x125562ec)));
  /* 1252af71 push ecx */
  push32((uint32_t)(ECX));
  /* 1252af72 call dword ptr [0x12557364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557364))), 0x1252af78u);
  /* 1252af78 mov esp, ebp */
  ESP = (EBP);
  /* 1252af7a pop ebp */
  EBP = (pop32());
  /* 1252af7b ret  */
  ESPCHK(0x1252aee0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1252af80 (73 bytes, 19 insns) */
void f_1252af80(void) {
  FTRACE(0x1252af80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252af80 push ebp */
  push32((uint32_t)(EBP));
  /* 1252af81 mov ebp, esp */
  EBP = (ESP);
  /* 1252af83 cmp dword ptr [0x1255493c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252af8a je 0x1252af9e */
  if (C.zf) goto L_1252af9e;
  /* 1252af8c cmp dword ptr [0x1255493c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252af93 jne 0x1252afc7 */
  if (!C.zf) goto L_1252afc7;
  /* 1252af95 cmp dword ptr [0x12554940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252af9c jne 0x1252afc7 */
  if (!C.zf) goto L_1252afc7;
L_1252af9e:;
  /* 1252af9e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1252afa3 call 0x1252afd0 */
  push32(0x1252afa8u); f_1252afd0();
  /* 1252afa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252afab cmp dword ptr [0x12554aac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554aac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252afb2 je 0x1252afba */
  if (C.zf) goto L_1252afba;
  /* 1252afb4 call dword ptr [0x12554aac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554aac))), 0x1252afbau);
L_1252afba:;
  /* 1252afba push 0xff */
  push32((uint32_t)(0xffu));
  /* 1252afbf call 0x1252afd0 */
  push32(0x1252afc4u); f_1252afd0();
  /* 1252afc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252afc7:;
  /* 1252afc7 pop ebp */
  EBP = (pop32());
  /* 1252afc8 ret  */
  ESPCHK(0x1252af80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afd0 @ 0x1252afd0 (447 bytes, 131 insns) */
void f_1252afd0(void) {
  FTRACE(0x1252afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1252afd3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252afd9 push ebx */
  push32((uint32_t)(EBX));
  /* 1252afda push esi */
  push32((uint32_t)(ESI));
  /* 1252afdb push edi */
  push32((uint32_t)(EDI));
  /* 1252afdc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1252afe3 jmp 0x1252afee */
  goto L_1252afee;
L_1252afe5:;
  /* 1252afe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252afe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252afeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1252afee:;
  /* 1252afee cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252aff2 jae 0x1252b007 */
  if (!C.cf) goto L_1252b007;
  /* 1252aff4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252aff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252affa cmp edx, dword ptr [ecx*8 + 0x12552ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12552ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b001 jne 0x1252b005 */
  if (!C.zf) goto L_1252b005;
  /* 1252b003 jmp 0x1252b007 */
  goto L_1252b007;
L_1252b005:;
  /* 1252b005 jmp 0x1252afe5 */
  goto L_1252afe5;
L_1252b007:;
  /* 1252b007 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b00a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b00d cmp ecx, dword ptr [eax*8 + 0x12552ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12552ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b014 jne 0x1252b188 */
  if (!C.zf) goto L_1252b188;
  /* 1252b01a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b021 je 0x1252b044 */
  if (C.zf) goto L_1252b044;
  /* 1252b023 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b026 mov eax, dword ptr [edx*8 + 0x12552ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12552ab4)));
  /* 1252b02d push eax */
  push32((uint32_t)(EAX));
  /* 1252b02e push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b030 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b032 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b034 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b036 call 0x12527760 */
  push32(0x1252b03bu); f_12527760();
  /* 1252b03b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b03e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b041 jne 0x1252b044 */
  if (!C.zf) goto L_1252b044;
  /* 1252b043 int3  */
  x86_unimpl("int3 @ 0x1252b043");
L_1252b044:;
  /* 1252b044 cmp dword ptr [0x1255493c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b04b je 0x1252b05f */
  if (C.zf) goto L_1252b05f;
  /* 1252b04d cmp dword ptr [0x1255493c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1255493c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b054 jne 0x1252b098 */
  if (!C.zf) goto L_1252b098;
  /* 1252b056 cmp dword ptr [0x12554940], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12554940))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b05d jne 0x1252b098 */
  if (!C.zf) goto L_1252b098;
L_1252b05f:;
  /* 1252b05f push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b061 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1252b064 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b065 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b068 mov eax, dword ptr [edx*8 + 0x12552ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12552ab4)));
  /* 1252b06f push eax */
  push32((uint32_t)(EAX));
  /* 1252b070 call 0x1252b4d0 */
  push32(0x1252b075u); f_1252b4d0();
  /* 1252b075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b078 push eax */
  push32((uint32_t)(EAX));
  /* 1252b079 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b07c mov edx, dword ptr [ecx*8 + 0x12552ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12552ab4)));
  /* 1252b083 push edx */
  push32((uint32_t)(EDX));
  /* 1252b084 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1252b086 call dword ptr [0x12557394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557394))), 0x1252b08cu);
  /* 1252b08c push eax */
  push32((uint32_t)(EAX));
  /* 1252b08d call dword ptr [0x12557398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557398))), 0x1252b093u);
  /* 1252b093 jmp 0x1252b188 */
  goto L_1252b188;
L_1252b098:;
  /* 1252b098 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b09f je 0x1252b188 */
  if (C.zf) goto L_1252b188;
  /* 1252b0a5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1252b0aa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1252b0b0 push eax */
  push32((uint32_t)(EAX));
  /* 1252b0b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b0b3 call dword ptr [0x125573b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b0))), 0x1252b0b9u);
  /* 1252b0b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252b0bb jne 0x1252b0d1 */
  if (!C.zf) goto L_1252b0d1;
  /* 1252b0bd push 0x1254f9c4 */
  push32((uint32_t)(0x1254f9c4u));
  /* 1252b0c2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1252b0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b0c9 call 0x1252b650 */
  push32(0x1252b0ceu); f_1252b650();
  /* 1252b0ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252b0d1:;
  /* 1252b0d1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1252b0d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252b0da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b0dd push eax */
  push32((uint32_t)(EAX));
  /* 1252b0de call 0x1252b4d0 */
  push32(0x1252b0e3u); f_1252b4d0();
  /* 1252b0e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b0e6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b0e9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b0ec jbe 0x1252b11a */
  if ((C.cf||C.zf)) goto L_1252b11a;
  /* 1252b0ee lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1252b0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b0f5 call 0x1252b4d0 */
  push32(0x1252b0fau); f_1252b4d0();
  /* 1252b0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b0fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b100 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1252b104 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252b107 push 3 */
  push32((uint32_t)(0x3u));
  /* 1252b109 push 0x1254f9c0 */
  push32((uint32_t)(0x1254f9c0u));
  /* 1252b10e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b111 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b112 call 0x1252bec0 */
  push32(0x1252b117u); f_1252bec0();
  /* 1252b117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252b11a:;
  /* 1252b11a push 0x12550418 */
  push32((uint32_t)(0x12550418u));
  /* 1252b11f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1252b125 push edx */
  push32((uint32_t)(EDX));
  /* 1252b126 call 0x1252b650 */
  push32(0x1252b12bu); f_1252b650();
  /* 1252b12b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b12e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b131 push eax */
  push32((uint32_t)(EAX));
  /* 1252b132 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1252b138 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b139 call 0x1252b660 */
  push32(0x1252b13eu); f_1252b660();
  /* 1252b13e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b141 push 0x1254f938 */
  push32((uint32_t)(0x1254f938u));
  /* 1252b146 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1252b14c push edx */
  push32((uint32_t)(EDX));
  /* 1252b14d call 0x1252b660 */
  push32(0x1252b152u); f_1252b660();
  /* 1252b152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b158 mov ecx, dword ptr [eax*8 + 0x12552ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12552ab4)));
  /* 1252b15f push ecx */
  push32((uint32_t)(ECX));
  /* 1252b160 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1252b166 push edx */
  push32((uint32_t)(EDX));
  /* 1252b167 call 0x1252b660 */
  push32(0x1252b16cu); f_1252b660();
  /* 1252b16c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b16f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1252b174 push 0x125503f0 */
  push32((uint32_t)(0x125503f0u));
  /* 1252b179 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1252b17f push eax */
  push32((uint32_t)(EAX));
  /* 1252b180 call 0x1252be00 */
  push32(0x1252b185u); f_1252be00();
  /* 1252b185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252b188:;
  /* 1252b188 pop edi */
  EDI = (pop32());
  /* 1252b189 pop esi */
  ESI = (pop32());
  /* 1252b18a pop ebx */
  EBX = (pop32());
  /* 1252b18b mov esp, ebp */
  ESP = (EBP);
  /* 1252b18d pop ebp */
  EBP = (pop32());
  /* 1252b18e ret  */
  ESPCHK(0x1252afd0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1252b190 (80 bytes, 27 insns) */
void f_1252b190(void) {
  FTRACE(0x1252b190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b190 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b191 mov ebp, esp */
  EBP = (ESP);
  /* 1252b193 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b194 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252b19b jmp 0x1252b1a6 */
  goto L_1252b1a6;
L_1252b19d:;
  /* 1252b19d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b1a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b1a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252b1a6:;
  /* 1252b1a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b1aa jae 0x1252b1bf */
  if (!C.cf) goto L_1252b1bf;
  /* 1252b1ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b1af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b1b2 cmp edx, dword ptr [ecx*8 + 0x12552ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12552ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b1b9 jne 0x1252b1bd */
  if (!C.zf) goto L_1252b1bd;
  /* 1252b1bb jmp 0x1252b1bf */
  goto L_1252b1bf;
L_1252b1bd:;
  /* 1252b1bd jmp 0x1252b19d */
  goto L_1252b19d;
L_1252b1bf:;
  /* 1252b1bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b1c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b1c5 cmp ecx, dword ptr [eax*8 + 0x12552ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12552ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b1cc jne 0x1252b1da */
  if (!C.zf) goto L_1252b1da;
  /* 1252b1ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b1d1 mov eax, dword ptr [edx*8 + 0x12552ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12552ab4)));
  /* 1252b1d8 jmp 0x1252b1dc */
  goto L_1252b1dc;
L_1252b1da:;
  /* 1252b1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252b1dc:;
  /* 1252b1dc mov esp, ebp */
  ESP = (EBP);
  /* 1252b1de pop ebp */
  EBP = (pop32());
  /* 1252b1df ret  */
  ESPCHK(0x1252b190u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1252b1e0 (66 bytes, 28 insns) */
void f_1252b1e0(void) {
  FTRACE(0x1252b1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1252b1e3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b1e7 jne 0x1252b207 */
  if (!C.zf) goto L_1252b207;
  /* 1252b1e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b1ed jge 0x1252b207 */
  if ((C.sf==C.of)) goto L_1252b207;
  /* 1252b1ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b1f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b1f4 push eax */
  push32((uint32_t)(EAX));
  /* 1252b1f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b1fc push edx */
  push32((uint32_t)(EDX));
  /* 1252b1fd call 0x1252b230 */
  push32(0x1252b202u); f_1252b230();
  /* 1252b202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b205 jmp 0x1252b21d */
  goto L_1252b21d;
L_1252b207:;
  /* 1252b207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b209 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b20c push eax */
  push32((uint32_t)(EAX));
  /* 1252b20d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b210 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b214 push edx */
  push32((uint32_t)(EDX));
  /* 1252b215 call 0x1252b230 */
  push32(0x1252b21au); f_1252b230();
  /* 1252b21a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252b21d:;
  /* 1252b21d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b220 pop ebp */
  EBP = (pop32());
  /* 1252b221 ret  */
  ESPCHK(0x1252b1e0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1252b230 (194 bytes, 71 insns) */
void f_1252b230(void) {
  FTRACE(0x1252b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b230 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b231 mov ebp, esp */
  EBP = (ESP);
  /* 1252b233 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b239 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252b23c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b240 je 0x1252b259 */
  if (C.zf) goto L_1252b259;
  /* 1252b242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b245 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1252b248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b24b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b24e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252b251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b254 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252b256 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1252b259:;
  /* 1252b259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b25c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1252b25f:;
  /* 1252b25f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b262 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b264 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252b267 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252b26a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b26d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b26f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1252b272 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1252b275 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b279 jbe 0x1252b291 */
  if ((C.cf||C.zf)) goto L_1252b291;
  /* 1252b27b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b27e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b284 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b289 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b28c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252b28f jmp 0x1252b2a5 */
  goto L_1252b2a5;
L_1252b291:;
  /* 1252b291 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b294 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b29a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b29c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b29f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b2a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252b2a5:;
  /* 1252b2a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b2a9 ja 0x1252b25f */
  if ((!C.cf&&!C.zf)) goto L_1252b25f;
  /* 1252b2ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b2ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1252b2b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b2b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b2b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252b2ba:;
  /* 1252b2ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b2bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252b2bf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1252b2c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b2c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b2c8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252b2ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b2cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b2cf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1252b2d2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1252b2d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b2d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b2da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252b2dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b2e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b2e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252b2e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b2e9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b2ec jb 0x1252b2ba */
  if (C.cf) goto L_1252b2ba;
  /* 1252b2ee mov esp, ebp */
  ESP = (EBP);
  /* 1252b2f0 pop ebp */
  EBP = (pop32());
  /* 1252b2f1 ret  */
  ESPCHK(0x1252b230u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1252b300 (63 bytes, 24 insns) */
void f_1252b300(void) {
  FTRACE(0x1252b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b300 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b301 mov ebp, esp */
  EBP = (ESP);
  /* 1252b303 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b304 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b308 jne 0x1252b319 */
  if (!C.zf) goto L_1252b319;
  /* 1252b30a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b30e jge 0x1252b319 */
  if ((C.sf==C.of)) goto L_1252b319;
  /* 1252b310 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1252b317 jmp 0x1252b320 */
  goto L_1252b320;
L_1252b319:;
  /* 1252b319 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1252b320:;
  /* 1252b320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b323 push eax */
  push32((uint32_t)(EAX));
  /* 1252b324 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b327 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b328 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b32b push edx */
  push32((uint32_t)(EDX));
  /* 1252b32c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b32f push eax */
  push32((uint32_t)(EAX));
  /* 1252b330 call 0x1252b230 */
  push32(0x1252b335u); f_1252b230();
  /* 1252b335 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b338 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b33b mov esp, ebp */
  ESP = (EBP);
  /* 1252b33d pop ebp */
  EBP = (pop32());
  /* 1252b33e ret  */
  ESPCHK(0x1252b300u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1252b340 (30 bytes, 14 insns) */
void f_1252b340(void) {
  FTRACE(0x1252b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b341 mov ebp, esp */
  EBP = (ESP);
  /* 1252b343 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b345 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b348 push eax */
  push32((uint32_t)(EAX));
  /* 1252b349 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b34c push ecx */
  push32((uint32_t)(ECX));
  /* 1252b34d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b350 push edx */
  push32((uint32_t)(EDX));
  /* 1252b351 call 0x1252b230 */
  push32(0x1252b356u); f_1252b230();
  /* 1252b356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b359 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b35c pop ebp */
  EBP = (pop32());
  /* 1252b35d ret  */
  ESPCHK(0x1252b340u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1252b360 (72 bytes, 28 insns) */
void f_1252b360(void) {
  FTRACE(0x1252b360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b360 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b361 mov ebp, esp */
  EBP = (ESP);
  /* 1252b363 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b364 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b368 jne 0x1252b381 */
  if (!C.zf) goto L_1252b381;
  /* 1252b36a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b36e jg 0x1252b381 */
  if ((!C.zf&&C.sf==C.of)) goto L_1252b381;
  /* 1252b370 jl 0x1252b378 */
  if ((C.sf!=C.of)) goto L_1252b378;
  /* 1252b372 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b376 jae 0x1252b381 */
  if (!C.cf) goto L_1252b381;
L_1252b378:;
  /* 1252b378 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1252b37f jmp 0x1252b388 */
  goto L_1252b388;
L_1252b381:;
  /* 1252b381 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1252b388:;
  /* 1252b388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b38b push eax */
  push32((uint32_t)(EAX));
  /* 1252b38c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252b38f push ecx */
  push32((uint32_t)(ECX));
  /* 1252b390 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b393 push edx */
  push32((uint32_t)(EDX));
  /* 1252b394 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b397 push eax */
  push32((uint32_t)(EAX));
  /* 1252b398 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b39b push ecx */
  push32((uint32_t)(ECX));
  /* 1252b39c call 0x1252b3b0 */
  push32(0x1252b3a1u); f_1252b3b0();
  /* 1252b3a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b3a4 mov esp, ebp */
  ESP = (EBP);
  /* 1252b3a6 pop ebp */
  EBP = (pop32());
  /* 1252b3a7 ret  */
  ESPCHK(0x1252b360u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1252b3b0 (242 bytes, 91 insns) */
void f_1252b3b0(void) {
  FTRACE(0x1252b3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1252b3b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b3b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b3b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252b3bc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b3c0 je 0x1252b3e4 */
  if (C.zf) goto L_1252b3e4;
  /* 1252b3c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b3c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1252b3c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b3cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b3ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252b3d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b3d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252b3d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b3d9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b3dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252b3de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1252b3e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1252b3e4:;
  /* 1252b3e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b3e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1252b3ea:;
  /* 1252b3ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252b3ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252b3ef push ecx */
  push32((uint32_t)(ECX));
  /* 1252b3f0 push eax */
  push32((uint32_t)(EAX));
  /* 1252b3f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b3f4 push edx */
  push32((uint32_t)(EDX));
  /* 1252b3f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1252b3f9 call 0x1252f330 */
  push32(0x1252b3feu); f_1252f330();
  /* 1252b3fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252b401 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252b404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b406 push edx */
  push32((uint32_t)(EDX));
  /* 1252b407 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b40b push eax */
  push32((uint32_t)(EAX));
  /* 1252b40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b40f push ecx */
  push32((uint32_t)(ECX));
  /* 1252b410 call 0x1252f2c0 */
  push32(0x1252b415u); f_1252f2c0();
  /* 1252b415 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1252b418 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1252b41b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b41f jbe 0x1252b437 */
  if ((C.cf||C.zf)) goto L_1252b437;
  /* 1252b421 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b424 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b42a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b42c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b42f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b432 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1252b435 jmp 0x1252b44b */
  goto L_1252b44b;
L_1252b437:;
  /* 1252b437 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252b43a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b440 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b448 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1252b44b:;
  /* 1252b44b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b44f ja 0x1252b3ea */
  if ((!C.cf&&!C.zf)) goto L_1252b3ea;
  /* 1252b451 jb 0x1252b459 */
  if (C.cf) goto L_1252b459;
  /* 1252b453 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b457 ja 0x1252b3ea */
  if ((!C.cf&&!C.zf)) goto L_1252b3ea;
L_1252b459:;
  /* 1252b459 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b45c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1252b45f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b462 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252b468:;
  /* 1252b468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b46b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252b46d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1252b470 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b473 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b476 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252b478 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1252b47a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b47d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1252b480 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1252b482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b485 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1252b48b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b48e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b491 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252b494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252b497 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b49a jb 0x1252b468 */
  if (C.cf) goto L_1252b468;
  /* 1252b49c mov esp, ebp */
  ESP = (EBP);
  /* 1252b49e pop ebp */
  EBP = (pop32());
  /* 1252b49f ret 0x14 */
  ESPCHK(0x1252b3b0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1252b4b0 (31 bytes, 15 insns) */
void f_1252b4b0(void) {
  FTRACE(0x1252b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1252b4b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b4b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252b4b8 push eax */
  push32((uint32_t)(EAX));
  /* 1252b4b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b4bc push ecx */
  push32((uint32_t)(ECX));
  /* 1252b4bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b4c0 push edx */
  push32((uint32_t)(EDX));
  /* 1252b4c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b4c4 push eax */
  push32((uint32_t)(EAX));
  /* 1252b4c5 call 0x1252b3b0 */
  push32(0x1252b4cau); f_1252b3b0();
  /* 1252b4ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b4cd pop ebp */
  EBP = (pop32());
  /* 1252b4ce ret  */
  ESPCHK(0x1252b4b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1252b4d0 (123 bytes, 44 insns) */
void f_1252b4d0(void) {
  FTRACE(0x1252b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b4d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b4d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b4da je 0x1252b4f0 */
  if (C.zf) goto L_1252b4f0;
L_1252b4dc:;
  /* 1252b4dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1252b4de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1252b4df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252b4e1 je 0x1252b523 */
  if (C.zf) goto L_1252b523;
  /* 1252b4e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b4e9 jne 0x1252b4dc */
  if (!C.zf) goto L_1252b4dc;
  /* 1252b4eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1252b4f0:;
  /* 1252b4f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1252b4f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1252b4f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b4f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252b4fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252b4fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b501 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1252b506 je 0x1252b4f0 */
  if (C.zf) goto L_1252b4f0;
  /* 1252b508 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1252b50b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252b50d je 0x1252b541 */
  if (C.zf) goto L_1252b541;
  /* 1252b50f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1252b511 je 0x1252b537 */
  if (C.zf) goto L_1252b537;
  /* 1252b513 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1252b518 je 0x1252b52d */
  if (C.zf) goto L_1252b52d;
  /* 1252b51a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1252b51f je 0x1252b523 */
  if (C.zf) goto L_1252b523;
  /* 1252b521 jmp 0x1252b4f0 */
  goto L_1252b4f0;
L_1252b523:;
  /* 1252b523 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1252b526 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b52a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b52c ret  */
  ESPCHK(0x1252b4d0u, _esp0);
  ESP += 4; return;
L_1252b52d:;
  /* 1252b52d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1252b530 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b534 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b536 ret  */
  ESPCHK(0x1252b4d0u, _esp0);
  ESP += 4; return;
L_1252b537:;
  /* 1252b537 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1252b53a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b53e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b540 ret  */
  ESPCHK(0x1252b4d0u, _esp0);
  ESP += 4; return;
L_1252b541:;
  /* 1252b541 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1252b544 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b548 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b54a ret  */
  ESPCHK(0x1252b4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b550 @ 0x1252b550 (249 bytes, 93 insns) */
void f_1252b550(void) {
  FTRACE(0x1252b550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b550 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b551 mov ebp, esp */
  EBP = (ESP);
  /* 1252b553 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b556 push ebx */
  push32((uint32_t)(EBX));
  /* 1252b557 push esi */
  push32((uint32_t)(ESI));
  /* 1252b558 push edi */
  push32((uint32_t)(EDI));
  /* 1252b559 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1252b55c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1252b55f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1252b562 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1252b565:;
  /* 1252b565 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b569 jne 0x1252b589 */
  if (!C.zf) goto L_1252b589;
  /* 1252b56b push 0x12550450 */
  push32((uint32_t)(0x12550450u));
  /* 1252b570 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b572 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1252b574 push 0x12550444 */
  push32((uint32_t)(0x12550444u));
  /* 1252b579 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252b57b call 0x12527760 */
  push32(0x1252b580u); f_12527760();
  /* 1252b580 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b583 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b586 jne 0x1252b589 */
  if (!C.zf) goto L_1252b589;
  /* 1252b588 int3  */
  x86_unimpl("int3 @ 0x1252b588");
L_1252b589:;
  /* 1252b589 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b58b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252b58d jne 0x1252b565 */
  if (!C.zf) goto L_1252b565;
L_1252b58f:;
  /* 1252b58f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b593 jne 0x1252b5b3 */
  if (!C.zf) goto L_1252b5b3;
  /* 1252b595 push 0x12550434 */
  push32((uint32_t)(0x12550434u));
  /* 1252b59a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b59c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1252b59e push 0x12550444 */
  push32((uint32_t)(0x12550444u));
  /* 1252b5a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252b5a5 call 0x12527760 */
  push32(0x1252b5aau); f_12527760();
  /* 1252b5aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b5ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b5b0 jne 0x1252b5b3 */
  if (!C.zf) goto L_1252b5b3;
  /* 1252b5b2 int3  */
  x86_unimpl("int3 @ 0x1252b5b2");
L_1252b5b3:;
  /* 1252b5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252b5b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252b5b7 jne 0x1252b58f */
  if (!C.zf) goto L_1252b58f;
  /* 1252b5b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1252b5c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b5c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252b5cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b5d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1252b5d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b5da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1252b5dd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1252b5e0 push edx */
  push32((uint32_t)(EDX));
  /* 1252b5e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b5e4 push eax */
  push32((uint32_t)(EAX));
  /* 1252b5e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b5e9 call 0x1252f630 */
  push32(0x1252b5eeu); f_1252f630();
  /* 1252b5ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b5f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252b5f4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b5f7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252b5fa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b5fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b600 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1252b603 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b606 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b60a jl 0x1252b62e */
  if ((C.sf!=C.of)) goto L_1252b62e;
  /* 1252b60c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b60f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252b611 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1252b614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b616 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252b61c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1252b61f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b622 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252b624 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b627 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b62a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1252b62c jmp 0x1252b63f */
  goto L_1252b63f;
L_1252b62e:;
  /* 1252b62e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b631 push eax */
  push32((uint32_t)(EAX));
  /* 1252b632 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b634 call 0x1252f3b0 */
  push32(0x1252b639u); f_1252f3b0();
  /* 1252b639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b63c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1252b63f:;
  /* 1252b63f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252b642 pop edi */
  EDI = (pop32());
  /* 1252b643 pop esi */
  ESI = (pop32());
  /* 1252b644 pop ebx */
  EBX = (pop32());
  /* 1252b645 mov esp, ebp */
  ESP = (EBP);
  /* 1252b647 pop ebp */
  EBP = (pop32());
  /* 1252b648 ret  */
  ESPCHK(0x1252b550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b650 @ 0x1252b650 (7 bytes, 3 insns) */
void f_1252b650(void) {
  FTRACE(0x1252b650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b650 push edi */
  push32((uint32_t)(EDI));
  /* 1252b651 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1252b655 jmp 0x1252b6c1 */
  jmp_ind(0x1252b6c1u); return;
}

/* FUN_1000b660 @ 0x1252b660 (224 bytes, 84 insns) */
void f_1252b660(void) {
  FTRACE(0x1252b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b660 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252b664 push edi */
  push32((uint32_t)(EDI));
  /* 1252b665 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b66b je 0x1252b67c */
  if (C.zf) goto L_1252b67c;
L_1252b66d:;
  /* 1252b66d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1252b66f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1252b670 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252b672 je 0x1252b6af */
  if (C.zf) goto L_1252b6af;
  /* 1252b674 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b67a jne 0x1252b66d */
  if (!C.zf) goto L_1252b66d;
L_1252b67c:;
  /* 1252b67c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1252b67e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1252b683 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b685 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252b688 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252b68a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b68d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1252b692 je 0x1252b67c */
  if (C.zf) goto L_1252b67c;
  /* 1252b694 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1252b697 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252b699 je 0x1252b6be */
  if (C.zf) goto L_1252b6be;
  /* 1252b69b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1252b69d je 0x1252b6b9 */
  if (C.zf) goto L_1252b6b9;
  /* 1252b69f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1252b6a4 je 0x1252b6b4 */
  if (C.zf) goto L_1252b6b4;
  /* 1252b6a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1252b6ab je 0x1252b6af */
  if (C.zf) goto L_1252b6af;
  /* 1252b6ad jmp 0x1252b67c */
  goto L_1252b67c;
L_1252b6af:;
  /* 1252b6af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1252b6b2 jmp 0x1252b6c1 */
  goto L_1252b6c1;
L_1252b6b4:;
  /* 1252b6b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1252b6b7 jmp 0x1252b6c1 */
  goto L_1252b6c1;
L_1252b6b9:;
  /* 1252b6b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1252b6bc jmp 0x1252b6c1 */
  goto L_1252b6c1;
L_1252b6be:;
  /* 1252b6be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1252b6c1:;
  /* 1252b6c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252b6c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b6cb je 0x1252b6e6 */
  if (C.zf) goto L_1252b6e6;
L_1252b6cd:;
  /* 1252b6cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1252b6cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1252b6d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1252b6d2 je 0x1252b738 */
  if (C.zf) goto L_1252b738;
  /* 1252b6d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1252b6d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252b6d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1252b6dd jne 0x1252b6cd */
  if (!C.zf) goto L_1252b6cd;
  /* 1252b6df jmp 0x1252b6e6 */
  goto L_1252b6e6;
L_1252b6e1:;
  /* 1252b6e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252b6e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1252b6e6:;
  /* 1252b6e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1252b6eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1252b6ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b6ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252b6f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252b6f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252b6f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b6f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1252b6fe je 0x1252b6e1 */
  if (C.zf) goto L_1252b6e1;
  /* 1252b700 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1252b702 je 0x1252b738 */
  if (C.zf) goto L_1252b738;
  /* 1252b704 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1252b706 je 0x1252b72f */
  if (C.zf) goto L_1252b72f;
  /* 1252b708 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1252b70e je 0x1252b722 */
  if (C.zf) goto L_1252b722;
  /* 1252b710 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1252b716 je 0x1252b71a */
  if (C.zf) goto L_1252b71a;
  /* 1252b718 jmp 0x1252b6e1 */
  goto L_1252b6e1;
L_1252b71a:;
  /* 1252b71a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252b71c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252b720 pop edi */
  EDI = (pop32());
  /* 1252b721 ret  */
  ESPCHK(0x1252b660u, _esp0);
  ESP += 4; return;
L_1252b722:;
  /* 1252b722 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1252b725 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252b729 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1252b72d pop edi */
  EDI = (pop32());
  /* 1252b72e ret  */
  ESPCHK(0x1252b660u, _esp0);
  ESP += 4; return;
L_1252b72f:;
  /* 1252b72f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1252b732 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252b736 pop edi */
  EDI = (pop32());
  /* 1252b737 ret  */
  ESPCHK(0x1252b660u, _esp0);
  ESP += 4; return;
L_1252b738:;
  /* 1252b738 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1252b73a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252b73e pop edi */
  EDI = (pop32());
  /* 1252b73f ret  */
  ESPCHK(0x1252b660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x1252b740 (243 bytes, 91 insns) */
void f_1252b740(void) {
  FTRACE(0x1252b740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b740 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b741 mov ebp, esp */
  EBP = (ESP);
  /* 1252b743 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b746 push ebx */
  push32((uint32_t)(EBX));
  /* 1252b747 push esi */
  push32((uint32_t)(ESI));
  /* 1252b748 push edi */
  push32((uint32_t)(EDI));
  /* 1252b749 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1252b74c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1252b74f:;
  /* 1252b74f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b753 jne 0x1252b773 */
  if (!C.zf) goto L_1252b773;
  /* 1252b755 push 0x12550450 */
  push32((uint32_t)(0x12550450u));
  /* 1252b75a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b75c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1252b75e push 0x12550460 */
  push32((uint32_t)(0x12550460u));
  /* 1252b763 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252b765 call 0x12527760 */
  push32(0x1252b76au); f_12527760();
  /* 1252b76a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b76d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b770 jne 0x1252b773 */
  if (!C.zf) goto L_1252b773;
  /* 1252b772 int3  */
  x86_unimpl("int3 @ 0x1252b772");
L_1252b773:;
  /* 1252b773 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252b775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252b777 jne 0x1252b74f */
  if (!C.zf) goto L_1252b74f;
L_1252b779:;
  /* 1252b779 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b77d jne 0x1252b79d */
  if (!C.zf) goto L_1252b79d;
  /* 1252b77f push 0x12550434 */
  push32((uint32_t)(0x12550434u));
  /* 1252b784 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b786 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1252b788 push 0x12550460 */
  push32((uint32_t)(0x12550460u));
  /* 1252b78d push 2 */
  push32((uint32_t)(0x2u));
  /* 1252b78f call 0x12527760 */
  push32(0x1252b794u); f_12527760();
  /* 1252b794 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b797 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b79a jne 0x1252b79d */
  if (!C.zf) goto L_1252b79d;
  /* 1252b79c int3  */
  x86_unimpl("int3 @ 0x1252b79c");
L_1252b79d:;
  /* 1252b79d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b79f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252b7a1 jne 0x1252b779 */
  if (!C.zf) goto L_1252b779;
  /* 1252b7a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7a6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1252b7ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b7b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1252b7b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b7bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1252b7be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b7c4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1252b7c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1252b7ca push ecx */
  push32((uint32_t)(ECX));
  /* 1252b7cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252b7ce push edx */
  push32((uint32_t)(EDX));
  /* 1252b7cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7d2 push eax */
  push32((uint32_t)(EAX));
  /* 1252b7d3 call 0x1252f630 */
  push32(0x1252b7d8u); f_1252f630();
  /* 1252b7d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b7db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1252b7de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252b7e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b7e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1252b7ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7f0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b7f4 jl 0x1252b818 */
  if ((C.sf!=C.of)) goto L_1252b818;
  /* 1252b7f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b7f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252b7fb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1252b7fe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1252b800 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1252b806 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1252b809 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b80c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252b80e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b811 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b814 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1252b816 jmp 0x1252b829 */
  goto L_1252b829;
L_1252b818:;
  /* 1252b818 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1252b81b push edx */
  push32((uint32_t)(EDX));
  /* 1252b81c push 0 */
  push32((uint32_t)(0x0u));
  /* 1252b81e call 0x1252f3b0 */
  push32(0x1252b823u); f_1252f3b0();
  /* 1252b823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b826 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1252b829:;
  /* 1252b829 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1252b82c pop edi */
  EDI = (pop32());
  /* 1252b82d pop esi */
  ESI = (pop32());
  /* 1252b82e pop ebx */
  EBX = (pop32());
  /* 1252b82f mov esp, ebp */
  ESP = (EBP);
  /* 1252b831 pop ebp */
  EBP = (pop32());
  /* 1252b832 ret  */
  ESPCHK(0x1252b740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1252b840 (47 bytes, 17 insns) */
void f_1252b840(void) {
  FTRACE(0x1252b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b840 push ecx */
  push32((uint32_t)(ECX));
  /* 1252b841 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b846 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1252b84a jb 0x1252b860 */
  if (C.cf) goto L_1252b860;
L_1252b84c:;
  /* 1252b84c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b852 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b857 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1252b859 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b85e jae 0x1252b84c */
  if (!C.cf) goto L_1252b84c;
L_1252b860:;
  /* 1252b860 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b862 mov eax, esp */
  EAX = (ESP);
  /* 1252b864 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1252b866 mov esp, ecx */
  ESP = (ECX);
  /* 1252b868 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252b86a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252b86d push eax */
  push32((uint32_t)(EAX));
  /* 1252b86e ret  */
  ESPCHK(0x1252b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b870 @ 0x1252b870 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1252b870(void) {
  FTRACE(0x1252b870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252b870 push ebp */
  push32((uint32_t)(EBP));
  /* 1252b871 mov ebp, esp */
  EBP = (ESP);
  /* 1252b873 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b876 push esi */
  push32((uint32_t)(ESI));
  /* 1252b877 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b87b je 0x1252b883 */
  if (C.zf) goto L_1252b883;
  /* 1252b87d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b881 jne 0x1252b888 */
  if (!C.zf) goto L_1252b888;
L_1252b883:;
  /* 1252b883 jmp 0x1252ba58 */
  goto L_1252ba58;
L_1252b888:;
  /* 1252b888 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b88c je 0x1252b8a4 */
  if (C.zf) goto L_1252b8a4;
  /* 1252b88e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b892 je 0x1252b8a4 */
  if (C.zf) goto L_1252b8a4;
  /* 1252b894 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b898 je 0x1252b8a4 */
  if (C.zf) goto L_1252b8a4;
  /* 1252b89a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b89e jne 0x1252b981 */
  if (!C.zf) goto L_1252b981;
L_1252b8a4:;
  /* 1252b8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b8a6 call 0x1252c0a0 */
  push32(0x1252b8abu); f_1252c0a0();
  /* 1252b8ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b8ae cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b8b2 je 0x1252b8ba */
  if (C.zf) goto L_1252b8ba;
  /* 1252b8b4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b8b8 jne 0x1252b8ff */
  if (!C.zf) goto L_1252b8ff;
L_1252b8ba:;
  /* 1252b8ba cmp dword ptr [0x12554ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b8c1 jne 0x1252b8ff */
  if (!C.zf) goto L_1252b8ff;
  /* 1252b8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b8c5 push 0x1252baa0 */
  push32((uint32_t)(0x1252baa0u));
  /* 1252b8ca call dword ptr [0x12557354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557354))), 0x1252b8d0u);
  /* 1252b8d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b8d3 jne 0x1252b8e1 */
  if (!C.zf) goto L_1252b8e1;
  /* 1252b8d5 mov dword ptr [0x12554ac0], 1 */
  w32((uint32_t)(0x12554ac0), (0x1u));
  /* 1252b8df jmp 0x1252b8ff */
  goto L_1252b8ff;
L_1252b8e1:;
  /* 1252b8e1 call dword ptr [0x125573d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573d8))), 0x1252b8e7u);
  /* 1252b8e7 mov esi, eax */
  ESI = (EAX);
  /* 1252b8e9 call 0x12530580 */
  push32(0x1252b8eeu); f_12530580();
  /* 1252b8ee mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1252b8f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b8f2 call 0x1252c140 */
  push32(0x1252b8f7u); f_1252c140();
  /* 1252b8f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b8fa jmp 0x1252ba58 */
  goto L_1252ba58;
L_1252b8ff:;
  /* 1252b8ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b902 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252b905 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252b908 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252b90b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1252b90e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b912 ja 0x1252b972 */
  if ((!C.cf&&!C.zf)) goto L_1252b972;
  /* 1252b914 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252b917 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252b919 mov dl, byte ptr [eax + 0x1252ba7f] */
  DL = (r8((uint32_t)(EAX + 0x1252ba7f)));
  /* 1252b91f jmp dword ptr [edx*4 + 0x1252ba6b] */
  switch (EDX) {
    case 0: goto L_1252b926;
    case 1: goto L_1252b960;
    case 2: goto L_1252b93a;
    case 3: goto L_1252b94d;
    case 4: goto L_1252b972;
    default: x86_unimpl("switch@0x1252b91f out of table"); return;
  }
L_1252b926:;
  /* 1252b926 mov ecx, dword ptr [0x12554ab0] */
  ECX = (r32((uint32_t)(0x12554ab0)));
  /* 1252b92c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252b92f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b932 mov dword ptr [0x12554ab0], edx */
  w32((uint32_t)(0x12554ab0), (EDX));
  /* 1252b938 jmp 0x1252b972 */
  goto L_1252b972;
L_1252b93a:;
  /* 1252b93a mov eax, dword ptr [0x12554ab4] */
  EAX = (r32((uint32_t)(0x12554ab4)));
  /* 1252b93f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252b942 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b945 mov dword ptr [0x12554ab4], ecx */
  w32((uint32_t)(0x12554ab4), (ECX));
  /* 1252b94b jmp 0x1252b972 */
  goto L_1252b972;
L_1252b94d:;
  /* 1252b94d mov edx, dword ptr [0x12554ab8] */
  EDX = (r32((uint32_t)(0x12554ab8)));
  /* 1252b953 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1252b956 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b959 mov dword ptr [0x12554ab8], eax */
  w32((uint32_t)(0x12554ab8), (EAX));
  /* 1252b95e jmp 0x1252b972 */
  goto L_1252b972;
L_1252b960:;
  /* 1252b960 mov ecx, dword ptr [0x12554abc] */
  ECX = (r32((uint32_t)(0x12554abc)));
  /* 1252b966 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252b969 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252b96c mov dword ptr [0x12554abc], edx */
  w32((uint32_t)(0x12554abc), (EDX));
L_1252b972:;
  /* 1252b972 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252b974 call 0x1252c140 */
  push32(0x1252b979u); f_1252c140();
  /* 1252b979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b97c jmp 0x1252ba53 */
  goto L_1252ba53;
L_1252b981:;
  /* 1252b981 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b985 je 0x1252b998 */
  if (C.zf) goto L_1252b998;
  /* 1252b987 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b98b je 0x1252b998 */
  if (C.zf) goto L_1252b998;
  /* 1252b98d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b991 je 0x1252b998 */
  if (C.zf) goto L_1252b998;
  /* 1252b993 jmp 0x1252ba58 */
  goto L_1252ba58;
L_1252b998:;
  /* 1252b998 call 0x125280e0 */
  push32(0x1252b99du); f_125280e0();
  /* 1252b99d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252b9a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b9a3 cmp dword ptr [eax + 0x50], 0x12552c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12552c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b9aa jne 0x1252b9f5 */
  if (!C.zf) goto L_1252b9f5;
  /* 1252b9ac push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1252b9b1 push 0x1255046c */
  push32((uint32_t)(0x1255046cu));
  /* 1252b9b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252b9b8 mov ecx, dword ptr [0x12552c80] */
  ECX = (r32((uint32_t)(0x12552c80)));
  /* 1252b9be push ecx */
  push32((uint32_t)(ECX));
  /* 1252b9bf call 0x125286a0 */
  push32(0x1252b9c4u); f_125286a0();
  /* 1252b9c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b9c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b9ca mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1252b9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b9d0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252b9d4 je 0x1252b9f3 */
  if (C.zf) goto L_1252b9f3;
  /* 1252b9d6 mov ecx, dword ptr [0x12552c80] */
  ECX = (r32((uint32_t)(0x12552c80)));
  /* 1252b9dc push ecx */
  push32((uint32_t)(ECX));
  /* 1252b9dd push 0x12552c00 */
  push32((uint32_t)(0x12552c00u));
  /* 1252b9e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b9e5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1252b9e8 push eax */
  push32((uint32_t)(EAX));
  /* 1252b9e9 call 0x1252ef80 */
  push32(0x1252b9eeu); f_1252ef80();
  /* 1252b9ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252b9f1 jmp 0x1252b9f5 */
  goto L_1252b9f5;
L_1252b9f3:;
  /* 1252b9f3 jmp 0x1252ba58 */
  goto L_1252ba58;
L_1252b9f5:;
  /* 1252b9f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252b9f8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1252b9fb push edx */
  push32((uint32_t)(EDX));
  /* 1252b9fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252b9ff push eax */
  push32((uint32_t)(EAX));
  /* 1252ba00 call 0x1252bd80 */
  push32(0x1252ba05u); f_1252bd80();
  /* 1252ba05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ba08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252ba0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ba0f jne 0x1252ba13 */
  if (!C.zf) goto L_1252ba13;
  /* 1252ba11 jmp 0x1252ba58 */
  goto L_1252ba58;
L_1252ba13:;
  /* 1252ba13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ba16 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1252ba19 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1252ba1c:;
  /* 1252ba1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ba1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252ba22 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ba25 jne 0x1252ba53 */
  if (!C.zf) goto L_1252ba53;
  /* 1252ba27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ba2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252ba2d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1252ba30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252ba33 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ba36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252ba39 mov edx, dword ptr [0x12552c84] */
  EDX = (r32((uint32_t)(0x12552c84)));
  /* 1252ba3f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252ba42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252ba45 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1252ba48 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252ba4a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252ba4d jb 0x1252ba51 */
  if (C.cf) goto L_1252ba51;
  /* 1252ba4f jmp 0x1252ba53 */
  goto L_1252ba53;
L_1252ba51:;
  /* 1252ba51 jmp 0x1252ba1c */
  goto L_1252ba1c;
L_1252ba53:;
  /* 1252ba53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252ba56 jmp 0x1252ba66 */
  goto L_1252ba66;
L_1252ba58:;
  /* 1252ba58 call 0x12530570 */
  push32(0x1252ba5du); f_12530570();
  /* 1252ba5d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1252ba63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1252ba66:;
  /* 1252ba66 pop esi */
  ESI = (pop32());
  /* 1252ba67 mov esp, ebp */
  ESP = (EBP);
  /* 1252ba69 pop ebp */
  EBP = (pop32());
  /* 1252ba6a ret  */
  ESPCHK(0x1252b870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x1252baa0 (146 bytes, 45 insns) */
void f_1252baa0(void) {
  FTRACE(0x1252baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252baa1 mov ebp, esp */
  EBP = (ESP);
  /* 1252baa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252baa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252baa8 call 0x1252c0a0 */
  push32(0x1252baadu); f_1252c0a0();
  /* 1252baad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bab0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bab4 jne 0x1252bace */
  if (!C.zf) goto L_1252bace;
  /* 1252bab6 mov dword ptr [ebp - 8], 0x12554ab0 */
  w32((uint32_t)(EBP + -0x8), (0x12554ab0u));
  /* 1252babd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252bac0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1252bac2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252bac5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1252bacc jmp 0x1252bae4 */
  goto L_1252bae4;
L_1252bace:;
  /* 1252bace mov dword ptr [ebp - 8], 0x12554ab4 */
  w32((uint32_t)(EBP + -0x8), (0x12554ab4u));
  /* 1252bad5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252bad8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252bada mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252badd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1252bae4:;
  /* 1252bae4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bae8 jne 0x1252baf8 */
  if (!C.zf) goto L_1252baf8;
  /* 1252baea push 1 */
  push32((uint32_t)(0x1u));
  /* 1252baec call 0x1252c140 */
  push32(0x1252baf1u); f_1252c140();
  /* 1252baf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252baf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252baf6 jmp 0x1252bb2c */
  goto L_1252bb2c;
L_1252baf8:;
  /* 1252baf8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bafc je 0x1252bb1d */
  if (C.zf) goto L_1252bb1d;
  /* 1252bafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252bb01 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1252bb07 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bb09 call 0x1252c140 */
  push32(0x1252bb0eu); f_1252c140();
  /* 1252bb0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bb11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bb14 push edx */
  push32((uint32_t)(EDX));
  /* 1252bb15 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1252bb18u);
  /* 1252bb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bb1b jmp 0x1252bb27 */
  goto L_1252bb27;
L_1252bb1d:;
  /* 1252bb1d push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bb1f call 0x1252c140 */
  push32(0x1252bb24u); f_1252c140();
  /* 1252bb24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bb27:;
  /* 1252bb27 mov eax, 1 */
  EAX = (0x1u);
L_1252bb2c:;
  /* 1252bb2c mov esp, ebp */
  ESP = (EBP);
  /* 1252bb2e pop ebp */
  EBP = (pop32());
  /* 1252bb2f ret 4 */
  ESPCHK(0x1252baa0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bb40 @ 0x1252bb40 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1252bb40(void) {
  FTRACE(0x1252bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1252bb41 mov ebp, esp */
  EBP = (ESP);
  /* 1252bb43 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252bb46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1252bb4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252bb50 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1252bb53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252bb56 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252bb59 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1252bb5c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bb60 ja 0x1252bc0e */
  if ((!C.cf&&!C.zf)) goto L_1252bc0e;
  /* 1252bb66 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1252bb69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252bb6b mov dl, byte ptr [eax + 0x1252bd62] */
  DL = (r8((uint32_t)(EAX + 0x1252bd62)));
  /* 1252bb71 jmp dword ptr [edx*4 + 0x1252bd4a] */
  switch (EDX) {
    case 0: goto L_1252bb78;
    case 1: goto L_1252bbe3;
    case 2: goto L_1252bbc9;
    case 3: goto L_1252bb95;
    case 4: goto L_1252bbaf;
    case 5: goto L_1252bc0e;
    default: x86_unimpl("switch@0x1252bb71 out of table"); return;
  }
L_1252bb78:;
  /* 1252bb78 mov dword ptr [ebp - 0x18], 0x12554ab0 */
  w32((uint32_t)(EBP + -0x18), (0x12554ab0u));
  /* 1252bb7f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bb82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252bb84 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252bb87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252bb8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bb8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252bb90 jmp 0x1252bc16 */
  goto L_1252bc16;
L_1252bb95:;
  /* 1252bb95 mov dword ptr [ebp - 0x18], 0x12554ab4 */
  w32((uint32_t)(EBP + -0x18), (0x12554ab4u));
  /* 1252bb9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bb9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252bba1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252bba4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252bba7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bbaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252bbad jmp 0x1252bc16 */
  goto L_1252bc16;
L_1252bbaf:;
  /* 1252bbaf mov dword ptr [ebp - 0x18], 0x12554ab8 */
  w32((uint32_t)(EBP + -0x18), (0x12554ab8u));
  /* 1252bbb6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bbb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252bbbb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252bbbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252bbc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bbc4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252bbc7 jmp 0x1252bc16 */
  goto L_1252bc16;
L_1252bbc9:;
  /* 1252bbc9 mov dword ptr [ebp - 0x18], 0x12554abc */
  w32((uint32_t)(EBP + -0x18), (0x12554abcu));
  /* 1252bbd0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bbd3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252bbd5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252bbd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252bbdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bbde mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1252bbe1 jmp 0x1252bc16 */
  goto L_1252bc16;
L_1252bbe3:;
  /* 1252bbe3 call 0x125280e0 */
  push32(0x1252bbe8u); f_125280e0();
  /* 1252bbe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252bbeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bbee mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1252bbf1 push edx */
  push32((uint32_t)(EDX));
  /* 1252bbf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252bbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1252bbf6 call 0x1252bd80 */
  push32(0x1252bbfbu); f_1252bd80();
  /* 1252bbfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bbfe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bc01 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1252bc04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bc07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252bc09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1252bc0c jmp 0x1252bc16 */
  goto L_1252bc16;
L_1252bc0e:;
  /* 1252bc0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252bc11 jmp 0x1252bd46 */
  goto L_1252bd46;
L_1252bc16:;
  /* 1252bc16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc1a je 0x1252bc26 */
  if (C.zf) goto L_1252bc26;
  /* 1252bc1c push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bc1e call 0x1252c0a0 */
  push32(0x1252bc23u); f_1252c0a0();
  /* 1252bc23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bc26:;
  /* 1252bc26 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc2a jne 0x1252bc43 */
  if (!C.zf) goto L_1252bc43;
  /* 1252bc2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc30 je 0x1252bc3c */
  if (C.zf) goto L_1252bc3c;
  /* 1252bc32 push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bc34 call 0x1252c140 */
  push32(0x1252bc39u); f_1252c140();
  /* 1252bc39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bc3c:;
  /* 1252bc3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252bc3e jmp 0x1252bd46 */
  goto L_1252bd46;
L_1252bc43:;
  /* 1252bc43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc47 jne 0x1252bc60 */
  if (!C.zf) goto L_1252bc60;
  /* 1252bc49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc4d je 0x1252bc59 */
  if (C.zf) goto L_1252bc59;
  /* 1252bc4f push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bc51 call 0x1252c140 */
  push32(0x1252bc56u); f_1252c140();
  /* 1252bc56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bc59:;
  /* 1252bc59 push 3 */
  push32((uint32_t)(0x3u));
  /* 1252bc5b call 0x12527e60 */
  push32(0x1252bc60u); f_12527e60();
L_1252bc60:;
  /* 1252bc60 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc64 je 0x1252bc72 */
  if (C.zf) goto L_1252bc72;
  /* 1252bc66 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc6a je 0x1252bc72 */
  if (C.zf) goto L_1252bc72;
  /* 1252bc6c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc70 jne 0x1252bc9e */
  if (!C.zf) goto L_1252bc9e;
L_1252bc72:;
  /* 1252bc72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bc75 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1252bc78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1252bc7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bc7e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1252bc85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bc89 jne 0x1252bc9e */
  if (!C.zf) goto L_1252bc9e;
  /* 1252bc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bc8e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1252bc91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1252bc94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bc97 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1252bc9e:;
  /* 1252bc9e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bca2 jne 0x1252bce0 */
  if (!C.zf) goto L_1252bce0;
  /* 1252bca4 mov eax, dword ptr [0x12552c78] */
  EAX = (r32((uint32_t)(0x12552c78)));
  /* 1252bca9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252bcac jmp 0x1252bcb7 */
  goto L_1252bcb7;
L_1252bcae:;
  /* 1252bcae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252bcb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bcb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1252bcb7:;
  /* 1252bcb7 mov edx, dword ptr [0x12552c78] */
  EDX = (r32((uint32_t)(0x12552c78)));
  /* 1252bcbd add edx, dword ptr [0x12552c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12552c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bcc3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bcc6 jge 0x1252bcde */
  if ((C.sf==C.of)) goto L_1252bcde;
  /* 1252bcc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252bccb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252bcce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bcd1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1252bcd4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1252bcdc jmp 0x1252bcae */
  goto L_1252bcae;
L_1252bcde:;
  /* 1252bcde jmp 0x1252bce9 */
  goto L_1252bce9;
L_1252bce0:;
  /* 1252bce0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252bce3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1252bce9:;
  /* 1252bce9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bced je 0x1252bcf9 */
  if (C.zf) goto L_1252bcf9;
  /* 1252bcef push 1 */
  push32((uint32_t)(0x1u));
  /* 1252bcf1 call 0x1252c140 */
  push32(0x1252bcf6u); f_1252c140();
  /* 1252bcf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bcf9:;
  /* 1252bcf9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bcfd jne 0x1252bd10 */
  if (!C.zf) goto L_1252bd10;
  /* 1252bcff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bd02 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1252bd05 push edx */
  push32((uint32_t)(EDX));
  /* 1252bd06 push 8 */
  push32((uint32_t)(0x8u));
  /* 1252bd08 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1252bd0bu);
  /* 1252bd0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bd0e jmp 0x1252bd1a */
  goto L_1252bd1a;
L_1252bd10:;
  /* 1252bd10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252bd13 push eax */
  push32((uint32_t)(EAX));
  /* 1252bd14 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1252bd17u);
  /* 1252bd17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252bd1a:;
  /* 1252bd1a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bd1e je 0x1252bd2c */
  if (C.zf) goto L_1252bd2c;
  /* 1252bd20 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bd24 je 0x1252bd2c */
  if (C.zf) goto L_1252bd2c;
  /* 1252bd26 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bd2a jne 0x1252bd44 */
  if (!C.zf) goto L_1252bd44;
L_1252bd2c:;
  /* 1252bd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bd2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252bd32 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1252bd35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bd39 jne 0x1252bd44 */
  if (!C.zf) goto L_1252bd44;
  /* 1252bd3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bd3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252bd41 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1252bd44:;
  /* 1252bd44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252bd46:;
  /* 1252bd46 mov esp, ebp */
  ESP = (EBP);
  /* 1252bd48 pop ebp */
  EBP = (pop32());
  /* 1252bd49 ret  */
  ESPCHK(0x1252bb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x1252bd80 (91 bytes, 35 insns) */
void f_1252bd80(void) {
  FTRACE(0x1252bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1252bd81 mov ebp, esp */
  EBP = (ESP);
  /* 1252bd83 push ecx */
  push32((uint32_t)(ECX));
  /* 1252bd84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252bd87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252bd8a:;
  /* 1252bd8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bd8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1252bd90 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bd93 je 0x1252bdb3 */
  if (C.zf) goto L_1252bdb3;
  /* 1252bd95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bd98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bd9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252bd9e mov ecx, dword ptr [0x12552c84] */
  ECX = (r32((uint32_t)(0x12552c84)));
  /* 1252bda4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252bda7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252bdaa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bdac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bdaf jae 0x1252bdb3 */
  if (!C.cf) goto L_1252bdb3;
  /* 1252bdb1 jmp 0x1252bd8a */
  goto L_1252bd8a;
L_1252bdb3:;
  /* 1252bdb3 mov eax, dword ptr [0x12552c84] */
  EAX = (r32((uint32_t)(0x12552c84)));
  /* 1252bdb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252bdbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252bdbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bdc0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bdc3 jae 0x1252bdd5 */
  if (!C.cf) goto L_1252bdd5;
  /* 1252bdc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bdc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1252bdcb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252bdce jne 0x1252bdd5 */
  if (!C.zf) goto L_1252bdd5;
  /* 1252bdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252bdd3 jmp 0x1252bdd7 */
  goto L_1252bdd7;
L_1252bdd5:;
  /* 1252bdd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252bdd7:;
  /* 1252bdd7 mov esp, ebp */
  ESP = (EBP);
  /* 1252bdd9 pop ebp */
  EBP = (pop32());
  /* 1252bdda ret  */
  ESPCHK(0x1252bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bde0 @ 0x1252bde0 (13 bytes, 6 insns) */
void f_1252bde0(void) {
  FTRACE(0x1252bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252bde1 mov ebp, esp */
  EBP = (ESP);
  /* 1252bde3 call 0x125280e0 */
  push32(0x1252bde8u); f_125280e0();
  /* 1252bde8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bdeb pop ebp */
  EBP = (pop32());
  /* 1252bdec ret  */
  ESPCHK(0x1252bde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdf0 @ 0x1252bdf0 (13 bytes, 6 insns) */
void f_1252bdf0(void) {
  FTRACE(0x1252bdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252bdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1252bdf3 call 0x125280e0 */
  push32(0x1252bdf8u); f_125280e0();
  /* 1252bdf8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bdfb pop ebp */
  EBP = (pop32());
  /* 1252bdfc ret  */
  ESPCHK(0x1252bdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x1252be00 (187 bytes, 54 insns) */
void f_1252be00(void) {
  FTRACE(0x1252be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252be00 push ebp */
  push32((uint32_t)(EBP));
  /* 1252be01 mov ebp, esp */
  EBP = (ESP);
  /* 1252be03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252be06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252be0d cmp dword ptr [0x12554ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be14 jne 0x1252be73 */
  if (!C.zf) goto L_1252be73;
  /* 1252be16 push 0x1254f898 */
  push32((uint32_t)(0x1254f898u));
  /* 1252be1b call dword ptr [0x125573a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a8))), 0x1252be21u);
  /* 1252be21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252be24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be28 je 0x1252be47 */
  if (C.zf) goto L_1252be47;
  /* 1252be2a push 0x1255049c */
  push32((uint32_t)(0x1255049cu));
  /* 1252be2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252be32 push eax */
  push32((uint32_t)(EAX));
  /* 1252be33 call dword ptr [0x125573a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a4))), 0x1252be39u);
  /* 1252be39 mov dword ptr [0x12554ac4], eax */
  w32((uint32_t)(0x12554ac4), (EAX));
  /* 1252be3e cmp dword ptr [0x12554ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be45 jne 0x1252be4b */
  if (!C.zf) goto L_1252be4b;
L_1252be47:;
  /* 1252be47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252be49 jmp 0x1252beb7 */
  goto L_1252beb7;
L_1252be4b:;
  /* 1252be4b push 0x1255048c */
  push32((uint32_t)(0x1255048cu));
  /* 1252be50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252be53 push ecx */
  push32((uint32_t)(ECX));
  /* 1252be54 call dword ptr [0x125573a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a4))), 0x1252be5au);
  /* 1252be5a mov dword ptr [0x12554ac8], eax */
  w32((uint32_t)(0x12554ac8), (EAX));
  /* 1252be5f push 0x12550478 */
  push32((uint32_t)(0x12550478u));
  /* 1252be64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252be67 push edx */
  push32((uint32_t)(EDX));
  /* 1252be68 call dword ptr [0x125573a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573a4))), 0x1252be6eu);
  /* 1252be6e mov dword ptr [0x12554acc], eax */
  w32((uint32_t)(0x12554acc), (EAX));
L_1252be73:;
  /* 1252be73 cmp dword ptr [0x12554ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be7a je 0x1252be85 */
  if (C.zf) goto L_1252be85;
  /* 1252be7c call dword ptr [0x12554ac8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554ac8))), 0x1252be82u);
  /* 1252be82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252be85:;
  /* 1252be85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be89 je 0x1252bea1 */
  if (C.zf) goto L_1252bea1;
  /* 1252be8b cmp dword ptr [0x12554acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12554acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252be92 je 0x1252bea1 */
  if (C.zf) goto L_1252bea1;
  /* 1252be94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252be97 push eax */
  push32((uint32_t)(EAX));
  /* 1252be98 call dword ptr [0x12554acc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554acc))), 0x1252be9eu);
  /* 1252be9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252bea1:;
  /* 1252bea1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1252bea4 push ecx */
  push32((uint32_t)(ECX));
  /* 1252bea5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252bea8 push edx */
  push32((uint32_t)(EDX));
  /* 1252bea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252beac push eax */
  push32((uint32_t)(EAX));
  /* 1252bead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252beb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1252beb1 call dword ptr [0x12554ac4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12554ac4))), 0x1252beb7u);
L_1252beb7:;
  /* 1252beb7 mov esp, ebp */
  ESP = (EBP);
  /* 1252beb9 pop ebp */
  EBP = (pop32());
  /* 1252beba ret  */
  ESPCHK(0x1252be00u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1252bec0 (254 bytes, 109 insns) */
void f_1252bec0(void) {
  FTRACE(0x1252bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bec0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252bec4 push edi */
  push32((uint32_t)(EDI));
  /* 1252bec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1252bec7 je 0x1252bf43 */
  if (C.zf) goto L_1252bf43;
  /* 1252bec9 push esi */
  push32((uint32_t)(ESI));
  /* 1252beca push ebx */
  push32((uint32_t)(EBX));
  /* 1252becb mov ebx, ecx */
  EBX = (ECX);
  /* 1252becd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1252bed1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1252bed7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1252bedb jne 0x1252bee4 */
  if (!C.zf) goto L_1252bee4;
  /* 1252bedd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252bee0 jne 0x1252bf51 */
  if (!C.zf) goto L_1252bf51;
  /* 1252bee2 jmp 0x1252bf05 */
  goto L_1252bf05;
L_1252bee4:;
  /* 1252bee4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252bee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1252bee7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252bee9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252beea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252beeb je 0x1252bf12 */
  if (C.zf) goto L_1252bf12;
  /* 1252beed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252beef je 0x1252bf1a */
  if (C.zf) goto L_1252bf1a;
  /* 1252bef1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1252bef7 jne 0x1252bee4 */
  if (!C.zf) goto L_1252bee4;
  /* 1252bef9 mov ebx, ecx */
  EBX = (ECX);
  /* 1252befb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252befe jne 0x1252bf51 */
  if (!C.zf) goto L_1252bf51;
L_1252bf00:;
  /* 1252bf00 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1252bf03 je 0x1252bf12 */
  if (C.zf) goto L_1252bf12;
L_1252bf05:;
  /* 1252bf05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1252bf07 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1252bf08 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252bf0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252bf0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1252bf0d je 0x1252bf3e */
  if (C.zf) goto L_1252bf3e;
  /* 1252bf0f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1252bf10 jne 0x1252bf05 */
  if (!C.zf) goto L_1252bf05;
L_1252bf12:;
  /* 1252bf12 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252bf16 pop ebx */
  EBX = (pop32());
  /* 1252bf17 pop esi */
  ESI = (pop32());
  /* 1252bf18 pop edi */
  EDI = (pop32());
  /* 1252bf19 ret  */
  ESPCHK(0x1252bec0u, _esp0);
  ESP += 4; return;
L_1252bf1a:;
  /* 1252bf1a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1252bf20 je 0x1252bf34 */
  if (C.zf) goto L_1252bf34;
L_1252bf22:;
  /* 1252bf22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252bf24 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252bf25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252bf26 je 0x1252bfb6 */
  if (C.zf) goto L_1252bfb6;
  /* 1252bf2c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1252bf32 jne 0x1252bf22 */
  if (!C.zf) goto L_1252bf22;
L_1252bf34:;
  /* 1252bf34 mov ebx, ecx */
  EBX = (ECX);
  /* 1252bf36 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252bf39 jne 0x1252bfa7 */
  if (!C.zf) goto L_1252bfa7;
L_1252bf3b:;
  /* 1252bf3b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252bf3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1252bf3e:;
  /* 1252bf3e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1252bf3f jne 0x1252bf3b */
  if (!C.zf) goto L_1252bf3b;
  /* 1252bf41 pop ebx */
  EBX = (pop32());
  /* 1252bf42 pop esi */
  ESI = (pop32());
L_1252bf43:;
  /* 1252bf43 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252bf47 pop edi */
  EDI = (pop32());
  /* 1252bf48 ret  */
  ESPCHK(0x1252bec0u, _esp0);
  ESP += 4; return;
L_1252bf49:;
  /* 1252bf49 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252bf4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bf4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252bf4f je 0x1252bf00 */
  if (C.zf) goto L_1252bf00;
L_1252bf51:;
  /* 1252bf51 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1252bf56 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1252bf58 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bf5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252bf5d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1252bf5f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1252bf61 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bf64 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1252bf69 je 0x1252bf49 */
  if (C.zf) goto L_1252bf49;
  /* 1252bf6b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1252bf6d je 0x1252bf9b */
  if (C.zf) goto L_1252bf9b;
  /* 1252bf6f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1252bf71 je 0x1252bf91 */
  if (C.zf) goto L_1252bf91;
  /* 1252bf73 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1252bf79 je 0x1252bf87 */
  if (C.zf) goto L_1252bf87;
  /* 1252bf7b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1252bf81 jne 0x1252bf49 */
  if (!C.zf) goto L_1252bf49;
  /* 1252bf83 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252bf85 jmp 0x1252bf9f */
  goto L_1252bf9f;
L_1252bf87:;
  /* 1252bf87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252bf8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252bf8f jmp 0x1252bf9f */
  goto L_1252bf9f;
L_1252bf91:;
  /* 1252bf91 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1252bf97 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1252bf99 jmp 0x1252bf9f */
  goto L_1252bf9f;
L_1252bf9b:;
  /* 1252bf9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1252bf9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1252bf9f:;
  /* 1252bf9f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252bfa4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252bfa5 je 0x1252bfb1 */
  if (C.zf) goto L_1252bfb1;
L_1252bfa7:;
  /* 1252bfa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1252bfa9:;
  /* 1252bfa9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1252bfab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1252bfae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252bfaf jne 0x1252bfa9 */
  if (!C.zf) goto L_1252bfa9;
L_1252bfb1:;
  /* 1252bfb1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1252bfb4 jne 0x1252bf3b */
  if (!C.zf) goto L_1252bf3b;
L_1252bfb6:;
  /* 1252bfb6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1252bfba pop ebx */
  EBX = (pop32());
  /* 1252bfbb pop esi */
  ESI = (pop32());
  /* 1252bfbc pop edi */
  EDI = (pop32());
  /* 1252bfbd ret  */
  ESPCHK(0x1252bec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x1252bfc0 (55 bytes, 16 insns) */
void f_1252bfc0(void) {
  FTRACE(0x1252bfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252bfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252bfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1252bfc3 mov eax, dword ptr [0x12552b84] */
  EAX = (r32((uint32_t)(0x12552b84)));
  /* 1252bfc8 push eax */
  push32((uint32_t)(EAX));
  /* 1252bfc9 call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x1252bfcfu);
  /* 1252bfcf mov ecx, dword ptr [0x12552b74] */
  ECX = (r32((uint32_t)(0x12552b74)));
  /* 1252bfd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1252bfd6 call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x1252bfdcu);
  /* 1252bfdc mov edx, dword ptr [0x12552b64] */
  EDX = (r32((uint32_t)(0x12552b64)));
  /* 1252bfe2 push edx */
  push32((uint32_t)(EDX));
  /* 1252bfe3 call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x1252bfe9u);
  /* 1252bfe9 mov eax, dword ptr [0x12552b44] */
  EAX = (r32((uint32_t)(0x12552b44)));
  /* 1252bfee push eax */
  push32((uint32_t)(EAX));
  /* 1252bfef call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x1252bff5u);
  /* 1252bff5 pop ebp */
  EBP = (pop32());
  /* 1252bff6 ret  */
  ESPCHK(0x1252bfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c000 @ 0x1252c000 (159 bytes, 47 insns) */
void f_1252c000(void) {
  FTRACE(0x1252c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c000 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c001 mov ebp, esp */
  EBP = (ESP);
  /* 1252c003 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252c00b jmp 0x1252c016 */
  goto L_1252c016;
L_1252c00d:;
  /* 1252c00d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252c016:;
  /* 1252c016 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c01a jge 0x1252c069 */
  if ((C.sf==C.of)) goto L_1252c069;
  /* 1252c01c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c01f cmp dword ptr [ecx*4 + 0x12552b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12552b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c027 je 0x1252c067 */
  if (C.zf) goto L_1252c067;
  /* 1252c029 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c02d je 0x1252c067 */
  if (C.zf) goto L_1252c067;
  /* 1252c02f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c033 je 0x1252c067 */
  if (C.zf) goto L_1252c067;
  /* 1252c035 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c039 je 0x1252c067 */
  if (C.zf) goto L_1252c067;
  /* 1252c03b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c03f je 0x1252c067 */
  if (C.zf) goto L_1252c067;
  /* 1252c041 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c044 mov eax, dword ptr [edx*4 + 0x12552b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12552b40)));
  /* 1252c04b push eax */
  push32((uint32_t)(EAX));
  /* 1252c04c call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252c052u);
  /* 1252c052 push 2 */
  push32((uint32_t)(0x2u));
  /* 1252c054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c057 mov edx, dword ptr [ecx*4 + 0x12552b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12552b40)));
  /* 1252c05e push edx */
  push32((uint32_t)(EDX));
  /* 1252c05f call 0x12529130 */
  push32(0x1252c064u); f_12529130();
  /* 1252c064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c067:;
  /* 1252c067 jmp 0x1252c00d */
  goto L_1252c00d;
L_1252c069:;
  /* 1252c069 mov eax, dword ptr [0x12552b64] */
  EAX = (r32((uint32_t)(0x12552b64)));
  /* 1252c06e push eax */
  push32((uint32_t)(EAX));
  /* 1252c06f call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252c075u);
  /* 1252c075 mov ecx, dword ptr [0x12552b74] */
  ECX = (r32((uint32_t)(0x12552b74)));
  /* 1252c07b push ecx */
  push32((uint32_t)(ECX));
  /* 1252c07c call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252c082u);
  /* 1252c082 mov edx, dword ptr [0x12552b84] */
  EDX = (r32((uint32_t)(0x12552b84)));
  /* 1252c088 push edx */
  push32((uint32_t)(EDX));
  /* 1252c089 call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252c08fu);
  /* 1252c08f mov eax, dword ptr [0x12552b44] */
  EAX = (r32((uint32_t)(0x12552b44)));
  /* 1252c094 push eax */
  push32((uint32_t)(EAX));
  /* 1252c095 call dword ptr [0x125573b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b8))), 0x1252c09bu);
  /* 1252c09b mov esp, ebp */
  ESP = (EBP);
  /* 1252c09d pop ebp */
  EBP = (pop32());
  /* 1252c09e ret  */
  ESPCHK(0x1252c000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x1252c0a0 (151 bytes, 46 insns) */
void f_1252c0a0(void) {
  FTRACE(0x1252c0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c0a7 cmp dword ptr [eax*4 + 0x12552b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12552b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c0af jne 0x1252c122 */
  if (!C.zf) goto L_1252c122;
  /* 1252c0b1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1252c0b6 push 0x125504a8 */
  push32((uint32_t)(0x125504a8u));
  /* 1252c0bb push 2 */
  push32((uint32_t)(0x2u));
  /* 1252c0bd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1252c0bf call 0x125286a0 */
  push32(0x1252c0c4u); f_125286a0();
  /* 1252c0c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c0c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c0ca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c0ce jne 0x1252c0da */
  if (!C.zf) goto L_1252c0da;
  /* 1252c0d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1252c0d2 call 0x12527610 */
  push32(0x1252c0d7u); f_12527610();
  /* 1252c0d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c0da:;
  /* 1252c0da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1252c0dc call 0x1252c0a0 */
  push32(0x1252c0e1u); f_1252c0a0();
  /* 1252c0e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c0e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c0e7 cmp dword ptr [ecx*4 + 0x12552b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12552b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c0ef jne 0x1252c10a */
  if (!C.zf) goto L_1252c10a;
  /* 1252c0f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c0f4 push edx */
  push32((uint32_t)(EDX));
  /* 1252c0f5 call dword ptr [0x1255735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255735c))), 0x1252c0fbu);
  /* 1252c0fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c0fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c101 mov dword ptr [eax*4 + 0x12552b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12552b40), (ECX));
  /* 1252c108 jmp 0x1252c118 */
  goto L_1252c118;
L_1252c10a:;
  /* 1252c10a push 2 */
  push32((uint32_t)(0x2u));
  /* 1252c10c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c10f push edx */
  push32((uint32_t)(EDX));
  /* 1252c110 call 0x12529130 */
  push32(0x1252c115u); f_12529130();
  /* 1252c115 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c118:;
  /* 1252c118 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1252c11a call 0x1252c140 */
  push32(0x1252c11fu); f_1252c140();
  /* 1252c11f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c122:;
  /* 1252c122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c125 mov ecx, dword ptr [eax*4 + 0x12552b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12552b40)));
  /* 1252c12c push ecx */
  push32((uint32_t)(ECX));
  /* 1252c12d call dword ptr [0x1255734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255734c))), 0x1252c133u);
  /* 1252c133 mov esp, ebp */
  ESP = (EBP);
  /* 1252c135 pop ebp */
  EBP = (pop32());
  /* 1252c136 ret  */
  ESPCHK(0x1252c0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c140 @ 0x1252c140 (22 bytes, 8 insns) */
void f_1252c140(void) {
  FTRACE(0x1252c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c140 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c141 mov ebp, esp */
  EBP = (ESP);
  /* 1252c143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c146 mov ecx, dword ptr [eax*4 + 0x12552b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12552b40)));
  /* 1252c14d push ecx */
  push32((uint32_t)(ECX));
  /* 1252c14e call dword ptr [0x12557348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557348))), 0x1252c154u);
  /* 1252c154 pop ebp */
  EBP = (pop32());
  /* 1252c155 ret  */
  ESPCHK(0x1252c140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x1252c160 (26 bytes, 10 insns) */
void f_1252c160(void) {
  FTRACE(0x1252c160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c160 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c161 mov ebp, esp */
  EBP = (ESP);
  /* 1252c163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c166 push eax */
  push32((uint32_t)(EAX));
  /* 1252c167 push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c169 call dword ptr [0x12557350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557350))), 0x1252c16fu);
  /* 1252c16f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1252c174 call dword ptr [0x125573b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125573b4))), 0x1252c17au);
  /* 1252c17a pop ebp */
  EBP = (pop32());
  /* 1252c17b ret  */
  ESPCHK(0x1252c160u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1252c180 (446 bytes, 130 insns) */
void f_1252c180(void) {
  FTRACE(0x1252c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c181 mov ebp, esp */
  EBP = (ESP);
  /* 1252c183 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c186 call 0x125280e0 */
  push32(0x1252c18bu); f_125280e0();
  /* 1252c18b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252c18e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c191 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1252c194 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c198 push edx */
  push32((uint32_t)(EDX));
  /* 1252c199 call 0x1252c340 */
  push32(0x1252c19eu); f_1252c340();
  /* 1252c19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c1a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1252c1a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c1a8 je 0x1252c1b3 */
  if (C.zf) goto L_1252c1b3;
  /* 1252c1aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c1ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c1b1 jne 0x1252c1c2 */
  if (!C.zf) goto L_1252c1c2;
L_1252c1b3:;
  /* 1252c1b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c1b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c1b7 call dword ptr [0x12557340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557340))), 0x1252c1bdu);
  /* 1252c1bd jmp 0x1252c33a */
  goto L_1252c33a;
L_1252c1c2:;
  /* 1252c1c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c1c5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c1c9 jne 0x1252c1df */
  if (!C.zf) goto L_1252c1df;
  /* 1252c1cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c1ce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1252c1d5 mov eax, 1 */
  EAX = (0x1u);
  /* 1252c1da jmp 0x1252c33a */
  goto L_1252c33a;
L_1252c1df:;
  /* 1252c1df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c1e2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c1e6 jne 0x1252c1f0 */
  if (!C.zf) goto L_1252c1f0;
  /* 1252c1e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1252c1eb jmp 0x1252c33a */
  goto L_1252c33a;
L_1252c1f0:;
  /* 1252c1f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c1f3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1252c1f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c1f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c1fc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1252c1ff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1252c202 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c205 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c208 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1252c20b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c20e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c212 jne 0x1252c317 */
  if (!C.zf) goto L_1252c317;
  /* 1252c218 mov eax, dword ptr [0x12552c78] */
  EAX = (r32((uint32_t)(0x12552c78)));
  /* 1252c21d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1252c220 jmp 0x1252c22b */
  goto L_1252c22b;
L_1252c222:;
  /* 1252c222 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252c225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c228 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1252c22b:;
  /* 1252c22b mov edx, dword ptr [0x12552c78] */
  EDX = (r32((uint32_t)(0x12552c78)));
  /* 1252c231 add edx, dword ptr [0x12552c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12552c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c237 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c23a jge 0x1252c252 */
  if ((C.sf==C.of)) goto L_1252c252;
  /* 1252c23c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1252c23f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252c242 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c245 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1252c248 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1252c250 jmp 0x1252c222 */
  goto L_1252c222;
L_1252c252:;
  /* 1252c252 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c255 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1252c258 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1252c25b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c25e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c264 jne 0x1252c275 */
  if (!C.zf) goto L_1252c275;
  /* 1252c266 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c269 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1252c270 jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c275:;
  /* 1252c275 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c278 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c27e jne 0x1252c28c */
  if (!C.zf) goto L_1252c28c;
  /* 1252c280 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c283 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1252c28a jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c28c:;
  /* 1252c28c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c28f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c295 jne 0x1252c2a3 */
  if (!C.zf) goto L_1252c2a3;
  /* 1252c297 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c29a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1252c2a1 jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c2a3:;
  /* 1252c2a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c2a6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c2ac jne 0x1252c2ba */
  if (!C.zf) goto L_1252c2ba;
  /* 1252c2ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c2b1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1252c2b8 jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c2ba:;
  /* 1252c2ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c2bd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c2c3 jne 0x1252c2d1 */
  if (!C.zf) goto L_1252c2d1;
  /* 1252c2c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c2c8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1252c2cf jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c2d1:;
  /* 1252c2d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c2d4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c2da jne 0x1252c2e8 */
  if (!C.zf) goto L_1252c2e8;
  /* 1252c2dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c2df mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1252c2e6 jmp 0x1252c2fd */
  goto L_1252c2fd;
L_1252c2e8:;
  /* 1252c2e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c2eb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c2f1 jne 0x1252c2fd */
  if (!C.zf) goto L_1252c2fd;
  /* 1252c2f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c2f6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1252c2fd:;
  /* 1252c2fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c300 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1252c303 push edx */
  push32((uint32_t)(EDX));
  /* 1252c304 push 8 */
  push32((uint32_t)(0x8u));
  /* 1252c306 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1252c309u);
  /* 1252c309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c30c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c30f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1252c312 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1252c315 jmp 0x1252c32e */
  goto L_1252c32e;
L_1252c317:;
  /* 1252c317 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c31a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1252c321 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1252c324 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1252c327 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c328 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1252c32bu);
  /* 1252c32b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1252c32e:;
  /* 1252c32e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c331 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1252c334 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1252c337 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1252c33a:;
  /* 1252c33a mov esp, ebp */
  ESP = (EBP);
  /* 1252c33c pop ebp */
  EBP = (pop32());
  /* 1252c33d ret  */
  ESPCHK(0x1252c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x1252c340 (89 bytes, 35 insns) */
void f_1252c340(void) {
  FTRACE(0x1252c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c340 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c341 mov ebp, esp */
  EBP = (ESP);
  /* 1252c343 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c347 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1252c34a:;
  /* 1252c34a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c34d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1252c34f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c352 je 0x1252c372 */
  if (C.zf) goto L_1252c372;
  /* 1252c354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c357 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c35a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c35d mov ecx, dword ptr [0x12552c84] */
  ECX = (r32((uint32_t)(0x12552c84)));
  /* 1252c363 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252c366 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c369 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c36b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c36e jae 0x1252c372 */
  if (!C.cf) goto L_1252c372;
  /* 1252c370 jmp 0x1252c34a */
  goto L_1252c34a;
L_1252c372:;
  /* 1252c372 mov eax, dword ptr [0x12552c84] */
  EAX = (r32((uint32_t)(0x12552c84)));
  /* 1252c377 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1252c37a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c37d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c37f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c382 jae 0x1252c38e */
  if (!C.cf) goto L_1252c38e;
  /* 1252c384 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c387 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1252c389 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c38c je 0x1252c392 */
  if (C.zf) goto L_1252c392;
L_1252c38e:;
  /* 1252c38e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c390 jmp 0x1252c395 */
  goto L_1252c395;
L_1252c392:;
  /* 1252c392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1252c395:;
  /* 1252c395 mov esp, ebp */
  ESP = (EBP);
  /* 1252c397 pop ebp */
  EBP = (pop32());
  /* 1252c398 ret  */
  ESPCHK(0x1252c340u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1252c3a0 (48 bytes, 17 insns) */
void f_1252c3a0(void) {
  FTRACE(0x1252c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c3a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c3a6 call 0x1252c0a0 */
  push32(0x1252c3abu); f_1252c0a0();
  /* 1252c3ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c3ae mov eax, dword ptr [0x12554b34] */
  EAX = (r32((uint32_t)(0x12554b34)));
  /* 1252c3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c3b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c3b9 mov dword ptr [0x12554b34], ecx */
  w32((uint32_t)(0x12554b34), (ECX));
  /* 1252c3bf push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c3c1 call 0x1252c140 */
  push32(0x1252c3c6u); f_1252c140();
  /* 1252c3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c3cc mov esp, ebp */
  ESP = (EBP);
  /* 1252c3ce pop ebp */
  EBP = (pop32());
  /* 1252c3cf ret  */
  ESPCHK(0x1252c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1252c3d0 (10 bytes, 5 insns) */
void f_1252c3d0(void) {
  FTRACE(0x1252c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c3d3 mov eax, dword ptr [0x12554b34] */
  EAX = (r32((uint32_t)(0x12554b34)));
  /* 1252c3d8 pop ebp */
  EBP = (pop32());
  /* 1252c3d9 ret  */
  ESPCHK(0x1252c3d0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1252c3e0 (45 bytes, 19 insns) */
void f_1252c3e0(void) {
  FTRACE(0x1252c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c3e4 mov eax, dword ptr [0x12554b34] */
  EAX = (r32((uint32_t)(0x12554b34)));
  /* 1252c3e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c3ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c3f0 je 0x1252c400 */
  if (C.zf) goto L_1252c400;
  /* 1252c3f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c3f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1252c3f9u);
  /* 1252c3f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c3fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c3fe jne 0x1252c404 */
  if (!C.zf) goto L_1252c404;
L_1252c400:;
  /* 1252c400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c402 jmp 0x1252c409 */
  goto L_1252c409;
L_1252c404:;
  /* 1252c404 mov eax, 1 */
  EAX = (0x1u);
L_1252c409:;
  /* 1252c409 mov esp, ebp */
  ESP = (EBP);
  /* 1252c40b pop ebp */
  EBP = (pop32());
  /* 1252c40c ret  */
  ESPCHK(0x1252c3e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1252c410 (88 bytes, 40 insns) */
void f_1252c410(void) {
  FTRACE(0x1252c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c410 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1252c414 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252c418 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252c41a je 0x1252c463 */
  if (C.zf) goto L_1252c463;
  /* 1252c41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c41e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1252c422 push edi */
  push32((uint32_t)(EDI));
  /* 1252c423 mov edi, ecx */
  EDI = (ECX);
  /* 1252c425 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c428 jb 0x1252c457 */
  if (C.cf) goto L_1252c457;
  /* 1252c42a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1252c42c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1252c42f je 0x1252c439 */
  if (C.zf) goto L_1252c439;
  /* 1252c431 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1252c433:;
  /* 1252c433 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252c435 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252c436 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1252c437 jne 0x1252c433 */
  if (!C.zf) goto L_1252c433;
L_1252c439:;
  /* 1252c439 mov ecx, eax */
  ECX = (EAX);
  /* 1252c43b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1252c43e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c440 mov ecx, eax */
  ECX = (EAX);
  /* 1252c442 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1252c445 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c447 mov ecx, edx */
  ECX = (EDX);
  /* 1252c449 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1252c44c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1252c44f je 0x1252c457 */
  if (C.zf) goto L_1252c457;
  /* 1252c451 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1252c453 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1252c455 je 0x1252c45d */
  if (C.zf) goto L_1252c45d;
L_1252c457:;
  /* 1252c457 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1252c459 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1252c45a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1252c45b jne 0x1252c457 */
  if (!C.zf) goto L_1252c457;
L_1252c45d:;
  /* 1252c45d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1252c461 pop edi */
  EDI = (pop32());
  /* 1252c462 ret  */
  ESPCHK(0x1252c410u, _esp0);
  ESP += 4; return;
L_1252c463:;
  /* 1252c463 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1252c467 ret  */
  ESPCHK(0x1252c410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x1252c470 (23 bytes, 10 insns) */
void f_1252c470(void) {
  FTRACE(0x1252c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c470 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c471 mov ebp, esp */
  EBP = (ESP);
  /* 1252c473 mov eax, dword ptr [0x12554b30] */
  EAX = (r32((uint32_t)(0x12554b30)));
  /* 1252c478 push eax */
  push32((uint32_t)(EAX));
  /* 1252c479 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c47c push ecx */
  push32((uint32_t)(ECX));
  /* 1252c47d call 0x1252c490 */
  push32(0x1252c482u); f_1252c490();
  /* 1252c482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c485 pop ebp */
  EBP = (pop32());
  /* 1252c486 ret  */
  ESPCHK(0x1252c470u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1252c490 (87 bytes, 34 insns) */
void f_1252c490(void) {
  FTRACE(0x1252c490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c490 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c491 mov ebp, esp */
  EBP = (ESP);
  /* 1252c493 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c494 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c498 jbe 0x1252c49e */
  if ((C.cf||C.zf)) goto L_1252c49e;
  /* 1252c49a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c49c jmp 0x1252c4e3 */
  goto L_1252c4e3;
L_1252c49e:;
  /* 1252c49e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c4a2 ja 0x1252c4b5 */
  if ((!C.cf&&!C.zf)) goto L_1252c4b5;
  /* 1252c4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c4a7 push eax */
  push32((uint32_t)(EAX));
  /* 1252c4a8 call 0x1252c4f0 */
  push32(0x1252c4adu); f_1252c4f0();
  /* 1252c4ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c4b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c4b3 jmp 0x1252c4bc */
  goto L_1252c4bc;
L_1252c4b5:;
  /* 1252c4b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1252c4bc:;
  /* 1252c4bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c4c0 jne 0x1252c4c8 */
  if (!C.zf) goto L_1252c4c8;
  /* 1252c4c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c4c6 jne 0x1252c4cd */
  if (!C.zf) goto L_1252c4cd;
L_1252c4c8:;
  /* 1252c4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c4cb jmp 0x1252c4e3 */
  goto L_1252c4e3;
L_1252c4cd:;
  /* 1252c4cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c4d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c4d1 call 0x1252c3e0 */
  push32(0x1252c4d6u); f_1252c3e0();
  /* 1252c4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c4d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c4db jne 0x1252c4e1 */
  if (!C.zf) goto L_1252c4e1;
  /* 1252c4dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c4df jmp 0x1252c4e3 */
  goto L_1252c4e3;
L_1252c4e1:;
  /* 1252c4e1 jmp 0x1252c49e */
  goto L_1252c49e;
L_1252c4e3:;
  /* 1252c4e3 mov esp, ebp */
  ESP = (EBP);
  /* 1252c4e5 pop ebp */
  EBP = (pop32());
  /* 1252c4e6 ret  */
  ESPCHK(0x1252c490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4f0 @ 0x1252c4f0 (109 bytes, 37 insns) */
void f_1252c4f0(void) {
  FTRACE(0x1252c4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1252c4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c4f7 cmp eax, dword ptr [0x12552c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12552c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c4fd ja 0x1252c52d */
  if ((!C.cf&&!C.zf)) goto L_1252c52d;
  /* 1252c4ff push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c501 call 0x1252c0a0 */
  push32(0x1252c506u); f_1252c0a0();
  /* 1252c506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c50c push ecx */
  push32((uint32_t)(ECX));
  /* 1252c50d call 0x1252d030 */
  push32(0x1252c512u); f_1252d030();
  /* 1252c512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1252c518 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c51a call 0x1252c140 */
  push32(0x1252c51fu); f_1252c140();
  /* 1252c51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c522 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c526 je 0x1252c52d */
  if (C.zf) goto L_1252c52d;
  /* 1252c528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c52b jmp 0x1252c559 */
  goto L_1252c559;
L_1252c52d:;
  /* 1252c52d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c531 jne 0x1252c53a */
  if (!C.zf) goto L_1252c53a;
  /* 1252c533 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1252c53a:;
  /* 1252c53a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c53d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c540 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1252c543 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1252c546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c549 push eax */
  push32((uint32_t)(EAX));
  /* 1252c54a push 0 */
  push32((uint32_t)(0x0u));
  /* 1252c54c mov ecx, dword ptr [0x125562ec] */
  ECX = (r32((uint32_t)(0x125562ec)));
  /* 1252c552 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c553 call dword ptr [0x1255733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1255733c))), 0x1252c559u);
L_1252c559:;
  /* 1252c559 mov esp, ebp */
  ESP = (EBP);
  /* 1252c55b pop ebp */
  EBP = (pop32());
  /* 1252c55c ret  */
  ESPCHK(0x1252c4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c560 @ 0x1252c560 (10 bytes, 5 insns) */
void f_1252c560(void) {
  FTRACE(0x1252c560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c560 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c561 mov ebp, esp */
  EBP = (ESP);
  /* 1252c563 mov eax, 1 */
  EAX = (0x1u);
  /* 1252c568 pop ebp */
  EBP = (pop32());
  /* 1252c569 ret  */
  ESPCHK(0x1252c560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c570 @ 0x1252c570 (173 bytes, 59 insns) */
void f_1252c570(void) {
  FTRACE(0x1252c570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1252c570 push ebp */
  push32((uint32_t)(EBP));
  /* 1252c571 mov ebp, esp */
  EBP = (ESP);
  /* 1252c573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1252c576 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c57a jbe 0x1252c583 */
  if ((C.cf||C.zf)) goto L_1252c583;
  /* 1252c57c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1252c57e jmp 0x1252c619 */
  goto L_1252c619;
L_1252c583:;
  /* 1252c583 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c585 call 0x1252c0a0 */
  push32(0x1252c58au); f_1252c0a0();
  /* 1252c58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c58d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c590 push eax */
  push32((uint32_t)(EAX));
  /* 1252c591 call 0x1252c9a0 */
  push32(0x1252c596u); f_1252c9a0();
  /* 1252c596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c599 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1252c59c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c5a0 je 0x1252c5e1 */
  if (C.zf) goto L_1252c5e1;
  /* 1252c5a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1252c5a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c5ac cmp ecx, dword ptr [0x12552c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12552c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c5b2 ja 0x1252c5d2 */
  if ((!C.cf&&!C.zf)) goto L_1252c5d2;
  /* 1252c5b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c5b7 push edx */
  push32((uint32_t)(EDX));
  /* 1252c5b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c5bb push eax */
  push32((uint32_t)(EAX));
  /* 1252c5bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1252c5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1252c5c0 call 0x1252d870 */
  push32(0x1252c5c5u); f_1252d870();
  /* 1252c5c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c5c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1252c5ca je 0x1252c5d2 */
  if (C.zf) goto L_1252c5d2;
  /* 1252c5cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c5cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1252c5d2:;
  /* 1252c5d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c5d4 call 0x1252c140 */
  push32(0x1252c5d9u); f_1252c140();
  /* 1252c5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c5dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1252c5df jmp 0x1252c619 */
  goto L_1252c619;
L_1252c5e1:;
  /* 1252c5e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1252c5e3 call 0x1252c140 */
  push32(0x1252c5e8u); f_1252c140();
  /* 1252c5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c5eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1252c5ef jne 0x1252c5f8 */
  if (!C.zf) goto L_1252c5f8;
  /* 1252c5f1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1252c5f8:;
  /* 1252c5f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c5fb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1252c5fe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1252c600 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1252c603 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1252c606 push ecx */
  push32((uint32_t)(ECX));
  /* 1252c607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1252c60a push edx */
  push32((uint32_t)(EDX));
  /* 1252c60b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1252c60d mov eax, dword ptr [0x125562ec] */
  EAX = (r32((uint32_t)(0x125562ec)));
  /* 1252c612 push eax */
  push32((uint32_t)(EAX));
  /* 1252c613 call dword ptr [0x12557344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12557344))), 0x1252c619u);
L_1252c619:;
  /* 1252c619 mov esp, ebp */
  ESP = (EBP);
  /* 1252c61b pop ebp */
  EBP = (pop32());
  /* 1252c61c ret  */
  ESPCHK(0x1252c570u, _esp0);
  ESP += 4; return;
}

