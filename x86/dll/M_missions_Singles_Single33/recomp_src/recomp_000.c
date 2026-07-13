#include "recomp.h"

/* OnInit @ 0x11521005 (5 bytes, 1 insns) */
void f_11521005(void) {
  FTRACE(0x11521005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11521005 jmp 0x11521030 */
  f_11521030(); return;
}

/* thunk_FUN_10002450 @ 0x1152100a (5 bytes, 1 insns) */
void f_1152100a(void) {
  FTRACE(0x1152100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152100a jmp 0x11522450 */
  f_11522450(); return;
}

/* ProcessScenary @ 0x1152100f (5 bytes, 1 insns) */
void f_1152100f(void) {
  FTRACE(0x1152100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152100f jmp 0x115224b0 */
  f_115224b0(); return;
}

/* FUN_10001030 @ 0x11521030 (4116 bytes, 1079 insns) */
void f_11521030(void) {
  FTRACE(0x11521030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11521030 push ebp */
  push32((uint32_t)(EBP));
  /* 11521031 mov ebp, esp */
  EBP = (ESP);
  /* 11521033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11521036 push ebx */
  push32((uint32_t)(EBX));
  /* 11521037 push esi */
  push32((uint32_t)(ESI));
  /* 11521038 push edi */
  push32((uint32_t)(EDI));
  /* 11521039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1152103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11521041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11521046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11521048 mov esi, esp */
  ESI = (ESP);
  /* 1152104a push 0x1154e4e4 */
  push32((uint32_t)(0x1154e4e4u));
  /* 1152104f push 0x11553480 */
  push32((uint32_t)(0x11553480u));
  /* 11521054 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152105au);
  /* 1152105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152105f call 0x115265c0 */
  push32(0x11521064u); f_115265c0();
  /* 11521064 mov esi, esp */
  ESI = (ESP);
  /* 11521066 push 0x1154e4dc */
  push32((uint32_t)(0x1154e4dcu));
  /* 1152106b push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 11521070 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521076u);
  /* 11521076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152107b call 0x115265c0 */
  push32(0x11521080u); f_115265c0();
  /* 11521080 mov esi, esp */
  ESI = (ESP);
  /* 11521082 push 0x1154e4d4 */
  push32((uint32_t)(0x1154e4d4u));
  /* 11521087 push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 1152108c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521092u);
  /* 11521092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521097 call 0x115265c0 */
  push32(0x1152109cu); f_115265c0();
  /* 1152109c mov esi, esp */
  ESI = (ESP);
  /* 1152109e push 0x1154e4cc */
  push32((uint32_t)(0x1154e4ccu));
  /* 115210a3 push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 115210a8 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115210aeu);
  /* 115210ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115210b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115210b3 call 0x115265c0 */
  push32(0x115210b8u); f_115265c0();
  /* 115210b8 mov esi, esp */
  ESI = (ESP);
  /* 115210ba push 0x1154e4c4 */
  push32((uint32_t)(0x1154e4c4u));
  /* 115210bf push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 115210c4 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115210cau);
  /* 115210ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115210cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115210cf call 0x115265c0 */
  push32(0x115210d4u); f_115265c0();
  /* 115210d4 mov esi, esp */
  ESI = (ESP);
  /* 115210d6 push 0x1154e4b8 */
  push32((uint32_t)(0x1154e4b8u));
  /* 115210db push 0x11553528 */
  push32((uint32_t)(0x11553528u));
  /* 115210e0 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115210e6u);
  /* 115210e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115210e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115210eb call 0x115265c0 */
  push32(0x115210f0u); f_115265c0();
  /* 115210f0 mov esi, esp */
  ESI = (ESP);
  /* 115210f2 push 0x1154e4ac */
  push32((uint32_t)(0x1154e4acu));
  /* 115210f7 push 0x11553520 */
  push32((uint32_t)(0x11553520u));
  /* 115210fc call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521102u);
  /* 11521102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521107 call 0x115265c0 */
  push32(0x1152110cu); f_115265c0();
  /* 1152110c mov esi, esp */
  ESI = (ESP);
  /* 1152110e push 0x1154e4a0 */
  push32((uint32_t)(0x1154e4a0u));
  /* 11521113 push 0x11553518 */
  push32((uint32_t)(0x11553518u));
  /* 11521118 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152111eu);
  /* 1152111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521123 call 0x115265c0 */
  push32(0x11521128u); f_115265c0();
  /* 11521128 mov esi, esp */
  ESI = (ESP);
  /* 1152112a push 0x1154e494 */
  push32((uint32_t)(0x1154e494u));
  /* 1152112f push 0x11553510 */
  push32((uint32_t)(0x11553510u));
  /* 11521134 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152113au);
  /* 1152113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152113f call 0x115265c0 */
  push32(0x11521144u); f_115265c0();
  /* 11521144 mov esi, esp */
  ESI = (ESP);
  /* 11521146 push 0x1154e488 */
  push32((uint32_t)(0x1154e488u));
  /* 1152114b push 0x11553508 */
  push32((uint32_t)(0x11553508u));
  /* 11521150 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521156u);
  /* 11521156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152115b call 0x115265c0 */
  push32(0x11521160u); f_115265c0();
  /* 11521160 mov esi, esp */
  ESI = (ESP);
  /* 11521162 push 0x1154e480 */
  push32((uint32_t)(0x1154e480u));
  /* 11521167 push 0x11553778 */
  push32((uint32_t)(0x11553778u));
  /* 1152116c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521172u);
  /* 11521172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521177 call 0x115265c0 */
  push32(0x1152117cu); f_115265c0();
  /* 1152117c mov esi, esp */
  ESI = (ESP);
  /* 1152117e push 0x1154e478 */
  push32((uint32_t)(0x1154e478u));
  /* 11521183 push 0x11553780 */
  push32((uint32_t)(0x11553780u));
  /* 11521188 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152118eu);
  /* 1152118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521193 call 0x115265c0 */
  push32(0x11521198u); f_115265c0();
  /* 11521198 mov esi, esp */
  ESI = (ESP);
  /* 1152119a push 0x1154e470 */
  push32((uint32_t)(0x1154e470u));
  /* 1152119f push 0x11553650 */
  push32((uint32_t)(0x11553650u));
  /* 115211a4 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115211aau);
  /* 115211aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115211ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115211af call 0x115265c0 */
  push32(0x115211b4u); f_115265c0();
  /* 115211b4 mov esi, esp */
  ESI = (ESP);
  /* 115211b6 push 0x1154e468 */
  push32((uint32_t)(0x1154e468u));
  /* 115211bb push 0x11553658 */
  push32((uint32_t)(0x11553658u));
  /* 115211c0 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115211c6u);
  /* 115211c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115211c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115211cb call 0x115265c0 */
  push32(0x115211d0u); f_115265c0();
  /* 115211d0 mov esi, esp */
  ESI = (ESP);
  /* 115211d2 push 0x1154e460 */
  push32((uint32_t)(0x1154e460u));
  /* 115211d7 push 0x11553660 */
  push32((uint32_t)(0x11553660u));
  /* 115211dc call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115211e2u);
  /* 115211e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115211e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115211e7 call 0x115265c0 */
  push32(0x115211ecu); f_115265c0();
  /* 115211ec mov esi, esp */
  ESI = (ESP);
  /* 115211ee push 0x1154e458 */
  push32((uint32_t)(0x1154e458u));
  /* 115211f3 push 0x11553670 */
  push32((uint32_t)(0x11553670u));
  /* 115211f8 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115211feu);
  /* 115211fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521203 call 0x115265c0 */
  push32(0x11521208u); f_115265c0();
  /* 11521208 mov esi, esp */
  ESI = (ESP);
  /* 1152120a push 0x1154e450 */
  push32((uint32_t)(0x1154e450u));
  /* 1152120f push 0x11553708 */
  push32((uint32_t)(0x11553708u));
  /* 11521214 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152121au);
  /* 1152121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152121f call 0x115265c0 */
  push32(0x11521224u); f_115265c0();
  /* 11521224 mov esi, esp */
  ESI = (ESP);
  /* 11521226 push 0x1154e448 */
  push32((uint32_t)(0x1154e448u));
  /* 1152122b push 0x11553718 */
  push32((uint32_t)(0x11553718u));
  /* 11521230 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521236u);
  /* 11521236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152123b call 0x115265c0 */
  push32(0x11521240u); f_115265c0();
  /* 11521240 mov esi, esp */
  ESI = (ESP);
  /* 11521242 push 0x1154e440 */
  push32((uint32_t)(0x1154e440u));
  /* 11521247 push 0x11553620 */
  push32((uint32_t)(0x11553620u));
  /* 1152124c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521252u);
  /* 11521252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521257 call 0x115265c0 */
  push32(0x1152125cu); f_115265c0();
  /* 1152125c mov esi, esp */
  ESI = (ESP);
  /* 1152125e push 0x1154e434 */
  push32((uint32_t)(0x1154e434u));
  /* 11521263 push 0x115536f8 */
  push32((uint32_t)(0x115536f8u));
  /* 11521268 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152126eu);
  /* 1152126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521273 call 0x115265c0 */
  push32(0x11521278u); f_115265c0();
  /* 11521278 mov esi, esp */
  ESI = (ESP);
  /* 1152127a push 0x1154e428 */
  push32((uint32_t)(0x1154e428u));
  /* 1152127f push 0x11553700 */
  push32((uint32_t)(0x11553700u));
  /* 11521284 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152128au);
  /* 1152128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152128f call 0x115265c0 */
  push32(0x11521294u); f_115265c0();
  /* 11521294 mov esi, esp */
  ESI = (ESP);
  /* 11521296 push 0x1154e420 */
  push32((uint32_t)(0x1154e420u));
  /* 1152129b push 0x11553618 */
  push32((uint32_t)(0x11553618u));
  /* 115212a0 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115212a6u);
  /* 115212a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115212a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115212ab call 0x115265c0 */
  push32(0x115212b0u); f_115265c0();
  /* 115212b0 mov esi, esp */
  ESI = (ESP);
  /* 115212b2 push 0x1154e418 */
  push32((uint32_t)(0x1154e418u));
  /* 115212b7 push 0x11553630 */
  push32((uint32_t)(0x11553630u));
  /* 115212bc call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115212c2u);
  /* 115212c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115212c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115212c7 call 0x115265c0 */
  push32(0x115212ccu); f_115265c0();
  /* 115212cc mov esi, esp */
  ESI = (ESP);
  /* 115212ce push 0x1154e410 */
  push32((uint32_t)(0x1154e410u));
  /* 115212d3 push 0x11553628 */
  push32((uint32_t)(0x11553628u));
  /* 115212d8 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115212deu);
  /* 115212de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115212e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115212e3 call 0x115265c0 */
  push32(0x115212e8u); f_115265c0();
  /* 115212e8 mov esi, esp */
  ESI = (ESP);
  /* 115212ea push 0x1154e408 */
  push32((uint32_t)(0x1154e408u));
  /* 115212ef push 0x11553638 */
  push32((uint32_t)(0x11553638u));
  /* 115212f4 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115212fau);
  /* 115212fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115212fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115212ff call 0x115265c0 */
  push32(0x11521304u); f_115265c0();
  /* 11521304 mov esi, esp */
  ESI = (ESP);
  /* 11521306 push 0x1154e400 */
  push32((uint32_t)(0x1154e400u));
  /* 1152130b push 0x11553598 */
  push32((uint32_t)(0x11553598u));
  /* 11521310 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521316u);
  /* 11521316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152131b call 0x115265c0 */
  push32(0x11521320u); f_115265c0();
  /* 11521320 mov esi, esp */
  ESI = (ESP);
  /* 11521322 push 0x1154e3f4 */
  push32((uint32_t)(0x1154e3f4u));
  /* 11521327 push 0x115535e0 */
  push32((uint32_t)(0x115535e0u));
  /* 1152132c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521332u);
  /* 11521332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521337 call 0x115265c0 */
  push32(0x1152133cu); f_115265c0();
  /* 1152133c mov esi, esp */
  ESI = (ESP);
  /* 1152133e push 0x1154e3e8 */
  push32((uint32_t)(0x1154e3e8u));
  /* 11521343 push 0x115535d8 */
  push32((uint32_t)(0x115535d8u));
  /* 11521348 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152134eu);
  /* 1152134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521353 call 0x115265c0 */
  push32(0x11521358u); f_115265c0();
  /* 11521358 mov esi, esp */
  ESI = (ESP);
  /* 1152135a push 0x1154e3e0 */
  push32((uint32_t)(0x1154e3e0u));
  /* 1152135f push 0x11553588 */
  push32((uint32_t)(0x11553588u));
  /* 11521364 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152136au);
  /* 1152136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152136f call 0x115265c0 */
  push32(0x11521374u); f_115265c0();
  /* 11521374 mov esi, esp */
  ESI = (ESP);
  /* 11521376 push 0x1154e3d8 */
  push32((uint32_t)(0x1154e3d8u));
  /* 1152137b push 0x115535a8 */
  push32((uint32_t)(0x115535a8u));
  /* 11521380 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521386u);
  /* 11521386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152138b call 0x115265c0 */
  push32(0x11521390u); f_115265c0();
  /* 11521390 mov esi, esp */
  ESI = (ESP);
  /* 11521392 push 0x1154e3d0 */
  push32((uint32_t)(0x1154e3d0u));
  /* 11521397 push 0x115535a0 */
  push32((uint32_t)(0x115535a0u));
  /* 1152139c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115213a2u);
  /* 115213a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115213a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115213a7 call 0x115265c0 */
  push32(0x115213acu); f_115265c0();
  /* 115213ac mov esi, esp */
  ESI = (ESP);
  /* 115213ae push 0x1154e3c8 */
  push32((uint32_t)(0x1154e3c8u));
  /* 115213b3 push 0x115535b8 */
  push32((uint32_t)(0x115535b8u));
  /* 115213b8 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115213beu);
  /* 115213be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115213c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115213c3 call 0x115265c0 */
  push32(0x115213c8u); f_115265c0();
  /* 115213c8 mov esi, esp */
  ESI = (ESP);
  /* 115213ca push 0x1154e3c0 */
  push32((uint32_t)(0x1154e3c0u));
  /* 115213cf push 0x11553550 */
  push32((uint32_t)(0x11553550u));
  /* 115213d4 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115213dau);
  /* 115213da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115213dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115213df call 0x115265c0 */
  push32(0x115213e4u); f_115265c0();
  /* 115213e4 mov esi, esp */
  ESI = (ESP);
  /* 115213e6 push 0x1154e3b8 */
  push32((uint32_t)(0x1154e3b8u));
  /* 115213eb push 0x11553560 */
  push32((uint32_t)(0x11553560u));
  /* 115213f0 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115213f6u);
  /* 115213f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115213f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115213fb call 0x115265c0 */
  push32(0x11521400u); f_115265c0();
  /* 11521400 mov esi, esp */
  ESI = (ESP);
  /* 11521402 push 0x1154e3b0 */
  push32((uint32_t)(0x1154e3b0u));
  /* 11521407 push 0x11553558 */
  push32((uint32_t)(0x11553558u));
  /* 1152140c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521412u);
  /* 11521412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521417 call 0x115265c0 */
  push32(0x1152141cu); f_115265c0();
  /* 1152141c mov esi, esp */
  ESI = (ESP);
  /* 1152141e push 0x1154e3a8 */
  push32((uint32_t)(0x1154e3a8u));
  /* 11521423 push 0x115534a8 */
  push32((uint32_t)(0x115534a8u));
  /* 11521428 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152142eu);
  /* 1152142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521433 call 0x115265c0 */
  push32(0x11521438u); f_115265c0();
  /* 11521438 mov esi, esp */
  ESI = (ESP);
  /* 1152143a push 0x1154e39c */
  push32((uint32_t)(0x1154e39cu));
  /* 1152143f push 0x11553728 */
  push32((uint32_t)(0x11553728u));
  /* 11521444 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152144au);
  /* 1152144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152144f call 0x115265c0 */
  push32(0x11521454u); f_115265c0();
  /* 11521454 mov esi, esp */
  ESI = (ESP);
  /* 11521456 push 0x1154e390 */
  push32((uint32_t)(0x1154e390u));
  /* 1152145b push 0x11553720 */
  push32((uint32_t)(0x11553720u));
  /* 11521460 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521466u);
  /* 11521466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152146b call 0x115265c0 */
  push32(0x11521470u); f_115265c0();
  /* 11521470 mov esi, esp */
  ESI = (ESP);
  /* 11521472 push 0x1154e384 */
  push32((uint32_t)(0x1154e384u));
  /* 11521477 push 0x11553730 */
  push32((uint32_t)(0x11553730u));
  /* 1152147c call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x11521482u);
  /* 11521482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521487 call 0x115265c0 */
  push32(0x1152148cu); f_115265c0();
  /* 1152148c mov esi, esp */
  ESI = (ESP);
  /* 1152148e push 0x1154e37c */
  push32((uint32_t)(0x1154e37cu));
  /* 11521493 push 0x115534f8 */
  push32((uint32_t)(0x115534f8u));
  /* 11521498 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152149eu);
  /* 1152149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115214a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115214a3 call 0x115265c0 */
  push32(0x115214a8u); f_115265c0();
  /* 115214a8 mov esi, esp */
  ESI = (ESP);
  /* 115214aa push 0x1154e374 */
  push32((uint32_t)(0x1154e374u));
  /* 115214af push 0x11553478 */
  push32((uint32_t)(0x11553478u));
  /* 115214b4 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115214bau);
  /* 115214ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115214bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115214bf call 0x115265c0 */
  push32(0x115214c4u); f_115265c0();
  /* 115214c4 mov esi, esp */
  ESI = (ESP);
  /* 115214c6 push 0x1154e36c */
  push32((uint32_t)(0x1154e36cu));
  /* 115214cb push 0x11553488 */
  push32((uint32_t)(0x11553488u));
  /* 115214d0 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115214d6u);
  /* 115214d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115214d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115214db call 0x115265c0 */
  push32(0x115214e0u); f_115265c0();
  /* 115214e0 mov esi, esp */
  ESI = (ESP);
  /* 115214e2 push 0x1154e364 */
  push32((uint32_t)(0x1154e364u));
  /* 115214e7 push 0x11553490 */
  push32((uint32_t)(0x11553490u));
  /* 115214ec call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x115214f2u);
  /* 115214f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115214f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115214f7 call 0x115265c0 */
  push32(0x115214fcu); f_115265c0();
  /* 115214fc mov esi, esp */
  ESI = (ESP);
  /* 115214fe push 0x1154e35c */
  push32((uint32_t)(0x1154e35cu));
  /* 11521503 push 0x11553498 */
  push32((uint32_t)(0x11553498u));
  /* 11521508 call dword ptr [0x11556514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556514))), 0x1152150eu);
  /* 1152150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521513 call 0x115265c0 */
  push32(0x11521518u); f_115265c0();
  /* 11521518 mov esi, esp */
  ESI = (ESP);
  /* 1152151a push 0x1154e354 */
  push32((uint32_t)(0x1154e354u));
  /* 1152151f push 0x11553698 */
  push32((uint32_t)(0x11553698u));
  /* 11521524 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152152au);
  /* 1152152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152152f call 0x115265c0 */
  push32(0x11521534u); f_115265c0();
  /* 11521534 mov esi, esp */
  ESI = (ESP);
  /* 11521536 push 0x1154e34c */
  push32((uint32_t)(0x1154e34cu));
  /* 1152153b push 0x115536a8 */
  push32((uint32_t)(0x115536a8u));
  /* 11521540 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521546u);
  /* 11521546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152154b call 0x115265c0 */
  push32(0x11521550u); f_115265c0();
  /* 11521550 mov esi, esp */
  ESI = (ESP);
  /* 11521552 push 0x1154e340 */
  push32((uint32_t)(0x1154e340u));
  /* 11521557 push 0x11553710 */
  push32((uint32_t)(0x11553710u));
  /* 1152155c call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521562u);
  /* 11521562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521567 call 0x115265c0 */
  push32(0x1152156cu); f_115265c0();
  /* 1152156c mov esi, esp */
  ESI = (ESP);
  /* 1152156e push 0x1154e334 */
  push32((uint32_t)(0x1154e334u));
  /* 11521573 push 0x11553758 */
  push32((uint32_t)(0x11553758u));
  /* 11521578 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152157eu);
  /* 1152157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521583 call 0x115265c0 */
  push32(0x11521588u); f_115265c0();
  /* 11521588 mov esi, esp */
  ESI = (ESP);
  /* 1152158a push 0x1154e328 */
  push32((uint32_t)(0x1154e328u));
  /* 1152158f push 0x11553760 */
  push32((uint32_t)(0x11553760u));
  /* 11521594 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152159au);
  /* 1152159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152159f call 0x115265c0 */
  push32(0x115215a4u); f_115265c0();
  /* 115215a4 mov esi, esp */
  ESI = (ESP);
  /* 115215a6 push 0x1154e320 */
  push32((uint32_t)(0x1154e320u));
  /* 115215ab push 0x115536a0 */
  push32((uint32_t)(0x115536a0u));
  /* 115215b0 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115215b6u);
  /* 115215b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115215b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115215bb call 0x115265c0 */
  push32(0x115215c0u); f_115265c0();
  /* 115215c0 mov esi, esp */
  ESI = (ESP);
  /* 115215c2 push 0x1154e314 */
  push32((uint32_t)(0x1154e314u));
  /* 115215c7 push 0x11553768 */
  push32((uint32_t)(0x11553768u));
  /* 115215cc call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115215d2u);
  /* 115215d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115215d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115215d7 call 0x115265c0 */
  push32(0x115215dcu); f_115265c0();
  /* 115215dc mov esi, esp */
  ESI = (ESP);
  /* 115215de push 0x1154e308 */
  push32((uint32_t)(0x1154e308u));
  /* 115215e3 push 0x11553770 */
  push32((uint32_t)(0x11553770u));
  /* 115215e8 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115215eeu);
  /* 115215ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115215f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115215f3 call 0x115265c0 */
  push32(0x115215f8u); f_115265c0();
  /* 115215f8 mov esi, esp */
  ESI = (ESP);
  /* 115215fa push 0x1154e300 */
  push32((uint32_t)(0x1154e300u));
  /* 115215ff push 0x115536b0 */
  push32((uint32_t)(0x115536b0u));
  /* 11521604 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152160au);
  /* 1152160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152160f call 0x115265c0 */
  push32(0x11521614u); f_115265c0();
  /* 11521614 mov esi, esp */
  ESI = (ESP);
  /* 11521616 push 0x1154e2f4 */
  push32((uint32_t)(0x1154e2f4u));
  /* 1152161b push 0x11553738 */
  push32((uint32_t)(0x11553738u));
  /* 11521620 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521626u);
  /* 11521626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152162b call 0x115265c0 */
  push32(0x11521630u); f_115265c0();
  /* 11521630 mov esi, esp */
  ESI = (ESP);
  /* 11521632 push 0x1154e2e8 */
  push32((uint32_t)(0x1154e2e8u));
  /* 11521637 push 0x11553740 */
  push32((uint32_t)(0x11553740u));
  /* 1152163c call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521642u);
  /* 11521642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521647 call 0x115265c0 */
  push32(0x1152164cu); f_115265c0();
  /* 1152164c mov esi, esp */
  ESI = (ESP);
  /* 1152164e push 0x1154e2e0 */
  push32((uint32_t)(0x1154e2e0u));
  /* 11521653 push 0x115536b8 */
  push32((uint32_t)(0x115536b8u));
  /* 11521658 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152165eu);
  /* 1152165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521663 call 0x115265c0 */
  push32(0x11521668u); f_115265c0();
  /* 11521668 mov esi, esp */
  ESI = (ESP);
  /* 1152166a push 0x1154e2d4 */
  push32((uint32_t)(0x1154e2d4u));
  /* 1152166f push 0x11553748 */
  push32((uint32_t)(0x11553748u));
  /* 11521674 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152167au);
  /* 1152167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152167f call 0x115265c0 */
  push32(0x11521684u); f_115265c0();
  /* 11521684 mov esi, esp */
  ESI = (ESP);
  /* 11521686 push 0x1154e2c8 */
  push32((uint32_t)(0x1154e2c8u));
  /* 1152168b push 0x11553750 */
  push32((uint32_t)(0x11553750u));
  /* 11521690 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521696u);
  /* 11521696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152169b call 0x115265c0 */
  push32(0x115216a0u); f_115265c0();
  /* 115216a0 mov esi, esp */
  ESI = (ESP);
  /* 115216a2 push 0x1154e2c0 */
  push32((uint32_t)(0x1154e2c0u));
  /* 115216a7 push 0x115535e8 */
  push32((uint32_t)(0x115535e8u));
  /* 115216ac call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115216b2u);
  /* 115216b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115216b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115216b7 call 0x115265c0 */
  push32(0x115216bcu); f_115265c0();
  /* 115216bc mov esi, esp */
  ESI = (ESP);
  /* 115216be push 0x1154e2b8 */
  push32((uint32_t)(0x1154e2b8u));
  /* 115216c3 push 0x115535f0 */
  push32((uint32_t)(0x115535f0u));
  /* 115216c8 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115216ceu);
  /* 115216ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115216d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115216d3 call 0x115265c0 */
  push32(0x115216d8u); f_115265c0();
  /* 115216d8 mov esi, esp */
  ESI = (ESP);
  /* 115216da push 0x1154e2b0 */
  push32((uint32_t)(0x1154e2b0u));
  /* 115216df push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 115216e4 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115216eau);
  /* 115216ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115216ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115216ef call 0x115265c0 */
  push32(0x115216f4u); f_115265c0();
  /* 115216f4 mov esi, esp */
  ESI = (ESP);
  /* 115216f6 push 0x1154e2a8 */
  push32((uint32_t)(0x1154e2a8u));
  /* 115216fb push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 11521700 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521706u);
  /* 11521706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152170b call 0x115265c0 */
  push32(0x11521710u); f_115265c0();
  /* 11521710 mov esi, esp */
  ESI = (ESP);
  /* 11521712 push 0x1154e2a0 */
  push32((uint32_t)(0x1154e2a0u));
  /* 11521717 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 1152171c call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521722u);
  /* 11521722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521727 call 0x115265c0 */
  push32(0x1152172cu); f_115265c0();
  /* 1152172c mov esi, esp */
  ESI = (ESP);
  /* 1152172e push 0x1154e294 */
  push32((uint32_t)(0x1154e294u));
  /* 11521733 push 0x115536c0 */
  push32((uint32_t)(0x115536c0u));
  /* 11521738 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152173eu);
  /* 1152173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521743 call 0x115265c0 */
  push32(0x11521748u); f_115265c0();
  /* 11521748 mov esi, esp */
  ESI = (ESP);
  /* 1152174a push 0x1154e28c */
  push32((uint32_t)(0x1154e28cu));
  /* 1152174f push 0x11553500 */
  push32((uint32_t)(0x11553500u));
  /* 11521754 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152175au);
  /* 1152175a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152175d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152175f call 0x115265c0 */
  push32(0x11521764u); f_115265c0();
  /* 11521764 mov esi, esp */
  ESI = (ESP);
  /* 11521766 push 0x1154e284 */
  push32((uint32_t)(0x1154e284u));
  /* 1152176b push 0x115533e0 */
  push32((uint32_t)(0x115533e0u));
  /* 11521770 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521776u);
  /* 11521776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152177b call 0x115265c0 */
  push32(0x11521780u); f_115265c0();
  /* 11521780 mov esi, esp */
  ESI = (ESP);
  /* 11521782 push 0x1154e27c */
  push32((uint32_t)(0x1154e27cu));
  /* 11521787 push 0x115533e8 */
  push32((uint32_t)(0x115533e8u));
  /* 1152178c call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521792u);
  /* 11521792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521797 call 0x115265c0 */
  push32(0x1152179cu); f_115265c0();
  /* 1152179c mov esi, esp */
  ESI = (ESP);
  /* 1152179e push 0x1154e274 */
  push32((uint32_t)(0x1154e274u));
  /* 115217a3 push 0x115533f0 */
  push32((uint32_t)(0x115533f0u));
  /* 115217a8 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115217aeu);
  /* 115217ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115217b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115217b3 call 0x115265c0 */
  push32(0x115217b8u); f_115265c0();
  /* 115217b8 mov esi, esp */
  ESI = (ESP);
  /* 115217ba push 0x1154e26c */
  push32((uint32_t)(0x1154e26cu));
  /* 115217bf push 0x115533f8 */
  push32((uint32_t)(0x115533f8u));
  /* 115217c4 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115217cau);
  /* 115217ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115217cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115217cf call 0x115265c0 */
  push32(0x115217d4u); f_115265c0();
  /* 115217d4 mov esi, esp */
  ESI = (ESP);
  /* 115217d6 push 0x1154e264 */
  push32((uint32_t)(0x1154e264u));
  /* 115217db push 0x11553678 */
  push32((uint32_t)(0x11553678u));
  /* 115217e0 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x115217e6u);
  /* 115217e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115217e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115217eb call 0x115265c0 */
  push32(0x115217f0u); f_115265c0();
  /* 115217f0 mov esi, esp */
  ESI = (ESP);
  /* 115217f2 push 0x1154e25c */
  push32((uint32_t)(0x1154e25cu));
  /* 115217f7 push 0x11553680 */
  push32((uint32_t)(0x11553680u));
  /* 115217fc call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521802u);
  /* 11521802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521807 call 0x115265c0 */
  push32(0x1152180cu); f_115265c0();
  /* 1152180c mov esi, esp */
  ESI = (ESP);
  /* 1152180e push 0x1154e254 */
  push32((uint32_t)(0x1154e254u));
  /* 11521813 push 0x11553688 */
  push32((uint32_t)(0x11553688u));
  /* 11521818 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152181eu);
  /* 1152181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521823 call 0x115265c0 */
  push32(0x11521828u); f_115265c0();
  /* 11521828 mov esi, esp */
  ESI = (ESP);
  /* 1152182a push 0x1154e24c */
  push32((uint32_t)(0x1154e24cu));
  /* 1152182f push 0x11553690 */
  push32((uint32_t)(0x11553690u));
  /* 11521834 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x1152183au);
  /* 1152183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152183f call 0x115265c0 */
  push32(0x11521844u); f_115265c0();
  /* 11521844 mov esi, esp */
  ESI = (ESP);
  /* 11521846 push 0x1154e244 */
  push32((uint32_t)(0x1154e244u));
  /* 1152184b push 0x11553640 */
  push32((uint32_t)(0x11553640u));
  /* 11521850 call dword ptr [0x11556518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556518))), 0x11521856u);
  /* 11521856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152185b call 0x115265c0 */
  push32(0x11521860u); f_115265c0();
  /* 11521860 mov esi, esp */
  ESI = (ESP);
  /* 11521862 push 0x1154e230 */
  push32((uint32_t)(0x1154e230u));
  /* 11521867 push 0x115534a0 */
  push32((uint32_t)(0x115534a0u));
  /* 1152186c call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521872u);
  /* 11521872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521877 call 0x115265c0 */
  push32(0x1152187cu); f_115265c0();
  /* 1152187c mov esi, esp */
  ESI = (ESP);
  /* 1152187e push 0x1154e218 */
  push32((uint32_t)(0x1154e218u));
  /* 11521883 push 0x11553578 */
  push32((uint32_t)(0x11553578u));
  /* 11521888 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x1152188eu);
  /* 1152188e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521893 call 0x115265c0 */
  push32(0x11521898u); f_115265c0();
  /* 11521898 mov esi, esp */
  ESI = (ESP);
  /* 1152189a push 0x1154e20c */
  push32((uint32_t)(0x1154e20cu));
  /* 1152189f push 0x11553568 */
  push32((uint32_t)(0x11553568u));
  /* 115218a4 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115218aau);
  /* 115218aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115218ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115218af call 0x115265c0 */
  push32(0x115218b4u); f_115265c0();
  /* 115218b4 mov esi, esp */
  ESI = (ESP);
  /* 115218b6 push 0x1154e1f8 */
  push32((uint32_t)(0x1154e1f8u));
  /* 115218bb push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 115218c0 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115218c6u);
  /* 115218c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115218c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115218cb call 0x115265c0 */
  push32(0x115218d0u); f_115265c0();
  /* 115218d0 mov esi, esp */
  ESI = (ESP);
  /* 115218d2 push 0x1154e1e4 */
  push32((uint32_t)(0x1154e1e4u));
  /* 115218d7 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 115218dc call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115218e2u);
  /* 115218e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115218e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115218e7 call 0x115265c0 */
  push32(0x115218ecu); f_115265c0();
  /* 115218ec mov esi, esp */
  ESI = (ESP);
  /* 115218ee push 0x1154e1cc */
  push32((uint32_t)(0x1154e1ccu));
  /* 115218f3 push 0x11553438 */
  push32((uint32_t)(0x11553438u));
  /* 115218f8 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115218feu);
  /* 115218fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521903 call 0x115265c0 */
  push32(0x11521908u); f_115265c0();
  /* 11521908 mov esi, esp */
  ESI = (ESP);
  /* 1152190a push 0x1154e1b4 */
  push32((uint32_t)(0x1154e1b4u));
  /* 1152190f push 0x11553458 */
  push32((uint32_t)(0x11553458u));
  /* 11521914 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x1152191au);
  /* 1152191a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152191d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152191f call 0x115265c0 */
  push32(0x11521924u); f_115265c0();
  /* 11521924 mov esi, esp */
  ESI = (ESP);
  /* 11521926 push 0x1154e19c */
  push32((uint32_t)(0x1154e19cu));
  /* 1152192b push 0x11553468 */
  push32((uint32_t)(0x11553468u));
  /* 11521930 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521936u);
  /* 11521936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152193b call 0x115265c0 */
  push32(0x11521940u); f_115265c0();
  /* 11521940 mov esi, esp */
  ESI = (ESP);
  /* 11521942 push 0x1154e184 */
  push32((uint32_t)(0x1154e184u));
  /* 11521947 push 0x11553440 */
  push32((uint32_t)(0x11553440u));
  /* 1152194c call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521952u);
  /* 11521952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521957 call 0x115265c0 */
  push32(0x1152195cu); f_115265c0();
  /* 1152195c mov esi, esp */
  ESI = (ESP);
  /* 1152195e push 0x1154e174 */
  push32((uint32_t)(0x1154e174u));
  /* 11521963 push 0x115534b8 */
  push32((uint32_t)(0x115534b8u));
  /* 11521968 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x1152196eu);
  /* 1152196e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521973 call 0x115265c0 */
  push32(0x11521978u); f_115265c0();
  /* 11521978 mov esi, esp */
  ESI = (ESP);
  /* 1152197a push 0x1154e164 */
  push32((uint32_t)(0x1154e164u));
  /* 1152197f push 0x115535f8 */
  push32((uint32_t)(0x115535f8u));
  /* 11521984 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x1152198au);
  /* 1152198a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152198d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152198f call 0x115265c0 */
  push32(0x11521994u); f_115265c0();
  /* 11521994 mov esi, esp */
  ESI = (ESP);
  /* 11521996 push 0x1154e154 */
  push32((uint32_t)(0x1154e154u));
  /* 1152199b push 0x115534c0 */
  push32((uint32_t)(0x115534c0u));
  /* 115219a0 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115219a6u);
  /* 115219a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115219a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115219ab call 0x115265c0 */
  push32(0x115219b0u); f_115265c0();
  /* 115219b0 mov esi, esp */
  ESI = (ESP);
  /* 115219b2 push 0x1154e144 */
  push32((uint32_t)(0x1154e144u));
  /* 115219b7 push 0x11553608 */
  push32((uint32_t)(0x11553608u));
  /* 115219bc call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115219c2u);
  /* 115219c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115219c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115219c7 call 0x115265c0 */
  push32(0x115219ccu); f_115265c0();
  /* 115219cc mov esi, esp */
  ESI = (ESP);
  /* 115219ce push 0x1154e134 */
  push32((uint32_t)(0x1154e134u));
  /* 115219d3 push 0x115534c8 */
  push32((uint32_t)(0x115534c8u));
  /* 115219d8 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115219deu);
  /* 115219de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115219e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115219e3 call 0x115265c0 */
  push32(0x115219e8u); f_115265c0();
  /* 115219e8 mov esi, esp */
  ESI = (ESP);
  /* 115219ea push 0x1154e124 */
  push32((uint32_t)(0x1154e124u));
  /* 115219ef push 0x11553610 */
  push32((uint32_t)(0x11553610u));
  /* 115219f4 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x115219fau);
  /* 115219fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115219fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115219ff call 0x115265c0 */
  push32(0x11521a04u); f_115265c0();
  /* 11521a04 mov esi, esp */
  ESI = (ESP);
  /* 11521a06 push 0x1154e114 */
  push32((uint32_t)(0x1154e114u));
  /* 11521a0b push 0x115534d0 */
  push32((uint32_t)(0x115534d0u));
  /* 11521a10 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521a16u);
  /* 11521a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521a19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521a1b call 0x115265c0 */
  push32(0x11521a20u); f_115265c0();
  /* 11521a20 mov esi, esp */
  ESI = (ESP);
  /* 11521a22 push 0x1154e104 */
  push32((uint32_t)(0x1154e104u));
  /* 11521a27 push 0x11553600 */
  push32((uint32_t)(0x11553600u));
  /* 11521a2c call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521a32u);
  /* 11521a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521a35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521a37 call 0x115265c0 */
  push32(0x11521a3cu); f_115265c0();
  /* 11521a3c mov esi, esp */
  ESI = (ESP);
  /* 11521a3e push 0x1154e0ec */
  push32((uint32_t)(0x1154e0ecu));
  /* 11521a43 push 0x11553530 */
  push32((uint32_t)(0x11553530u));
  /* 11521a48 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521a4eu);
  /* 11521a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521a53 call 0x115265c0 */
  push32(0x11521a58u); f_115265c0();
  /* 11521a58 mov esi, esp */
  ESI = (ESP);
  /* 11521a5a push 0x1154e0e0 */
  push32((uint32_t)(0x1154e0e0u));
  /* 11521a5f push 0x11553538 */
  push32((uint32_t)(0x11553538u));
  /* 11521a64 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521a6au);
  /* 11521a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521a6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521a6f call 0x115265c0 */
  push32(0x11521a74u); f_115265c0();
  /* 11521a74 mov esi, esp */
  ESI = (ESP);
  /* 11521a76 push 0x1154e0d4 */
  push32((uint32_t)(0x1154e0d4u));
  /* 11521a7b push 0x11553540 */
  push32((uint32_t)(0x11553540u));
  /* 11521a80 call dword ptr [0x1155651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155651c))), 0x11521a86u);
  /* 11521a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521a8b call 0x115265c0 */
  push32(0x11521a90u); f_115265c0();
  /* 11521a90 mov esi, esp */
  ESI = (ESP);
  /* 11521a92 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521a94 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 11521a99 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521a9fu);
  /* 11521a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521aa4 call 0x115265c0 */
  push32(0x11521aa9u); f_115265c0();
  /* 11521aa9 mov esi, esp */
  ESI = (ESP);
  /* 11521aab push 8 */
  push32((uint32_t)(0x8u));
  /* 11521aad push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 11521ab2 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521ab8u);
  /* 11521ab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521abb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521abd call 0x115265c0 */
  push32(0x11521ac2u); f_115265c0();
  /* 11521ac2 mov esi, esp */
  ESI = (ESP);
  /* 11521ac4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521ac6 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 11521acb call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521ad1u);
  /* 11521ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ad6 call 0x115265c0 */
  push32(0x11521adbu); f_115265c0();
  /* 11521adb mov esi, esp */
  ESI = (ESP);
  /* 11521add push 8 */
  push32((uint32_t)(0x8u));
  /* 11521adf push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 11521ae4 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521aeau);
  /* 11521aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521aef call 0x115265c0 */
  push32(0x11521af4u); f_115265c0();
  /* 11521af4 mov esi, esp */
  ESI = (ESP);
  /* 11521af6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521af8 push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11521afd call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b03u);
  /* 11521b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b08 call 0x115265c0 */
  push32(0x11521b0du); f_115265c0();
  /* 11521b0d mov esi, esp */
  ESI = (ESP);
  /* 11521b0f push 8 */
  push32((uint32_t)(0x8u));
  /* 11521b11 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11521b16 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b1cu);
  /* 11521b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b21 call 0x115265c0 */
  push32(0x11521b26u); f_115265c0();
  /* 11521b26 mov esi, esp */
  ESI = (ESP);
  /* 11521b28 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521b2a push 0x11553428 */
  push32((uint32_t)(0x11553428u));
  /* 11521b2f call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b35u);
  /* 11521b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b3a call 0x115265c0 */
  push32(0x11521b3fu); f_115265c0();
  /* 11521b3f mov esi, esp */
  ESI = (ESP);
  /* 11521b41 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521b43 push 0x11553420 */
  push32((uint32_t)(0x11553420u));
  /* 11521b48 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b4eu);
  /* 11521b4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b53 call 0x115265c0 */
  push32(0x11521b58u); f_115265c0();
  /* 11521b58 mov esi, esp */
  ESI = (ESP);
  /* 11521b5a push 8 */
  push32((uint32_t)(0x8u));
  /* 11521b5c push 0x11553430 */
  push32((uint32_t)(0x11553430u));
  /* 11521b61 call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b67u);
  /* 11521b67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b6c call 0x115265c0 */
  push32(0x11521b71u); f_115265c0();
  /* 11521b71 mov esi, esp */
  ESI = (ESP);
  /* 11521b73 push 8 */
  push32((uint32_t)(0x8u));
  /* 11521b75 push 0x11553548 */
  push32((uint32_t)(0x11553548u));
  /* 11521b7a call dword ptr [0x11556520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556520))), 0x11521b80u);
  /* 11521b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521b85 call 0x115265c0 */
  push32(0x11521b8au); f_115265c0();
  /* 11521b8a mov esi, esp */
  ESI = (ESP);
  /* 11521b8c push 0x1154e0cc */
  push32((uint32_t)(0x1154e0ccu));
  /* 11521b91 push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 11521b96 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521b9cu);
  /* 11521b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521b9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ba1 call 0x115265c0 */
  push32(0x11521ba6u); f_115265c0();
  /* 11521ba6 mov esi, esp */
  ESI = (ESP);
  /* 11521ba8 push 0x1154e0bc */
  push32((uint32_t)(0x1154e0bcu));
  /* 11521bad push 0x11553580 */
  push32((uint32_t)(0x11553580u));
  /* 11521bb2 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521bb8u);
  /* 11521bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521bbd call 0x115265c0 */
  push32(0x11521bc2u); f_115265c0();
  /* 11521bc2 mov esi, esp */
  ESI = (ESP);
  /* 11521bc4 push 0x1154e0ac */
  push32((uint32_t)(0x1154e0acu));
  /* 11521bc9 push 0x115535b0 */
  push32((uint32_t)(0x115535b0u));
  /* 11521bce call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521bd4u);
  /* 11521bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521bd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521bd9 call 0x115265c0 */
  push32(0x11521bdeu); f_115265c0();
  /* 11521bde mov esi, esp */
  ESI = (ESP);
  /* 11521be0 push 0x1154e09c */
  push32((uint32_t)(0x1154e09cu));
  /* 11521be5 push 0x115535c0 */
  push32((uint32_t)(0x115535c0u));
  /* 11521bea call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521bf0u);
  /* 11521bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521bf5 call 0x115265c0 */
  push32(0x11521bfau); f_115265c0();
  /* 11521bfa mov esi, esp */
  ESI = (ESP);
  /* 11521bfc push 0x1154e08c */
  push32((uint32_t)(0x1154e08cu));
  /* 11521c01 push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 11521c06 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c0cu);
  /* 11521c0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c11 call 0x115265c0 */
  push32(0x11521c16u); f_115265c0();
  /* 11521c16 mov esi, esp */
  ESI = (ESP);
  /* 11521c18 push 0x1154e07c */
  push32((uint32_t)(0x1154e07cu));
  /* 11521c1d push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11521c22 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c28u);
  /* 11521c28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c2d call 0x115265c0 */
  push32(0x11521c32u); f_115265c0();
  /* 11521c32 mov esi, esp */
  ESI = (ESP);
  /* 11521c34 push 0x1154e074 */
  push32((uint32_t)(0x1154e074u));
  /* 11521c39 push 0x115536e8 */
  push32((uint32_t)(0x115536e8u));
  /* 11521c3e call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c44u);
  /* 11521c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c49 call 0x115265c0 */
  push32(0x11521c4eu); f_115265c0();
  /* 11521c4e mov esi, esp */
  ESI = (ESP);
  /* 11521c50 push 0x1154e068 */
  push32((uint32_t)(0x1154e068u));
  /* 11521c55 push 0x11553400 */
  push32((uint32_t)(0x11553400u));
  /* 11521c5a call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c60u);
  /* 11521c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c65 call 0x115265c0 */
  push32(0x11521c6au); f_115265c0();
  /* 11521c6a mov esi, esp */
  ESI = (ESP);
  /* 11521c6c push 0x1154e05c */
  push32((uint32_t)(0x1154e05cu));
  /* 11521c71 push 0x11553408 */
  push32((uint32_t)(0x11553408u));
  /* 11521c76 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c7cu);
  /* 11521c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c81 call 0x115265c0 */
  push32(0x11521c86u); f_115265c0();
  /* 11521c86 mov esi, esp */
  ESI = (ESP);
  /* 11521c88 push 0x1154e054 */
  push32((uint32_t)(0x1154e054u));
  /* 11521c8d push 0x115534b0 */
  push32((uint32_t)(0x115534b0u));
  /* 11521c92 call dword ptr [0x11556524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556524))), 0x11521c98u);
  /* 11521c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521c9d call 0x115265c0 */
  push32(0x11521ca2u); f_115265c0();
  /* 11521ca2 mov esi, esp */
  ESI = (ESP);
  /* 11521ca4 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 11521ca9 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521cafu);
  /* 11521caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521cb4 call 0x115265c0 */
  push32(0x11521cb9u); f_115265c0();
  /* 11521cb9 mov esi, esp */
  ESI = (ESP);
  /* 11521cbb push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 11521cc0 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521cc6u);
  /* 11521cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ccb call 0x115265c0 */
  push32(0x11521cd0u); f_115265c0();
  /* 11521cd0 mov esi, esp */
  ESI = (ESP);
  /* 11521cd2 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 11521cd7 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521cddu);
  /* 11521cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ce2 call 0x115265c0 */
  push32(0x11521ce7u); f_115265c0();
  /* 11521ce7 mov esi, esp */
  ESI = (ESP);
  /* 11521ce9 push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 11521cee call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521cf4u);
  /* 11521cf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521cf9 call 0x115265c0 */
  push32(0x11521cfeu); f_115265c0();
  /* 11521cfe mov esi, esp */
  ESI = (ESP);
  /* 11521d00 push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11521d05 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d0bu);
  /* 11521d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d10 call 0x115265c0 */
  push32(0x11521d15u); f_115265c0();
  /* 11521d15 mov esi, esp */
  ESI = (ESP);
  /* 11521d17 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11521d1c call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d22u);
  /* 11521d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d27 call 0x115265c0 */
  push32(0x11521d2cu); f_115265c0();
  /* 11521d2c mov esi, esp */
  ESI = (ESP);
  /* 11521d2e push 0x11553428 */
  push32((uint32_t)(0x11553428u));
  /* 11521d33 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d39u);
  /* 11521d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d3e call 0x115265c0 */
  push32(0x11521d43u); f_115265c0();
  /* 11521d43 mov esi, esp */
  ESI = (ESP);
  /* 11521d45 push 0x11553420 */
  push32((uint32_t)(0x11553420u));
  /* 11521d4a call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d50u);
  /* 11521d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d55 call 0x115265c0 */
  push32(0x11521d5au); f_115265c0();
  /* 11521d5a mov esi, esp */
  ESI = (ESP);
  /* 11521d5c push 0x11553430 */
  push32((uint32_t)(0x11553430u));
  /* 11521d61 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d67u);
  /* 11521d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d6c call 0x115265c0 */
  push32(0x11521d71u); f_115265c0();
  /* 11521d71 mov esi, esp */
  ESI = (ESP);
  /* 11521d73 push 0x11553548 */
  push32((uint32_t)(0x11553548u));
  /* 11521d78 call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d7eu);
  /* 11521d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d83 call 0x115265c0 */
  push32(0x11521d88u); f_115265c0();
  /* 11521d88 mov esi, esp */
  ESI = (ESP);
  /* 11521d8a push 0x115536e0 */
  push32((uint32_t)(0x115536e0u));
  /* 11521d8f call dword ptr [0x11556528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556528))), 0x11521d95u);
  /* 11521d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521d9a call 0x115265c0 */
  push32(0x11521d9fu); f_115265c0();
  /* 11521d9f mov esi, esp */
  ESI = (ESP);
  /* 11521da1 push 0x1154e048 */
  push32((uint32_t)(0x1154e048u));
  /* 11521da6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11521da8 call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521daeu);
  /* 11521dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521db1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521db3 call 0x115265c0 */
  push32(0x11521db8u); f_115265c0();
  /* 11521db8 mov esi, esp */
  ESI = (ESP);
  /* 11521dba push 0x1154e048 */
  push32((uint32_t)(0x1154e048u));
  /* 11521dbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11521dc1 call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521dc7u);
  /* 11521dc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521dca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521dcc call 0x115265c0 */
  push32(0x11521dd1u); f_115265c0();
  /* 11521dd1 mov esi, esp */
  ESI = (ESP);
  /* 11521dd3 push 0x1154e040 */
  push32((uint32_t)(0x1154e040u));
  /* 11521dd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11521dda call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521de0u);
  /* 11521de0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521de5 call 0x115265c0 */
  push32(0x11521deau); f_115265c0();
  /* 11521dea mov esi, esp */
  ESI = (ESP);
  /* 11521dec push 0x1154e034 */
  push32((uint32_t)(0x1154e034u));
  /* 11521df1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11521df3 call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521df9u);
  /* 11521df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521dfe call 0x115265c0 */
  push32(0x11521e03u); f_115265c0();
  /* 11521e03 mov esi, esp */
  ESI = (ESP);
  /* 11521e05 push 0x1154e028 */
  push32((uint32_t)(0x1154e028u));
  /* 11521e0a push 5 */
  push32((uint32_t)(0x5u));
  /* 11521e0c call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521e12u);
  /* 11521e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e17 call 0x115265c0 */
  push32(0x11521e1cu); f_115265c0();
  /* 11521e1c mov esi, esp */
  ESI = (ESP);
  /* 11521e1e push 0x1154e01c */
  push32((uint32_t)(0x1154e01cu));
  /* 11521e23 push 6 */
  push32((uint32_t)(0x6u));
  /* 11521e25 call dword ptr [0x1155652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155652c))), 0x11521e2bu);
  /* 11521e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e30 call 0x115265c0 */
  push32(0x11521e35u); f_115265c0();
  /* 11521e35 mov esi, esp */
  ESI = (ESP);
  /* 11521e37 push 7 */
  push32((uint32_t)(0x7u));
  /* 11521e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11521e3b call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521e41u);
  /* 11521e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e46 call 0x115265c0 */
  push32(0x11521e4bu); f_115265c0();
  /* 11521e4b mov esi, esp */
  ESI = (ESP);
  /* 11521e4d push 7 */
  push32((uint32_t)(0x7u));
  /* 11521e4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11521e51 call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521e57u);
  /* 11521e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e5c call 0x115265c0 */
  push32(0x11521e61u); f_115265c0();
  /* 11521e61 mov esi, esp */
  ESI = (ESP);
  /* 11521e63 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11521e65 push 3 */
  push32((uint32_t)(0x3u));
  /* 11521e67 call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521e6du);
  /* 11521e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e72 call 0x115265c0 */
  push32(0x11521e77u); f_115265c0();
  /* 11521e77 mov esi, esp */
  ESI = (ESP);
  /* 11521e79 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11521e7b push 4 */
  push32((uint32_t)(0x4u));
  /* 11521e7d call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521e83u);
  /* 11521e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e88 call 0x115265c0 */
  push32(0x11521e8du); f_115265c0();
  /* 11521e8d mov esi, esp */
  ESI = (ESP);
  /* 11521e8f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11521e91 push 5 */
  push32((uint32_t)(0x5u));
  /* 11521e93 call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521e99u);
  /* 11521e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521e9e call 0x115265c0 */
  push32(0x11521ea3u); f_115265c0();
  /* 11521ea3 mov esi, esp */
  ESI = (ESP);
  /* 11521ea5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11521ea7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11521ea9 call dword ptr [0x11556530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556530))), 0x11521eafu);
  /* 11521eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521eb4 call 0x115265c0 */
  push32(0x11521eb9u); f_115265c0();
  /* 11521eb9 mov esi, esp */
  ESI = (ESP);
  /* 11521ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 11521ebd push 0x115534b8 */
  push32((uint32_t)(0x115534b8u));
  /* 11521ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521ec4 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521ecau);
  /* 11521eca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521ecd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ecf call 0x115265c0 */
  push32(0x11521ed4u); f_115265c0();
  /* 11521ed4 mov esi, esp */
  ESI = (ESP);
  /* 11521ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521ed8 push 0x115535f8 */
  push32((uint32_t)(0x115535f8u));
  /* 11521edd push 0 */
  push32((uint32_t)(0x0u));
  /* 11521edf call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521ee5u);
  /* 11521ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521eea call 0x115265c0 */
  push32(0x11521eefu); f_115265c0();
  /* 11521eef mov esi, esp */
  ESI = (ESP);
  /* 11521ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521ef3 push 0x115534c0 */
  push32((uint32_t)(0x115534c0u));
  /* 11521ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521efa call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f00u);
  /* 11521f00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f05 call 0x115265c0 */
  push32(0x11521f0au); f_115265c0();
  /* 11521f0a mov esi, esp */
  ESI = (ESP);
  /* 11521f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f0e push 0x11553608 */
  push32((uint32_t)(0x11553608u));
  /* 11521f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f15 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f1bu);
  /* 11521f1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f20 call 0x115265c0 */
  push32(0x11521f25u); f_115265c0();
  /* 11521f25 mov esi, esp */
  ESI = (ESP);
  /* 11521f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f29 push 0x115534c8 */
  push32((uint32_t)(0x115534c8u));
  /* 11521f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f30 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f36u);
  /* 11521f36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f3b call 0x115265c0 */
  push32(0x11521f40u); f_115265c0();
  /* 11521f40 mov esi, esp */
  ESI = (ESP);
  /* 11521f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f44 push 0x11553610 */
  push32((uint32_t)(0x11553610u));
  /* 11521f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f4b call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f51u);
  /* 11521f51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f56 call 0x115265c0 */
  push32(0x11521f5bu); f_115265c0();
  /* 11521f5b mov esi, esp */
  ESI = (ESP);
  /* 11521f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f5f push 0x115534d0 */
  push32((uint32_t)(0x115534d0u));
  /* 11521f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f66 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f6cu);
  /* 11521f6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f71 call 0x115265c0 */
  push32(0x11521f76u); f_115265c0();
  /* 11521f76 mov esi, esp */
  ESI = (ESP);
  /* 11521f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f7a push 0x11553600 */
  push32((uint32_t)(0x11553600u));
  /* 11521f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f81 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521f87u);
  /* 11521f87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521f8c call 0x115265c0 */
  push32(0x11521f91u); f_115265c0();
  /* 11521f91 mov esi, esp */
  ESI = (ESP);
  /* 11521f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f95 push 0x11553458 */
  push32((uint32_t)(0x11553458u));
  /* 11521f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11521f9c call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521fa2u);
  /* 11521fa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521fa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521fa7 call 0x115265c0 */
  push32(0x11521facu); f_115265c0();
  /* 11521fac mov esi, esp */
  ESI = (ESP);
  /* 11521fae push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fb0 push 0x11553468 */
  push32((uint32_t)(0x11553468u));
  /* 11521fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fb7 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521fbdu);
  /* 11521fbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521fc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521fc2 call 0x115265c0 */
  push32(0x11521fc7u); f_115265c0();
  /* 11521fc7 mov esi, esp */
  ESI = (ESP);
  /* 11521fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fcb push 0x11553440 */
  push32((uint32_t)(0x11553440u));
  /* 11521fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fd2 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521fd8u);
  /* 11521fd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521fdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521fdd call 0x115265c0 */
  push32(0x11521fe2u); f_115265c0();
  /* 11521fe2 mov esi, esp */
  ESI = (ESP);
  /* 11521fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fe6 push 0x11553530 */
  push32((uint32_t)(0x11553530u));
  /* 11521feb push 0 */
  push32((uint32_t)(0x0u));
  /* 11521fed call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11521ff3u);
  /* 11521ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11521ff6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11521ff8 call 0x115265c0 */
  push32(0x11521ffdu); f_115265c0();
  /* 11521ffd mov esi, esp */
  ESI = (ESP);
  /* 11521fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11522001 push 0x11553538 */
  push32((uint32_t)(0x11553538u));
  /* 11522006 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522008 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x1152200eu);
  /* 1152200e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522013 call 0x115265c0 */
  push32(0x11522018u); f_115265c0();
  /* 11522018 mov esi, esp */
  ESI = (ESP);
  /* 1152201a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152201c push 0x11553540 */
  push32((uint32_t)(0x11553540u));
  /* 11522021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522023 call dword ptr [0x11556534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556534))), 0x11522029u);
  /* 11522029 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152202c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152202e call 0x115265c0 */
  push32(0x11522033u); f_115265c0();
  /* 11522033 pop edi */
  EDI = (pop32());
  /* 11522034 pop esi */
  ESI = (pop32());
  /* 11522035 pop ebx */
  EBX = (pop32());
  /* 11522036 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522039 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152203b call 0x115265c0 */
  push32(0x11522040u); f_115265c0();
  /* 11522040 mov esp, ebp */
  ESP = (EBP);
  /* 11522042 pop ebp */
  EBP = (pop32());
  /* 11522043 ret  */
  ESPCHK(0x11521030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x11522450 (67 bytes, 26 insns) */
void f_11522450(void) {
  FTRACE(0x11522450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11522450 push ebp */
  push32((uint32_t)(EBP));
  /* 11522451 mov ebp, esp */
  EBP = (ESP);
  /* 11522453 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11522456 push ebx */
  push32((uint32_t)(EBX));
  /* 11522457 push esi */
  push32((uint32_t)(ESI));
  /* 11522458 push edi */
  push32((uint32_t)(EDI));
  /* 11522459 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1152245c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11522461 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11522466 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11522468 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152246b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152246e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522472 je 0x11522476 */
  if (C.zf) goto L_11522476;
  /* 11522474 jmp 0x1152247b */
  goto L_1152247b;
L_11522476:;
  /* 11522476 call 0x11521005 */
  push32(0x1152247bu); f_11521005();
L_1152247b:;
  /* 1152247b mov eax, 1 */
  EAX = (0x1u);
  /* 11522480 pop edi */
  EDI = (pop32());
  /* 11522481 pop esi */
  ESI = (pop32());
  /* 11522482 pop ebx */
  EBX = (pop32());
  /* 11522483 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522486 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522488 call 0x115265c0 */
  push32(0x1152248du); f_115265c0();
  /* 1152248d mov esp, ebp */
  ESP = (EBP);
  /* 1152248f pop ebp */
  EBP = (pop32());
  /* 11522490 ret 0xc */
  ESPCHK(0x11522450u, _esp0);
  ESP += 16; return;
}

/* FUN_100024b0 @ 0x115224b0 (13007 bytes, 3749 insns) [4 switch table(s)] */
void f_115224b0(void) {
  FTRACE(0x115224b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115224b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115224b1 mov ebp, esp */
  EBP = (ESP);
  /* 115224b3 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115224b6 push ebx */
  push32((uint32_t)(EBX));
  /* 115224b7 push esi */
  push32((uint32_t)(ESI));
  /* 115224b8 push edi */
  push32((uint32_t)(EDI));
  /* 115224b9 lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 115224bc mov ecx, 0x14 */
  ECX = (0x14u);
  /* 115224c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 115224c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115224c8 mov esi, esp */
  ESI = (ESP);
  /* 115224ca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115224cc call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115224d2u);
  /* 115224d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115224d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115224d7 call 0x115265c0 */
  push32(0x115224dcu); f_115265c0();
  /* 115224dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115224e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115224e3 je 0x11523043 */
  if (C.zf) goto L_11523043;
  /* 115224e9 mov esi, esp */
  ESI = (ESP);
  /* 115224eb push 0 */
  push32((uint32_t)(0x0u));
  /* 115224ed push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115224ef call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115224f5u);
  /* 115224f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115224f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115224fa call 0x115265c0 */
  push32(0x115224ffu); f_115265c0();
  /* 115224ff mov esi, esp */
  ESI = (ESP);
  /* 11522501 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11522503 call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11522509u);
  /* 11522509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152250c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152250e call 0x115265c0 */
  push32(0x11522513u); f_115265c0();
  /* 11522513 mov esi, esp */
  ESI = (ESP);
  /* 11522515 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11522517 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x1152251du);
  /* 1152251d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522520 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522522 call 0x115265c0 */
  push32(0x11522527u); f_115265c0();
  /* 11522527 mov esi, esp */
  ESI = (ESP);
  /* 11522529 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1152252b call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11522531u);
  /* 11522531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522534 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522536 call 0x115265c0 */
  push32(0x1152253bu); f_115265c0();
  /* 1152253b mov esi, esp */
  ESI = (ESP);
  /* 1152253d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1152253f call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11522545u);
  /* 11522545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152254a call 0x115265c0 */
  push32(0x1152254fu); f_115265c0();
  /* 1152254f mov esi, esp */
  ESI = (ESP);
  /* 11522551 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11522553 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11522559u);
  /* 11522559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152255c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152255e call 0x115265c0 */
  push32(0x11522563u); f_115265c0();
  /* 11522563 mov esi, esp */
  ESI = (ESP);
  /* 11522565 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11522567 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x1152256du);
  /* 1152256d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522572 call 0x115265c0 */
  push32(0x11522577u); f_115265c0();
  /* 11522577 mov esi, esp */
  ESI = (ESP);
  /* 11522579 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1152257b call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11522581u);
  /* 11522581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522584 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522586 call 0x115265c0 */
  push32(0x1152258bu); f_115265c0();
  /* 1152258b mov esi, esp */
  ESI = (ESP);
  /* 1152258d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1152258f call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11522595u);
  /* 11522595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152259a call 0x115265c0 */
  push32(0x1152259fu); f_115265c0();
  /* 1152259f mov esi, esp */
  ESI = (ESP);
  /* 115225a1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 115225a3 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x115225a9u);
  /* 115225a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115225ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115225ae call 0x115265c0 */
  push32(0x115225b3u); f_115265c0();
  /* 115225b3 mov esi, esp */
  ESI = (ESP);
  /* 115225b5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115225b7 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x115225bdu);
  /* 115225bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115225c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115225c2 call 0x115265c0 */
  push32(0x115225c7u); f_115265c0();
  /* 115225c7 mov esi, esp */
  ESI = (ESP);
  /* 115225c9 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 115225cb call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x115225d1u);
  /* 115225d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115225d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115225d6 call 0x115265c0 */
  push32(0x115225dbu); f_115265c0();
  /* 115225db mov esi, esp */
  ESI = (ESP);
  /* 115225dd push 0x11553528 */
  push32((uint32_t)(0x11553528u));
  /* 115225e2 call dword ptr [0x11556478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556478))), 0x115225e8u);
  /* 115225e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115225eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115225ed call 0x115265c0 */
  push32(0x115225f2u); f_115265c0();
  /* 115225f2 mov esi, esp */
  ESI = (ESP);
  /* 115225f4 push 0x11553520 */
  push32((uint32_t)(0x11553520u));
  /* 115225f9 call dword ptr [0x11556478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556478))), 0x115225ffu);
  /* 115225ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522602 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522604 call 0x115265c0 */
  push32(0x11522609u); f_115265c0();
  /* 11522609 mov esi, esp */
  ESI = (ESP);
  /* 1152260b push 0x11553518 */
  push32((uint32_t)(0x11553518u));
  /* 11522610 call dword ptr [0x1155647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155647c))), 0x11522616u);
  /* 11522616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152261b call 0x115265c0 */
  push32(0x11522620u); f_115265c0();
  /* 11522620 mov esi, esp */
  ESI = (ESP);
  /* 11522622 push 0x11553510 */
  push32((uint32_t)(0x11553510u));
  /* 11522627 call dword ptr [0x11556480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556480))), 0x1152262du);
  /* 1152262d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522632 call 0x115265c0 */
  push32(0x11522637u); f_115265c0();
  /* 11522637 mov esi, esp */
  ESI = (ESP);
  /* 11522639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152263b push 0x11553778 */
  push32((uint32_t)(0x11553778u));
  /* 11522640 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522646u);
  /* 11522646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152264b call 0x115265c0 */
  push32(0x11522650u); f_115265c0();
  /* 11522650 mov esi, esp */
  ESI = (ESP);
  /* 11522652 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522654 push 0x11553708 */
  push32((uint32_t)(0x11553708u));
  /* 11522659 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152265fu);
  /* 1152265f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522664 call 0x115265c0 */
  push32(0x11522669u); f_115265c0();
  /* 11522669 mov esi, esp */
  ESI = (ESP);
  /* 1152266b push 1 */
  push32((uint32_t)(0x1u));
  /* 1152266d push 1 */
  push32((uint32_t)(0x1u));
  /* 1152266f call dword ptr [0x11556488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556488))), 0x11522675u);
  /* 11522675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522678 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152267a call 0x115265c0 */
  push32(0x1152267fu); f_115265c0();
  /* 1152267f mov esi, esp */
  ESI = (ESP);
  /* 11522681 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522683 push 0x11553780 */
  push32((uint32_t)(0x11553780u));
  /* 11522688 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152268eu);
  /* 1152268e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522691 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522693 call 0x115265c0 */
  push32(0x11522698u); f_115265c0();
  /* 11522698 mov esi, esp */
  ESI = (ESP);
  /* 1152269a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152269c push 0x11553718 */
  push32((uint32_t)(0x11553718u));
  /* 115226a1 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115226a7u);
  /* 115226a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115226aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115226ac call 0x115265c0 */
  push32(0x115226b1u); f_115265c0();
  /* 115226b1 mov esi, esp */
  ESI = (ESP);
  /* 115226b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115226b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115226b7 call dword ptr [0x11556488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556488))), 0x115226bdu);
  /* 115226bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115226c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115226c2 call 0x115265c0 */
  push32(0x115226c7u); f_115265c0();
  /* 115226c7 mov esi, esp */
  ESI = (ESP);
  /* 115226c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115226cb push 0x11553728 */
  push32((uint32_t)(0x11553728u));
  /* 115226d0 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115226d6u);
  /* 115226d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115226d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115226db call 0x115265c0 */
  push32(0x115226e0u); f_115265c0();
  /* 115226e0 mov esi, esp */
  ESI = (ESP);
  /* 115226e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115226e4 push 0x11553720 */
  push32((uint32_t)(0x11553720u));
  /* 115226e9 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115226efu);
  /* 115226ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115226f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115226f4 call 0x115265c0 */
  push32(0x115226f9u); f_115265c0();
  /* 115226f9 mov esi, esp */
  ESI = (ESP);
  /* 115226fb push 1 */
  push32((uint32_t)(0x1u));
  /* 115226fd push 0x11553730 */
  push32((uint32_t)(0x11553730u));
  /* 11522702 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522708u);
  /* 11522708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152270b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152270d call 0x115265c0 */
  push32(0x11522712u); f_115265c0();
  /* 11522712 mov esi, esp */
  ESI = (ESP);
  /* 11522714 push 3 */
  push32((uint32_t)(0x3u));
  /* 11522716 call dword ptr [0x1155648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155648c))), 0x1152271cu);
  /* 1152271c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152271f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522721 call 0x115265c0 */
  push32(0x11522726u); f_115265c0();
  /* 11522726 mov esi, esp */
  ESI = (ESP);
  /* 11522728 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152272a call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11522730u);
  /* 11522730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522735 call 0x115265c0 */
  push32(0x1152273au); f_115265c0();
  /* 1152273a mov esi, esp */
  ESI = (ESP);
  /* 1152273c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152273e call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11522744u);
  /* 11522744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522749 call 0x115265c0 */
  push32(0x1152274eu); f_115265c0();
  /* 1152274e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11522751 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522755 ja 0x11522df8 */
  if ((!C.cf&&!C.zf)) goto L_11522df8;
  /* 1152275b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152275e jmp dword ptr [eax*4 + 0x1152577f] */
  switch (EAX) {
    case 0: goto L_11522765;
    case 1: goto L_115229dd;
    case 2: goto L_11522ba6;
    case 3: goto L_11522d56;
    case 4: goto L_115242aa;
    case 5: goto L_11524303;
    case 6: goto L_1152435c;
    case 7: goto L_115243b2;
    case 8: goto L_1152467e;
    case 9: goto L_115246dd;
    case 10: goto L_1152473c;
    case 11: goto L_11524798;
    case 12: goto L_11524a38;
    case 13: goto L_11524a91;
    case 14: goto L_11524aea;
    case 15: goto L_11524b40;
    default: x86_unimpl("switch@0x1152275e out of table"); return;
  }
L_11522765:;
  /* 11522765 mov esi, esp */
  ESI = (ESP);
  /* 11522767 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1152276c push 3 */
  push32((uint32_t)(0x3u));
  /* 1152276e push 0 */
  push32((uint32_t)(0x0u));
  /* 11522770 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522776u);
  /* 11522776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152277b call 0x115265c0 */
  push32(0x11522780u); f_115265c0();
  /* 11522780 mov esi, esp */
  ESI = (ESP);
  /* 11522782 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11522787 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152278b call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522791u);
  /* 11522791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522796 call 0x115265c0 */
  push32(0x1152279bu); f_115265c0();
  /* 1152279b mov esi, esp */
  ESI = (ESP);
  /* 1152279d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115227a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115227a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115227a6 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115227acu);
  /* 115227ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115227af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115227b1 call 0x115265c0 */
  push32(0x115227b6u); f_115265c0();
  /* 115227b6 mov esi, esp */
  ESI = (ESP);
  /* 115227b8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115227bd push 1 */
  push32((uint32_t)(0x1u));
  /* 115227bf push 0 */
  push32((uint32_t)(0x0u));
  /* 115227c1 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115227c7u);
  /* 115227c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115227ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115227cc call 0x115265c0 */
  push32(0x115227d1u); f_115265c0();
  /* 115227d1 mov esi, esp */
  ESI = (ESP);
  /* 115227d3 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 115227d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 115227da push 0 */
  push32((uint32_t)(0x0u));
  /* 115227dc call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115227e2u);
  /* 115227e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115227e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115227e7 call 0x115265c0 */
  push32(0x115227ecu); f_115265c0();
  /* 115227ec mov esi, esp */
  ESI = (ESP);
  /* 115227ee push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 115227f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 115227f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115227f7 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115227fdu);
  /* 115227fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522802 call 0x115265c0 */
  push32(0x11522807u); f_115265c0();
  /* 11522807 mov esi, esp */
  ESI = (ESP);
  /* 11522809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152280b push 0x11553650 */
  push32((uint32_t)(0x11553650u));
  /* 11522810 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522816u);
  /* 11522816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152281b call 0x115265c0 */
  push32(0x11522820u); f_115265c0();
  /* 11522820 mov esi, esp */
  ESI = (ESP);
  /* 11522822 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522824 push 0x11553658 */
  push32((uint32_t)(0x11553658u));
  /* 11522829 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152282fu);
  /* 1152282f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522834 call 0x115265c0 */
  push32(0x11522839u); f_115265c0();
  /* 11522839 mov esi, esp */
  ESI = (ESP);
  /* 1152283b push 1 */
  push32((uint32_t)(0x1u));
  /* 1152283d push 0x11553660 */
  push32((uint32_t)(0x11553660u));
  /* 11522842 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522848u);
  /* 11522848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152284b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152284d call 0x115265c0 */
  push32(0x11522852u); f_115265c0();
  /* 11522852 mov esi, esp */
  ESI = (ESP);
  /* 11522854 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522856 push 0x11553670 */
  push32((uint32_t)(0x11553670u));
  /* 1152285b call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522861u);
  /* 11522861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522866 call 0x115265c0 */
  push32(0x1152286bu); f_115265c0();
  /* 1152286b mov esi, esp */
  ESI = (ESP);
  /* 1152286d push 5 */
  push32((uint32_t)(0x5u));
  /* 1152286f call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x11522875u);
  /* 11522875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152287a call 0x115265c0 */
  push32(0x1152287fu); f_115265c0();
  /* 1152287f mov esi, esp */
  ESI = (ESP);
  /* 11522881 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522883 push 0x11553598 */
  push32((uint32_t)(0x11553598u));
  /* 11522888 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152288eu);
  /* 1152288e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522893 call 0x115265c0 */
  push32(0x11522898u); f_115265c0();
  /* 11522898 mov esi, esp */
  ESI = (ESP);
  /* 1152289a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152289c push 0x11553620 */
  push32((uint32_t)(0x11553620u));
  /* 115228a1 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115228a7u);
  /* 115228a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115228aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115228ac call 0x115265c0 */
  push32(0x115228b1u); f_115265c0();
  /* 115228b1 mov esi, esp */
  ESI = (ESP);
  /* 115228b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115228b5 push 0x11553588 */
  push32((uint32_t)(0x11553588u));
  /* 115228ba call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115228c0u);
  /* 115228c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115228c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115228c5 call 0x115265c0 */
  push32(0x115228cau); f_115265c0();
  /* 115228ca mov esi, esp */
  ESI = (ESP);
  /* 115228cc push 1 */
  push32((uint32_t)(0x1u));
  /* 115228ce push 0x11553618 */
  push32((uint32_t)(0x11553618u));
  /* 115228d3 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115228d9u);
  /* 115228d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115228dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115228de call 0x115265c0 */
  push32(0x115228e3u); f_115265c0();
  /* 115228e3 mov esi, esp */
  ESI = (ESP);
  /* 115228e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115228e7 push 0x115535a8 */
  push32((uint32_t)(0x115535a8u));
  /* 115228ec call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115228f2u);
  /* 115228f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115228f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115228f7 call 0x115265c0 */
  push32(0x115228fcu); f_115265c0();
  /* 115228fc mov esi, esp */
  ESI = (ESP);
  /* 115228fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11522900 push 0x11553630 */
  push32((uint32_t)(0x11553630u));
  /* 11522905 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152290bu);
  /* 1152290b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152290e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522910 call 0x115265c0 */
  push32(0x11522915u); f_115265c0();
  /* 11522915 mov esi, esp */
  ESI = (ESP);
  /* 11522917 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522919 push 0x115535a0 */
  push32((uint32_t)(0x115535a0u));
  /* 1152291e call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522924u);
  /* 11522924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522927 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522929 call 0x115265c0 */
  push32(0x1152292eu); f_115265c0();
  /* 1152292e mov esi, esp */
  ESI = (ESP);
  /* 11522930 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522932 push 0x11553628 */
  push32((uint32_t)(0x11553628u));
  /* 11522937 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152293du);
  /* 1152293d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522942 call 0x115265c0 */
  push32(0x11522947u); f_115265c0();
  /* 11522947 mov esi, esp */
  ESI = (ESP);
  /* 11522949 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152294b push 0x115535b8 */
  push32((uint32_t)(0x115535b8u));
  /* 11522950 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522956u);
  /* 11522956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152295b call 0x115265c0 */
  push32(0x11522960u); f_115265c0();
  /* 11522960 mov esi, esp */
  ESI = (ESP);
  /* 11522962 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522964 push 0x11553638 */
  push32((uint32_t)(0x11553638u));
  /* 11522969 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152296fu);
  /* 1152296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522974 call 0x115265c0 */
  push32(0x11522979u); f_115265c0();
  /* 11522979 mov esi, esp */
  ESI = (ESP);
  /* 1152297b push 1 */
  push32((uint32_t)(0x1u));
  /* 1152297d push 0x11553550 */
  push32((uint32_t)(0x11553550u));
  /* 11522982 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522988u);
  /* 11522988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152298b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152298d call 0x115265c0 */
  push32(0x11522992u); f_115265c0();
  /* 11522992 mov esi, esp */
  ESI = (ESP);
  /* 11522994 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522996 push 0x11553560 */
  push32((uint32_t)(0x11553560u));
  /* 1152299b call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115229a1u);
  /* 115229a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115229a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115229a6 call 0x115265c0 */
  push32(0x115229abu); f_115265c0();
  /* 115229ab mov esi, esp */
  ESI = (ESP);
  /* 115229ad push 1 */
  push32((uint32_t)(0x1u));
  /* 115229af push 0x11553558 */
  push32((uint32_t)(0x11553558u));
  /* 115229b4 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115229bau);
  /* 115229ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115229bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115229bf call 0x115265c0 */
  push32(0x115229c4u); f_115265c0();
  /* 115229c4 mov esi, esp */
  ESI = (ESP);
  /* 115229c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 115229c8 call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x115229ceu);
  /* 115229ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115229d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115229d3 call 0x115265c0 */
  push32(0x115229d8u); f_115265c0();
  /* 115229d8 jmp 0x11522df8 */
  goto L_11522df8;
L_115229dd:;
  /* 115229dd mov esi, esp */
  ESI = (ESP);
  /* 115229df push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115229e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 115229e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115229e8 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115229eeu);
  /* 115229ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115229f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115229f3 call 0x115265c0 */
  push32(0x115229f8u); f_115265c0();
  /* 115229f8 mov esi, esp */
  ESI = (ESP);
  /* 115229fa push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 115229ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a03 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522a09u);
  /* 11522a09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a0e call 0x115265c0 */
  push32(0x11522a13u); f_115265c0();
  /* 11522a13 mov esi, esp */
  ESI = (ESP);
  /* 11522a15 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11522a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a1e call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522a24u);
  /* 11522a24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a29 call 0x115265c0 */
  push32(0x11522a2eu); f_115265c0();
  /* 11522a2e mov esi, esp */
  ESI = (ESP);
  /* 11522a30 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522a35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a39 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522a3fu);
  /* 11522a3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a44 call 0x115265c0 */
  push32(0x11522a49u); f_115265c0();
  /* 11522a49 mov esi, esp */
  ESI = (ESP);
  /* 11522a4b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11522a50 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a54 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522a5au);
  /* 11522a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a5f call 0x115265c0 */
  push32(0x11522a64u); f_115265c0();
  /* 11522a64 mov esi, esp */
  ESI = (ESP);
  /* 11522a66 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11522a6b push 4 */
  push32((uint32_t)(0x4u));
  /* 11522a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a6f call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522a75u);
  /* 11522a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a7a call 0x115265c0 */
  push32(0x11522a7fu); f_115265c0();
  /* 11522a7f mov esi, esp */
  ESI = (ESP);
  /* 11522a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522a83 push 0x11553650 */
  push32((uint32_t)(0x11553650u));
  /* 11522a88 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522a8eu);
  /* 11522a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522a91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522a93 call 0x115265c0 */
  push32(0x11522a98u); f_115265c0();
  /* 11522a98 mov esi, esp */
  ESI = (ESP);
  /* 11522a9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11522a9c push 0x11553670 */
  push32((uint32_t)(0x11553670u));
  /* 11522aa1 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522aa7u);
  /* 11522aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522aac call 0x115265c0 */
  push32(0x11522ab1u); f_115265c0();
  /* 11522ab1 mov esi, esp */
  ESI = (ESP);
  /* 11522ab3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522ab5 call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x11522abbu);
  /* 11522abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ac0 call 0x115265c0 */
  push32(0x11522ac5u); f_115265c0();
  /* 11522ac5 mov esi, esp */
  ESI = (ESP);
  /* 11522ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522ac9 push 0x11553620 */
  push32((uint32_t)(0x11553620u));
  /* 11522ace call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522ad4u);
  /* 11522ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ad9 call 0x115265c0 */
  push32(0x11522adeu); f_115265c0();
  /* 11522ade mov esi, esp */
  ESI = (ESP);
  /* 11522ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522ae2 push 0x11553618 */
  push32((uint32_t)(0x11553618u));
  /* 11522ae7 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522aedu);
  /* 11522aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522af2 call 0x115265c0 */
  push32(0x11522af7u); f_115265c0();
  /* 11522af7 mov esi, esp */
  ESI = (ESP);
  /* 11522af9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522afb push 0x11553630 */
  push32((uint32_t)(0x11553630u));
  /* 11522b00 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b06u);
  /* 11522b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b0b call 0x115265c0 */
  push32(0x11522b10u); f_115265c0();
  /* 11522b10 mov esi, esp */
  ESI = (ESP);
  /* 11522b12 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522b14 push 0x11553628 */
  push32((uint32_t)(0x11553628u));
  /* 11522b19 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b1fu);
  /* 11522b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b24 call 0x115265c0 */
  push32(0x11522b29u); f_115265c0();
  /* 11522b29 mov esi, esp */
  ESI = (ESP);
  /* 11522b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11522b2d push 0x11553638 */
  push32((uint32_t)(0x11553638u));
  /* 11522b32 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b38u);
  /* 11522b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b3d call 0x115265c0 */
  push32(0x11522b42u); f_115265c0();
  /* 11522b42 mov esi, esp */
  ESI = (ESP);
  /* 11522b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522b46 push 0x11553550 */
  push32((uint32_t)(0x11553550u));
  /* 11522b4b call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b51u);
  /* 11522b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b56 call 0x115265c0 */
  push32(0x11522b5bu); f_115265c0();
  /* 11522b5b mov esi, esp */
  ESI = (ESP);
  /* 11522b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11522b5f push 0x11553560 */
  push32((uint32_t)(0x11553560u));
  /* 11522b64 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b6au);
  /* 11522b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b6f call 0x115265c0 */
  push32(0x11522b74u); f_115265c0();
  /* 11522b74 mov esi, esp */
  ESI = (ESP);
  /* 11522b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522b78 push 0x11553558 */
  push32((uint32_t)(0x11553558u));
  /* 11522b7d call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522b83u);
  /* 11522b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b88 call 0x115265c0 */
  push32(0x11522b8du); f_115265c0();
  /* 11522b8d mov esi, esp */
  ESI = (ESP);
  /* 11522b8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11522b91 call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x11522b97u);
  /* 11522b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522b9c call 0x115265c0 */
  push32(0x11522ba1u); f_115265c0();
  /* 11522ba1 jmp 0x11522df8 */
  goto L_11522df8;
L_11522ba6:;
  /* 11522ba6 mov esi, esp */
  ESI = (ESP);
  /* 11522ba8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522bad push 3 */
  push32((uint32_t)(0x3u));
  /* 11522baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11522bb1 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522bb7u);
  /* 11522bb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522bbc call 0x115265c0 */
  push32(0x11522bc1u); f_115265c0();
  /* 11522bc1 mov esi, esp */
  ESI = (ESP);
  /* 11522bc3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522bca push 0 */
  push32((uint32_t)(0x0u));
  /* 11522bcc call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522bd2u);
  /* 11522bd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522bd7 call 0x115265c0 */
  push32(0x11522bdcu); f_115265c0();
  /* 11522bdc mov esi, esp */
  ESI = (ESP);
  /* 11522bde push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522be3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11522be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522be7 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522bedu);
  /* 11522bed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522bf2 call 0x115265c0 */
  push32(0x11522bf7u); f_115265c0();
  /* 11522bf7 mov esi, esp */
  ESI = (ESP);
  /* 11522bf9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 11522c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522c02 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522c08u);
  /* 11522c08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c0d call 0x115265c0 */
  push32(0x11522c12u); f_115265c0();
  /* 11522c12 mov esi, esp */
  ESI = (ESP);
  /* 11522c14 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11522c19 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11522c1d call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522c23u);
  /* 11522c23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c28 call 0x115265c0 */
  push32(0x11522c2du); f_115265c0();
  /* 11522c2d mov esi, esp */
  ESI = (ESP);
  /* 11522c2f push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11522c34 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522c38 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522c3eu);
  /* 11522c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c43 call 0x115265c0 */
  push32(0x11522c48u); f_115265c0();
  /* 11522c48 mov esi, esp */
  ESI = (ESP);
  /* 11522c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11522c4c push 0x11553658 */
  push32((uint32_t)(0x11553658u));
  /* 11522c51 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522c57u);
  /* 11522c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c5c call 0x115265c0 */
  push32(0x11522c61u); f_115265c0();
  /* 11522c61 mov esi, esp */
  ESI = (ESP);
  /* 11522c63 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522c65 call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x11522c6bu);
  /* 11522c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c70 call 0x115265c0 */
  push32(0x11522c75u); f_115265c0();
  /* 11522c75 mov esi, esp */
  ESI = (ESP);
  /* 11522c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522c79 push 0x11553598 */
  push32((uint32_t)(0x11553598u));
  /* 11522c7e call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522c84u);
  /* 11522c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522c89 call 0x115265c0 */
  push32(0x11522c8eu); f_115265c0();
  /* 11522c8e mov esi, esp */
  ESI = (ESP);
  /* 11522c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522c92 push 0x11553588 */
  push32((uint32_t)(0x11553588u));
  /* 11522c97 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522c9du);
  /* 11522c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ca2 call 0x115265c0 */
  push32(0x11522ca7u); f_115265c0();
  /* 11522ca7 mov esi, esp */
  ESI = (ESP);
  /* 11522ca9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522cab push 0x115535a8 */
  push32((uint32_t)(0x115535a8u));
  /* 11522cb0 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522cb6u);
  /* 11522cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522cbb call 0x115265c0 */
  push32(0x11522cc0u); f_115265c0();
  /* 11522cc0 mov esi, esp */
  ESI = (ESP);
  /* 11522cc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522cc4 push 0x115535a0 */
  push32((uint32_t)(0x115535a0u));
  /* 11522cc9 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522ccfu);
  /* 11522ccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522cd4 call 0x115265c0 */
  push32(0x11522cd9u); f_115265c0();
  /* 11522cd9 mov esi, esp */
  ESI = (ESP);
  /* 11522cdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11522cdd push 0x115535b8 */
  push32((uint32_t)(0x115535b8u));
  /* 11522ce2 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522ce8u);
  /* 11522ce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522ceb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ced call 0x115265c0 */
  push32(0x11522cf2u); f_115265c0();
  /* 11522cf2 mov esi, esp */
  ESI = (ESP);
  /* 11522cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522cf6 push 0x11553550 */
  push32((uint32_t)(0x11553550u));
  /* 11522cfb call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522d01u);
  /* 11522d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d06 call 0x115265c0 */
  push32(0x11522d0bu); f_115265c0();
  /* 11522d0b mov esi, esp */
  ESI = (ESP);
  /* 11522d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11522d0f push 0x11553560 */
  push32((uint32_t)(0x11553560u));
  /* 11522d14 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522d1au);
  /* 11522d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d1f call 0x115265c0 */
  push32(0x11522d24u); f_115265c0();
  /* 11522d24 mov esi, esp */
  ESI = (ESP);
  /* 11522d26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522d28 push 0x11553558 */
  push32((uint32_t)(0x11553558u));
  /* 11522d2d call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11522d33u);
  /* 11522d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d38 call 0x115265c0 */
  push32(0x11522d3du); f_115265c0();
  /* 11522d3d mov esi, esp */
  ESI = (ESP);
  /* 11522d3f push 3 */
  push32((uint32_t)(0x3u));
  /* 11522d41 call dword ptr [0x1155649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155649c))), 0x11522d47u);
  /* 11522d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d4c call 0x115265c0 */
  push32(0x11522d51u); f_115265c0();
  /* 11522d51 jmp 0x11522df8 */
  goto L_11522df8;
L_11522d56:;
  /* 11522d56 mov esi, esp */
  ESI = (ESP);
  /* 11522d58 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522d5d push 3 */
  push32((uint32_t)(0x3u));
  /* 11522d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11522d61 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522d67u);
  /* 11522d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d6c call 0x115265c0 */
  push32(0x11522d71u); f_115265c0();
  /* 11522d71 mov esi, esp */
  ESI = (ESP);
  /* 11522d73 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11522d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11522d7c call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522d82u);
  /* 11522d82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522d87 call 0x115265c0 */
  push32(0x11522d8cu); f_115265c0();
  /* 11522d8c mov esi, esp */
  ESI = (ESP);
  /* 11522d8e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522d93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11522d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522d97 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522d9du);
  /* 11522d9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522da2 call 0x115265c0 */
  push32(0x11522da7u); f_115265c0();
  /* 11522da7 mov esi, esp */
  ESI = (ESP);
  /* 11522da9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522dae push 1 */
  push32((uint32_t)(0x1u));
  /* 11522db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522db2 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522db8u);
  /* 11522db8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522dbd call 0x115265c0 */
  push32(0x11522dc2u); f_115265c0();
  /* 11522dc2 mov esi, esp */
  ESI = (ESP);
  /* 11522dc4 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11522dc9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11522dcd call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522dd3u);
  /* 11522dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522dd8 call 0x115265c0 */
  push32(0x11522dddu); f_115265c0();
  /* 11522ddd mov esi, esp */
  ESI = (ESP);
  /* 11522ddf push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11522de4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522de8 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522deeu);
  /* 11522dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522df3 call 0x115265c0 */
  push32(0x11522df8u); f_115265c0();
L_11522df8:;
  /* 11522df8 mov esi, esp */
  ESI = (ESP);
  /* 11522dfa push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11522dff push 6 */
  push32((uint32_t)(0x6u));
  /* 11522e01 call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11522e07u);
  /* 11522e07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e0c call 0x115265c0 */
  push32(0x11522e11u); f_115265c0();
  /* 11522e11 mov esi, esp */
  ESI = (ESP);
  /* 11522e13 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11522e18 push 7 */
  push32((uint32_t)(0x7u));
  /* 11522e1a call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11522e20u);
  /* 11522e20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e25 call 0x115265c0 */
  push32(0x11522e2au); f_115265c0();
  /* 11522e2a mov esi, esp */
  ESI = (ESP);
  /* 11522e2c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11522e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522e33 call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11522e39u);
  /* 11522e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e3e call 0x115265c0 */
  push32(0x11522e43u); f_115265c0();
  /* 11522e43 mov esi, esp */
  ESI = (ESP);
  /* 11522e45 push 0x1154e5ec */
  push32((uint32_t)(0x1154e5ecu));
  /* 11522e4a push 0x1154e3a8 */
  push32((uint32_t)(0x1154e3a8u));
  /* 11522e4f call dword ptr [0x115564a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a4))), 0x11522e55u);
  /* 11522e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e5a call 0x115265c0 */
  push32(0x11522e5fu); f_115265c0();
  /* 11522e5f mov esi, esp */
  ESI = (ESP);
  /* 11522e61 push 0x1154e5e0 */
  push32((uint32_t)(0x1154e5e0u));
  /* 11522e66 push 0x1154e3a8 */
  push32((uint32_t)(0x1154e3a8u));
  /* 11522e6b call dword ptr [0x115564a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a4))), 0x11522e71u);
  /* 11522e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e76 call 0x115265c0 */
  push32(0x11522e7bu); f_115265c0();
  /* 11522e7b mov esi, esp */
  ESI = (ESP);
  /* 11522e7d push 0x1154e5d4 */
  push32((uint32_t)(0x1154e5d4u));
  /* 11522e82 push 0x1154e3a8 */
  push32((uint32_t)(0x1154e3a8u));
  /* 11522e87 call dword ptr [0x115564a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a4))), 0x11522e8du);
  /* 11522e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522e92 call 0x115265c0 */
  push32(0x11522e97u); f_115265c0();
  /* 11522e97 mov esi, esp */
  ESI = (ESP);
  /* 11522e99 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522e9e push 3 */
  push32((uint32_t)(0x3u));
  /* 11522ea0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522ea2 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522ea8u);
  /* 11522ea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ead call 0x115265c0 */
  push32(0x11522eb2u); f_115265c0();
  /* 11522eb2 mov esi, esp */
  ESI = (ESP);
  /* 11522eb4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11522ebb push 4 */
  push32((uint32_t)(0x4u));
  /* 11522ebd call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522ec3u);
  /* 11522ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ec8 call 0x115265c0 */
  push32(0x11522ecdu); f_115265c0();
  /* 11522ecd mov esi, esp */
  ESI = (ESP);
  /* 11522ecf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522ed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11522ed6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522ed8 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522edeu);
  /* 11522ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522ee3 call 0x115265c0 */
  push32(0x11522ee8u); f_115265c0();
  /* 11522ee8 mov esi, esp */
  ESI = (ESP);
  /* 11522eea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522eef push 1 */
  push32((uint32_t)(0x1u));
  /* 11522ef1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522ef3 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522ef9u);
  /* 11522ef9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522efe call 0x115265c0 */
  push32(0x11522f03u); f_115265c0();
  /* 11522f03 mov esi, esp */
  ESI = (ESP);
  /* 11522f05 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522f0a push 5 */
  push32((uint32_t)(0x5u));
  /* 11522f0c push 4 */
  push32((uint32_t)(0x4u));
  /* 11522f0e call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522f14u);
  /* 11522f14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f19 call 0x115265c0 */
  push32(0x11522f1eu); f_115265c0();
  /* 11522f1e mov esi, esp */
  ESI = (ESP);
  /* 11522f20 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522f25 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522f27 push 4 */
  push32((uint32_t)(0x4u));
  /* 11522f29 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522f2fu);
  /* 11522f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f34 call 0x115265c0 */
  push32(0x11522f39u); f_115265c0();
  /* 11522f39 mov esi, esp */
  ESI = (ESP);
  /* 11522f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11522f3d call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11522f43u);
  /* 11522f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f48 call 0x115265c0 */
  push32(0x11522f4du); f_115265c0();
  /* 11522f4d mov esi, esp */
  ESI = (ESP);
  /* 11522f4f push eax */
  push32((uint32_t)(EAX));
  /* 11522f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11522f52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522f54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522f56 push 0x1154e5c8 */
  push32((uint32_t)(0x1154e5c8u));
  /* 11522f5b push 4 */
  push32((uint32_t)(0x4u));
  /* 11522f5d call dword ptr [0x115564a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a8))), 0x11522f63u);
  /* 11522f63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f68 call 0x115265c0 */
  push32(0x11522f6du); f_115265c0();
  /* 11522f6d mov esi, esp */
  ESI = (ESP);
  /* 11522f6f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522f74 push 3 */
  push32((uint32_t)(0x3u));
  /* 11522f76 push 6 */
  push32((uint32_t)(0x6u));
  /* 11522f78 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522f7eu);
  /* 11522f7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f83 call 0x115265c0 */
  push32(0x11522f88u); f_115265c0();
  /* 11522f88 mov esi, esp */
  ESI = (ESP);
  /* 11522f8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11522f91 push 6 */
  push32((uint32_t)(0x6u));
  /* 11522f93 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522f99u);
  /* 11522f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522f9e call 0x115265c0 */
  push32(0x11522fa3u); f_115265c0();
  /* 11522fa3 mov esi, esp */
  ESI = (ESP);
  /* 11522fa5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522faa push 2 */
  push32((uint32_t)(0x2u));
  /* 11522fac push 6 */
  push32((uint32_t)(0x6u));
  /* 11522fae call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522fb4u);
  /* 11522fb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522fb9 call 0x115265c0 */
  push32(0x11522fbeu); f_115265c0();
  /* 11522fbe mov esi, esp */
  ESI = (ESP);
  /* 11522fc0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11522fc7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11522fc9 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522fcfu);
  /* 11522fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522fd4 call 0x115265c0 */
  push32(0x11522fd9u); f_115265c0();
  /* 11522fd9 mov esi, esp */
  ESI = (ESP);
  /* 11522fdb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522fe0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11522fe2 push 6 */
  push32((uint32_t)(0x6u));
  /* 11522fe4 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11522feau);
  /* 11522fea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11522fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11522fef call 0x115265c0 */
  push32(0x11522ff4u); f_115265c0();
  /* 11522ff4 mov esi, esp */
  ESI = (ESP);
  /* 11522ff6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11522ffb push 4 */
  push32((uint32_t)(0x4u));
  /* 11522ffd push 6 */
  push32((uint32_t)(0x6u));
  /* 11522fff call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11523005u);
  /* 11523005 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523008 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152300a call 0x115265c0 */
  push32(0x1152300fu); f_115265c0();
  /* 1152300f mov esi, esp */
  ESI = (ESP);
  /* 11523011 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523013 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523019u);
  /* 11523019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152301c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152301e call 0x115265c0 */
  push32(0x11523023u); f_115265c0();
  /* 11523023 mov esi, esp */
  ESI = (ESP);
  /* 11523025 push eax */
  push32((uint32_t)(EAX));
  /* 11523026 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523028 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152302a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152302c push 0x1154e5bc */
  push32((uint32_t)(0x1154e5bcu));
  /* 11523031 push 6 */
  push32((uint32_t)(0x6u));
  /* 11523033 call dword ptr [0x115564a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a8))), 0x11523039u);
  /* 11523039 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152303c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152303e call 0x115265c0 */
  push32(0x11523043u); f_115265c0();
L_11523043:;
  /* 11523043 mov esi, esp */
  ESI = (ESP);
  /* 11523045 push 0x11553478 */
  push32((uint32_t)(0x11553478u));
  /* 1152304a push 0x115533e0 */
  push32((uint32_t)(0x115533e0u));
  /* 1152304f call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523055u);
  /* 11523055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523058 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152305a call 0x115265c0 */
  push32(0x1152305fu); f_115265c0();
  /* 1152305f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523061 jle 0x1152310e */
  if ((C.zf||C.sf!=C.of)) goto L_1152310e;
  /* 11523067 mov esi, esp */
  ESI = (ESP);
  /* 11523069 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152306b push 0x11553478 */
  push32((uint32_t)(0x11553478u));
  /* 11523070 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523076u);
  /* 11523076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152307b call 0x115265c0 */
  push32(0x11523080u); f_115265c0();
  /* 11523080 mov esi, esp */
  ESI = (ESP);
  /* 11523082 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523084 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11523086 push 0x115533e8 */
  push32((uint32_t)(0x115533e8u));
  /* 1152308b push 3 */
  push32((uint32_t)(0x3u));
  /* 1152308d call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523093u);
  /* 11523093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523098 call 0x115265c0 */
  push32(0x1152309du); f_115265c0();
  /* 1152309d mov esi, esp */
  ESI = (ESP);
  /* 1152309f push 2 */
  push32((uint32_t)(0x2u));
  /* 115230a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115230a3 push 0x115533f0 */
  push32((uint32_t)(0x115533f0u));
  /* 115230a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115230aa call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115230b0u);
  /* 115230b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115230b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115230b5 call 0x115265c0 */
  push32(0x115230bau); f_115265c0();
  /* 115230ba mov esi, esp */
  ESI = (ESP);
  /* 115230bc push 2 */
  push32((uint32_t)(0x2u));
  /* 115230be push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 115230c3 push 0x115533f8 */
  push32((uint32_t)(0x115533f8u));
  /* 115230c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115230ca call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115230d0u);
  /* 115230d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115230d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115230d5 call 0x115265c0 */
  push32(0x115230dau); f_115265c0();
  /* 115230da mov esi, esp */
  ESI = (ESP);
  /* 115230dc push 2 */
  push32((uint32_t)(0x2u));
  /* 115230de push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115230e3 push 0x115533e0 */
  push32((uint32_t)(0x115533e0u));
  /* 115230e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115230ea call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115230f0u);
  /* 115230f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115230f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115230f5 call 0x115265c0 */
  push32(0x115230fau); f_115265c0();
  /* 115230fa mov esi, esp */
  ESI = (ESP);
  /* 115230fc push 3 */
  push32((uint32_t)(0x3u));
  /* 115230fe call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11523104u);
  /* 11523104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523107 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523109 call 0x115265c0 */
  push32(0x1152310eu); f_115265c0();
L_1152310e:;
  /* 1152310e mov esi, esp */
  ESI = (ESP);
  /* 11523110 push 0x11553488 */
  push32((uint32_t)(0x11553488u));
  /* 11523115 push 0x115533e8 */
  push32((uint32_t)(0x115533e8u));
  /* 1152311a call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523120u);
  /* 11523120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523125 call 0x115265c0 */
  push32(0x1152312au); f_115265c0();
  /* 1152312a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152312c jle 0x115231d9 */
  if ((C.zf||C.sf!=C.of)) goto L_115231d9;
  /* 11523132 mov esi, esp */
  ESI = (ESP);
  /* 11523134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523136 push 0x11553488 */
  push32((uint32_t)(0x11553488u));
  /* 1152313b call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523141u);
  /* 11523141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523146 call 0x115265c0 */
  push32(0x1152314bu); f_115265c0();
  /* 1152314b mov esi, esp */
  ESI = (ESP);
  /* 1152314d push 2 */
  push32((uint32_t)(0x2u));
  /* 1152314f push 0 */
  push32((uint32_t)(0x0u));
  /* 11523151 push 0x115533f0 */
  push32((uint32_t)(0x115533f0u));
  /* 11523156 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523158 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x1152315eu);
  /* 1152315e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523163 call 0x115265c0 */
  push32(0x11523168u); f_115265c0();
  /* 11523168 mov esi, esp */
  ESI = (ESP);
  /* 1152316a push 2 */
  push32((uint32_t)(0x2u));
  /* 1152316c push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11523171 push 0x115533f8 */
  push32((uint32_t)(0x115533f8u));
  /* 11523176 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523178 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x1152317eu);
  /* 1152317e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523183 call 0x115265c0 */
  push32(0x11523188u); f_115265c0();
  /* 11523188 mov esi, esp */
  ESI = (ESP);
  /* 1152318a push 2 */
  push32((uint32_t)(0x2u));
  /* 1152318c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11523191 push 0x115533e0 */
  push32((uint32_t)(0x115533e0u));
  /* 11523196 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523198 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x1152319eu);
  /* 1152319e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115231a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115231a3 call 0x115265c0 */
  push32(0x115231a8u); f_115265c0();
  /* 115231a8 mov esi, esp */
  ESI = (ESP);
  /* 115231aa push 2 */
  push32((uint32_t)(0x2u));
  /* 115231ac push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115231ae push 0x115533e8 */
  push32((uint32_t)(0x115533e8u));
  /* 115231b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115231b5 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115231bbu);
  /* 115231bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115231be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115231c0 call 0x115265c0 */
  push32(0x115231c5u); f_115265c0();
  /* 115231c5 mov esi, esp */
  ESI = (ESP);
  /* 115231c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115231c9 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x115231cfu);
  /* 115231cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115231d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115231d4 call 0x115265c0 */
  push32(0x115231d9u); f_115265c0();
L_115231d9:;
  /* 115231d9 mov esi, esp */
  ESI = (ESP);
  /* 115231db push 0x11553490 */
  push32((uint32_t)(0x11553490u));
  /* 115231e0 push 0x11553678 */
  push32((uint32_t)(0x11553678u));
  /* 115231e5 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x115231ebu);
  /* 115231eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115231ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115231f0 call 0x115265c0 */
  push32(0x115231f5u); f_115265c0();
  /* 115231f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115231f7 jle 0x115232a4 */
  if ((C.zf||C.sf!=C.of)) goto L_115232a4;
  /* 115231fd mov esi, esp */
  ESI = (ESP);
  /* 115231ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11523201 push 0x11553490 */
  push32((uint32_t)(0x11553490u));
  /* 11523206 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152320cu);
  /* 1152320c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152320f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523211 call 0x115265c0 */
  push32(0x11523216u); f_115265c0();
  /* 11523216 mov esi, esp */
  ESI = (ESP);
  /* 11523218 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152321a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1152321c push 0x11553680 */
  push32((uint32_t)(0x11553680u));
  /* 11523221 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523223 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523229u);
  /* 11523229 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152322c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152322e call 0x115265c0 */
  push32(0x11523233u); f_115265c0();
  /* 11523233 mov esi, esp */
  ESI = (ESP);
  /* 11523235 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523237 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11523239 push 0x11553688 */
  push32((uint32_t)(0x11553688u));
  /* 1152323e push 3 */
  push32((uint32_t)(0x3u));
  /* 11523240 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523246u);
  /* 11523246 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152324b call 0x115265c0 */
  push32(0x11523250u); f_115265c0();
  /* 11523250 mov esi, esp */
  ESI = (ESP);
  /* 11523252 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523254 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11523259 push 0x11553690 */
  push32((uint32_t)(0x11553690u));
  /* 1152325e push 3 */
  push32((uint32_t)(0x3u));
  /* 11523260 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523266u);
  /* 11523266 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152326b call 0x115265c0 */
  push32(0x11523270u); f_115265c0();
  /* 11523270 mov esi, esp */
  ESI = (ESP);
  /* 11523272 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523274 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11523279 push 0x11553678 */
  push32((uint32_t)(0x11553678u));
  /* 1152327e push 3 */
  push32((uint32_t)(0x3u));
  /* 11523280 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523286u);
  /* 11523286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523289 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152328b call 0x115265c0 */
  push32(0x11523290u); f_115265c0();
  /* 11523290 mov esi, esp */
  ESI = (ESP);
  /* 11523292 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523294 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x1152329au);
  /* 1152329a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152329d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152329f call 0x115265c0 */
  push32(0x115232a4u); f_115265c0();
L_115232a4:;
  /* 115232a4 mov esi, esp */
  ESI = (ESP);
  /* 115232a6 push 0x11553498 */
  push32((uint32_t)(0x11553498u));
  /* 115232ab push 0x11553680 */
  push32((uint32_t)(0x11553680u));
  /* 115232b0 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x115232b6u);
  /* 115232b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115232b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115232bb call 0x115265c0 */
  push32(0x115232c0u); f_115265c0();
  /* 115232c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115232c2 jle 0x1152336f */
  if ((C.zf||C.sf!=C.of)) goto L_1152336f;
  /* 115232c8 mov esi, esp */
  ESI = (ESP);
  /* 115232ca push 0 */
  push32((uint32_t)(0x0u));
  /* 115232cc push 0x11553498 */
  push32((uint32_t)(0x11553498u));
  /* 115232d1 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115232d7u);
  /* 115232d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115232da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115232dc call 0x115265c0 */
  push32(0x115232e1u); f_115265c0();
  /* 115232e1 mov esi, esp */
  ESI = (ESP);
  /* 115232e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115232e5 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 115232e7 push 0x11553688 */
  push32((uint32_t)(0x11553688u));
  /* 115232ec push 3 */
  push32((uint32_t)(0x3u));
  /* 115232ee call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115232f4u);
  /* 115232f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115232f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115232f9 call 0x115265c0 */
  push32(0x115232feu); f_115265c0();
  /* 115232fe mov esi, esp */
  ESI = (ESP);
  /* 11523300 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523302 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11523307 push 0x11553690 */
  push32((uint32_t)(0x11553690u));
  /* 1152330c push 3 */
  push32((uint32_t)(0x3u));
  /* 1152330e call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523314u);
  /* 11523314 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523319 call 0x115265c0 */
  push32(0x1152331eu); f_115265c0();
  /* 1152331e mov esi, esp */
  ESI = (ESP);
  /* 11523320 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523322 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11523327 push 0x11553678 */
  push32((uint32_t)(0x11553678u));
  /* 1152332c push 3 */
  push32((uint32_t)(0x3u));
  /* 1152332e call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523334u);
  /* 11523334 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523339 call 0x115265c0 */
  push32(0x1152333eu); f_115265c0();
  /* 1152333e mov esi, esp */
  ESI = (ESP);
  /* 11523340 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523342 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11523344 push 0x11553680 */
  push32((uint32_t)(0x11553680u));
  /* 11523349 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152334b call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523351u);
  /* 11523351 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523356 call 0x115265c0 */
  push32(0x1152335bu); f_115265c0();
  /* 1152335b mov esi, esp */
  ESI = (ESP);
  /* 1152335d push 3 */
  push32((uint32_t)(0x3u));
  /* 1152335f call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11523365u);
  /* 11523365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152336a call 0x115265c0 */
  push32(0x1152336fu); f_115265c0();
L_1152336f:;
  /* 1152336f mov esi, esp */
  ESI = (ESP);
  /* 11523371 push 6 */
  push32((uint32_t)(0x6u));
  /* 11523373 call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x11523379u);
  /* 11523379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152337c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152337e call 0x115265c0 */
  push32(0x11523383u); f_115265c0();
  /* 11523383 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152338a je 0x11523405 */
  if (C.zf) goto L_11523405;
  /* 1152338c mov esi, esp */
  ESI = (ESP);
  /* 1152338e push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11523390 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523396u);
  /* 11523396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152339b call 0x115265c0 */
  push32(0x115233a0u); f_115265c0();
  /* 115233a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115233a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115233a7 je 0x11523405 */
  if (C.zf) goto L_11523405;
  /* 115233a9 mov esi, esp */
  ESI = (ESP);
  /* 115233ab push 0 */
  push32((uint32_t)(0x0u));
  /* 115233ad push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115233af call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115233b5u);
  /* 115233b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115233b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115233ba call 0x115265c0 */
  push32(0x115233bfu); f_115265c0();
  /* 115233bf mov esi, esp */
  ESI = (ESP);
  /* 115233c1 push 0x1154e5b0 */
  push32((uint32_t)(0x1154e5b0u));
  /* 115233c6 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115233ccu);
  /* 115233cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115233cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115233d1 call 0x115265c0 */
  push32(0x115233d6u); f_115265c0();
  /* 115233d6 mov esi, esp */
  ESI = (ESP);
  /* 115233d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115233da call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x115233e0u);
  /* 115233e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115233e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115233e5 call 0x115265c0 */
  push32(0x115233eau); f_115265c0();
  /* 115233ea mov esi, esp */
  ESI = (ESP);
  /* 115233ec push 1 */
  push32((uint32_t)(0x1u));
  /* 115233ee push 1 */
  push32((uint32_t)(0x1u));
  /* 115233f0 push 0x11553640 */
  push32((uint32_t)(0x11553640u));
  /* 115233f5 call dword ptr [0x115564bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564bc))), 0x115233fbu);
  /* 115233fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115233fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523400 call 0x115265c0 */
  push32(0x11523405u); f_115265c0();
L_11523405:;
  /* 11523405 mov esi, esp */
  ESI = (ESP);
  /* 11523407 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523409 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152340fu);
  /* 1152340f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523414 call 0x115265c0 */
  push32(0x11523419u); f_115265c0();
  /* 11523419 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152341e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523420 je 0x115234d2 */
  if (C.zf) goto L_115234d2;
  /* 11523426 mov esi, esp */
  ESI = (ESP);
  /* 11523428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152342a push 0x115536a8 */
  push32((uint32_t)(0x115536a8u));
  /* 1152342f call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x11523435u);
  /* 11523435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523438 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152343a call 0x115265c0 */
  push32(0x1152343fu); f_115265c0();
  /* 1152343f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523441 jg 0x1152347d */
  if ((!C.zf&&C.sf==C.of)) goto L_1152347d;
  /* 11523443 mov esi, esp */
  ESI = (ESP);
  /* 11523445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523447 push 0x11553710 */
  push32((uint32_t)(0x11553710u));
  /* 1152344c call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x11523452u);
  /* 11523452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523457 call 0x115265c0 */
  push32(0x1152345cu); f_115265c0();
  /* 1152345c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152345e jg 0x1152347d */
  if ((!C.zf&&C.sf==C.of)) goto L_1152347d;
  /* 11523460 mov esi, esp */
  ESI = (ESP);
  /* 11523462 push 7 */
  push32((uint32_t)(0x7u));
  /* 11523464 call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x1152346au);
  /* 1152346a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152346d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152346f call 0x115265c0 */
  push32(0x11523474u); f_115265c0();
  /* 11523474 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152347b je 0x115234d2 */
  if (C.zf) goto L_115234d2;
L_1152347d:;
  /* 1152347d mov esi, esp */
  ESI = (ESP);
  /* 1152347f push 0 */
  push32((uint32_t)(0x0u));
  /* 11523481 push 3 */
  push32((uint32_t)(0x3u));
  /* 11523483 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523489u);
  /* 11523489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152348c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152348e call 0x115265c0 */
  push32(0x11523493u); f_115265c0();
  /* 11523493 mov esi, esp */
  ESI = (ESP);
  /* 11523495 push 0x1154e5a8 */
  push32((uint32_t)(0x1154e5a8u));
  /* 1152349a call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115234a0u);
  /* 115234a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115234a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115234a5 call 0x115265c0 */
  push32(0x115234aau); f_115265c0();
  /* 115234aa mov esi, esp */
  ESI = (ESP);
  /* 115234ac push 0x46 */
  push32((uint32_t)(0x46u));
  /* 115234ae call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x115234b4u);
  /* 115234b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115234b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115234b9 call 0x115265c0 */
  push32(0x115234beu); f_115265c0();
  /* 115234be mov esi, esp */
  ESI = (ESP);
  /* 115234c0 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 115234c2 call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x115234c8u);
  /* 115234c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115234cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115234cd call 0x115265c0 */
  push32(0x115234d2u); f_115265c0();
L_115234d2:;
  /* 115234d2 mov esi, esp */
  ESI = (ESP);
  /* 115234d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115234d6 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115234dcu);
  /* 115234dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115234df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115234e1 call 0x115265c0 */
  push32(0x115234e6u); f_115265c0();
  /* 115234e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115234eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115234ed jne 0x11523578 */
  if (!C.zf) goto L_11523578;
  /* 115234f3 mov esi, esp */
  ESI = (ESP);
  /* 115234f5 push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 115234fa push 0x11553698 */
  push32((uint32_t)(0x11553698u));
  /* 115234ff call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523505u);
  /* 11523505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523508 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152350a call 0x115265c0 */
  push32(0x1152350fu); f_115265c0();
  /* 1152350f mov esi, eax */
  ESI = (EAX);
  /* 11523511 mov edi, esp */
  EDI = (ESP);
  /* 11523513 push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 11523518 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x1152351eu);
  /* 1152351e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523521 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523523 call 0x115265c0 */
  push32(0x11523528u); f_115265c0();
  /* 11523528 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152352a jge 0x11523578 */
  if ((C.sf==C.of)) goto L_11523578;
  /* 1152352c mov esi, esp */
  ESI = (ESP);
  /* 1152352e push 1 */
  push32((uint32_t)(0x1u));
  /* 11523530 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523532 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523538u);
  /* 11523538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152353b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152353d call 0x115265c0 */
  push32(0x11523542u); f_115265c0();
  /* 11523542 mov esi, esp */
  ESI = (ESP);
  /* 11523544 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523546 push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 1152354b call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523551u);
  /* 11523551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523554 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523556 call 0x115265c0 */
  push32(0x1152355bu); f_115265c0();
  /* 1152355b mov esi, esp */
  ESI = (ESP);
  /* 1152355d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152355f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11523561 push 0x11553760 */
  push32((uint32_t)(0x11553760u));
  /* 11523566 push 5 */
  push32((uint32_t)(0x5u));
  /* 11523568 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x1152356eu);
  /* 1152356e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523573 call 0x115265c0 */
  push32(0x11523578u); f_115265c0();
L_11523578:;
  /* 11523578 mov esi, esp */
  ESI = (ESP);
  /* 1152357a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152357c call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523582u);
  /* 11523582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523585 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523587 call 0x115265c0 */
  push32(0x1152358cu); f_115265c0();
  /* 1152358c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523593 je 0x1152361c */
  if (C.zf) goto L_1152361c;
  /* 11523599 mov esi, esp */
  ESI = (ESP);
  /* 1152359b push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 115235a0 push 0x11553698 */
  push32((uint32_t)(0x11553698u));
  /* 115235a5 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x115235abu);
  /* 115235ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115235ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115235b0 call 0x115265c0 */
  push32(0x115235b5u); f_115265c0();
  /* 115235b5 mov esi, eax */
  ESI = (EAX);
  /* 115235b7 mov edi, esp */
  EDI = (ESP);
  /* 115235b9 push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 115235be call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x115235c4u);
  /* 115235c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115235c7 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115235c9 call 0x115265c0 */
  push32(0x115235ceu); f_115265c0();
  /* 115235ce cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115235d0 jne 0x1152361c */
  if (!C.zf) goto L_1152361c;
  /* 115235d2 mov esi, esp */
  ESI = (ESP);
  /* 115235d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115235d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115235d8 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115235deu);
  /* 115235de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115235e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115235e3 call 0x115265c0 */
  push32(0x115235e8u); f_115265c0();
  /* 115235e8 mov esi, esp */
  ESI = (ESP);
  /* 115235ea push 0 */
  push32((uint32_t)(0x0u));
  /* 115235ec push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 115235f1 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115235f7u);
  /* 115235f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115235fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115235fc call 0x115265c0 */
  push32(0x11523601u); f_115265c0();
  /* 11523601 mov esi, esp */
  ESI = (ESP);
  /* 11523603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523605 push 0x11553758 */
  push32((uint32_t)(0x11553758u));
  /* 1152360a push 5 */
  push32((uint32_t)(0x5u));
  /* 1152360c call dword ptr [0x115564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c8))), 0x11523612u);
  /* 11523612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523617 call 0x115265c0 */
  push32(0x1152361cu); f_115265c0();
L_1152361c:;
  /* 1152361c mov esi, esp */
  ESI = (ESP);
  /* 1152361e push 2 */
  push32((uint32_t)(0x2u));
  /* 11523620 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523626u);
  /* 11523626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152362b call 0x115265c0 */
  push32(0x11523630u); f_115265c0();
  /* 11523630 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523637 je 0x11523704 */
  if (C.zf) goto L_11523704;
  /* 1152363d mov esi, esp */
  ESI = (ESP);
  /* 1152363f push 0x115534e0 */
  push32((uint32_t)(0x115534e0u));
  /* 11523644 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x1152364au);
  /* 1152364a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152364d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152364f call 0x115265c0 */
  push32(0x11523654u); f_115265c0();
  /* 11523654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523656 jne 0x11523704 */
  if (!C.zf) goto L_11523704;
  /* 1152365c mov esi, esp */
  ESI = (ESP);
  /* 1152365e push 0 */
  push32((uint32_t)(0x0u));
  /* 11523660 push 0x11553698 */
  push32((uint32_t)(0x11553698u));
  /* 11523665 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x1152366bu);
  /* 1152366b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523670 call 0x115265c0 */
  push32(0x11523675u); f_115265c0();
  /* 11523675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523677 jle 0x11523704 */
  if ((C.zf||C.sf!=C.of)) goto L_11523704;
  /* 1152367d mov esi, esp */
  ESI = (ESP);
  /* 1152367f push 0 */
  push32((uint32_t)(0x0u));
  /* 11523681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523683 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523689u);
  /* 11523689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152368c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152368e call 0x115265c0 */
  push32(0x11523693u); f_115265c0();
  /* 11523693 mov esi, esp */
  ESI = (ESP);
  /* 11523695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523697 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x1152369du);
  /* 1152369d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115236a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115236a2 call 0x115265c0 */
  push32(0x115236a7u); f_115265c0();
  /* 115236a7 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115236ad mov ecx, 0xc350 */
  ECX = (0xc350u);
  /* 115236b2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115236b4 mov esi, esp */
  ESI = (ESP);
  /* 115236b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115236b7 push 0x1154e5a0 */
  push32((uint32_t)(0x1154e5a0u));
  /* 115236bc call dword ptr [0x115564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564cc))), 0x115236c2u);
  /* 115236c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115236c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115236c7 call 0x115265c0 */
  push32(0x115236ccu); f_115265c0();
  /* 115236cc mov esi, esp */
  ESI = (ESP);
  /* 115236ce push 0 */
  push32((uint32_t)(0x0u));
  /* 115236d0 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x115236d6u);
  /* 115236d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115236d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115236db call 0x115265c0 */
  push32(0x115236e0u); f_115265c0();
  /* 115236e0 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115236e6 mov edx, 0xc350 */
  EDX = (0xc350u);
  /* 115236eb sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115236ed mov esi, esp */
  ESI = (ESP);
  /* 115236ef push edx */
  push32((uint32_t)(EDX));
  /* 115236f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115236f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115236f4 call dword ptr [0x115564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d0))), 0x115236fau);
  /* 115236fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115236fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115236ff call 0x115265c0 */
  push32(0x11523704u); f_115265c0();
L_11523704:;
  /* 11523704 mov esi, esp */
  ESI = (ESP);
  /* 11523706 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11523708 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152370eu);
  /* 1152370e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523713 call 0x115265c0 */
  push32(0x11523718u); f_115265c0();
  /* 11523718 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152371d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152371f jne 0x115237aa */
  if (!C.zf) goto L_115237aa;
  /* 11523725 mov esi, esp */
  ESI = (ESP);
  /* 11523727 push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 1152372c push 0x115536a0 */
  push32((uint32_t)(0x115536a0u));
  /* 11523731 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523737u);
  /* 11523737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152373a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152373c call 0x115265c0 */
  push32(0x11523741u); f_115265c0();
  /* 11523741 mov esi, eax */
  ESI = (EAX);
  /* 11523743 mov edi, esp */
  EDI = (ESP);
  /* 11523745 push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 1152374a call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523750u);
  /* 11523750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523753 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523755 call 0x115265c0 */
  push32(0x1152375au); f_115265c0();
  /* 1152375a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152375c jge 0x115237aa */
  if ((C.sf==C.of)) goto L_115237aa;
  /* 1152375e mov esi, esp */
  ESI = (ESP);
  /* 11523760 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523762 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11523764 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152376au);
  /* 1152376a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152376d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152376f call 0x115265c0 */
  push32(0x11523774u); f_115265c0();
  /* 11523774 mov esi, esp */
  ESI = (ESP);
  /* 11523776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523778 push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 1152377d call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523783u);
  /* 11523783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523788 call 0x115265c0 */
  push32(0x1152378du); f_115265c0();
  /* 1152378d mov esi, esp */
  ESI = (ESP);
  /* 1152378f push 0 */
  push32((uint32_t)(0x0u));
  /* 11523791 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11523793 push 0x11553770 */
  push32((uint32_t)(0x11553770u));
  /* 11523798 push 5 */
  push32((uint32_t)(0x5u));
  /* 1152379a call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115237a0u);
  /* 115237a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115237a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115237a5 call 0x115265c0 */
  push32(0x115237aau); f_115265c0();
L_115237aa:;
  /* 115237aa mov esi, esp */
  ESI = (ESP);
  /* 115237ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115237ae call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115237b4u);
  /* 115237b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115237b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115237b9 call 0x115265c0 */
  push32(0x115237beu); f_115265c0();
  /* 115237be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115237c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115237c5 je 0x1152384e */
  if (C.zf) goto L_1152384e;
  /* 115237cb mov esi, esp */
  ESI = (ESP);
  /* 115237cd push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 115237d2 push 0x115536a0 */
  push32((uint32_t)(0x115536a0u));
  /* 115237d7 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x115237ddu);
  /* 115237dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115237e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115237e2 call 0x115265c0 */
  push32(0x115237e7u); f_115265c0();
  /* 115237e7 mov esi, eax */
  ESI = (EAX);
  /* 115237e9 mov edi, esp */
  EDI = (ESP);
  /* 115237eb push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 115237f0 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x115237f6u);
  /* 115237f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115237f9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115237fb call 0x115265c0 */
  push32(0x11523800u); f_115265c0();
  /* 11523800 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523802 jne 0x1152384e */
  if (!C.zf) goto L_1152384e;
  /* 11523804 mov esi, esp */
  ESI = (ESP);
  /* 11523806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523808 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1152380a call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523810u);
  /* 11523810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523813 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523815 call 0x115265c0 */
  push32(0x1152381au); f_115265c0();
  /* 1152381a mov esi, esp */
  ESI = (ESP);
  /* 1152381c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152381e push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 11523823 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523829u);
  /* 11523829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152382c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152382e call 0x115265c0 */
  push32(0x11523833u); f_115265c0();
  /* 11523833 mov esi, esp */
  ESI = (ESP);
  /* 11523835 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523837 push 0x11553768 */
  push32((uint32_t)(0x11553768u));
  /* 1152383c push 5 */
  push32((uint32_t)(0x5u));
  /* 1152383e call dword ptr [0x115564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c8))), 0x11523844u);
  /* 11523844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523849 call 0x115265c0 */
  push32(0x1152384eu); f_115265c0();
L_1152384e:;
  /* 1152384e mov esi, esp */
  ESI = (ESP);
  /* 11523850 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11523852 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523858u);
  /* 11523858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152385b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152385d call 0x115265c0 */
  push32(0x11523862u); f_115265c0();
  /* 11523862 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523869 je 0x11523936 */
  if (C.zf) goto L_11523936;
  /* 1152386f mov esi, esp */
  ESI = (ESP);
  /* 11523871 push 0x115534d8 */
  push32((uint32_t)(0x115534d8u));
  /* 11523876 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x1152387cu);
  /* 1152387c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152387f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523881 call 0x115265c0 */
  push32(0x11523886u); f_115265c0();
  /* 11523886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523888 jne 0x11523936 */
  if (!C.zf) goto L_11523936;
  /* 1152388e mov esi, esp */
  ESI = (ESP);
  /* 11523890 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523892 push 0x115536a0 */
  push32((uint32_t)(0x115536a0u));
  /* 11523897 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x1152389du);
  /* 1152389d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115238a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115238a2 call 0x115265c0 */
  push32(0x115238a7u); f_115265c0();
  /* 115238a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115238a9 jle 0x11523936 */
  if ((C.zf||C.sf!=C.of)) goto L_11523936;
  /* 115238af mov esi, esp */
  ESI = (ESP);
  /* 115238b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115238b3 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115238b5 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115238bbu);
  /* 115238bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115238be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115238c0 call 0x115265c0 */
  push32(0x115238c5u); f_115265c0();
  /* 115238c5 mov esi, esp */
  ESI = (ESP);
  /* 115238c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115238c9 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x115238cfu);
  /* 115238cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115238d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115238d4 call 0x115265c0 */
  push32(0x115238d9u); f_115265c0();
  /* 115238d9 imul eax, eax, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3a98u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115238df mov ecx, 0x11170 */
  ECX = (0x11170u);
  /* 115238e4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115238e6 mov esi, esp */
  ESI = (ESP);
  /* 115238e8 push ecx */
  push32((uint32_t)(ECX));
  /* 115238e9 push 0x1154e5a0 */
  push32((uint32_t)(0x1154e5a0u));
  /* 115238ee call dword ptr [0x115564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564cc))), 0x115238f4u);
  /* 115238f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115238f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115238f9 call 0x115265c0 */
  push32(0x115238feu); f_115265c0();
  /* 115238fe mov esi, esp */
  ESI = (ESP);
  /* 11523900 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523902 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523908u);
  /* 11523908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152390b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152390d call 0x115265c0 */
  push32(0x11523912u); f_115265c0();
  /* 11523912 imul eax, eax, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3a98u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11523918 mov edx, 0x11170 */
  EDX = (0x11170u);
  /* 1152391d sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152391f mov esi, esp */
  ESI = (ESP);
  /* 11523921 push edx */
  push32((uint32_t)(EDX));
  /* 11523922 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523926 call dword ptr [0x115564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d0))), 0x1152392cu);
  /* 1152392c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152392f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523931 call 0x115265c0 */
  push32(0x11523936u); f_115265c0();
L_11523936:;
  /* 11523936 mov esi, esp */
  ESI = (ESP);
  /* 11523938 push 4 */
  push32((uint32_t)(0x4u));
  /* 1152393a call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523940u);
  /* 11523940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523945 call 0x115265c0 */
  push32(0x1152394au); f_115265c0();
  /* 1152394a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152394f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523951 jne 0x115239dc */
  if (!C.zf) goto L_115239dc;
  /* 11523957 mov esi, esp */
  ESI = (ESP);
  /* 11523959 push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 1152395e push 0x115536b0 */
  push32((uint32_t)(0x115536b0u));
  /* 11523963 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523969u);
  /* 11523969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152396c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152396e call 0x115265c0 */
  push32(0x11523973u); f_115265c0();
  /* 11523973 mov esi, eax */
  ESI = (EAX);
  /* 11523975 mov edi, esp */
  EDI = (ESP);
  /* 11523977 push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 1152397c call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523982u);
  /* 11523982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523985 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523987 call 0x115265c0 */
  push32(0x1152398cu); f_115265c0();
  /* 1152398c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152398e jge 0x115239dc */
  if ((C.sf==C.of)) goto L_115239dc;
  /* 11523990 mov esi, esp */
  ESI = (ESP);
  /* 11523992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523994 push 4 */
  push32((uint32_t)(0x4u));
  /* 11523996 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152399cu);
  /* 1152399c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152399f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115239a1 call 0x115265c0 */
  push32(0x115239a6u); f_115265c0();
  /* 115239a6 mov esi, esp */
  ESI = (ESP);
  /* 115239a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115239aa push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 115239af call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x115239b5u);
  /* 115239b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115239b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115239ba call 0x115265c0 */
  push32(0x115239bfu); f_115265c0();
  /* 115239bf mov esi, esp */
  ESI = (ESP);
  /* 115239c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115239c3 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115239c5 push 0x11553740 */
  push32((uint32_t)(0x11553740u));
  /* 115239ca push 5 */
  push32((uint32_t)(0x5u));
  /* 115239cc call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x115239d2u);
  /* 115239d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115239d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115239d7 call 0x115265c0 */
  push32(0x115239dcu); f_115265c0();
L_115239dc:;
  /* 115239dc mov esi, esp */
  ESI = (ESP);
  /* 115239de push 4 */
  push32((uint32_t)(0x4u));
  /* 115239e0 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115239e6u);
  /* 115239e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115239e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115239eb call 0x115265c0 */
  push32(0x115239f0u); f_115265c0();
  /* 115239f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115239f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115239f7 je 0x11523a80 */
  if (C.zf) goto L_11523a80;
  /* 115239fd mov esi, esp */
  ESI = (ESP);
  /* 115239ff push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 11523a04 push 0x115536b0 */
  push32((uint32_t)(0x115536b0u));
  /* 11523a09 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523a0fu);
  /* 11523a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a14 call 0x115265c0 */
  push32(0x11523a19u); f_115265c0();
  /* 11523a19 mov esi, eax */
  ESI = (EAX);
  /* 11523a1b mov edi, esp */
  EDI = (ESP);
  /* 11523a1d push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 11523a22 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523a28u);
  /* 11523a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a2b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a2d call 0x115265c0 */
  push32(0x11523a32u); f_115265c0();
  /* 11523a32 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a34 jne 0x11523a80 */
  if (!C.zf) goto L_11523a80;
  /* 11523a36 mov esi, esp */
  ESI = (ESP);
  /* 11523a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523a3a push 4 */
  push32((uint32_t)(0x4u));
  /* 11523a3c call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523a42u);
  /* 11523a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a47 call 0x115265c0 */
  push32(0x11523a4cu); f_115265c0();
  /* 11523a4c mov esi, esp */
  ESI = (ESP);
  /* 11523a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11523a50 push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 11523a55 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523a5bu);
  /* 11523a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a60 call 0x115265c0 */
  push32(0x11523a65u); f_115265c0();
  /* 11523a65 mov esi, esp */
  ESI = (ESP);
  /* 11523a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523a69 push 0x11553738 */
  push32((uint32_t)(0x11553738u));
  /* 11523a6e push 5 */
  push32((uint32_t)(0x5u));
  /* 11523a70 call dword ptr [0x115564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c8))), 0x11523a76u);
  /* 11523a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a7b call 0x115265c0 */
  push32(0x11523a80u); f_115265c0();
L_11523a80:;
  /* 11523a80 mov esi, esp */
  ESI = (ESP);
  /* 11523a82 push 5 */
  push32((uint32_t)(0x5u));
  /* 11523a84 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523a8au);
  /* 11523a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523a8f call 0x115265c0 */
  push32(0x11523a94u); f_115265c0();
  /* 11523a94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523a9b je 0x11523b90 */
  if (C.zf) goto L_11523b90;
  /* 11523aa1 mov esi, esp */
  ESI = (ESP);
  /* 11523aa3 push 0x115534f0 */
  push32((uint32_t)(0x115534f0u));
  /* 11523aa8 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523aaeu);
  /* 11523aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ab3 call 0x115265c0 */
  push32(0x11523ab8u); f_115265c0();
  /* 11523ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523aba jne 0x11523b90 */
  if (!C.zf) goto L_11523b90;
  /* 11523ac0 mov esi, esp */
  ESI = (ESP);
  /* 11523ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523ac4 push 0x115536b0 */
  push32((uint32_t)(0x115536b0u));
  /* 11523ac9 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x11523acfu);
  /* 11523acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ad4 call 0x115265c0 */
  push32(0x11523ad9u); f_115265c0();
  /* 11523ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523adb jle 0x11523b90 */
  if ((C.zf||C.sf!=C.of)) goto L_11523b90;
  /* 11523ae1 mov esi, esp */
  ESI = (ESP);
  /* 11523ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523ae5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11523ae7 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523aedu);
  /* 11523aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523af2 call 0x115265c0 */
  push32(0x11523af7u); f_115265c0();
  /* 11523af7 mov esi, esp */
  ESI = (ESP);
  /* 11523af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523afb call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523b01u);
  /* 11523b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b06 call 0x115265c0 */
  push32(0x11523b0bu); f_115265c0();
  /* 11523b0b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11523b11 mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 11523b16 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11523b18 mov esi, esp */
  ESI = (ESP);
  /* 11523b1a push ecx */
  push32((uint32_t)(ECX));
  /* 11523b1b push 0x1154e5a0 */
  push32((uint32_t)(0x1154e5a0u));
  /* 11523b20 call dword ptr [0x115564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564cc))), 0x11523b26u);
  /* 11523b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b2b call 0x115265c0 */
  push32(0x11523b30u); f_115265c0();
  /* 11523b30 mov esi, esp */
  ESI = (ESP);
  /* 11523b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523b34 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523b3au);
  /* 11523b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b3f call 0x115265c0 */
  push32(0x11523b44u); f_115265c0();
  /* 11523b44 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11523b4a mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 11523b4f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11523b51 mov esi, esp */
  ESI = (ESP);
  /* 11523b53 push edx */
  push32((uint32_t)(EDX));
  /* 11523b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523b58 call dword ptr [0x115564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d0))), 0x11523b5eu);
  /* 11523b5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b63 call 0x115265c0 */
  push32(0x11523b68u); f_115265c0();
  /* 11523b68 mov esi, esp */
  ESI = (ESP);
  /* 11523b6a push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11523b6c call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11523b72u);
  /* 11523b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b77 call 0x115265c0 */
  push32(0x11523b7cu); f_115265c0();
  /* 11523b7c mov esi, esp */
  ESI = (ESP);
  /* 11523b7e push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11523b80 call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11523b86u);
  /* 11523b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b8b call 0x115265c0 */
  push32(0x11523b90u); f_115265c0();
L_11523b90:;
  /* 11523b90 mov esi, esp */
  ESI = (ESP);
  /* 11523b92 push 6 */
  push32((uint32_t)(0x6u));
  /* 11523b94 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523b9au);
  /* 11523b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523b9f call 0x115265c0 */
  push32(0x11523ba4u); f_115265c0();
  /* 11523ba4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523bab jne 0x11523c36 */
  if (!C.zf) goto L_11523c36;
  /* 11523bb1 mov esi, esp */
  ESI = (ESP);
  /* 11523bb3 push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523bb8 push 0x115536b8 */
  push32((uint32_t)(0x115536b8u));
  /* 11523bbd call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523bc3u);
  /* 11523bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523bc8 call 0x115265c0 */
  push32(0x11523bcdu); f_115265c0();
  /* 11523bcd mov esi, eax */
  ESI = (EAX);
  /* 11523bcf mov edi, esp */
  EDI = (ESP);
  /* 11523bd1 push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523bd6 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523bdcu);
  /* 11523bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523bdf cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523be1 call 0x115265c0 */
  push32(0x11523be6u); f_115265c0();
  /* 11523be6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523be8 jge 0x11523c36 */
  if ((C.sf==C.of)) goto L_11523c36;
  /* 11523bea mov esi, esp */
  ESI = (ESP);
  /* 11523bec push 1 */
  push32((uint32_t)(0x1u));
  /* 11523bee push 6 */
  push32((uint32_t)(0x6u));
  /* 11523bf0 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523bf6u);
  /* 11523bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523bf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523bfb call 0x115265c0 */
  push32(0x11523c00u); f_115265c0();
  /* 11523c00 mov esi, esp */
  ESI = (ESP);
  /* 11523c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523c04 push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523c09 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523c0fu);
  /* 11523c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c14 call 0x115265c0 */
  push32(0x11523c19u); f_115265c0();
  /* 11523c19 mov esi, esp */
  ESI = (ESP);
  /* 11523c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11523c1d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11523c1f push 0x11553750 */
  push32((uint32_t)(0x11553750u));
  /* 11523c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 11523c26 call dword ptr [0x115564b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b0))), 0x11523c2cu);
  /* 11523c2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c31 call 0x115265c0 */
  push32(0x11523c36u); f_115265c0();
L_11523c36:;
  /* 11523c36 mov esi, esp */
  ESI = (ESP);
  /* 11523c38 push 6 */
  push32((uint32_t)(0x6u));
  /* 11523c3a call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523c40u);
  /* 11523c40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c45 call 0x115265c0 */
  push32(0x11523c4au); f_115265c0();
  /* 11523c4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523c51 je 0x11523cda */
  if (C.zf) goto L_11523cda;
  /* 11523c57 mov esi, esp */
  ESI = (ESP);
  /* 11523c59 push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523c5e push 0x115536b8 */
  push32((uint32_t)(0x115536b8u));
  /* 11523c63 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11523c69u);
  /* 11523c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c6e call 0x115265c0 */
  push32(0x11523c73u); f_115265c0();
  /* 11523c73 mov esi, eax */
  ESI = (EAX);
  /* 11523c75 mov edi, esp */
  EDI = (ESP);
  /* 11523c77 push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523c7c call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523c82u);
  /* 11523c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c85 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c87 call 0x115265c0 */
  push32(0x11523c8cu); f_115265c0();
  /* 11523c8c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523c8e jne 0x11523cda */
  if (!C.zf) goto L_11523cda;
  /* 11523c90 mov esi, esp */
  ESI = (ESP);
  /* 11523c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523c94 push 6 */
  push32((uint32_t)(0x6u));
  /* 11523c96 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523c9cu);
  /* 11523c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523c9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ca1 call 0x115265c0 */
  push32(0x11523ca6u); f_115265c0();
  /* 11523ca6 mov esi, esp */
  ESI = (ESP);
  /* 11523ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523caa push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523caf call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523cb5u);
  /* 11523cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523cba call 0x115265c0 */
  push32(0x11523cbfu); f_115265c0();
  /* 11523cbf mov esi, esp */
  ESI = (ESP);
  /* 11523cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523cc3 push 0x11553748 */
  push32((uint32_t)(0x11553748u));
  /* 11523cc8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11523cca call dword ptr [0x115564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c8))), 0x11523cd0u);
  /* 11523cd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523cd5 call 0x115265c0 */
  push32(0x11523cdau); f_115265c0();
L_11523cda:;
  /* 11523cda mov esi, esp */
  ESI = (ESP);
  /* 11523cdc push 7 */
  push32((uint32_t)(0x7u));
  /* 11523cde call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523ce4u);
  /* 11523ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ce9 call 0x115265c0 */
  push32(0x11523ceeu); f_115265c0();
  /* 11523cee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523cf5 je 0x11523dea */
  if (C.zf) goto L_11523dea;
  /* 11523cfb mov esi, esp */
  ESI = (ESP);
  /* 11523cfd push 0x115534e8 */
  push32((uint32_t)(0x115534e8u));
  /* 11523d02 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523d08u);
  /* 11523d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d0d call 0x115265c0 */
  push32(0x11523d12u); f_115265c0();
  /* 11523d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523d14 jne 0x11523dea */
  if (!C.zf) goto L_11523dea;
  /* 11523d1a mov esi, esp */
  ESI = (ESP);
  /* 11523d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11523d1e push 0x115536b8 */
  push32((uint32_t)(0x115536b8u));
  /* 11523d23 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x11523d29u);
  /* 11523d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d2e call 0x115265c0 */
  push32(0x11523d33u); f_115265c0();
  /* 11523d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523d35 jle 0x11523dea */
  if ((C.zf||C.sf!=C.of)) goto L_11523dea;
  /* 11523d3b mov esi, esp */
  ESI = (ESP);
  /* 11523d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11523d3f push 7 */
  push32((uint32_t)(0x7u));
  /* 11523d41 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523d47u);
  /* 11523d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d4c call 0x115265c0 */
  push32(0x11523d51u); f_115265c0();
  /* 11523d51 mov esi, esp */
  ESI = (ESP);
  /* 11523d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523d55 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523d5bu);
  /* 11523d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d60 call 0x115265c0 */
  push32(0x11523d65u); f_115265c0();
  /* 11523d65 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11523d6b mov ecx, 0xfa0 */
  ECX = (0xfa0u);
  /* 11523d70 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11523d72 mov esi, esp */
  ESI = (ESP);
  /* 11523d74 push ecx */
  push32((uint32_t)(ECX));
  /* 11523d75 push 0x1154e5a0 */
  push32((uint32_t)(0x1154e5a0u));
  /* 11523d7a call dword ptr [0x115564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564cc))), 0x11523d80u);
  /* 11523d80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d85 call 0x115265c0 */
  push32(0x11523d8au); f_115265c0();
  /* 11523d8a mov esi, esp */
  ESI = (ESP);
  /* 11523d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11523d8e call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11523d94u);
  /* 11523d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523d99 call 0x115265c0 */
  push32(0x11523d9eu); f_115265c0();
  /* 11523d9e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11523da4 mov edx, 0xfa0 */
  EDX = (0xfa0u);
  /* 11523da9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11523dab mov esi, esp */
  ESI = (ESP);
  /* 11523dad push edx */
  push32((uint32_t)(EDX));
  /* 11523dae push 1 */
  push32((uint32_t)(0x1u));
  /* 11523db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523db2 call dword ptr [0x115564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d0))), 0x11523db8u);
  /* 11523db8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523dbd call 0x115265c0 */
  push32(0x11523dc2u); f_115265c0();
  /* 11523dc2 mov esi, esp */
  ESI = (ESP);
  /* 11523dc4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11523dc6 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11523dccu);
  /* 11523dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523dd1 call 0x115265c0 */
  push32(0x11523dd6u); f_115265c0();
  /* 11523dd6 mov esi, esp */
  ESI = (ESP);
  /* 11523dd8 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11523dda call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11523de0u);
  /* 11523de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523de5 call 0x115265c0 */
  push32(0x11523deau); f_115265c0();
L_11523dea:;
  /* 11523dea mov esi, esp */
  ESI = (ESP);
  /* 11523dec push 1 */
  push32((uint32_t)(0x1u));
  /* 11523dee call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x11523df4u);
  /* 11523df4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523df9 call 0x115265c0 */
  push32(0x11523dfeu); f_115265c0();
  /* 11523dfe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523e05 je 0x11523f47 */
  if (C.zf) goto L_11523f47;
  /* 11523e0b mov esi, esp */
  ESI = (ESP);
  /* 11523e0d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11523e0f call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523e15u);
  /* 11523e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e1a call 0x115265c0 */
  push32(0x11523e1fu); f_115265c0();
  /* 11523e1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523e26 je 0x11523f47 */
  if (C.zf) goto L_11523f47;
  /* 11523e2c mov esi, esp */
  ESI = (ESP);
  /* 11523e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11523e30 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11523e32 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523e38u);
  /* 11523e38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e3d call 0x115265c0 */
  push32(0x11523e42u); f_115265c0();
  /* 11523e42 mov esi, esp */
  ESI = (ESP);
  /* 11523e44 push 0x1154e594 */
  push32((uint32_t)(0x1154e594u));
  /* 11523e49 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11523e4fu);
  /* 11523e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e54 call 0x115265c0 */
  push32(0x11523e59u); f_115265c0();
  /* 11523e59 mov esi, esp */
  ESI = (ESP);
  /* 11523e5b push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11523e5d call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11523e63u);
  /* 11523e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e68 call 0x115265c0 */
  push32(0x11523e6du); f_115265c0();
  /* 11523e6d mov esi, esp */
  ESI = (ESP);
  /* 11523e6f push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11523e71 call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11523e77u);
  /* 11523e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e7c call 0x115265c0 */
  push32(0x11523e81u); f_115265c0();
  /* 11523e81 mov esi, esp */
  ESI = (ESP);
  /* 11523e83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523e87 push 0x115535e8 */
  push32((uint32_t)(0x115535e8u));
  /* 11523e8c call dword ptr [0x115564bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564bc))), 0x11523e92u);
  /* 11523e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523e95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523e97 call 0x115265c0 */
  push32(0x11523e9cu); f_115265c0();
  /* 11523e9c mov esi, esp */
  ESI = (ESP);
  /* 11523e9e push 3 */
  push32((uint32_t)(0x3u));
  /* 11523ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523ea2 push 0x115535f0 */
  push32((uint32_t)(0x115535f0u));
  /* 11523ea7 call dword ptr [0x115564bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564bc))), 0x11523eadu);
  /* 11523ead add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523eb2 call 0x115265c0 */
  push32(0x11523eb7u); f_115265c0();
  /* 11523eb7 mov esi, esp */
  ESI = (ESP);
  /* 11523eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523ebb push 0x115535e0 */
  push32((uint32_t)(0x115535e0u));
  /* 11523ec0 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523ec6u);
  /* 11523ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ecb call 0x115265c0 */
  push32(0x11523ed0u); f_115265c0();
  /* 11523ed0 mov esi, esp */
  ESI = (ESP);
  /* 11523ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11523ed4 push 0x115536f8 */
  push32((uint32_t)(0x115536f8u));
  /* 11523ed9 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523edfu);
  /* 11523edf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523ee4 call 0x115265c0 */
  push32(0x11523ee9u); f_115265c0();
  /* 11523ee9 mov esi, esp */
  ESI = (ESP);
  /* 11523eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11523eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11523eef call dword ptr [0x115564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d4))), 0x11523ef5u);
  /* 11523ef5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523efa call 0x115265c0 */
  push32(0x11523effu); f_115265c0();
  /* 11523eff mov esi, esp */
  ESI = (ESP);
  /* 11523f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523f03 push 0x115535d8 */
  push32((uint32_t)(0x115535d8u));
  /* 11523f08 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523f0eu);
  /* 11523f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f13 call 0x115265c0 */
  push32(0x11523f18u); f_115265c0();
  /* 11523f18 mov esi, esp */
  ESI = (ESP);
  /* 11523f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11523f1c push 0x11553700 */
  push32((uint32_t)(0x11553700u));
  /* 11523f21 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11523f27u);
  /* 11523f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f2c call 0x115265c0 */
  push32(0x11523f31u); f_115265c0();
  /* 11523f31 mov esi, esp */
  ESI = (ESP);
  /* 11523f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11523f37 call dword ptr [0x115564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d4))), 0x11523f3du);
  /* 11523f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f42 call 0x115265c0 */
  push32(0x11523f47u); f_115265c0();
L_11523f47:;
  /* 11523f47 mov esi, esp */
  ESI = (ESP);
  /* 11523f49 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11523f4b call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523f51u);
  /* 11523f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f56 call 0x115265c0 */
  push32(0x11523f5bu); f_115265c0();
  /* 11523f5b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11523f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523f62 je 0x11523ff2 */
  if (C.zf) goto L_11523ff2;
  /* 11523f68 mov esi, esp */
  ESI = (ESP);
  /* 11523f6a push 0x11553480 */
  push32((uint32_t)(0x11553480u));
  /* 11523f6f call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11523f75u);
  /* 11523f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f7a call 0x115265c0 */
  push32(0x11523f7fu); f_115265c0();
  /* 11523f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523f81 jne 0x11523ff2 */
  if (!C.zf) goto L_11523ff2;
  /* 11523f83 mov esi, esp */
  ESI = (ESP);
  /* 11523f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11523f87 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11523f89 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11523f8fu);
  /* 11523f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523f92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523f94 call 0x115265c0 */
  push32(0x11523f99u); f_115265c0();
  /* 11523f99 mov esi, esp */
  ESI = (ESP);
  /* 11523f9b push 3 */
  push32((uint32_t)(0x3u));
  /* 11523f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11523f9f call dword ptr [0x115564d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d8))), 0x11523fa5u);
  /* 11523fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523faa call 0x115265c0 */
  push32(0x11523fafu); f_115265c0();
  /* 11523faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11523fb1 jle 0x11523fcc */
  if ((C.zf||C.sf!=C.of)) goto L_11523fcc;
  /* 11523fb3 mov esi, esp */
  ESI = (ESP);
  /* 11523fb5 push 0x1154e58c */
  push32((uint32_t)(0x1154e58cu));
  /* 11523fba call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11523fc0u);
  /* 11523fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523fc5 call 0x115265c0 */
  push32(0x11523fcau); f_115265c0();
  /* 11523fca jmp 0x11523fe3 */
  goto L_11523fe3;
L_11523fcc:;
  /* 11523fcc mov esi, esp */
  ESI = (ESP);
  /* 11523fce push 0x1154e580 */
  push32((uint32_t)(0x1154e580u));
  /* 11523fd3 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11523fd9u);
  /* 11523fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523fde call 0x115265c0 */
  push32(0x11523fe3u); f_115265c0();
L_11523fe3:;
  /* 11523fe3 mov esi, esp */
  ESI = (ESP);
  /* 11523fe5 call dword ptr [0x115564dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564dc))), 0x11523febu);
  /* 11523feb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11523fed call 0x115265c0 */
  push32(0x11523ff2u); f_115265c0();
L_11523ff2:;
  /* 11523ff2 mov esi, esp */
  ESI = (ESP);
  /* 11523ff4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11523ff6 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11523ffcu);
  /* 11523ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11523fff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524001 call 0x115265c0 */
  push32(0x11524006u); f_115265c0();
  /* 11524006 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152400b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152400d je 0x11524085 */
  if (C.zf) goto L_11524085;
  /* 1152400f mov esi, esp */
  ESI = (ESP);
  /* 11524011 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11524013 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524019u);
  /* 11524019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152401c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152401e call 0x115265c0 */
  push32(0x11524023u); f_115265c0();
  /* 11524023 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152402a je 0x11524085 */
  if (C.zf) goto L_11524085;
  /* 1152402c mov esi, esp */
  ESI = (ESP);
  /* 1152402e push 2 */
  push32((uint32_t)(0x2u));
  /* 11524030 call dword ptr [0x115564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e0))), 0x11524036u);
  /* 11524036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524039 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152403b call 0x115265c0 */
  push32(0x11524040u); f_115265c0();
  /* 11524040 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524047 je 0x11524085 */
  if (C.zf) goto L_11524085;
  /* 11524049 mov esi, esp */
  ESI = (ESP);
  /* 1152404b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152404d push 8 */
  push32((uint32_t)(0x8u));
  /* 1152404f call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524055u);
  /* 11524055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524058 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152405a call 0x115265c0 */
  push32(0x1152405fu); f_115265c0();
  /* 1152405f mov esi, esp */
  ESI = (ESP);
  /* 11524061 push 0x1154e574 */
  push32((uint32_t)(0x1154e574u));
  /* 11524066 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x1152406cu);
  /* 1152406c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152406f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524071 call 0x115265c0 */
  push32(0x11524076u); f_115265c0();
  /* 11524076 mov esi, esp */
  ESI = (ESP);
  /* 11524078 call dword ptr [0x115564dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564dc))), 0x1152407eu);
  /* 1152407e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524080 call 0x115265c0 */
  push32(0x11524085u); f_115265c0();
L_11524085:;
  /* 11524085 mov esi, esp */
  ESI = (ESP);
  /* 11524087 push 9 */
  push32((uint32_t)(0x9u));
  /* 11524089 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152408fu);
  /* 1152408f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524094 call 0x115265c0 */
  push32(0x11524099u); f_115265c0();
  /* 11524099 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152409e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115240a0 je 0x11524118 */
  if (C.zf) goto L_11524118;
  /* 115240a2 mov esi, esp */
  ESI = (ESP);
  /* 115240a4 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115240a6 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115240acu);
  /* 115240ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115240af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115240b1 call 0x115265c0 */
  push32(0x115240b6u); f_115265c0();
  /* 115240b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115240bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115240bd je 0x11524118 */
  if (C.zf) goto L_11524118;
  /* 115240bf mov esi, esp */
  ESI = (ESP);
  /* 115240c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115240c3 call dword ptr [0x115564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e0))), 0x115240c9u);
  /* 115240c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115240cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115240ce call 0x115265c0 */
  push32(0x115240d3u); f_115265c0();
  /* 115240d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115240d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115240da je 0x11524118 */
  if (C.zf) goto L_11524118;
  /* 115240dc mov esi, esp */
  ESI = (ESP);
  /* 115240de push 0 */
  push32((uint32_t)(0x0u));
  /* 115240e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 115240e2 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115240e8u);
  /* 115240e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115240eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115240ed call 0x115265c0 */
  push32(0x115240f2u); f_115265c0();
  /* 115240f2 mov esi, esp */
  ESI = (ESP);
  /* 115240f4 push 0x1154e568 */
  push32((uint32_t)(0x1154e568u));
  /* 115240f9 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115240ffu);
  /* 115240ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524104 call 0x115265c0 */
  push32(0x11524109u); f_115265c0();
  /* 11524109 mov esi, esp */
  ESI = (ESP);
  /* 1152410b call dword ptr [0x115564dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564dc))), 0x11524111u);
  /* 11524111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524113 call 0x115265c0 */
  push32(0x11524118u); f_115265c0();
L_11524118:;
  /* 11524118 mov esi, esp */
  ESI = (ESP);
  /* 1152411a push 7 */
  push32((uint32_t)(0x7u));
  /* 1152411c call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524122u);
  /* 11524122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524127 call 0x115265c0 */
  push32(0x1152412cu); f_115265c0();
  /* 1152412c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524133 jne 0x115241ed */
  if (!C.zf) goto L_115241ed;
  /* 11524139 mov esi, esp */
  ESI = (ESP);
  /* 1152413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1152413d call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524143u);
  /* 11524143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524148 call 0x115265c0 */
  push32(0x1152414du); f_115265c0();
  /* 1152414d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524154 jne 0x115241ed */
  if (!C.zf) goto L_115241ed;
  /* 1152415a mov esi, esp */
  ESI = (ESP);
  /* 1152415c push 0xf */
  push32((uint32_t)(0xfu));
  /* 1152415e call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524164u);
  /* 11524164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524169 call 0x115265c0 */
  push32(0x1152416eu); f_115265c0();
  /* 1152416e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524175 jne 0x115241ed */
  if (!C.zf) goto L_115241ed;
  /* 11524177 mov esi, esp */
  ESI = (ESP);
  /* 11524179 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1152417b call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524181u);
  /* 11524181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524184 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524186 call 0x115265c0 */
  push32(0x1152418bu); f_115265c0();
  /* 1152418b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524192 jne 0x115241ed */
  if (!C.zf) goto L_115241ed;
  /* 11524194 mov esi, esp */
  ESI = (ESP);
  /* 11524196 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11524198 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152419eu);
  /* 1152419e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115241a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115241a3 call 0x115265c0 */
  push32(0x115241a8u); f_115265c0();
  /* 115241a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115241ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115241af je 0x115241ed */
  if (C.zf) goto L_115241ed;
  /* 115241b1 mov esi, esp */
  ESI = (ESP);
  /* 115241b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115241b5 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 115241b7 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115241bdu);
  /* 115241bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115241c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115241c2 call 0x115265c0 */
  push32(0x115241c7u); f_115265c0();
  /* 115241c7 mov esi, esp */
  ESI = (ESP);
  /* 115241c9 push 0x1154e560 */
  push32((uint32_t)(0x1154e560u));
  /* 115241ce call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115241d4u);
  /* 115241d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115241d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115241d9 call 0x115265c0 */
  push32(0x115241deu); f_115265c0();
  /* 115241de mov esi, esp */
  ESI = (ESP);
  /* 115241e0 call dword ptr [0x115564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e4))), 0x115241e6u);
  /* 115241e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115241e8 call 0x115265c0 */
  push32(0x115241edu); f_115265c0();
L_115241ed:;
  /* 115241ed mov esi, esp */
  ESI = (ESP);
  /* 115241ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 115241f1 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115241f7u);
  /* 115241f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115241fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115241fc call 0x115265c0 */
  push32(0x11524201u); f_115265c0();
  /* 11524201 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524208 je 0x11524406 */
  if (C.zf) goto L_11524406;
  /* 1152420e mov esi, esp */
  ESI = (ESP);
  /* 11524210 push 0xa */
  push32((uint32_t)(0xau));
  /* 11524212 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524218u);
  /* 11524218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152421b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152421d call 0x115265c0 */
  push32(0x11524222u); f_115265c0();
  /* 11524222 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524229 je 0x11524406 */
  if (C.zf) goto L_11524406;
  /* 1152422f mov esi, esp */
  ESI = (ESP);
  /* 11524231 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524233 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 11524238 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x1152423eu);
  /* 1152423e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524243 call 0x115265c0 */
  push32(0x11524248u); f_115265c0();
  /* 11524248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152424a jne 0x11524406 */
  if (!C.zf) goto L_11524406;
  /* 11524250 mov esi, esp */
  ESI = (ESP);
  /* 11524252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524254 push 0xa */
  push32((uint32_t)(0xau));
  /* 11524256 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152425cu);
  /* 1152425c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152425f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524261 call 0x115265c0 */
  push32(0x11524266u); f_115265c0();
  /* 11524266 mov esi, esp */
  ESI = (ESP);
  /* 11524268 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1152426d push 2 */
  push32((uint32_t)(0x2u));
  /* 1152426f call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11524275u);
  /* 11524275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152427a call 0x115265c0 */
  push32(0x1152427fu); f_115265c0();
  /* 1152427f mov esi, esp */
  ESI = (ESP);
  /* 11524281 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524283 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11524289u);
  /* 11524289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152428c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152428e call 0x115265c0 */
  push32(0x11524293u); f_115265c0();
  /* 11524293 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11524296 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152429a ja 0x11524406 */
  if ((!C.cf&&!C.zf)) goto L_11524406;
  /* 115242a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115242a3 jmp dword ptr [eax*4 + 0x1152578f] */
  switch (EAX) {
    case 0: goto L_115242aa;
    case 1: goto L_11524303;
    case 2: goto L_1152435c;
    case 3: goto L_115243b2;
    case 4: goto L_1152467e;
    case 5: goto L_115246dd;
    case 6: goto L_1152473c;
    case 7: goto L_11524798;
    case 8: goto L_11524a38;
    case 9: goto L_11524a91;
    case 10: goto L_11524aea;
    case 11: goto L_11524b40;
    default: x86_unimpl("switch@0x115242a3 out of table"); return;
  }
L_115242aa:;
  /* 115242aa mov esi, esp */
  ESI = (ESP);
  /* 115242ac push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115242ae push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 115242b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115242b5 push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 115242ba push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 115242bf push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 115242c4 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115242cau);
  /* 115242ca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115242cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115242cf call 0x115265c0 */
  push32(0x115242d4u); f_115265c0();
  /* 115242d4 mov esi, esp */
  ESI = (ESP);
  /* 115242d6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115242d8 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 115242dd push 3 */
  push32((uint32_t)(0x3u));
  /* 115242df push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 115242e4 push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 115242e9 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 115242ee call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115242f4u);
  /* 115242f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115242f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115242f9 call 0x115265c0 */
  push32(0x115242feu); f_115265c0();
  /* 115242fe jmp 0x11524406 */
  goto L_11524406;
L_11524303:;
  /* 11524303 mov esi, esp */
  ESI = (ESP);
  /* 11524305 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11524307 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 1152430c push 3 */
  push32((uint32_t)(0x3u));
  /* 1152430e push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524313 push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524318 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 1152431d call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524323u);
  /* 11524323 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524328 call 0x115265c0 */
  push32(0x1152432du); f_115265c0();
  /* 1152432d mov esi, esp */
  ESI = (ESP);
  /* 1152432f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11524331 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 11524336 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524338 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 1152433d push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524342 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 11524347 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x1152434du);
  /* 1152434d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524350 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524352 call 0x115265c0 */
  push32(0x11524357u); f_115265c0();
  /* 11524357 jmp 0x11524406 */
  goto L_11524406;
L_1152435c:;
  /* 1152435c mov esi, esp */
  ESI = (ESP);
  /* 1152435e push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11524360 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 11524365 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524367 push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 1152436c push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 11524371 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 11524376 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x1152437cu);
  /* 1152437c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152437f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524381 call 0x115265c0 */
  push32(0x11524386u); f_115265c0();
  /* 11524386 mov esi, esp */
  ESI = (ESP);
  /* 11524388 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1152438a push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 1152438f push 3 */
  push32((uint32_t)(0x3u));
  /* 11524391 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 11524396 push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 1152439b push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 115243a0 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115243a6u);
  /* 115243a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115243a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115243ab call 0x115265c0 */
  push32(0x115243b0u); f_115265c0();
  /* 115243b0 jmp 0x11524406 */
  goto L_11524406;
L_115243b2:;
  /* 115243b2 mov esi, esp */
  ESI = (ESP);
  /* 115243b4 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115243b6 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 115243bb push 3 */
  push32((uint32_t)(0x3u));
  /* 115243bd push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 115243c2 push 0x11553580 */
  push32((uint32_t)(0x11553580u));
  /* 115243c7 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 115243cc call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115243d2u);
  /* 115243d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115243d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115243d7 call 0x115265c0 */
  push32(0x115243dcu); f_115265c0();
  /* 115243dc mov esi, esp */
  ESI = (ESP);
  /* 115243de push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115243e0 push 0x115536c8 */
  push32((uint32_t)(0x115536c8u));
  /* 115243e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 115243e7 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 115243ec push 0x11553580 */
  push32((uint32_t)(0x11553580u));
  /* 115243f1 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 115243f6 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115243fcu);
  /* 115243fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115243ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524401 call 0x115265c0 */
  push32(0x11524406u); f_115265c0();
L_11524406:;
  /* 11524406 mov esi, esp */
  ESI = (ESP);
  /* 11524408 push 0xa */
  push32((uint32_t)(0xau));
  /* 1152440a call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524410u);
  /* 11524410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524415 call 0x115265c0 */
  push32(0x1152441au); f_115265c0();
  /* 1152441a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152441f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524421 jne 0x115244bc */
  if (!C.zf) goto L_115244bc;
  /* 11524427 mov esi, esp */
  ESI = (ESP);
  /* 11524429 push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 1152442e call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11524434u);
  /* 11524434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524439 call 0x115265c0 */
  push32(0x1152443eu); f_115265c0();
  /* 1152443e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524440 jg 0x1152445d */
  if ((!C.zf&&C.sf==C.of)) goto L_1152445d;
  /* 11524442 mov esi, esp */
  ESI = (ESP);
  /* 11524444 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 11524449 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x1152444fu);
  /* 1152444f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524454 call 0x115265c0 */
  push32(0x11524459u); f_115265c0();
  /* 11524459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152445b jle 0x115244bc */
  if ((C.zf||C.sf!=C.of)) goto L_115244bc;
L_1152445d:;
  /* 1152445d mov esi, esp */
  ESI = (ESP);
  /* 1152445f push 0 */
  push32((uint32_t)(0x0u));
  /* 11524461 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 11524466 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152446cu);
  /* 1152446c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152446f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524471 call 0x115265c0 */
  push32(0x11524476u); f_115265c0();
  /* 11524476 mov esi, esp */
  ESI = (ESP);
  /* 11524478 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152447a push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 1152447f call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11524485u);
  /* 11524485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152448a call 0x115265c0 */
  push32(0x1152448fu); f_115265c0();
  /* 1152448f mov esi, esp */
  ESI = (ESP);
  /* 11524491 push 0x11553508 */
  push32((uint32_t)(0x11553508u));
  /* 11524496 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524498 call dword ptr [0x115564ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ec))), 0x1152449eu);
  /* 1152449e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115244a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115244a3 call 0x115265c0 */
  push32(0x115244a8u); f_115265c0();
  /* 115244a8 mov esi, esp */
  ESI = (ESP);
  /* 115244aa push 3 */
  push32((uint32_t)(0x3u));
  /* 115244ac call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x115244b2u);
  /* 115244b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115244b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115244b7 call 0x115265c0 */
  push32(0x115244bcu); f_115265c0();
L_115244bc:;
  /* 115244bc mov esi, esp */
  ESI = (ESP);
  /* 115244be push 3 */
  push32((uint32_t)(0x3u));
  /* 115244c0 call dword ptr [0x115564f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f0))), 0x115244c6u);
  /* 115244c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115244c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115244cb call 0x115265c0 */
  push32(0x115244d0u); f_115265c0();
  /* 115244d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115244d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115244d7 je 0x11524545 */
  if (C.zf) goto L_11524545;
  /* 115244d9 mov esi, esp */
  ESI = (ESP);
  /* 115244db push 0x11553450 */
  push32((uint32_t)(0x11553450u));
  /* 115244e0 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x115244e6u);
  /* 115244e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115244e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115244eb call 0x115265c0 */
  push32(0x115244f0u); f_115265c0();
  /* 115244f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115244f2 jne 0x1152450f */
  if (!C.zf) goto L_1152450f;
  /* 115244f4 mov esi, esp */
  ESI = (ESP);
  /* 115244f6 push 0x11553448 */
  push32((uint32_t)(0x11553448u));
  /* 115244fb call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11524501u);
  /* 11524501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524506 call 0x115265c0 */
  push32(0x1152450bu); f_115265c0();
  /* 1152450b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152450d je 0x1152452c */
  if (C.zf) goto L_1152452c;
L_1152450f:;
  /* 1152450f mov esi, esp */
  ESI = (ESP);
  /* 11524511 push 2 */
  push32((uint32_t)(0x2u));
  /* 11524513 call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x11524519u);
  /* 11524519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152451c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152451e call 0x115265c0 */
  push32(0x11524523u); f_115265c0();
  /* 11524523 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152452a je 0x11524545 */
  if (C.zf) goto L_11524545;
L_1152452c:;
  /* 1152452c mov esi, esp */
  ESI = (ESP);
  /* 1152452e push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11524533 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524535 call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x1152453bu);
  /* 1152453b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152453e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524540 call 0x115265c0 */
  push32(0x11524545u); f_115265c0();
L_11524545:;
  /* 11524545 mov esi, esp */
  ESI = (ESP);
  /* 11524547 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524549 call dword ptr [0x115564f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f4))), 0x1152454fu);
  /* 1152454f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524554 call 0x115265c0 */
  push32(0x11524559u); f_115265c0();
  /* 11524559 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152455e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524560 je 0x115245a0 */
  if (C.zf) goto L_115245a0;
  /* 11524562 mov esi, esp */
  ESI = (ESP);
  /* 11524564 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524566 call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x1152456cu);
  /* 1152456c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152456f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524571 call 0x115265c0 */
  push32(0x11524576u); f_115265c0();
  /* 11524576 mov esi, esp */
  ESI = (ESP);
  /* 11524578 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152457a call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x11524580u);
  /* 11524580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524585 call 0x115265c0 */
  push32(0x1152458au); f_115265c0();
  /* 1152458a mov esi, esp */
  ESI = (ESP);
  /* 1152458c push 1 */
  push32((uint32_t)(0x1u));
  /* 1152458e push 0xa */
  push32((uint32_t)(0xau));
  /* 11524590 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524596u);
  /* 11524596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524599 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152459b call 0x115265c0 */
  push32(0x115245a0u); f_115265c0();
L_115245a0:;
  /* 115245a0 mov esi, esp */
  ESI = (ESP);
  /* 115245a2 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115245a4 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115245aau);
  /* 115245aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115245ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115245af call 0x115265c0 */
  push32(0x115245b4u); f_115265c0();
  /* 115245b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115245b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115245bb jne 0x11524855 */
  if (!C.zf) goto L_11524855;
  /* 115245c1 mov esi, esp */
  ESI = (ESP);
  /* 115245c3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115245c5 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115245cbu);
  /* 115245cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115245ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115245d0 call 0x115265c0 */
  push32(0x115245d5u); f_115265c0();
  /* 115245d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115245da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115245dc je 0x11524855 */
  if (C.zf) goto L_11524855;
  /* 115245e2 mov esi, esp */
  ESI = (ESP);
  /* 115245e4 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115245e6 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115245ecu);
  /* 115245ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115245ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115245f1 call 0x115265c0 */
  push32(0x115245f6u); f_115265c0();
  /* 115245f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115245fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115245fd je 0x11524855 */
  if (C.zf) goto L_11524855;
  /* 11524603 mov esi, esp */
  ESI = (ESP);
  /* 11524605 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524607 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 1152460c call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x11524612u);
  /* 11524612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524617 call 0x115265c0 */
  push32(0x1152461cu); f_115265c0();
  /* 1152461c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152461e jne 0x11524855 */
  if (!C.zf) goto L_11524855;
  /* 11524624 mov esi, esp */
  ESI = (ESP);
  /* 11524626 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524628 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1152462a call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524630u);
  /* 11524630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524635 call 0x115265c0 */
  push32(0x1152463au); f_115265c0();
  /* 1152463a mov esi, esp */
  ESI = (ESP);
  /* 1152463c push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11524641 push 4 */
  push32((uint32_t)(0x4u));
  /* 11524643 call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11524649u);
  /* 11524649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152464c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152464e call 0x115265c0 */
  push32(0x11524653u); f_115265c0();
  /* 11524653 mov esi, esp */
  ESI = (ESP);
  /* 11524655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524657 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x1152465du);
  /* 1152465d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524662 call 0x115265c0 */
  push32(0x11524667u); f_115265c0();
  /* 11524667 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152466a cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152466e ja 0x115247f2 */
  if ((!C.cf&&!C.zf)) goto L_115247f2;
  /* 11524674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11524677 jmp dword ptr [ecx*4 + 0x1152579f] */
  switch (ECX) {
    case 0: goto L_1152467e;
    case 1: goto L_115246dd;
    case 2: goto L_1152473c;
    case 3: goto L_11524798;
    case 4: goto L_11524a38;
    case 5: goto L_11524a91;
    case 6: goto L_11524aea;
    case 7: goto L_11524b40;
    default: x86_unimpl("switch@0x11524677 out of table"); return;
  }
L_1152467e:;
  /* 1152467e mov esi, esp */
  ESI = (ESP);
  /* 11524680 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11524685 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 1152468a push 3 */
  push32((uint32_t)(0x3u));
  /* 1152468c push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524691 push 0x115536e8 */
  push32((uint32_t)(0x115536e8u));
  /* 11524696 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 1152469b call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115246a1u);
  /* 115246a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115246a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115246a6 call 0x115265c0 */
  push32(0x115246abu); f_115265c0();
  /* 115246ab mov esi, esp */
  ESI = (ESP);
  /* 115246ad push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115246b2 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 115246b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115246b9 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 115246be push 0x115536e8 */
  push32((uint32_t)(0x115536e8u));
  /* 115246c3 push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 115246c8 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115246ceu);
  /* 115246ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115246d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115246d3 call 0x115265c0 */
  push32(0x115246d8u); f_115265c0();
  /* 115246d8 jmp 0x115247f2 */
  goto L_115247f2;
L_115246dd:;
  /* 115246dd mov esi, esp */
  ESI = (ESP);
  /* 115246df push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115246e4 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 115246e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115246eb push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 115246f0 push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 115246f5 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 115246fa call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524700u);
  /* 11524700 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524705 call 0x115265c0 */
  push32(0x1152470au); f_115265c0();
  /* 1152470a mov esi, esp */
  ESI = (ESP);
  /* 1152470c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11524711 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 11524716 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524718 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 1152471d push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 11524722 push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 11524727 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x1152472du);
  /* 1152472d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524732 call 0x115265c0 */
  push32(0x11524737u); f_115265c0();
  /* 11524737 jmp 0x115247f2 */
  goto L_115247f2;
L_1152473c:;
  /* 1152473c mov esi, esp */
  ESI = (ESP);
  /* 1152473e push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11524743 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 11524748 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152474a push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 1152474f push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524754 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 11524759 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x1152475fu);
  /* 1152475f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524762 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524764 call 0x115265c0 */
  push32(0x11524769u); f_115265c0();
  /* 11524769 mov esi, esp */
  ESI = (ESP);
  /* 1152476b push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11524770 push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 11524775 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524777 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 1152477c push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524781 push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 11524786 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x1152478cu);
  /* 1152478c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152478f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524791 call 0x115265c0 */
  push32(0x11524796u); f_115265c0();
  /* 11524796 jmp 0x115247f2 */
  goto L_115247f2;
L_11524798:;
  /* 11524798 mov esi, esp */
  ESI = (ESP);
  /* 1152479a push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1152479f push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 115247a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 115247a6 push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 115247ab push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 115247b0 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 115247b5 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115247bbu);
  /* 115247bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115247be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115247c0 call 0x115265c0 */
  push32(0x115247c5u); f_115265c0();
  /* 115247c5 mov esi, esp */
  ESI = (ESP);
  /* 115247c7 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115247cc push 0x115536d0 */
  push32((uint32_t)(0x115536d0u));
  /* 115247d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 115247d3 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 115247d8 push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 115247dd push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 115247e2 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x115247e8u);
  /* 115247e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115247eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115247ed call 0x115265c0 */
  push32(0x115247f2u); f_115265c0();
L_115247f2:;
  /* 115247f2 mov esi, esp */
  ESI = (ESP);
  /* 115247f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115247f6 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 115247fb call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11524801u);
  /* 11524801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524804 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524806 call 0x115265c0 */
  push32(0x1152480bu); f_115265c0();
  /* 1152480b mov esi, esp */
  ESI = (ESP);
  /* 1152480d push 1 */
  push32((uint32_t)(0x1u));
  /* 1152480f push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 11524814 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152481au);
  /* 1152481a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152481d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152481f call 0x115265c0 */
  push32(0x11524824u); f_115265c0();
  /* 11524824 mov esi, esp */
  ESI = (ESP);
  /* 11524826 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152482a push 0x115535e8 */
  push32((uint32_t)(0x115535e8u));
  /* 1152482f push 3 */
  push32((uint32_t)(0x3u));
  /* 11524831 call dword ptr [0x115564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564fc))), 0x11524837u);
  /* 11524837 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152483a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152483c call 0x115265c0 */
  push32(0x11524841u); f_115265c0();
  /* 11524841 mov esi, esp */
  ESI = (ESP);
  /* 11524843 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524845 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x1152484bu);
  /* 1152484b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152484e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524850 call 0x115265c0 */
  push32(0x11524855u); f_115265c0();
L_11524855:;
  /* 11524855 mov esi, esp */
  ESI = (ESP);
  /* 11524857 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11524859 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152485fu);
  /* 1152485f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524864 call 0x115265c0 */
  push32(0x11524869u); f_115265c0();
  /* 11524869 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152486e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524870 jne 0x115248ff */
  if (!C.zf) goto L_115248ff;
  /* 11524876 mov esi, esp */
  ESI = (ESP);
  /* 11524878 push 5 */
  push32((uint32_t)(0x5u));
  /* 1152487a call dword ptr [0x115564f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f0))), 0x11524880u);
  /* 11524880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524885 call 0x115265c0 */
  push32(0x1152488au); f_115265c0();
  /* 1152488a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152488f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524891 je 0x115248ff */
  if (C.zf) goto L_115248ff;
  /* 11524893 mov esi, esp */
  ESI = (ESP);
  /* 11524895 push 0x11553470 */
  push32((uint32_t)(0x11553470u));
  /* 1152489a call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x115248a0u);
  /* 115248a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115248a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115248a5 call 0x115265c0 */
  push32(0x115248aau); f_115265c0();
  /* 115248aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115248ac jne 0x115248c9 */
  if (!C.zf) goto L_115248c9;
  /* 115248ae mov esi, esp */
  ESI = (ESP);
  /* 115248b0 push 0x11553460 */
  push32((uint32_t)(0x11553460u));
  /* 115248b5 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x115248bbu);
  /* 115248bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115248be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115248c0 call 0x115265c0 */
  push32(0x115248c5u); f_115265c0();
  /* 115248c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115248c7 je 0x115248e6 */
  if (C.zf) goto L_115248e6;
L_115248c9:;
  /* 115248c9 mov esi, esp */
  ESI = (ESP);
  /* 115248cb push 4 */
  push32((uint32_t)(0x4u));
  /* 115248cd call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x115248d3u);
  /* 115248d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115248d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115248d8 call 0x115265c0 */
  push32(0x115248ddu); f_115265c0();
  /* 115248dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115248e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115248e4 je 0x115248ff */
  if (C.zf) goto L_115248ff;
L_115248e6:;
  /* 115248e6 mov esi, esp */
  ESI = (ESP);
  /* 115248e8 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 115248ed push 5 */
  push32((uint32_t)(0x5u));
  /* 115248ef call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x115248f5u);
  /* 115248f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115248f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115248fa call 0x115265c0 */
  push32(0x115248ffu); f_115265c0();
L_115248ff:;
  /* 115248ff mov esi, esp */
  ESI = (ESP);
  /* 11524901 push 5 */
  push32((uint32_t)(0x5u));
  /* 11524903 call dword ptr [0x115564f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f4))), 0x11524909u);
  /* 11524909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152490c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152490e call 0x115265c0 */
  push32(0x11524913u); f_115265c0();
  /* 11524913 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152491a je 0x1152495a */
  if (C.zf) goto L_1152495a;
  /* 1152491c mov esi, esp */
  ESI = (ESP);
  /* 1152491e push 5 */
  push32((uint32_t)(0x5u));
  /* 11524920 call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x11524926u);
  /* 11524926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152492b call 0x115265c0 */
  push32(0x11524930u); f_115265c0();
  /* 11524930 mov esi, esp */
  ESI = (ESP);
  /* 11524932 push 4 */
  push32((uint32_t)(0x4u));
  /* 11524934 call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x1152493au);
  /* 1152493a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152493d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152493f call 0x115265c0 */
  push32(0x11524944u); f_115265c0();
  /* 11524944 mov esi, esp */
  ESI = (ESP);
  /* 11524946 push 1 */
  push32((uint32_t)(0x1u));
  /* 11524948 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1152494a call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524950u);
  /* 11524950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524955 call 0x115265c0 */
  push32(0x1152495au); f_115265c0();
L_1152495a:;
  /* 1152495a mov esi, esp */
  ESI = (ESP);
  /* 1152495c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1152495e call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524964u);
  /* 11524964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524969 call 0x115265c0 */
  push32(0x1152496eu); f_115265c0();
  /* 1152496e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524975 jne 0x11524bfa */
  if (!C.zf) goto L_11524bfa;
  /* 1152497b mov esi, esp */
  ESI = (ESP);
  /* 1152497d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1152497f call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524985u);
  /* 11524985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524988 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152498a call 0x115265c0 */
  push32(0x1152498fu); f_115265c0();
  /* 1152498f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524996 je 0x11524bfa */
  if (C.zf) goto L_11524bfa;
  /* 1152499c mov esi, esp */
  ESI = (ESP);
  /* 1152499e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115249a0 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115249a6u);
  /* 115249a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115249a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115249ab call 0x115265c0 */
  push32(0x115249b0u); f_115265c0();
  /* 115249b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115249b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115249b7 je 0x11524bfa */
  if (C.zf) goto L_11524bfa;
  /* 115249bd mov esi, esp */
  ESI = (ESP);
  /* 115249bf push 0 */
  push32((uint32_t)(0x0u));
  /* 115249c1 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 115249c6 call dword ptr [0x115564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c0))), 0x115249ccu);
  /* 115249cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115249cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115249d1 call 0x115265c0 */
  push32(0x115249d6u); f_115265c0();
  /* 115249d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115249d8 jne 0x11524bfa */
  if (!C.zf) goto L_11524bfa;
  /* 115249de mov esi, esp */
  ESI = (ESP);
  /* 115249e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115249e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115249e4 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115249eau);
  /* 115249ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115249ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115249ef call 0x115265c0 */
  push32(0x115249f4u); f_115265c0();
  /* 115249f4 mov esi, esp */
  ESI = (ESP);
  /* 115249f6 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 115249fb push 8 */
  push32((uint32_t)(0x8u));
  /* 115249fd call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11524a03u);
  /* 11524a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524a08 call 0x115265c0 */
  push32(0x11524a0du); f_115265c0();
  /* 11524a0d mov esi, esp */
  ESI = (ESP);
  /* 11524a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11524a11 call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11524a17u);
  /* 11524a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524a1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524a1c call 0x115265c0 */
  push32(0x11524a21u); f_115265c0();
  /* 11524a21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11524a24 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524a28 ja 0x11524b94 */
  if ((!C.cf&&!C.zf)) goto L_11524b94;
  /* 11524a2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11524a31 jmp dword ptr [edx*4 + 0x115257af] */
  switch (EDX) {
    case 0: goto L_11524a38;
    case 1: goto L_11524a91;
    case 2: goto L_11524aea;
    case 3: goto L_11524b40;
    default: x86_unimpl("switch@0x11524a31 out of table"); return;
  }
L_11524a38:;
  /* 11524a38 mov esi, esp */
  ESI = (ESP);
  /* 11524a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11524a3c push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524a41 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524a43 push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524a48 push 0x115536e8 */
  push32((uint32_t)(0x115536e8u));
  /* 11524a4d push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524a52 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524a58u);
  /* 11524a58 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524a5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524a5d call 0x115265c0 */
  push32(0x11524a62u); f_115265c0();
  /* 11524a62 mov esi, esp */
  ESI = (ESP);
  /* 11524a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524a66 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524a6b push 3 */
  push32((uint32_t)(0x3u));
  /* 11524a6d push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 11524a72 push 0x115536e8 */
  push32((uint32_t)(0x115536e8u));
  /* 11524a77 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524a7c call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524a82u);
  /* 11524a82 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524a85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524a87 call 0x115265c0 */
  push32(0x11524a8cu); f_115265c0();
  /* 11524a8c jmp 0x11524b94 */
  goto L_11524b94;
L_11524a91:;
  /* 11524a91 mov esi, esp */
  ESI = (ESP);
  /* 11524a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524a95 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524a9a push 3 */
  push32((uint32_t)(0x3u));
  /* 11524a9c push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524aa1 push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 11524aa6 push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524aab call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524ab1u);
  /* 11524ab1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ab6 call 0x115265c0 */
  push32(0x11524abbu); f_115265c0();
  /* 11524abb mov esi, esp */
  ESI = (ESP);
  /* 11524abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11524abf push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524ac4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524ac6 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 11524acb push 0x115536f0 */
  push32((uint32_t)(0x115536f0u));
  /* 11524ad0 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524ad5 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524adbu);
  /* 11524adb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ade cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ae0 call 0x115265c0 */
  push32(0x11524ae5u); f_115265c0();
  /* 11524ae5 jmp 0x11524b94 */
  goto L_11524b94;
L_11524aea:;
  /* 11524aea mov esi, esp */
  ESI = (ESP);
  /* 11524aec push 0 */
  push32((uint32_t)(0x0u));
  /* 11524aee push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524af3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524af5 push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524afa push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524aff push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524b04 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524b0au);
  /* 11524b0a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524b0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524b0f call 0x115265c0 */
  push32(0x11524b14u); f_115265c0();
  /* 11524b14 mov esi, esp */
  ESI = (ESP);
  /* 11524b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524b18 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524b1d push 3 */
  push32((uint32_t)(0x3u));
  /* 11524b1f push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 11524b24 push 0x11553570 */
  push32((uint32_t)(0x11553570u));
  /* 11524b29 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524b2e call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524b34u);
  /* 11524b34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524b39 call 0x115265c0 */
  push32(0x11524b3eu); f_115265c0();
  /* 11524b3e jmp 0x11524b94 */
  goto L_11524b94;
L_11524b40:;
  /* 11524b40 mov esi, esp */
  ESI = (ESP);
  /* 11524b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524b44 push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524b49 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524b4b push 0x11553648 */
  push32((uint32_t)(0x11553648u));
  /* 11524b50 push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 11524b55 push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524b5a call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524b60u);
  /* 11524b60 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524b65 call 0x115265c0 */
  push32(0x11524b6au); f_115265c0();
  /* 11524b6a mov esi, esp */
  ESI = (ESP);
  /* 11524b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11524b6e push 0x115536d8 */
  push32((uint32_t)(0x115536d8u));
  /* 11524b73 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524b75 push 0x11553668 */
  push32((uint32_t)(0x11553668u));
  /* 11524b7a push 0x11553590 */
  push32((uint32_t)(0x11553590u));
  /* 11524b7f push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524b84 call dword ptr [0x115564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e8))), 0x11524b8au);
  /* 11524b8a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524b8f call 0x115265c0 */
  push32(0x11524b94u); f_115265c0();
L_11524b94:;
  /* 11524b94 mov esi, esp */
  ESI = (ESP);
  /* 11524b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524b98 push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524b9d call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11524ba3u);
  /* 11524ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ba8 call 0x115265c0 */
  push32(0x11524badu); f_115265c0();
  /* 11524bad mov esi, esp */
  ESI = (ESP);
  /* 11524baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11524bb1 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524bb6 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x11524bbcu);
  /* 11524bbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524bc1 call 0x115265c0 */
  push32(0x11524bc6u); f_115265c0();
  /* 11524bc6 mov esi, esp */
  ESI = (ESP);
  /* 11524bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524bca push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11524bcf push 0x115535f0 */
  push32((uint32_t)(0x115535f0u));
  /* 11524bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524bd6 call dword ptr [0x115564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564fc))), 0x11524bdcu);
  /* 11524bdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524be1 call 0x115265c0 */
  push32(0x11524be6u); f_115265c0();
  /* 11524be6 mov esi, esp */
  ESI = (ESP);
  /* 11524be8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11524bea call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11524bf0u);
  /* 11524bf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524bf5 call 0x115265c0 */
  push32(0x11524bfau); f_115265c0();
L_11524bfa:;
  /* 11524bfa mov esi, esp */
  ESI = (ESP);
  /* 11524bfc push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11524bfe call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524c04u);
  /* 11524c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c09 call 0x115265c0 */
  push32(0x11524c0eu); f_115265c0();
  /* 11524c0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524c13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524c15 jne 0x11524ca4 */
  if (!C.zf) goto L_11524ca4;
  /* 11524c1b mov esi, esp */
  ESI = (ESP);
  /* 11524c1d push 9 */
  push32((uint32_t)(0x9u));
  /* 11524c1f call dword ptr [0x115564f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f0))), 0x11524c25u);
  /* 11524c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c2a call 0x115265c0 */
  push32(0x11524c2fu); f_115265c0();
  /* 11524c2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524c36 je 0x11524ca4 */
  if (C.zf) goto L_11524ca4;
  /* 11524c38 mov esi, esp */
  ESI = (ESP);
  /* 11524c3a push 0x11553418 */
  push32((uint32_t)(0x11553418u));
  /* 11524c3f call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11524c45u);
  /* 11524c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c4a call 0x115265c0 */
  push32(0x11524c4fu); f_115265c0();
  /* 11524c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524c51 jne 0x11524c6e */
  if (!C.zf) goto L_11524c6e;
  /* 11524c53 mov esi, esp */
  ESI = (ESP);
  /* 11524c55 push 0x11553410 */
  push32((uint32_t)(0x11553410u));
  /* 11524c5a call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11524c60u);
  /* 11524c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c65 call 0x115265c0 */
  push32(0x11524c6au); f_115265c0();
  /* 11524c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524c6c je 0x11524c8b */
  if (C.zf) goto L_11524c8b;
L_11524c6e:;
  /* 11524c6e mov esi, esp */
  ESI = (ESP);
  /* 11524c70 push 8 */
  push32((uint32_t)(0x8u));
  /* 11524c72 call dword ptr [0x115564b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b4))), 0x11524c78u);
  /* 11524c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c7d call 0x115265c0 */
  push32(0x11524c82u); f_115265c0();
  /* 11524c82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524c87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524c89 je 0x11524ca4 */
  if (C.zf) goto L_11524ca4;
L_11524c8b:;
  /* 11524c8b mov esi, esp */
  ESI = (ESP);
  /* 11524c8d push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11524c92 push 9 */
  push32((uint32_t)(0x9u));
  /* 11524c94 call dword ptr [0x115564a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a0))), 0x11524c9au);
  /* 11524c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524c9f call 0x115265c0 */
  push32(0x11524ca4u); f_115265c0();
L_11524ca4:;
  /* 11524ca4 mov esi, esp */
  ESI = (ESP);
  /* 11524ca6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11524ca8 call dword ptr [0x115564f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f4))), 0x11524caeu);
  /* 11524cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524cb3 call 0x115265c0 */
  push32(0x11524cb8u); f_115265c0();
  /* 11524cb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524cbf je 0x11524cff */
  if (C.zf) goto L_11524cff;
  /* 11524cc1 mov esi, esp */
  ESI = (ESP);
  /* 11524cc3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11524cc5 call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x11524ccbu);
  /* 11524ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524cd0 call 0x115265c0 */
  push32(0x11524cd5u); f_115265c0();
  /* 11524cd5 mov esi, esp */
  ESI = (ESP);
  /* 11524cd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11524cd9 call dword ptr [0x115564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564f8))), 0x11524cdfu);
  /* 11524cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ce4 call 0x115265c0 */
  push32(0x11524ce9u); f_115265c0();
  /* 11524ce9 mov esi, esp */
  ESI = (ESP);
  /* 11524ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 11524ced push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11524cef call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524cf5u);
  /* 11524cf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524cf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524cfa call 0x115265c0 */
  push32(0x11524cffu); f_115265c0();
L_11524cff:;
  /* 11524cff mov esi, esp */
  ESI = (ESP);
  /* 11524d01 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11524d03 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524d09u);
  /* 11524d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d0e call 0x115265c0 */
  push32(0x11524d13u); f_115265c0();
  /* 11524d13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524d18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524d1a je 0x11524d8c */
  if (C.zf) goto L_11524d8c;
  /* 11524d1c mov esi, esp */
  ESI = (ESP);
  /* 11524d1e push 0x115534a8 */
  push32((uint32_t)(0x115534a8u));
  /* 11524d23 call dword ptr [0x115564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564c4))), 0x11524d29u);
  /* 11524d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d2e call 0x115265c0 */
  push32(0x11524d33u); f_115265c0();
  /* 11524d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524d35 jne 0x11524d8c */
  if (!C.zf) goto L_11524d8c;
  /* 11524d37 mov esi, esp */
  ESI = (ESP);
  /* 11524d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524d3b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11524d3d call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524d43u);
  /* 11524d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d48 call 0x115265c0 */
  push32(0x11524d4du); f_115265c0();
  /* 11524d4d mov esi, esp */
  ESI = (ESP);
  /* 11524d4f push 0x1154e558 */
  push32((uint32_t)(0x1154e558u));
  /* 11524d54 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11524d5au);
  /* 11524d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d5f call 0x115265c0 */
  push32(0x11524d64u); f_115265c0();
  /* 11524d64 mov esi, esp */
  ESI = (ESP);
  /* 11524d66 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11524d68 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11524d6eu);
  /* 11524d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d73 call 0x115265c0 */
  push32(0x11524d78u); f_115265c0();
  /* 11524d78 mov esi, esp */
  ESI = (ESP);
  /* 11524d7a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11524d7c call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11524d82u);
  /* 11524d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d87 call 0x115265c0 */
  push32(0x11524d8cu); f_115265c0();
L_11524d8c:;
  /* 11524d8c mov esi, esp */
  ESI = (ESP);
  /* 11524d8e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11524d90 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524d96u);
  /* 11524d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524d99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524d9b call 0x115265c0 */
  push32(0x11524da0u); f_115265c0();
  /* 11524da0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524da7 jne 0x11524e10 */
  if (!C.zf) goto L_11524e10;
  /* 11524da9 mov esi, esp */
  ESI = (ESP);
  /* 11524dab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11524dad call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524db3u);
  /* 11524db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524db6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524db8 call 0x115265c0 */
  push32(0x11524dbdu); f_115265c0();
  /* 11524dbd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524dc4 je 0x11524e10 */
  if (C.zf) goto L_11524e10;
  /* 11524dc6 mov esi, esp */
  ESI = (ESP);
  /* 11524dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11524dcc call dword ptr [0x115564d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d8))), 0x11524dd2u);
  /* 11524dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524dd7 call 0x115265c0 */
  push32(0x11524ddcu); f_115265c0();
  /* 11524ddc cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524de1 jle 0x11524e10 */
  if ((C.zf||C.sf!=C.of)) goto L_11524e10;
  /* 11524de3 mov esi, esp */
  ESI = (ESP);
  /* 11524de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524de7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11524de9 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524defu);
  /* 11524def add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524df2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524df4 call 0x115265c0 */
  push32(0x11524df9u); f_115265c0();
  /* 11524df9 mov esi, esp */
  ESI = (ESP);
  /* 11524dfb push 0x1154e54c */
  push32((uint32_t)(0x1154e54cu));
  /* 11524e00 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11524e06u);
  /* 11524e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e0b call 0x115265c0 */
  push32(0x11524e10u); f_115265c0();
L_11524e10:;
  /* 11524e10 mov esi, esp */
  ESI = (ESP);
  /* 11524e12 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11524e14 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524e1au);
  /* 11524e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e1f call 0x115265c0 */
  push32(0x11524e24u); f_115265c0();
  /* 11524e24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524e2b jne 0x11524ed8 */
  if (!C.zf) goto L_11524ed8;
  /* 11524e31 mov esi, esp */
  ESI = (ESP);
  /* 11524e33 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11524e35 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524e3bu);
  /* 11524e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e40 call 0x115265c0 */
  push32(0x11524e45u); f_115265c0();
  /* 11524e45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524e4c je 0x11524ed8 */
  if (C.zf) goto L_11524ed8;
  /* 11524e52 mov esi, esp */
  ESI = (ESP);
  /* 11524e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524e58 call dword ptr [0x115564d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d8))), 0x11524e5eu);
  /* 11524e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e63 call 0x115265c0 */
  push32(0x11524e68u); f_115265c0();
  /* 11524e68 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e6d jle 0x11524ed8 */
  if ((C.zf||C.sf!=C.of)) goto L_11524ed8;
  /* 11524e6f mov esi, esp */
  ESI = (ESP);
  /* 11524e71 push 0x115534f8 */
  push32((uint32_t)(0x115534f8u));
  /* 11524e76 push 0x11553500 */
  push32((uint32_t)(0x11553500u));
  /* 11524e7b call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11524e81u);
  /* 11524e81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e86 call 0x115265c0 */
  push32(0x11524e8bu); f_115265c0();
  /* 11524e8b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524e8e jne 0x11524ed8 */
  if (!C.zf) goto L_11524ed8;
  /* 11524e90 mov esi, esp */
  ESI = (ESP);
  /* 11524e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524e94 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11524e96 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524e9cu);
  /* 11524e9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ea1 call 0x115265c0 */
  push32(0x11524ea6u); f_115265c0();
  /* 11524ea6 mov esi, esp */
  ESI = (ESP);
  /* 11524ea8 push 0x1154e540 */
  push32((uint32_t)(0x1154e540u));
  /* 11524ead call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11524eb3u);
  /* 11524eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524eb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524eb8 call 0x115265c0 */
  push32(0x11524ebdu); f_115265c0();
  /* 11524ebd mov esi, esp */
  ESI = (ESP);
  /* 11524ebf push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11524ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524ec8 call dword ptr [0x115564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d0))), 0x11524eceu);
  /* 11524ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ed3 call 0x115265c0 */
  push32(0x11524ed8u); f_115265c0();
L_11524ed8:;
  /* 11524ed8 mov esi, esp */
  ESI = (ESP);
  /* 11524eda push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11524edc call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524ee2u);
  /* 11524ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524ee7 call 0x115265c0 */
  push32(0x11524eecu); f_115265c0();
  /* 11524eec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524ef3 je 0x11524f40 */
  if (C.zf) goto L_11524f40;
  /* 11524ef5 mov esi, esp */
  ESI = (ESP);
  /* 11524ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524ef9 push 0x11553568 */
  push32((uint32_t)(0x11553568u));
  /* 11524efe call dword ptr [0x11556500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556500))), 0x11524f04u);
  /* 11524f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f09 call 0x115265c0 */
  push32(0x11524f0eu); f_115265c0();
  /* 11524f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f11 jne 0x11524f40 */
  if (!C.zf) goto L_11524f40;
  /* 11524f13 mov esi, esp */
  ESI = (ESP);
  /* 11524f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11524f17 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11524f19 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524f1fu);
  /* 11524f1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f24 call 0x115265c0 */
  push32(0x11524f29u); f_115265c0();
  /* 11524f29 mov esi, esp */
  ESI = (ESP);
  /* 11524f2b push 0x1154e534 */
  push32((uint32_t)(0x1154e534u));
  /* 11524f30 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11524f36u);
  /* 11524f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f3b call 0x115265c0 */
  push32(0x11524f40u); f_115265c0();
L_11524f40:;
  /* 11524f40 mov esi, esp */
  ESI = (ESP);
  /* 11524f42 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11524f44 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524f4au);
  /* 11524f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f4f call 0x115265c0 */
  push32(0x11524f54u); f_115265c0();
  /* 11524f54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524f5b je 0x11524fa7 */
  if (C.zf) goto L_11524fa7;
  /* 11524f5d mov esi, esp */
  ESI = (ESP);
  /* 11524f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11524f61 push 0x11553568 */
  push32((uint32_t)(0x11553568u));
  /* 11524f66 call dword ptr [0x11556500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556500))), 0x11524f6cu);
  /* 11524f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f71 call 0x115265c0 */
  push32(0x11524f76u); f_115265c0();
  /* 11524f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524f78 jne 0x11524fa7 */
  if (!C.zf) goto L_11524fa7;
  /* 11524f7a mov esi, esp */
  ESI = (ESP);
  /* 11524f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11524f7e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11524f80 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11524f86u);
  /* 11524f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524f89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524f8b call 0x115265c0 */
  push32(0x11524f90u); f_115265c0();
  /* 11524f90 mov esi, esp */
  ESI = (ESP);
  /* 11524f92 push 0x1154e534 */
  push32((uint32_t)(0x1154e534u));
  /* 11524f97 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11524f9du);
  /* 11524f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524fa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524fa2 call 0x115265c0 */
  push32(0x11524fa7u); f_115265c0();
L_11524fa7:;
  /* 11524fa7 mov esi, esp */
  ESI = (ESP);
  /* 11524fa9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11524fab call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524fb1u);
  /* 11524fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524fb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524fb6 call 0x115265c0 */
  push32(0x11524fbbu); f_115265c0();
  /* 11524fbb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524fc2 jne 0x115251bb */
  if (!C.zf) goto L_115251bb;
  /* 11524fc8 mov esi, esp */
  ESI = (ESP);
  /* 11524fca push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11524fcc call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11524fd2u);
  /* 11524fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11524fd7 call 0x115265c0 */
  push32(0x11524fdcu); f_115265c0();
  /* 11524fdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11524fe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11524fe3 je 0x115251bb */
  if (C.zf) goto L_115251bb;
  /* 11524fe9 mov esi, esp */
  ESI = (ESP);
  /* 11524feb push 0x115534f8 */
  push32((uint32_t)(0x115534f8u));
  /* 11524ff0 push 0x115535e8 */
  push32((uint32_t)(0x115535e8u));
  /* 11524ff5 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x11524ffbu);
  /* 11524ffb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11524ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525000 call 0x115265c0 */
  push32(0x11525005u); f_115265c0();
  /* 11525005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525007 jle 0x115251bb */
  if ((C.zf||C.sf!=C.of)) goto L_115251bb;
  /* 1152500d mov esi, esp */
  ESI = (ESP);
  /* 1152500f push 0 */
  push32((uint32_t)(0x0u));
  /* 11525011 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11525013 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525019u);
  /* 11525019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152501c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152501e call 0x115265c0 */
  push32(0x11525023u); f_115265c0();
  /* 11525023 mov esi, esp */
  ESI = (ESP);
  /* 11525025 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11525027 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152502du);
  /* 1152502d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525032 call 0x115265c0 */
  push32(0x11525037u); f_115265c0();
  /* 11525037 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152503c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152503e jne 0x1152506e */
  if (!C.zf) goto L_1152506e;
  /* 11525040 mov esi, esp */
  ESI = (ESP);
  /* 11525042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525044 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11525046 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152504cu);
  /* 1152504c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152504f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525051 call 0x115265c0 */
  push32(0x11525056u); f_115265c0();
  /* 11525056 mov esi, esp */
  ESI = (ESP);
  /* 11525058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152505a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1152505c call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525062u);
  /* 11525062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525065 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525067 call 0x115265c0 */
  push32(0x1152506cu); f_115265c0();
  /* 1152506c jmp 0x11525084 */
  goto L_11525084;
L_1152506e:;
  /* 1152506e mov esi, esp */
  ESI = (ESP);
  /* 11525070 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525072 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11525074 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152507au);
  /* 1152507a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152507d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152507f call 0x115265c0 */
  push32(0x11525084u); f_115265c0();
L_11525084:;
  /* 11525084 mov esi, esp */
  ESI = (ESP);
  /* 11525086 push 0x1154e528 */
  push32((uint32_t)(0x1154e528u));
  /* 1152508b call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11525091u);
  /* 11525091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525096 call 0x115265c0 */
  push32(0x1152509bu); f_115265c0();
  /* 1152509b mov esi, esp */
  ESI = (ESP);
  /* 1152509d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152509f push 0 */
  push32((uint32_t)(0x0u));
  /* 115250a1 push 0x11553568 */
  push32((uint32_t)(0x11553568u));
  /* 115250a6 push 0x115535e8 */
  push32((uint32_t)(0x115535e8u));
  /* 115250ab call dword ptr [0x11556504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556504))), 0x115250b1u);
  /* 115250b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115250b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115250b6 call 0x115265c0 */
  push32(0x115250bbu); f_115265c0();
  /* 115250bb mov esi, esp */
  ESI = (ESP);
  /* 115250bd push 1 */
  push32((uint32_t)(0x1u));
  /* 115250bf push 0 */
  push32((uint32_t)(0x0u));
  /* 115250c1 call dword ptr [0x115564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d4))), 0x115250c7u);
  /* 115250c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115250ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115250cc call 0x115265c0 */
  push32(0x115250d1u); f_115265c0();
  /* 115250d1 mov esi, esp */
  ESI = (ESP);
  /* 115250d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115250d5 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x115250dbu);
  /* 115250db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115250de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115250e0 call 0x115265c0 */
  push32(0x115250e5u); f_115265c0();
  /* 115250e5 mov esi, esp */
  ESI = (ESP);
  /* 115250e7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115250ec push 3 */
  push32((uint32_t)(0x3u));
  /* 115250ee push 1 */
  push32((uint32_t)(0x1u));
  /* 115250f0 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x115250f6u);
  /* 115250f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115250f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115250fb call 0x115265c0 */
  push32(0x11525100u); f_115265c0();
  /* 11525100 mov esi, esp */
  ESI = (ESP);
  /* 11525102 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525107 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525109 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152510b call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525111u);
  /* 11525111 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525116 call 0x115265c0 */
  push32(0x1152511bu); f_115265c0();
  /* 1152511b mov esi, esp */
  ESI = (ESP);
  /* 1152511d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525122 push 2 */
  push32((uint32_t)(0x2u));
  /* 11525124 push 1 */
  push32((uint32_t)(0x1u));
  /* 11525126 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x1152512cu);
  /* 1152512c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152512f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525131 call 0x115265c0 */
  push32(0x11525136u); f_115265c0();
  /* 11525136 mov esi, esp */
  ESI = (ESP);
  /* 11525138 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1152513d push 1 */
  push32((uint32_t)(0x1u));
  /* 1152513f push 1 */
  push32((uint32_t)(0x1u));
  /* 11525141 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525147u);
  /* 11525147 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152514a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152514c call 0x115265c0 */
  push32(0x11525151u); f_115265c0();
  /* 11525151 mov esi, esp */
  ESI = (ESP);
  /* 11525153 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525158 push 5 */
  push32((uint32_t)(0x5u));
  /* 1152515a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152515c call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525162u);
  /* 11525162 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525167 call 0x115265c0 */
  push32(0x1152516cu); f_115265c0();
  /* 1152516c mov esi, esp */
  ESI = (ESP);
  /* 1152516e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525173 push 4 */
  push32((uint32_t)(0x4u));
  /* 11525175 push 1 */
  push32((uint32_t)(0x1u));
  /* 11525177 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x1152517du);
  /* 1152517d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525180 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525182 call 0x115265c0 */
  push32(0x11525187u); f_115265c0();
  /* 11525187 mov esi, esp */
  ESI = (ESP);
  /* 11525189 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152518b call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x11525191u);
  /* 11525191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525196 call 0x115265c0 */
  push32(0x1152519bu); f_115265c0();
  /* 1152519b mov esi, esp */
  ESI = (ESP);
  /* 1152519d push eax */
  push32((uint32_t)(EAX));
  /* 1152519e push 1 */
  push32((uint32_t)(0x1u));
  /* 115251a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115251a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115251a4 push 0x1154e51c */
  push32((uint32_t)(0x1154e51cu));
  /* 115251a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115251ab call dword ptr [0x115564a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a8))), 0x115251b1u);
  /* 115251b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115251b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115251b6 call 0x115265c0 */
  push32(0x115251bbu); f_115265c0();
L_115251bb:;
  /* 115251bb mov esi, esp */
  ESI = (ESP);
  /* 115251bd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115251bf call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115251c5u);
  /* 115251c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115251c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115251ca call 0x115265c0 */
  push32(0x115251cfu); f_115265c0();
  /* 115251cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115251d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115251d6 jne 0x115253cf */
  if (!C.zf) goto L_115253cf;
  /* 115251dc mov esi, esp */
  ESI = (ESP);
  /* 115251de push 0x17 */
  push32((uint32_t)(0x17u));
  /* 115251e0 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115251e6u);
  /* 115251e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115251e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115251eb call 0x115265c0 */
  push32(0x115251f0u); f_115265c0();
  /* 115251f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115251f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115251f7 je 0x115253cf */
  if (C.zf) goto L_115253cf;
  /* 115251fd mov esi, esp */
  ESI = (ESP);
  /* 115251ff push 0x115534f8 */
  push32((uint32_t)(0x115534f8u));
  /* 11525204 push 0x115535f0 */
  push32((uint32_t)(0x115535f0u));
  /* 11525209 call dword ptr [0x115564ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564ac))), 0x1152520fu);
  /* 1152520f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525212 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525214 call 0x115265c0 */
  push32(0x11525219u); f_115265c0();
  /* 11525219 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152521b jle 0x115253cf */
  if ((C.zf||C.sf!=C.of)) goto L_115253cf;
  /* 11525221 mov esi, esp */
  ESI = (ESP);
  /* 11525223 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525225 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11525227 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152522du);
  /* 1152522d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525230 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525232 call 0x115265c0 */
  push32(0x11525237u); f_115265c0();
  /* 11525237 mov esi, esp */
  ESI = (ESP);
  /* 11525239 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1152523b call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11525241u);
  /* 11525241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525244 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525246 call 0x115265c0 */
  push32(0x1152524bu); f_115265c0();
  /* 1152524b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525252 jne 0x11525282 */
  if (!C.zf) goto L_11525282;
  /* 11525254 mov esi, esp */
  ESI = (ESP);
  /* 11525256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525258 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1152525a call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525260u);
  /* 11525260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525263 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525265 call 0x115265c0 */
  push32(0x1152526au); f_115265c0();
  /* 1152526a mov esi, esp */
  ESI = (ESP);
  /* 1152526c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152526e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11525270 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525276u);
  /* 11525276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525279 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152527b call 0x115265c0 */
  push32(0x11525280u); f_115265c0();
  /* 11525280 jmp 0x11525298 */
  goto L_11525298;
L_11525282:;
  /* 11525282 mov esi, esp */
  ESI = (ESP);
  /* 11525284 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525286 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11525288 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x1152528eu);
  /* 1152528e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525293 call 0x115265c0 */
  push32(0x11525298u); f_115265c0();
L_11525298:;
  /* 11525298 mov esi, esp */
  ESI = (ESP);
  /* 1152529a push 0x1154e528 */
  push32((uint32_t)(0x1154e528u));
  /* 1152529f call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115252a5u);
  /* 115252a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115252a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115252aa call 0x115265c0 */
  push32(0x115252afu); f_115265c0();
  /* 115252af mov esi, esp */
  ESI = (ESP);
  /* 115252b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115252b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115252b5 push 0x11553568 */
  push32((uint32_t)(0x11553568u));
  /* 115252ba push 0x115535f0 */
  push32((uint32_t)(0x115535f0u));
  /* 115252bf call dword ptr [0x11556504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556504))), 0x115252c5u);
  /* 115252c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115252c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115252ca call 0x115265c0 */
  push32(0x115252cfu); f_115265c0();
  /* 115252cf mov esi, esp */
  ESI = (ESP);
  /* 115252d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115252d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115252d5 call dword ptr [0x115564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564d4))), 0x115252dbu);
  /* 115252db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115252de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115252e0 call 0x115265c0 */
  push32(0x115252e5u); f_115265c0();
  /* 115252e5 mov esi, esp */
  ESI = (ESP);
  /* 115252e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115252e9 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x115252efu);
  /* 115252ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115252f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115252f4 call 0x115265c0 */
  push32(0x115252f9u); f_115265c0();
  /* 115252f9 mov esi, esp */
  ESI = (ESP);
  /* 115252fb push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525300 push 3 */
  push32((uint32_t)(0x3u));
  /* 11525302 push 2 */
  push32((uint32_t)(0x2u));
  /* 11525304 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x1152530au);
  /* 1152530a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152530d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152530f call 0x115265c0 */
  push32(0x11525314u); f_115265c0();
  /* 11525314 mov esi, esp */
  ESI = (ESP);
  /* 11525316 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1152531b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152531d push 2 */
  push32((uint32_t)(0x2u));
  /* 1152531f call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525325u);
  /* 11525325 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525328 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152532a call 0x115265c0 */
  push32(0x1152532fu); f_115265c0();
  /* 1152532f mov esi, esp */
  ESI = (ESP);
  /* 11525331 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525336 push 2 */
  push32((uint32_t)(0x2u));
  /* 11525338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152533a call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525340u);
  /* 11525340 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525345 call 0x115265c0 */
  push32(0x1152534au); f_115265c0();
  /* 1152534a mov esi, esp */
  ESI = (ESP);
  /* 1152534c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525351 push 1 */
  push32((uint32_t)(0x1u));
  /* 11525353 push 2 */
  push32((uint32_t)(0x2u));
  /* 11525355 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x1152535bu);
  /* 1152535b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152535e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525360 call 0x115265c0 */
  push32(0x11525365u); f_115265c0();
  /* 11525365 mov esi, esp */
  ESI = (ESP);
  /* 11525367 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1152536c push 5 */
  push32((uint32_t)(0x5u));
  /* 1152536e push 2 */
  push32((uint32_t)(0x2u));
  /* 11525370 call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525376u);
  /* 11525376 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152537b call 0x115265c0 */
  push32(0x11525380u); f_115265c0();
  /* 11525380 mov esi, esp */
  ESI = (ESP);
  /* 11525382 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11525387 push 4 */
  push32((uint32_t)(0x4u));
  /* 11525389 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152538b call dword ptr [0x11556498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556498))), 0x11525391u);
  /* 11525391 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525394 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525396 call 0x115265c0 */
  push32(0x1152539bu); f_115265c0();
  /* 1152539b mov esi, esp */
  ESI = (ESP);
  /* 1152539d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152539f call dword ptr [0x11556494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556494))), 0x115253a5u);
  /* 115253a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115253a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115253aa call 0x115265c0 */
  push32(0x115253afu); f_115265c0();
  /* 115253af mov esi, esp */
  ESI = (ESP);
  /* 115253b1 push eax */
  push32((uint32_t)(EAX));
  /* 115253b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115253b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115253b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115253b8 push 0x1154e51c */
  push32((uint32_t)(0x1154e51cu));
  /* 115253bd push 2 */
  push32((uint32_t)(0x2u));
  /* 115253bf call dword ptr [0x115564a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564a8))), 0x115253c5u);
  /* 115253c5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115253c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115253ca call 0x115265c0 */
  push32(0x115253cfu); f_115265c0();
L_115253cf:;
  /* 115253cf mov esi, esp */
  ESI = (ESP);
  /* 115253d1 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 115253d3 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115253d9u);
  /* 115253d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115253dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115253de call 0x115265c0 */
  push32(0x115253e3u); f_115265c0();
  /* 115253e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115253e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115253ea jne 0x11525464 */
  if (!C.zf) goto L_11525464;
  /* 115253ec mov esi, esp */
  ESI = (ESP);
  /* 115253ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115253f0 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115253f6u);
  /* 115253f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115253f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115253fb call 0x115265c0 */
  push32(0x11525400u); f_115265c0();
  /* 11525400 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525407 jne 0x11525464 */
  if (!C.zf) goto L_11525464;
  /* 11525409 mov esi, esp */
  ESI = (ESP);
  /* 1152540b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1152540d call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11525413u);
  /* 11525413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525416 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525418 call 0x115265c0 */
  push32(0x1152541du); f_115265c0();
  /* 1152541d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525424 je 0x11525464 */
  if (C.zf) goto L_11525464;
  /* 11525426 mov esi, esp */
  ESI = (ESP);
  /* 11525428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152542a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1152542c call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525432u);
  /* 11525432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525437 call 0x115265c0 */
  push32(0x1152543cu); f_115265c0();
  /* 1152543c mov esi, esp */
  ESI = (ESP);
  /* 1152543e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11525440 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x11525446u);
  /* 11525446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152544b call 0x115265c0 */
  push32(0x11525450u); f_115265c0();
  /* 11525450 mov esi, esp */
  ESI = (ESP);
  /* 11525452 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11525454 call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x1152545au);
  /* 1152545a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152545d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152545f call 0x115265c0 */
  push32(0x11525464u); f_115265c0();
L_11525464:;
  /* 11525464 mov esi, esp */
  ESI = (ESP);
  /* 11525466 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11525468 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152546eu);
  /* 1152546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525471 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525473 call 0x115265c0 */
  push32(0x11525478u); f_115265c0();
  /* 11525478 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152547d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152547f je 0x115254cb */
  if (C.zf) goto L_115254cb;
  /* 11525481 mov esi, esp */
  ESI = (ESP);
  /* 11525483 push 4 */
  push32((uint32_t)(0x4u));
  /* 11525485 call dword ptr [0x115564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e0))), 0x1152548bu);
  /* 1152548b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152548e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525490 call 0x115265c0 */
  push32(0x11525495u); f_115265c0();
  /* 11525495 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152549a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152549c je 0x115254cb */
  if (C.zf) goto L_115254cb;
  /* 1152549e mov esi, esp */
  ESI = (ESP);
  /* 115254a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115254a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115254a4 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x115254aau);
  /* 115254aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115254ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115254af call 0x115265c0 */
  push32(0x115254b4u); f_115265c0();
  /* 115254b4 mov esi, esp */
  ESI = (ESP);
  /* 115254b6 push 0x1154e510 */
  push32((uint32_t)(0x1154e510u));
  /* 115254bb call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x115254c1u);
  /* 115254c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115254c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115254c6 call 0x115265c0 */
  push32(0x115254cbu); f_115265c0();
L_115254cb:;
  /* 115254cb mov esi, esp */
  ESI = (ESP);
  /* 115254cd push 0xd */
  push32((uint32_t)(0xdu));
  /* 115254cf call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115254d5u);
  /* 115254d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115254d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115254da call 0x115265c0 */
  push32(0x115254dfu); f_115265c0();
  /* 115254df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115254e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115254e6 je 0x11525532 */
  if (C.zf) goto L_11525532;
  /* 115254e8 mov esi, esp */
  ESI = (ESP);
  /* 115254ea push 6 */
  push32((uint32_t)(0x6u));
  /* 115254ec call dword ptr [0x115564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e0))), 0x115254f2u);
  /* 115254f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115254f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115254f7 call 0x115265c0 */
  push32(0x115254fcu); f_115265c0();
  /* 115254fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525503 je 0x11525532 */
  if (C.zf) goto L_11525532;
  /* 11525505 mov esi, esp */
  ESI = (ESP);
  /* 11525507 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525509 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1152550b call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525511u);
  /* 11525511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525516 call 0x115265c0 */
  push32(0x1152551bu); f_115265c0();
  /* 1152551b mov esi, esp */
  ESI = (ESP);
  /* 1152551d push 0x1154e504 */
  push32((uint32_t)(0x1154e504u));
  /* 11525522 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11525528u);
  /* 11525528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152552b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152552d call 0x115265c0 */
  push32(0x11525532u); f_115265c0();
L_11525532:;
  /* 11525532 mov esi, esp */
  ESI = (ESP);
  /* 11525534 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11525536 call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x1152553cu);
  /* 1152553c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152553f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525541 call 0x115265c0 */
  push32(0x11525546u); f_115265c0();
  /* 11525546 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152554b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152554d je 0x11525599 */
  if (C.zf) goto L_11525599;
  /* 1152554f mov esi, esp */
  ESI = (ESP);
  /* 11525551 push 3 */
  push32((uint32_t)(0x3u));
  /* 11525553 call dword ptr [0x115564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564e0))), 0x11525559u);
  /* 11525559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152555c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152555e call 0x115265c0 */
  push32(0x11525563u); f_115265c0();
  /* 11525563 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152556a je 0x11525599 */
  if (C.zf) goto L_11525599;
  /* 1152556c mov esi, esp */
  ESI = (ESP);
  /* 1152556e push 0 */
  push32((uint32_t)(0x0u));
  /* 11525570 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11525572 call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525578u);
  /* 11525578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152557b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152557d call 0x115265c0 */
  push32(0x11525582u); f_115265c0();
  /* 11525582 mov esi, esp */
  ESI = (ESP);
  /* 11525584 push 0x1154e4f8 */
  push32((uint32_t)(0x1154e4f8u));
  /* 11525589 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x1152558fu);
  /* 1152558f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525594 call 0x115265c0 */
  push32(0x11525599u); f_115265c0();
L_11525599:;
  /* 11525599 mov esi, esp */
  ESI = (ESP);
  /* 1152559b push 0xf */
  push32((uint32_t)(0xfu));
  /* 1152559d call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115255a3u);
  /* 115255a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115255a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115255a8 call 0x115265c0 */
  push32(0x115255adu); f_115265c0();
  /* 115255ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115255b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115255b4 je 0x1152566a */
  if (C.zf) goto L_1152566a;
  /* 115255ba mov esi, esp */
  ESI = (ESP);
  /* 115255bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 115255be call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115255c4u);
  /* 115255c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115255c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115255c9 call 0x115265c0 */
  push32(0x115255ceu); f_115265c0();
  /* 115255ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115255d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115255d5 jne 0x1152566a */
  if (!C.zf) goto L_1152566a;
  /* 115255db mov esi, esp */
  ESI = (ESP);
  /* 115255dd push 0xd */
  push32((uint32_t)(0xdu));
  /* 115255df call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x115255e5u);
  /* 115255e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115255e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115255ea call 0x115265c0 */
  push32(0x115255efu); f_115265c0();
  /* 115255ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115255f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115255f6 jne 0x1152566a */
  if (!C.zf) goto L_1152566a;
  /* 115255f8 mov esi, esp */
  ESI = (ESP);
  /* 115255fa push 0xe */
  push32((uint32_t)(0xeu));
  /* 115255fc call dword ptr [0x11556468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556468))), 0x11525602u);
  /* 11525602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525607 call 0x115265c0 */
  push32(0x1152560cu); f_115265c0();
  /* 1152560c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11525611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11525613 jne 0x1152566a */
  if (!C.zf) goto L_1152566a;
  /* 11525615 mov esi, esp */
  ESI = (ESP);
  /* 11525617 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525619 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1152561b call dword ptr [0x1155646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155646c))), 0x11525621u);
  /* 11525621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525626 call 0x115265c0 */
  push32(0x1152562bu); f_115265c0();
  /* 1152562b mov esi, esp */
  ESI = (ESP);
  /* 1152562d push 0x1154e4f0 */
  push32((uint32_t)(0x1154e4f0u));
  /* 11525632 call dword ptr [0x115564b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115564b8))), 0x11525638u);
  /* 11525638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152563b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152563d call 0x115265c0 */
  push32(0x11525642u); f_115265c0();
  /* 11525642 mov esi, esp */
  ESI = (ESP);
  /* 11525644 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11525646 call dword ptr [0x11556474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556474))), 0x1152564cu);
  /* 1152564c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152564f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525651 call 0x115265c0 */
  push32(0x11525656u); f_115265c0();
  /* 11525656 mov esi, esp */
  ESI = (ESP);
  /* 11525658 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1152565a call dword ptr [0x11556470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556470))), 0x11525660u);
  /* 11525660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525665 call 0x115265c0 */
  push32(0x1152566au); f_115265c0();
L_1152566a:;
  /* 1152566a mov esi, esp */
  ESI = (ESP);
  /* 1152566c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152566e push 0x115536e0 */
  push32((uint32_t)(0x115536e0u));
  /* 11525673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525675 call dword ptr [0x11556508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556508))), 0x1152567bu);
  /* 1152567b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152567e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525680 call 0x115265c0 */
  push32(0x11525685u); f_115265c0();
  /* 11525685 mov esi, esp */
  ESI = (ESP);
  /* 11525687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525689 call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x1152568fu);
  /* 1152568f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525694 call 0x115265c0 */
  push32(0x11525699u); f_115265c0();
  /* 11525699 mov esi, esp */
  ESI = (ESP);
  /* 1152569b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152569d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152569f push 0x11553458 */
  push32((uint32_t)(0x11553458u));
  /* 115256a4 call dword ptr [0x1155650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155650c))), 0x115256aau);
  /* 115256aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115256ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115256af call 0x115265c0 */
  push32(0x115256b4u); f_115265c0();
  /* 115256b4 mov esi, esp */
  ESI = (ESP);
  /* 115256b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115256b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115256ba push 0x11553468 */
  push32((uint32_t)(0x11553468u));
  /* 115256bf call dword ptr [0x1155650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155650c))), 0x115256c5u);
  /* 115256c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115256c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115256ca call 0x115265c0 */
  push32(0x115256cfu); f_115265c0();
  /* 115256cf mov esi, esp */
  ESI = (ESP);
  /* 115256d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115256d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115256d5 push 0x11553440 */
  push32((uint32_t)(0x11553440u));
  /* 115256da call dword ptr [0x1155650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155650c))), 0x115256e0u);
  /* 115256e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115256e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115256e5 call 0x115265c0 */
  push32(0x115256eau); f_115265c0();
  /* 115256ea mov esi, esp */
  ESI = (ESP);
  /* 115256ec push 0 */
  push32((uint32_t)(0x0u));
  /* 115256ee call dword ptr [0x11556510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556510))), 0x115256f4u);
  /* 115256f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115256f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115256f9 call 0x115265c0 */
  push32(0x115256feu); f_115265c0();
  /* 115256fe mov esi, esp */
  ESI = (ESP);
  /* 11525700 push 0 */
  push32((uint32_t)(0x0u));
  /* 11525702 push 0x115536e0 */
  push32((uint32_t)(0x115536e0u));
  /* 11525707 call dword ptr [0x11556484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556484))), 0x1152570du);
  /* 1152570d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525712 call 0x115265c0 */
  push32(0x11525717u); f_115265c0();
  /* 11525717 mov esi, esp */
  ESI = (ESP);
  /* 11525719 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152571b call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11525721u);
  /* 11525721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525724 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525726 call 0x115265c0 */
  push32(0x1152572bu); f_115265c0();
  /* 1152572b mov esi, esp */
  ESI = (ESP);
  /* 1152572d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152572f push 3 */
  push32((uint32_t)(0x3u));
  /* 11525731 push 0x11553438 */
  push32((uint32_t)(0x11553438u));
  /* 11525736 call dword ptr [0x1155650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155650c))), 0x1152573cu);
  /* 1152573c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152573f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525741 call 0x115265c0 */
  push32(0x11525746u); f_115265c0();
  /* 11525746 mov esi, esp */
  ESI = (ESP);
  /* 11525748 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152574a call dword ptr [0x11556510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556510))), 0x11525750u);
  /* 11525750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525753 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525755 call 0x115265c0 */
  push32(0x1152575au); f_115265c0();
  /* 1152575a mov esi, esp */
  ESI = (ESP);
  /* 1152575c push 3 */
  push32((uint32_t)(0x3u));
  /* 1152575e call dword ptr [0x11556490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556490))), 0x11525764u);
  /* 11525764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525769 call 0x115265c0 */
  push32(0x1152576eu); f_115265c0();
  /* 1152576e pop edi */
  EDI = (pop32());
  /* 1152576f pop esi */
  ESI = (pop32());
  /* 11525770 pop ebx */
  EBX = (pop32());
  /* 11525771 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11525774 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11525776 call 0x115265c0 */
  push32(0x1152577bu); f_115265c0();
  /* 1152577b mov esp, ebp */
  ESP = (EBP);
  /* 1152577d pop ebp */
  EBP = (pop32());
  /* 1152577e ret  */
  ESPCHK(0x115224b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x115265c0 (56 bytes, 28 insns) */
void f_115265c0(void) {
  FTRACE(0x115265c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115265c0 jne 0x115265c3 */
  if (!C.zf) goto L_115265c3;
  /* 115265c2 ret  */
  ESPCHK(0x115265c0u, _esp0);
  ESP += 4; return;
L_115265c3:;
  /* 115265c3 push ebp */
  push32((uint32_t)(EBP));
  /* 115265c4 mov ebp, esp */
  EBP = (ESP);
  /* 115265c6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115265c9 push eax */
  push32((uint32_t)(EAX));
  /* 115265ca push edx */
  push32((uint32_t)(EDX));
  /* 115265cb push ebx */
  push32((uint32_t)(EBX));
  /* 115265cc push esi */
  push32((uint32_t)(ESI));
  /* 115265cd push edi */
  push32((uint32_t)(EDI));
  /* 115265ce push 0x1154e60c */
  push32((uint32_t)(0x1154e60cu));
  /* 115265d3 push 0x1154e608 */
  push32((uint32_t)(0x1154e608u));
  /* 115265d8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 115265da push 0x1154e5f8 */
  push32((uint32_t)(0x1154e5f8u));
  /* 115265df push 1 */
  push32((uint32_t)(0x1u));
  /* 115265e1 call 0x11526990 */
  push32(0x115265e6u); f_11526990();
  /* 115265e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115265e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115265ec jne 0x115265ef */
  if (!C.zf) goto L_115265ef;
  /* 115265ee int3  */
  x86_unimpl("int3 @ 0x115265ee");
L_115265ef:;
  /* 115265ef pop edi */
  EDI = (pop32());
  /* 115265f0 pop esi */
  ESI = (pop32());
  /* 115265f1 pop ebx */
  EBX = (pop32());
  /* 115265f2 pop edx */
  EDX = (pop32());
  /* 115265f3 pop eax */
  EAX = (pop32());
  /* 115265f4 mov esp, ebp */
  ESP = (EBP);
  /* 115265f6 pop ebp */
  EBP = (pop32());
  /* 115265f7 ret  */
  ESPCHK(0x115265c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x11526600 (313 bytes, 78 insns) */
void f_11526600(void) {
  FTRACE(0x11526600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526600 push ebp */
  push32((uint32_t)(EBP));
  /* 11526601 mov ebp, esp */
  EBP = (ESP);
  /* 11526603 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526607 jne 0x115266c7 */
  if (!C.zf) goto L_115266c7;
  /* 1152660d call dword ptr [0x115563b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563b8))), 0x11526613u);
  /* 11526613 mov dword ptr [0x11553864], eax */
  w32((uint32_t)(0x11553864), (EAX));
  /* 11526618 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152661a call 0x1152a0c0 */
  push32(0x1152661fu); f_1152a0c0();
  /* 1152661f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526624 jne 0x1152662d */
  if (!C.zf) goto L_1152662d;
  /* 11526626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11526628 jmp 0x11526735 */
  goto L_11526735;
L_1152662d:;
  /* 1152662d mov eax, dword ptr [0x11553864] */
  EAX = (r32((uint32_t)(0x11553864)));
  /* 11526632 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11526635 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152663a mov dword ptr [0x11553870], eax */
  w32((uint32_t)(0x11553870), (EAX));
  /* 1152663f mov ecx, dword ptr [0x11553864] */
  ECX = (r32((uint32_t)(0x11553864)));
  /* 11526645 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152664b mov dword ptr [0x1155386c], ecx */
  w32((uint32_t)(0x1155386c), (ECX));
  /* 11526651 mov edx, dword ptr [0x1155386c] */
  EDX = (r32((uint32_t)(0x1155386c)));
  /* 11526657 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1152665a add edx, dword ptr [0x11553870] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11553870))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11526660 mov dword ptr [0x11553868], edx */
  w32((uint32_t)(0x11553868), (EDX));
  /* 11526666 mov eax, dword ptr [0x11553864] */
  EAX = (r32((uint32_t)(0x11553864)));
  /* 1152666b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1152666e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11526673 mov dword ptr [0x11553864], eax */
  w32((uint32_t)(0x11553864), (EAX));
  /* 11526678 call 0x11527230 */
  push32(0x1152667du); f_11527230();
  /* 1152667d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152667f jne 0x1152668d */
  if (!C.zf) goto L_1152668d;
  /* 11526681 call 0x1152a110 */
  push32(0x11526686u); f_1152a110();
  /* 11526686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11526688 jmp 0x11526735 */
  goto L_11526735;
L_1152668d:;
  /* 1152668d call dword ptr [0x115563b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563b4))), 0x11526693u);
  /* 11526693 mov dword ptr [0x115553ac], eax */
  w32((uint32_t)(0x115553ac), (EAX));
  /* 11526698 call 0x11529ea0 */
  push32(0x1152669du); f_11529ea0();
  /* 1152669d mov dword ptr [0x1155384c], eax */
  w32((uint32_t)(0x1155384c), (EAX));
  /* 115266a2 call 0x115274e0 */
  push32(0x115266a7u); f_115274e0();
  /* 115266a7 call 0x11529990 */
  push32(0x115266acu); f_11529990();
  /* 115266ac call 0x11529840 */
  push32(0x115266b1u); f_11529840();
  /* 115266b1 call 0x11527030 */
  push32(0x115266b6u); f_11527030();
  /* 115266b6 mov ecx, dword ptr [0x11553848] */
  ECX = (r32((uint32_t)(0x11553848)));
  /* 115266bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115266bf mov dword ptr [0x11553848], ecx */
  w32((uint32_t)(0x11553848), (ECX));
  /* 115266c5 jmp 0x11526730 */
  goto L_11526730;
L_115266c7:;
  /* 115266c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115266cb jne 0x11526720 */
  if (!C.zf) goto L_11526720;
  /* 115266cd cmp dword ptr [0x11553848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115266d4 jle 0x1152671a */
  if ((C.zf||C.sf!=C.of)) goto L_1152671a;
  /* 115266d6 mov edx, dword ptr [0x11553848] */
  EDX = (r32((uint32_t)(0x11553848)));
  /* 115266dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115266df mov dword ptr [0x11553848], edx */
  w32((uint32_t)(0x11553848), (EDX));
  /* 115266e5 cmp dword ptr [0x1155389c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1155389c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115266ec jne 0x115266f3 */
  if (!C.zf) goto L_115266f3;
  /* 115266ee call 0x115270b0 */
  push32(0x115266f3u); f_115270b0();
L_115266f3:;
  /* 115266f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115266f5 call 0x11528de0 */
  push32(0x115266fau); f_11528de0();
  /* 115266fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115266fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11526700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526702 je 0x11526709 */
  if (C.zf) goto L_11526709;
  /* 11526704 call 0x115296f0 */
  push32(0x11526709u); f_115296f0();
L_11526709:;
  /* 11526709 call 0x11527810 */
  push32(0x1152670eu); f_11527810();
  /* 1152670e call 0x115272c0 */
  push32(0x11526713u); f_115272c0();
  /* 11526713 call 0x1152a110 */
  push32(0x11526718u); f_1152a110();
  /* 11526718 jmp 0x1152671e */
  goto L_1152671e;
L_1152671a:;
  /* 1152671a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152671c jmp 0x11526735 */
  goto L_11526735;
L_1152671e:;
  /* 1152671e jmp 0x11526730 */
  goto L_11526730;
L_11526720:;
  /* 11526720 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526724 jne 0x11526730 */
  if (!C.zf) goto L_11526730;
  /* 11526726 push 0 */
  push32((uint32_t)(0x0u));
  /* 11526728 call 0x115273b0 */
  push32(0x1152672du); f_115273b0();
  /* 1152672d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526730:;
  /* 11526730 mov eax, 1 */
  EAX = (0x1u);
L_11526735:;
  /* 11526735 pop ebp */
  EBP = (pop32());
  /* 11526736 ret 0xc */
  ESPCHK(0x11526600u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11526740 (243 bytes, 86 insns) */
void f_11526740(void) {
  FTRACE(0x11526740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526740 push ebp */
  push32((uint32_t)(EBP));
  /* 11526741 mov ebp, esp */
  EBP = (ESP);
  /* 11526743 push ecx */
  push32((uint32_t)(ECX));
  /* 11526744 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1152674b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152674f jne 0x11526761 */
  if (!C.zf) goto L_11526761;
  /* 11526751 cmp dword ptr [0x11553848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526758 jne 0x11526761 */
  if (!C.zf) goto L_11526761;
  /* 1152675a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152675c jmp 0x1152682d */
  goto L_1152682d;
L_11526761:;
  /* 11526761 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526765 je 0x1152676d */
  if (C.zf) goto L_1152676d;
  /* 11526767 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152676b jne 0x115267af */
  if (!C.zf) goto L_115267af;
L_1152676d:;
  /* 1152676d cmp dword ptr [0x115553bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115553bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526774 je 0x1152678b */
  if (C.zf) goto L_1152678b;
  /* 11526776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526779 push eax */
  push32((uint32_t)(EAX));
  /* 1152677a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152677d push ecx */
  push32((uint32_t)(ECX));
  /* 1152677e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526781 push edx */
  push32((uint32_t)(EDX));
  /* 11526782 call dword ptr [0x115553bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115553bc))), 0x11526788u);
  /* 11526788 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152678b:;
  /* 1152678b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152678f je 0x115267a5 */
  if (C.zf) goto L_115267a5;
  /* 11526791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526794 push eax */
  push32((uint32_t)(EAX));
  /* 11526795 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526798 push ecx */
  push32((uint32_t)(ECX));
  /* 11526799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152679c push edx */
  push32((uint32_t)(EDX));
  /* 1152679d call 0x11526600 */
  push32(0x115267a2u); f_11526600();
  /* 115267a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115267a5:;
  /* 115267a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115267a9 jne 0x115267af */
  if (!C.zf) goto L_115267af;
  /* 115267ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115267ad jmp 0x1152682d */
  goto L_1152682d;
L_115267af:;
  /* 115267af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115267b2 push eax */
  push32((uint32_t)(EAX));
  /* 115267b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115267b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115267b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115267ba push edx */
  push32((uint32_t)(EDX));
  /* 115267bb call 0x1152100a */
  push32(0x115267c0u); f_1152100a();
  /* 115267c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115267c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115267c7 jne 0x115267de */
  if (!C.zf) goto L_115267de;
  /* 115267c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115267cd jne 0x115267de */
  if (!C.zf) goto L_115267de;
  /* 115267cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115267d2 push eax */
  push32((uint32_t)(EAX));
  /* 115267d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115267d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115267d8 push ecx */
  push32((uint32_t)(ECX));
  /* 115267d9 call 0x11526600 */
  push32(0x115267deu); f_11526600();
L_115267de:;
  /* 115267de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115267e2 je 0x115267ea */
  if (C.zf) goto L_115267ea;
  /* 115267e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115267e8 jne 0x1152682a */
  if (!C.zf) goto L_1152682a;
L_115267ea:;
  /* 115267ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115267ed push edx */
  push32((uint32_t)(EDX));
  /* 115267ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115267f1 push eax */
  push32((uint32_t)(EAX));
  /* 115267f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115267f5 push ecx */
  push32((uint32_t)(ECX));
  /* 115267f6 call 0x11526600 */
  push32(0x115267fbu); f_11526600();
  /* 115267fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115267fd jne 0x11526806 */
  if (!C.zf) goto L_11526806;
  /* 115267ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11526806:;
  /* 11526806 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152680a je 0x1152682a */
  if (C.zf) goto L_1152682a;
  /* 1152680c cmp dword ptr [0x115553bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115553bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526813 je 0x1152682a */
  if (C.zf) goto L_1152682a;
  /* 11526815 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526818 push edx */
  push32((uint32_t)(EDX));
  /* 11526819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152681c push eax */
  push32((uint32_t)(EAX));
  /* 1152681d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526820 push ecx */
  push32((uint32_t)(ECX));
  /* 11526821 call dword ptr [0x115553bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115553bc))), 0x11526827u);
  /* 11526827 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152682a:;
  /* 1152682a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1152682d:;
  /* 1152682d mov esp, ebp */
  ESP = (EBP);
  /* 1152682f pop ebp */
  EBP = (pop32());
  /* 11526830 ret 0xc */
  ESPCHK(0x11526740u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11526840 (58 bytes, 18 insns) */
void f_11526840(void) {
  FTRACE(0x11526840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526840 push ebp */
  push32((uint32_t)(EBP));
  /* 11526841 mov ebp, esp */
  EBP = (ESP);
  /* 11526843 cmp dword ptr [0x11553854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152684a je 0x1152685e */
  if (C.zf) goto L_1152685e;
  /* 1152684c cmp dword ptr [0x11553854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526853 jne 0x11526863 */
  if (!C.zf) goto L_11526863;
  /* 11526855 cmp dword ptr [0x11553858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152685c jne 0x11526863 */
  if (!C.zf) goto L_11526863;
L_1152685e:;
  /* 1152685e call 0x1152a1b0 */
  push32(0x11526863u); f_1152a1b0();
L_11526863:;
  /* 11526863 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526866 push eax */
  push32((uint32_t)(EAX));
  /* 11526867 call 0x1152a200 */
  push32(0x1152686cu); f_1152a200();
  /* 1152686c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152686f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11526874 call dword ptr [0x11551a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11551a30))), 0x1152687au);
  /* 1152687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152687d pop ebp */
  EBP = (pop32());
  /* 1152687e ret  */
  ESPCHK(0x11526840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x11526880 (11 bytes, 5 insns) */
void f_11526880(void) {
  FTRACE(0x11526880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526880 push ebp */
  push32((uint32_t)(EBP));
  /* 11526881 mov ebp, esp */
  EBP = (ESP);
  /* 11526883 call dword ptr [0x115563bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563bc))), 0x11526889u);
  /* 11526889 pop ebp */
  EBP = (pop32());
  /* 1152688a ret  */
  ESPCHK(0x11526880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x11526890 (87 bytes, 30 insns) */
void f_11526890(void) {
  FTRACE(0x11526890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526890 push ebp */
  push32((uint32_t)(EBP));
  /* 11526891 mov ebp, esp */
  EBP = (ESP);
  /* 11526893 push ecx */
  push32((uint32_t)(ECX));
  /* 11526894 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526898 jl 0x115268a0 */
  if ((C.sf!=C.of)) goto L_115268a0;
  /* 1152689a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152689e jl 0x115268a5 */
  if ((C.sf!=C.of)) goto L_115268a5;
L_115268a0:;
  /* 115268a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115268a3 jmp 0x115268e3 */
  goto L_115268e3;
L_115268a5:;
  /* 115268a5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115268a9 jne 0x115268b7 */
  if (!C.zf) goto L_115268b7;
  /* 115268ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115268ae mov eax, dword ptr [eax*4 + 0x11551a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11551a38)));
  /* 115268b5 jmp 0x115268e3 */
  goto L_115268e3;
L_115268b7:;
  /* 115268b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115268ba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 115268bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115268bf je 0x115268c6 */
  if (C.zf) goto L_115268c6;
  /* 115268c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115268c4 jmp 0x115268e3 */
  goto L_115268e3;
L_115268c6:;
  /* 115268c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115268c9 mov eax, dword ptr [edx*4 + 0x11551a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11551a38)));
  /* 115268d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115268d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115268d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115268d9 mov dword ptr [ecx*4 + 0x11551a38], edx */
  w32((uint32_t)(ECX*4 + 0x11551a38), (EDX));
  /* 115268e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115268e3:;
  /* 115268e3 mov esp, ebp */
  ESP = (EBP);
  /* 115268e5 pop ebp */
  EBP = (pop32());
  /* 115268e6 ret  */
  ESPCHK(0x11526890u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x115268f0 (126 bytes, 38 insns) */
void f_115268f0(void) {
  FTRACE(0x115268f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115268f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115268f1 mov ebp, esp */
  EBP = (ESP);
  /* 115268f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115268f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115268f8 jl 0x11526900 */
  if ((C.sf!=C.of)) goto L_11526900;
  /* 115268fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115268fe jl 0x11526907 */
  if ((C.sf!=C.of)) goto L_11526907;
L_11526900:;
  /* 11526900 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11526905 jmp 0x1152696a */
  goto L_1152696a;
L_11526907:;
  /* 11526907 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152690b jne 0x11526919 */
  if (!C.zf) goto L_11526919;
  /* 1152690d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526910 mov eax, dword ptr [eax*4 + 0x11551a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11551a44)));
  /* 11526917 jmp 0x1152696a */
  goto L_1152696a;
L_11526919:;
  /* 11526919 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152691c mov edx, dword ptr [ecx*4 + 0x11551a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a44)));
  /* 11526923 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11526926 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152692a jne 0x11526940 */
  if (!C.zf) goto L_11526940;
  /* 1152692c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1152692e call dword ptr [0x115563c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c0))), 0x11526934u);
  /* 11526934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526937 mov dword ptr [ecx*4 + 0x11551a44], eax */
  w32((uint32_t)(ECX*4 + 0x11551a44), (EAX));
  /* 1152693e jmp 0x11526967 */
  goto L_11526967;
L_11526940:;
  /* 11526940 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526944 jne 0x1152695a */
  if (!C.zf) goto L_1152695a;
  /* 11526946 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11526948 call dword ptr [0x115563c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c0))), 0x1152694eu);
  /* 1152694e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526951 mov dword ptr [edx*4 + 0x11551a44], eax */
  w32((uint32_t)(EDX*4 + 0x11551a44), (EAX));
  /* 11526958 jmp 0x11526967 */
  goto L_11526967;
L_1152695a:;
  /* 1152695a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152695d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526960 mov dword ptr [eax*4 + 0x11551a44], ecx */
  w32((uint32_t)(EAX*4 + 0x11551a44), (ECX));
L_11526967:;
  /* 11526967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1152696a:;
  /* 1152696a mov esp, ebp */
  ESP = (EBP);
  /* 1152696c pop ebp */
  EBP = (pop32());
  /* 1152696d ret  */
  ESPCHK(0x115268f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x11526970 (28 bytes, 11 insns) */
void f_11526970(void) {
  FTRACE(0x11526970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526970 push ebp */
  push32((uint32_t)(EBP));
  /* 11526971 mov ebp, esp */
  EBP = (ESP);
  /* 11526973 push ecx */
  push32((uint32_t)(ECX));
  /* 11526974 mov eax, dword ptr [0x115553a0] */
  EAX = (r32((uint32_t)(0x115553a0)));
  /* 11526979 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152697c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152697f mov dword ptr [0x115553a0], ecx */
  w32((uint32_t)(0x115553a0), (ECX));
  /* 11526985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526988 mov esp, ebp */
  ESP = (EBP);
  /* 1152698a pop ebp */
  EBP = (pop32());
  /* 1152698b ret  */
  ESPCHK(0x11526970u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x11526990 (912 bytes, 248 insns) */
void f_11526990(void) {
  FTRACE(0x11526990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526990 push ebp */
  push32((uint32_t)(EBP));
  /* 11526991 mov ebp, esp */
  EBP = (ESP);
  /* 11526993 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11526998 call 0x1152aa70 */
  push32(0x1152699du); f_1152aa70();
  /* 1152699d push edi */
  push32((uint32_t)(EDI));
  /* 1152699e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 115269a5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115269aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115269ac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 115269b2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115269b4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115269b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115269b7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 115269be mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115269c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115269c5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 115269cb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115269cd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115269cf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115269d0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 115269d7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115269dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115269de lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 115269e4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115269e6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115269e8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115269e9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 115269ec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 115269f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115269f6 jl 0x115269fe */
  if ((C.sf!=C.of)) goto L_115269fe;
  /* 115269f8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115269fc jl 0x11526a06 */
  if ((C.sf!=C.of)) goto L_11526a06;
L_115269fe:;
  /* 115269fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11526a01 jmp 0x11526d1b */
  goto L_11526d1b;
L_11526a06:;
  /* 11526a06 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526a0a jne 0x11526ab0 */
  if (!C.zf) goto L_11526ab0;
  /* 11526a10 push 0x11551a34 */
  push32((uint32_t)(0x11551a34u));
  /* 11526a15 call dword ptr [0x115562e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e8))), 0x11526a1bu);
  /* 11526a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526a1d jle 0x11526ab0 */
  if ((C.zf||C.sf!=C.of)) goto L_11526ab0;
  /* 11526a23 cmp dword ptr [0x1155385c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1155385c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526a2a jne 0x11526a6e */
  if (!C.zf) goto L_11526a6e;
  /* 11526a2c push 0x1154e7b4 */
  push32((uint32_t)(0x1154e7b4u));
  /* 11526a31 call dword ptr [0x115563d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d4))), 0x11526a37u);
  /* 11526a37 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11526a3d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526a44 je 0x11526a66 */
  if (C.zf) goto L_11526a66;
  /* 11526a46 push 0x1154e7a8 */
  push32((uint32_t)(0x1154e7a8u));
  /* 11526a4b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11526a51 push ecx */
  push32((uint32_t)(ECX));
  /* 11526a52 call dword ptr [0x115563d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d0))), 0x11526a58u);
  /* 11526a58 mov dword ptr [0x1155385c], eax */
  w32((uint32_t)(0x1155385c), (EAX));
  /* 11526a5d cmp dword ptr [0x1155385c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1155385c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526a64 jne 0x11526a6e */
  if (!C.zf) goto L_11526a6e;
L_11526a66:;
  /* 11526a66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11526a69 jmp 0x11526d1b */
  goto L_11526d1b;
L_11526a6e:;
  /* 11526a6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526a71 push edx */
  push32((uint32_t)(EDX));
  /* 11526a72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526a75 push eax */
  push32((uint32_t)(EAX));
  /* 11526a76 push 0x1154e774 */
  push32((uint32_t)(0x1154e774u));
  /* 11526a7b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11526a81 push ecx */
  push32((uint32_t)(ECX));
  /* 11526a82 call dword ptr [0x1155385c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155385c))), 0x11526a88u);
  /* 11526a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526a8b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11526a91 push edx */
  push32((uint32_t)(EDX));
  /* 11526a92 call dword ptr [0x115563cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563cc))), 0x11526a98u);
  /* 11526a98 push 0x11551a34 */
  push32((uint32_t)(0x11551a34u));
  /* 11526a9d call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11526aa3u);
  /* 11526aa3 call 0x11526880 */
  push32(0x11526aa8u); f_11526880();
  /* 11526aa8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11526aab jmp 0x11526d1b */
  goto L_11526d1b;
L_11526ab0:;
  /* 11526ab0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526ab4 je 0x11526aed */
  if (C.zf) goto L_11526aed;
  /* 11526ab6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11526abc push eax */
  push32((uint32_t)(EAX));
  /* 11526abd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11526ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11526ac1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11526ac6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11526acc push edx */
  push32((uint32_t)(EDX));
  /* 11526acd call 0x1152a970 */
  push32(0x11526ad2u); f_1152a970();
  /* 11526ad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526ad7 jge 0x11526aed */
  if ((C.sf==C.of)) goto L_11526aed;
  /* 11526ad9 push 0x1154e748 */
  push32((uint32_t)(0x1154e748u));
  /* 11526ade lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11526ae4 push eax */
  push32((uint32_t)(EAX));
  /* 11526ae5 call 0x1152a880 */
  push32(0x11526aeau); f_1152a880();
  /* 11526aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526aed:;
  /* 11526aed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526af1 jne 0x11526b25 */
  if (!C.zf) goto L_11526b25;
  /* 11526af3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526af7 je 0x11526b05 */
  if (C.zf) goto L_11526b05;
  /* 11526af9 mov dword ptr [ebp - 0x3028], 0x1154e734 */
  w32((uint32_t)(EBP + -0x3028), (0x1154e734u));
  /* 11526b03 jmp 0x11526b0f */
  goto L_11526b0f;
L_11526b05:;
  /* 11526b05 mov dword ptr [ebp - 0x3028], 0x1154e720 */
  w32((uint32_t)(EBP + -0x3028), (0x1154e720u));
L_11526b0f:;
  /* 11526b0f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11526b15 push ecx */
  push32((uint32_t)(ECX));
  /* 11526b16 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11526b1c push edx */
  push32((uint32_t)(EDX));
  /* 11526b1d call 0x1152a880 */
  push32(0x11526b22u); f_1152a880();
  /* 11526b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526b25:;
  /* 11526b25 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11526b2b push eax */
  push32((uint32_t)(EAX));
  /* 11526b2c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11526b32 push ecx */
  push32((uint32_t)(ECX));
  /* 11526b33 call 0x1152a890 */
  push32(0x11526b38u); f_1152a890();
  /* 11526b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526b3b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526b3f jne 0x11526b7a */
  if (!C.zf) goto L_11526b7a;
  /* 11526b41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526b44 mov eax, dword ptr [edx*4 + 0x11551a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11551a38)));
  /* 11526b4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11526b4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526b50 je 0x11526b66 */
  if (C.zf) goto L_11526b66;
  /* 11526b52 push 0x1154e71c */
  push32((uint32_t)(0x1154e71cu));
  /* 11526b57 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11526b5d push ecx */
  push32((uint32_t)(ECX));
  /* 11526b5e call 0x1152a890 */
  push32(0x11526b63u); f_1152a890();
  /* 11526b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526b66:;
  /* 11526b66 push 0x1154e718 */
  push32((uint32_t)(0x1154e718u));
  /* 11526b6b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11526b71 push edx */
  push32((uint32_t)(EDX));
  /* 11526b72 call 0x1152a890 */
  push32(0x11526b77u); f_1152a890();
  /* 11526b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526b7a:;
  /* 11526b7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526b7e je 0x11526bc2 */
  if (C.zf) goto L_11526bc2;
  /* 11526b80 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11526b86 push eax */
  push32((uint32_t)(EAX));
  /* 11526b87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11526b8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526b8e push edx */
  push32((uint32_t)(EDX));
  /* 11526b8f push 0x1154e70c */
  push32((uint32_t)(0x1154e70cu));
  /* 11526b94 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11526b99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11526b9f push eax */
  push32((uint32_t)(EAX));
  /* 11526ba0 call 0x1152a780 */
  push32(0x11526ba5u); f_1152a780();
  /* 11526ba5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526baa jge 0x11526bc0 */
  if ((C.sf==C.of)) goto L_11526bc0;
  /* 11526bac push 0x1154e748 */
  push32((uint32_t)(0x1154e748u));
  /* 11526bb1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11526bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11526bb8 call 0x1152a880 */
  push32(0x11526bbdu); f_1152a880();
  /* 11526bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526bc0:;
  /* 11526bc0 jmp 0x11526bd8 */
  goto L_11526bd8;
L_11526bc2:;
  /* 11526bc2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11526bc8 push edx */
  push32((uint32_t)(EDX));
  /* 11526bc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11526bcf push eax */
  push32((uint32_t)(EAX));
  /* 11526bd0 call 0x1152a880 */
  push32(0x11526bd5u); f_1152a880();
  /* 11526bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526bd8:;
  /* 11526bd8 cmp dword ptr [0x115553a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115553a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526bdf je 0x11526c1c */
  if (C.zf) goto L_11526c1c;
  /* 11526be1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11526be7 push ecx */
  push32((uint32_t)(ECX));
  /* 11526be8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11526bee push edx */
  push32((uint32_t)(EDX));
  /* 11526bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11526bf3 call dword ptr [0x115553a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115553a0))), 0x11526bf9u);
  /* 11526bf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526bfe je 0x11526c1c */
  if (C.zf) goto L_11526c1c;
  /* 11526c00 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526c04 jne 0x11526c11 */
  if (!C.zf) goto L_11526c11;
  /* 11526c06 push 0x11551a34 */
  push32((uint32_t)(0x11551a34u));
  /* 11526c0b call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11526c11u);
L_11526c11:;
  /* 11526c11 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11526c17 jmp 0x11526d1b */
  goto L_11526d1b;
L_11526c1c:;
  /* 11526c1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526c1f mov edx, dword ptr [ecx*4 + 0x11551a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a38)));
  /* 11526c26 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11526c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11526c2b je 0x11526c6b */
  if (C.zf) goto L_11526c6b;
  /* 11526c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526c30 cmp dword ptr [eax*4 + 0x11551a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11551a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526c38 je 0x11526c6b */
  if (C.zf) goto L_11526c6b;
  /* 11526c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11526c3c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11526c42 push ecx */
  push32((uint32_t)(ECX));
  /* 11526c43 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11526c49 push edx */
  push32((uint32_t)(EDX));
  /* 11526c4a call 0x1152a700 */
  push32(0x11526c4fu); f_1152a700();
  /* 11526c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526c52 push eax */
  push32((uint32_t)(EAX));
  /* 11526c53 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11526c59 push eax */
  push32((uint32_t)(EAX));
  /* 11526c5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526c5d mov edx, dword ptr [ecx*4 + 0x11551a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a44)));
  /* 11526c64 push edx */
  push32((uint32_t)(EDX));
  /* 11526c65 call dword ptr [0x115563c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c4))), 0x11526c6bu);
L_11526c6b:;
  /* 11526c6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526c6e mov ecx, dword ptr [eax*4 + 0x11551a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11551a38)));
  /* 11526c75 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11526c78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11526c7a je 0x11526c89 */
  if (C.zf) goto L_11526c89;
  /* 11526c7c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11526c82 push edx */
  push32((uint32_t)(EDX));
  /* 11526c83 call dword ptr [0x115563cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563cc))), 0x11526c89u);
L_11526c89:;
  /* 11526c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526c8c mov ecx, dword ptr [eax*4 + 0x11551a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11551a38)));
  /* 11526c93 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11526c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11526c98 je 0x11526d08 */
  if (C.zf) goto L_11526d08;
  /* 11526c9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526c9e je 0x11526cbd */
  if (C.zf) goto L_11526cbd;
  /* 11526ca0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11526ca2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11526ca8 push edx */
  push32((uint32_t)(EDX));
  /* 11526ca9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526cac push eax */
  push32((uint32_t)(EAX));
  /* 11526cad call 0x1152a410 */
  push32(0x11526cb2u); f_1152a410();
  /* 11526cb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526cb5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11526cbb jmp 0x11526cc7 */
  goto L_11526cc7;
L_11526cbd:;
  /* 11526cbd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11526cc7:;
  /* 11526cc7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11526ccd push ecx */
  push32((uint32_t)(ECX));
  /* 11526cce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11526cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11526cd2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11526cd8 push eax */
  push32((uint32_t)(EAX));
  /* 11526cd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526cdc push ecx */
  push32((uint32_t)(ECX));
  /* 11526cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11526ce1 call 0x11526d20 */
  push32(0x11526ce6u); f_11526d20();
  /* 11526ce6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526ce9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11526cef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526cf3 jne 0x11526d00 */
  if (!C.zf) goto L_11526d00;
  /* 11526cf5 push 0x11551a34 */
  push32((uint32_t)(0x11551a34u));
  /* 11526cfa call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11526d00u);
L_11526d00:;
  /* 11526d00 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11526d06 jmp 0x11526d1b */
  goto L_11526d1b;
L_11526d08:;
  /* 11526d08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526d0c jne 0x11526d19 */
  if (!C.zf) goto L_11526d19;
  /* 11526d0e push 0x11551a34 */
  push32((uint32_t)(0x11551a34u));
  /* 11526d13 call dword ptr [0x115563c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c8))), 0x11526d19u);
L_11526d19:;
  /* 11526d19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11526d1b:;
  /* 11526d1b pop edi */
  EDI = (pop32());
  /* 11526d1c mov esp, ebp */
  ESP = (EBP);
  /* 11526d1e pop ebp */
  EBP = (pop32());
  /* 11526d1f ret  */
  ESPCHK(0x11526990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x11526d20 (780 bytes, 197 insns) */
void f_11526d20(void) {
  FTRACE(0x11526d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11526d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11526d21 mov ebp, esp */
  EBP = (ESP);
  /* 11526d23 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11526d28 call 0x1152aa70 */
  push32(0x11526d2du); f_1152aa70();
L_11526d2d:;
  /* 11526d2d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526d31 jne 0x11526d58 */
  if (!C.zf) goto L_11526d58;
  /* 11526d33 push 0x1154e904 */
  push32((uint32_t)(0x1154e904u));
  /* 11526d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11526d3a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11526d3f push 0x1154e8f8 */
  push32((uint32_t)(0x1154e8f8u));
  /* 11526d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11526d46 call 0x11526990 */
  push32(0x11526d4bu); f_11526990();
  /* 11526d4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526d4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526d51 jne 0x11526d58 */
  if (!C.zf) goto L_11526d58;
  /* 11526d53 call 0x11526880 */
  push32(0x11526d58u); f_11526880();
L_11526d58:;
  /* 11526d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11526d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526d5c jne 0x11526d2d */
  if (!C.zf) goto L_11526d2d;
  /* 11526d5e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11526d63 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11526d69 push ecx */
  push32((uint32_t)(ECX));
  /* 11526d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11526d6c call dword ptr [0x115562e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e4))), 0x11526d72u);
  /* 11526d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526d74 jne 0x11526d8a */
  if (!C.zf) goto L_11526d8a;
  /* 11526d76 push 0x1154e8e0 */
  push32((uint32_t)(0x1154e8e0u));
  /* 11526d7b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11526d81 push edx */
  push32((uint32_t)(EDX));
  /* 11526d82 call 0x1152a880 */
  push32(0x11526d87u); f_1152a880();
  /* 11526d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526d8a:;
  /* 11526d8a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11526d90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11526d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526d96 push ecx */
  push32((uint32_t)(ECX));
  /* 11526d97 call 0x1152a700 */
  push32(0x11526d9cu); f_1152a700();
  /* 11526d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526d9f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526da2 jbe 0x11526dcd */
  if ((C.cf||C.zf)) goto L_11526dcd;
  /* 11526da4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526da7 push edx */
  push32((uint32_t)(EDX));
  /* 11526da8 call 0x1152a700 */
  push32(0x11526dadu); f_1152a700();
  /* 11526dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526db0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526db3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11526db7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11526dba push 3 */
  push32((uint32_t)(0x3u));
  /* 11526dbc push 0x1154e8dc */
  push32((uint32_t)(0x1154e8dcu));
  /* 11526dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11526dc5 call 0x1152b0f0 */
  push32(0x11526dcau); f_1152b0f0();
  /* 11526dca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526dcd:;
  /* 11526dcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11526dd0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11526dd6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526ddd je 0x11526e28 */
  if (C.zf) goto L_11526e28;
  /* 11526ddf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11526de5 push edx */
  push32((uint32_t)(EDX));
  /* 11526de6 call 0x1152a700 */
  push32(0x11526debu); f_1152a700();
  /* 11526deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526dee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526df1 jbe 0x11526e28 */
  if ((C.cf||C.zf)) goto L_11526e28;
  /* 11526df3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11526df9 push eax */
  push32((uint32_t)(EAX));
  /* 11526dfa call 0x1152a700 */
  push32(0x11526dffu); f_1152a700();
  /* 11526dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526e02 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11526e08 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11526e0c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11526e12 push 3 */
  push32((uint32_t)(0x3u));
  /* 11526e14 push 0x1154e8dc */
  push32((uint32_t)(0x1154e8dcu));
  /* 11526e19 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11526e1f push eax */
  push32((uint32_t)(EAX));
  /* 11526e20 call 0x1152b0f0 */
  push32(0x11526e25u); f_1152b0f0();
  /* 11526e25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526e28:;
  /* 11526e28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526e2c jne 0x11526e3a */
  if (!C.zf) goto L_11526e3a;
  /* 11526e2e mov dword ptr [ebp - 0x1114], 0x1154e868 */
  w32((uint32_t)(EBP + -0x1114), (0x1154e868u));
  /* 11526e38 jmp 0x11526e44 */
  goto L_11526e44;
L_11526e3a:;
  /* 11526e3a mov dword ptr [ebp - 0x1114], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1114), (0x1154e608u));
L_11526e44:;
  /* 11526e44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11526e47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11526e4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11526e4c je 0x11526e59 */
  if (C.zf) goto L_11526e59;
  /* 11526e4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11526e51 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11526e57 jmp 0x11526e63 */
  goto L_11526e63;
L_11526e59:;
  /* 11526e59 mov dword ptr [ebp - 0x1118], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1118), (0x1154e608u));
L_11526e63:;
  /* 11526e63 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11526e66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11526e69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11526e6b je 0x11526e7f */
  if (C.zf) goto L_11526e7f;
  /* 11526e6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526e71 jne 0x11526e7f */
  if (!C.zf) goto L_11526e7f;
  /* 11526e73 mov dword ptr [ebp - 0x111c], 0x1154e858 */
  w32((uint32_t)(EBP + -0x111c), (0x1154e858u));
  /* 11526e7d jmp 0x11526e89 */
  goto L_11526e89;
L_11526e7f:;
  /* 11526e7f mov dword ptr [ebp - 0x111c], 0x1154e608 */
  w32((uint32_t)(EBP + -0x111c), (0x1154e608u));
L_11526e89:;
  /* 11526e89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11526e8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11526e8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11526e91 je 0x11526e9f */
  if (C.zf) goto L_11526e9f;
  /* 11526e93 mov dword ptr [ebp - 0x1120], 0x1154e854 */
  w32((uint32_t)(EBP + -0x1120), (0x1154e854u));
  /* 11526e9d jmp 0x11526ea9 */
  goto L_11526ea9;
L_11526e9f:;
  /* 11526e9f mov dword ptr [ebp - 0x1120], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1120), (0x1154e608u));
L_11526ea9:;
  /* 11526ea9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526ead je 0x11526eba */
  if (C.zf) goto L_11526eba;
  /* 11526eaf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11526eb2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11526eb8 jmp 0x11526ec4 */
  goto L_11526ec4;
L_11526eba:;
  /* 11526eba mov dword ptr [ebp - 0x1124], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1124), (0x1154e608u));
L_11526ec4:;
  /* 11526ec4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526ec8 je 0x11526ed6 */
  if (C.zf) goto L_11526ed6;
  /* 11526eca mov dword ptr [ebp - 0x1128], 0x1154e84c */
  w32((uint32_t)(EBP + -0x1128), (0x1154e84cu));
  /* 11526ed4 jmp 0x11526ee0 */
  goto L_11526ee0;
L_11526ed6:;
  /* 11526ed6 mov dword ptr [ebp - 0x1128], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1128), (0x1154e608u));
L_11526ee0:;
  /* 11526ee0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526ee4 je 0x11526ef1 */
  if (C.zf) goto L_11526ef1;
  /* 11526ee6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11526ee9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11526eef jmp 0x11526efb */
  goto L_11526efb;
L_11526ef1:;
  /* 11526ef1 mov dword ptr [ebp - 0x112c], 0x1154e608 */
  w32((uint32_t)(EBP + -0x112c), (0x1154e608u));
L_11526efb:;
  /* 11526efb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526eff je 0x11526f0d */
  if (C.zf) goto L_11526f0d;
  /* 11526f01 mov dword ptr [ebp - 0x1130], 0x1154e844 */
  w32((uint32_t)(EBP + -0x1130), (0x1154e844u));
  /* 11526f0b jmp 0x11526f17 */
  goto L_11526f17;
L_11526f0d:;
  /* 11526f0d mov dword ptr [ebp - 0x1130], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1130), (0x1154e608u));
L_11526f17:;
  /* 11526f17 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526f1e je 0x11526f2e */
  if (C.zf) goto L_11526f2e;
  /* 11526f20 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11526f26 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11526f2c jmp 0x11526f38 */
  goto L_11526f38;
L_11526f2e:;
  /* 11526f2e mov dword ptr [ebp - 0x1134], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1134), (0x1154e608u));
L_11526f38:;
  /* 11526f38 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11526f3f je 0x11526f4d */
  if (C.zf) goto L_11526f4d;
  /* 11526f41 mov dword ptr [ebp - 0x1138], 0x1154e838 */
  w32((uint32_t)(EBP + -0x1138), (0x1154e838u));
  /* 11526f4b jmp 0x11526f57 */
  goto L_11526f57;
L_11526f4d:;
  /* 11526f4d mov dword ptr [ebp - 0x1138], 0x1154e608 */
  w32((uint32_t)(EBP + -0x1138), (0x1154e608u));
L_11526f57:;
  /* 11526f57 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11526f5d push edx */
  push32((uint32_t)(EDX));
  /* 11526f5e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11526f64 push eax */
  push32((uint32_t)(EAX));
  /* 11526f65 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11526f6b push ecx */
  push32((uint32_t)(ECX));
  /* 11526f6c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11526f72 push edx */
  push32((uint32_t)(EDX));
  /* 11526f73 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11526f79 push eax */
  push32((uint32_t)(EAX));
  /* 11526f7a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11526f80 push ecx */
  push32((uint32_t)(ECX));
  /* 11526f81 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11526f87 push edx */
  push32((uint32_t)(EDX));
  /* 11526f88 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11526f8e push eax */
  push32((uint32_t)(EAX));
  /* 11526f8f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11526f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11526f96 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11526f9c push edx */
  push32((uint32_t)(EDX));
  /* 11526f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11526fa0 push eax */
  push32((uint32_t)(EAX));
  /* 11526fa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11526fa4 mov edx, dword ptr [ecx*4 + 0x11551a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a50)));
  /* 11526fab push edx */
  push32((uint32_t)(EDX));
  /* 11526fac push 0x1154e7e4 */
  push32((uint32_t)(0x1154e7e4u));
  /* 11526fb1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11526fb6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11526fbc push eax */
  push32((uint32_t)(EAX));
  /* 11526fbd call 0x1152a780 */
  push32(0x11526fc2u); f_1152a780();
  /* 11526fc2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526fc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11526fc7 jge 0x11526fdd */
  if ((C.sf==C.of)) goto L_11526fdd;
  /* 11526fc9 push 0x1154e748 */
  push32((uint32_t)(0x1154e748u));
  /* 11526fce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11526fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11526fd5 call 0x1152a880 */
  push32(0x11526fdau); f_1152a880();
  /* 11526fda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11526fdd:;
  /* 11526fdd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11526fe2 push 0x1154e7c0 */
  push32((uint32_t)(0x1154e7c0u));
  /* 11526fe7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11526fed push edx */
  push32((uint32_t)(EDX));
  /* 11526fee call 0x1152b030 */
  push32(0x11526ff3u); f_1152b030();
  /* 11526ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11526ff6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11526ffc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527003 jne 0x11527016 */
  if (!C.zf) goto L_11527016;
  /* 11527005 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11527007 call 0x1152ad70 */
  push32(0x1152700cu); f_1152ad70();
  /* 1152700c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152700f push 3 */
  push32((uint32_t)(0x3u));
  /* 11527011 call 0x11527090 */
  push32(0x11527016u); f_11527090();
L_11527016:;
  /* 11527016 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152701d jne 0x11527026 */
  if (!C.zf) goto L_11527026;
  /* 1152701f mov eax, 1 */
  EAX = (0x1u);
  /* 11527024 jmp 0x11527028 */
  goto L_11527028;
L_11527026:;
  /* 11527026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11527028:;
  /* 11527028 mov esp, ebp */
  ESP = (EBP);
  /* 1152702a pop ebp */
  EBP = (pop32());
  /* 1152702b ret  */
  ESPCHK(0x11526d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x11527030 (56 bytes, 15 insns) */
void f_11527030(void) {
  FTRACE(0x11527030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527030 push ebp */
  push32((uint32_t)(EBP));
  /* 11527031 mov ebp, esp */
  EBP = (ESP);
  /* 11527033 cmp dword ptr [0x1155539c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1155539c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152703a je 0x11527042 */
  if (C.zf) goto L_11527042;
  /* 1152703c call dword ptr [0x1155539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155539c))), 0x11527042u);
L_11527042:;
  /* 11527042 push 0x11551418 */
  push32((uint32_t)(0x11551418u));
  /* 11527047 push 0x11551208 */
  push32((uint32_t)(0x11551208u));
  /* 1152704c call 0x11527200 */
  push32(0x11527051u); f_11527200();
  /* 11527051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527054 push 0x11551104 */
  push32((uint32_t)(0x11551104u));
  /* 11527059 push 0x11551000 */
  push32((uint32_t)(0x11551000u));
  /* 1152705e call 0x11527200 */
  push32(0x11527063u); f_11527200();
  /* 11527063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527066 pop ebp */
  EBP = (pop32());
  /* 11527067 ret  */
  ESPCHK(0x11527030u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x11527070 (21 bytes, 10 insns) */
void f_11527070(void) {
  FTRACE(0x11527070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527070 push ebp */
  push32((uint32_t)(EBP));
  /* 11527071 mov ebp, esp */
  EBP = (ESP);
  /* 11527073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527075 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152707a push eax */
  push32((uint32_t)(EAX));
  /* 1152707b call 0x115270f0 */
  push32(0x11527080u); f_115270f0();
  /* 11527080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527083 pop ebp */
  EBP = (pop32());
  /* 11527084 ret  */
  ESPCHK(0x11527070u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11527090 (21 bytes, 10 insns) */
void f_11527090(void) {
  FTRACE(0x11527090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527090 push ebp */
  push32((uint32_t)(EBP));
  /* 11527091 mov ebp, esp */
  EBP = (ESP);
  /* 11527093 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527095 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152709a push eax */
  push32((uint32_t)(EAX));
  /* 1152709b call 0x115270f0 */
  push32(0x115270a0u); f_115270f0();
  /* 115270a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115270a3 pop ebp */
  EBP = (pop32());
  /* 115270a4 ret  */
  ESPCHK(0x11527090u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x115270b0 (19 bytes, 9 insns) */
void f_115270b0(void) {
  FTRACE(0x115270b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115270b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115270b1 mov ebp, esp */
  EBP = (ESP);
  /* 115270b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115270b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115270b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115270b9 call 0x115270f0 */
  push32(0x115270beu); f_115270f0();
  /* 115270be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115270c1 pop ebp */
  EBP = (pop32());
  /* 115270c2 ret  */
  ESPCHK(0x115270b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x115270d0 (19 bytes, 9 insns) */
void f_115270d0(void) {
  FTRACE(0x115270d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115270d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115270d1 mov ebp, esp */
  EBP = (ESP);
  /* 115270d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115270d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115270d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115270d9 call 0x115270f0 */
  push32(0x115270deu); f_115270f0();
  /* 115270de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115270e1 pop ebp */
  EBP = (pop32());
  /* 115270e2 ret  */
  ESPCHK(0x115270d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x115270f0 (227 bytes, 61 insns) */
void f_115270f0(void) {
  FTRACE(0x115270f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115270f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115270f1 mov ebp, esp */
  EBP = (ESP);
  /* 115270f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115270f4 call 0x115271e0 */
  push32(0x115270f9u); f_115271e0();
  /* 115270f9 cmp dword ptr [0x115538a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115538a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527100 jne 0x11527113 */
  if (!C.zf) goto L_11527113;
  /* 11527102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527105 push eax */
  push32((uint32_t)(EAX));
  /* 11527106 call dword ptr [0x115563e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563e8))), 0x1152710cu);
  /* 1152710c push eax */
  push32((uint32_t)(EAX));
  /* 1152710d call dword ptr [0x115563e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563e4))), 0x11527113u);
L_11527113:;
  /* 11527113 mov dword ptr [0x1155389c], 1 */
  w32((uint32_t)(0x1155389c), (0x1u));
  /* 1152711d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11527120 mov byte ptr [0x11553898], cl */
  w8((uint32_t)(0x11553898), (CL));
  /* 11527126 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152712a jne 0x11527173 */
  if (!C.zf) goto L_11527173;
  /* 1152712c cmp dword ptr [0x11555398], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555398))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527133 je 0x11527161 */
  if (C.zf) goto L_11527161;
  /* 11527135 mov edx, dword ptr [0x11555394] */
  EDX = (r32((uint32_t)(0x11555394)));
  /* 1152713b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152713e:;
  /* 1152713e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527141 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527144 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152714a cmp ecx, dword ptr [0x11555398] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11555398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527150 jb 0x11527161 */
  if (C.cf) goto L_11527161;
  /* 11527152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527155 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527158 je 0x1152715f */
  if (C.zf) goto L_1152715f;
  /* 1152715a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152715d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1152715fu);
L_1152715f:;
  /* 1152715f jmp 0x1152713e */
  goto L_1152713e;
L_11527161:;
  /* 11527161 push 0x11551724 */
  push32((uint32_t)(0x11551724u));
  /* 11527166 push 0x1155151c */
  push32((uint32_t)(0x1155151cu));
  /* 1152716b call 0x11527200 */
  push32(0x11527170u); f_11527200();
  /* 11527170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527173:;
  /* 11527173 push 0x1155192c */
  push32((uint32_t)(0x1155192cu));
  /* 11527178 push 0x11551828 */
  push32((uint32_t)(0x11551828u));
  /* 1152717d call 0x11527200 */
  push32(0x11527182u); f_11527200();
  /* 11527182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527185 cmp dword ptr [0x115538a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115538a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152718c jne 0x115271ae */
  if (!C.zf) goto L_115271ae;
  /* 1152718e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11527190 call 0x11528de0 */
  push32(0x11527195u); f_11528de0();
  /* 11527195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527198 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1152719b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152719d je 0x115271ae */
  if (C.zf) goto L_115271ae;
  /* 1152719f mov dword ptr [0x115538a4], 1 */
  w32((uint32_t)(0x115538a4), (0x1u));
  /* 115271a9 call 0x115296f0 */
  push32(0x115271aeu); f_115296f0();
L_115271ae:;
  /* 115271ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115271b2 je 0x115271bb */
  if (C.zf) goto L_115271bb;
  /* 115271b4 call 0x115271f0 */
  push32(0x115271b9u); f_115271f0();
  /* 115271b9 jmp 0x115271cf */
  goto L_115271cf;
L_115271bb:;
  /* 115271bb mov dword ptr [0x115538a0], 1 */
  w32((uint32_t)(0x115538a0), (0x1u));
  /* 115271c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115271c8 push ecx */
  push32((uint32_t)(ECX));
  /* 115271c9 call dword ptr [0x115563e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563e0))), 0x115271cfu);
L_115271cf:;
  /* 115271cf mov esp, ebp */
  ESP = (EBP);
  /* 115271d1 pop ebp */
  EBP = (pop32());
  /* 115271d2 ret  */
  ESPCHK(0x115270f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x115271e0 (15 bytes, 7 insns) */
void f_115271e0(void) {
  FTRACE(0x115271e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115271e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115271e1 mov ebp, esp */
  EBP = (ESP);
  /* 115271e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115271e5 call 0x1152b2d0 */
  push32(0x115271eau); f_1152b2d0();
  /* 115271ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115271ed pop ebp */
  EBP = (pop32());
  /* 115271ee ret  */
  ESPCHK(0x115271e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x115271f0 (15 bytes, 7 insns) */
void f_115271f0(void) {
  FTRACE(0x115271f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115271f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115271f1 mov ebp, esp */
  EBP = (ESP);
  /* 115271f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115271f5 call 0x1152b370 */
  push32(0x115271fau); f_1152b370();
  /* 115271fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115271fd pop ebp */
  EBP = (pop32());
  /* 115271fe ret  */
  ESPCHK(0x115271f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11527200 (37 bytes, 16 insns) */
void f_11527200(void) {
  FTRACE(0x11527200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527200 push ebp */
  push32((uint32_t)(EBP));
  /* 11527201 mov ebp, esp */
  EBP = (ESP);
L_11527203:;
  /* 11527203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527206 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527209 jae 0x11527223 */
  if (!C.cf) goto L_11527223;
  /* 1152720b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152720e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527211 je 0x11527218 */
  if (C.zf) goto L_11527218;
  /* 11527213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527216 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11527218u);
L_11527218:;
  /* 11527218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152721b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152721e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11527221 jmp 0x11527203 */
  goto L_11527203;
L_11527223:;
  /* 11527223 pop ebp */
  EBP = (pop32());
  /* 11527224 ret  */
  ESPCHK(0x11527200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x11527230 (130 bytes, 42 insns) */
void f_11527230(void) {
  FTRACE(0x11527230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527230 push ebp */
  push32((uint32_t)(EBP));
  /* 11527231 mov ebp, esp */
  EBP = (ESP);
  /* 11527233 push ecx */
  push32((uint32_t)(ECX));
  /* 11527234 call 0x1152b1f0 */
  push32(0x11527239u); f_1152b1f0();
  /* 11527239 call dword ptr [0x115563f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563f0))), 0x1152723fu);
  /* 1152723f mov dword ptr [0x11551a5c], eax */
  w32((uint32_t)(0x11551a5c), (EAX));
  /* 11527244 cmp dword ptr [0x11551a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11551a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152724b jne 0x11527251 */
  if (!C.zf) goto L_11527251;
  /* 1152724d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152724f jmp 0x115272ae */
  goto L_115272ae;
L_11527251:;
  /* 11527251 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11527253 push 0x1154e91c */
  push32((uint32_t)(0x1154e91cu));
  /* 11527258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152725a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1152725c push 1 */
  push32((uint32_t)(0x1u));
  /* 1152725e call 0x11527ce0 */
  push32(0x11527263u); f_11527ce0();
  /* 11527263 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527266 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527269 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152726d je 0x11527284 */
  if (C.zf) goto L_11527284;
  /* 1152726f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527272 push eax */
  push32((uint32_t)(EAX));
  /* 11527273 mov ecx, dword ptr [0x11551a5c] */
  ECX = (r32((uint32_t)(0x11551a5c)));
  /* 11527279 push ecx */
  push32((uint32_t)(ECX));
  /* 1152727a call dword ptr [0x115563dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563dc))), 0x11527280u);
  /* 11527280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527282 jne 0x11527288 */
  if (!C.zf) goto L_11527288;
L_11527284:;
  /* 11527284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527286 jmp 0x115272ae */
  goto L_115272ae;
L_11527288:;
  /* 11527288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152728b push edx */
  push32((uint32_t)(EDX));
  /* 1152728c call 0x115272f0 */
  push32(0x11527291u); f_115272f0();
  /* 11527291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527294 call dword ptr [0x115563ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ec))), 0x1152729au);
  /* 1152729a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152729d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152729f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115272a2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 115272a9 mov eax, 1 */
  EAX = (0x1u);
L_115272ae:;
  /* 115272ae mov esp, ebp */
  ESP = (EBP);
  /* 115272b0 pop ebp */
  EBP = (pop32());
  /* 115272b1 ret  */
  ESPCHK(0x11527230u, _esp0);
  ESP += 4; return;
}

/* FUN_100072c0 @ 0x115272c0 (41 bytes, 11 insns) */
void f_115272c0(void) {
  FTRACE(0x115272c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115272c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115272c1 mov ebp, esp */
  EBP = (ESP);
  /* 115272c3 call 0x1152b230 */
  push32(0x115272c8u); f_1152b230();
  /* 115272c8 cmp dword ptr [0x11551a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11551a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115272cf je 0x115272e7 */
  if (C.zf) goto L_115272e7;
  /* 115272d1 mov eax, dword ptr [0x11551a5c] */
  EAX = (r32((uint32_t)(0x11551a5c)));
  /* 115272d6 push eax */
  push32((uint32_t)(EAX));
  /* 115272d7 call dword ptr [0x115563f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563f4))), 0x115272ddu);
  /* 115272dd mov dword ptr [0x11551a5c], 0xffffffff */
  w32((uint32_t)(0x11551a5c), (0xffffffffu));
L_115272e7:;
  /* 115272e7 pop ebp */
  EBP = (pop32());
  /* 115272e8 ret  */
  ESPCHK(0x115272c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x115272f0 (25 bytes, 8 insns) */
void f_115272f0(void) {
  FTRACE(0x115272f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115272f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115272f1 mov ebp, esp */
  EBP = (ESP);
  /* 115272f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115272f6 mov dword ptr [eax + 0x50], 0x11551c00 */
  w32((uint32_t)(EAX + 0x50), (0x11551c00u));
  /* 115272fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527300 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11527307 pop ebp */
  EBP = (pop32());
  /* 11527308 ret  */
  ESPCHK(0x115272f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x11527310 (152 bytes, 48 insns) */
void f_11527310(void) {
  FTRACE(0x11527310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527310 push ebp */
  push32((uint32_t)(EBP));
  /* 11527311 mov ebp, esp */
  EBP = (ESP);
  /* 11527313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527316 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x1152731cu);
  /* 1152731c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152731f mov eax, dword ptr [0x11551a5c] */
  EAX = (r32((uint32_t)(0x11551a5c)));
  /* 11527324 push eax */
  push32((uint32_t)(EAX));
  /* 11527325 call dword ptr [0x115563fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563fc))), 0x1152732bu);
  /* 1152732b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152732e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527332 jne 0x11527397 */
  if (!C.zf) goto L_11527397;
  /* 11527334 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11527339 push 0x1154e91c */
  push32((uint32_t)(0x1154e91cu));
  /* 1152733e push 2 */
  push32((uint32_t)(0x2u));
  /* 11527340 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11527342 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527344 call 0x11527ce0 */
  push32(0x11527349u); f_11527ce0();
  /* 11527349 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152734c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152734f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527353 je 0x1152738d */
  if (C.zf) goto L_1152738d;
  /* 11527355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527358 push ecx */
  push32((uint32_t)(ECX));
  /* 11527359 mov edx, dword ptr [0x11551a5c] */
  EDX = (r32((uint32_t)(0x11551a5c)));
  /* 1152735f push edx */
  push32((uint32_t)(EDX));
  /* 11527360 call dword ptr [0x115563dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563dc))), 0x11527366u);
  /* 11527366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527368 je 0x1152738d */
  if (C.zf) goto L_1152738d;
  /* 1152736a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152736d push eax */
  push32((uint32_t)(EAX));
  /* 1152736e call 0x115272f0 */
  push32(0x11527373u); f_115272f0();
  /* 11527373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527376 call dword ptr [0x115563ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ec))), 0x1152737cu);
  /* 1152737c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152737f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11527381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527384 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1152738b jmp 0x11527397 */
  goto L_11527397;
L_1152738d:;
  /* 1152738d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1152738f call 0x11526840 */
  push32(0x11527394u); f_11526840();
  /* 11527394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527397:;
  /* 11527397 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152739a push eax */
  push32((uint32_t)(EAX));
  /* 1152739b call dword ptr [0x115563f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563f8))), 0x115273a1u);
  /* 115273a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115273a4 mov esp, ebp */
  ESP = (EBP);
  /* 115273a6 pop ebp */
  EBP = (pop32());
  /* 115273a7 ret  */
  ESPCHK(0x11527310u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x115273b0 (263 bytes, 86 insns) */
void f_115273b0(void) {
  FTRACE(0x115273b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115273b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115273b1 mov ebp, esp */
  EBP = (ESP);
  /* 115273b3 cmp dword ptr [0x11551a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11551a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115273ba je 0x115274b5 */
  if (C.zf) goto L_115274b5;
  /* 115273c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115273c4 jne 0x115273d5 */
  if (!C.zf) goto L_115273d5;
  /* 115273c6 mov eax, dword ptr [0x11551a5c] */
  EAX = (r32((uint32_t)(0x11551a5c)));
  /* 115273cb push eax */
  push32((uint32_t)(EAX));
  /* 115273cc call dword ptr [0x115563fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563fc))), 0x115273d2u);
  /* 115273d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115273d5:;
  /* 115273d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115273d9 je 0x115274a6 */
  if (C.zf) goto L_115274a6;
  /* 115273df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115273e2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115273e6 je 0x115273f9 */
  if (C.zf) goto L_115273f9;
  /* 115273e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115273ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115273ed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 115273f0 push eax */
  push32((uint32_t)(EAX));
  /* 115273f1 call 0x11528360 */
  push32(0x115273f6u); f_11528360();
  /* 115273f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115273f9:;
  /* 115273f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115273fc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527400 je 0x11527413 */
  if (C.zf) goto L_11527413;
  /* 11527402 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527407 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1152740a push eax */
  push32((uint32_t)(EAX));
  /* 1152740b call 0x11528360 */
  push32(0x11527410u); f_11528360();
  /* 11527410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527413:;
  /* 11527413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527416 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152741a je 0x1152742d */
  if (C.zf) goto L_1152742d;
  /* 1152741c push 2 */
  push32((uint32_t)(0x2u));
  /* 1152741e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527421 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11527424 push eax */
  push32((uint32_t)(EAX));
  /* 11527425 call 0x11528360 */
  push32(0x1152742au); f_11528360();
  /* 1152742a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152742d:;
  /* 1152742d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527430 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527434 je 0x11527447 */
  if (C.zf) goto L_11527447;
  /* 11527436 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152743b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1152743e push eax */
  push32((uint32_t)(EAX));
  /* 1152743f call 0x11528360 */
  push32(0x11527444u); f_11528360();
  /* 11527444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527447:;
  /* 11527447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152744a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152744e je 0x11527461 */
  if (C.zf) goto L_11527461;
  /* 11527450 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527452 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527455 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11527458 push eax */
  push32((uint32_t)(EAX));
  /* 11527459 call 0x11528360 */
  push32(0x1152745eu); f_11528360();
  /* 1152745e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527461:;
  /* 11527461 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527464 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527468 je 0x1152747b */
  if (C.zf) goto L_1152747b;
  /* 1152746a push 2 */
  push32((uint32_t)(0x2u));
  /* 1152746c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152746f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11527472 push eax */
  push32((uint32_t)(EAX));
  /* 11527473 call 0x11528360 */
  push32(0x11527478u); f_11528360();
  /* 11527478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152747b:;
  /* 1152747b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152747e cmp dword ptr [ecx + 0x50], 0x11551c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11551c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527485 je 0x11527498 */
  if (C.zf) goto L_11527498;
  /* 11527487 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527489 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152748c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1152748f push eax */
  push32((uint32_t)(EAX));
  /* 11527490 call 0x11528360 */
  push32(0x11527495u); f_11528360();
  /* 11527495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527498:;
  /* 11527498 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152749a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152749d push ecx */
  push32((uint32_t)(ECX));
  /* 1152749e call 0x11528360 */
  push32(0x115274a3u); f_11528360();
  /* 115274a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115274a6:;
  /* 115274a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115274a8 mov edx, dword ptr [0x11551a5c] */
  EDX = (r32((uint32_t)(0x11551a5c)));
  /* 115274ae push edx */
  push32((uint32_t)(EDX));
  /* 115274af call dword ptr [0x115563dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563dc))), 0x115274b5u);
L_115274b5:;
  /* 115274b5 pop ebp */
  EBP = (pop32());
  /* 115274b6 ret  */
  ESPCHK(0x115273b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x115274c0 (11 bytes, 5 insns) */
void f_115274c0(void) {
  FTRACE(0x115274c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115274c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115274c1 mov ebp, esp */
  EBP = (ESP);
  /* 115274c3 call dword ptr [0x115563ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ec))), 0x115274c9u);
  /* 115274c9 pop ebp */
  EBP = (pop32());
  /* 115274ca ret  */
  ESPCHK(0x115274c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x115274d0 (11 bytes, 5 insns) */
void f_115274d0(void) {
  FTRACE(0x115274d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115274d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115274d1 mov ebp, esp */
  EBP = (ESP);
  /* 115274d3 call dword ptr [0x115563d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d8))), 0x115274d9u);
  /* 115274d9 pop ebp */
  EBP = (pop32());
  /* 115274da ret  */
  ESPCHK(0x115274d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x115274e0 (804 bytes, 236 insns) */
void f_115274e0(void) {
  FTRACE(0x115274e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115274e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115274e1 mov ebp, esp */
  EBP = (ESP);
  /* 115274e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115274e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 115274eb push 0x1154e928 */
  push32((uint32_t)(0x1154e928u));
  /* 115274f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115274f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115274f7 call 0x115278d0 */
  push32(0x115274fcu); f_115278d0();
  /* 115274fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115274ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11527502 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527506 jne 0x11527512 */
  if (!C.zf) goto L_11527512;
  /* 11527508 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1152750a call 0x11526840 */
  push32(0x1152750fu); f_11526840();
  /* 1152750f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11527512:;
  /* 11527512 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527515 mov dword ptr [0x11555240], eax */
  w32((uint32_t)(0x11555240), (EAX));
  /* 1152751a mov dword ptr [0x1155537c], 0x20 */
  w32((uint32_t)(0x1155537c), (0x20u));
  /* 11527524 jmp 0x1152752f */
  goto L_1152752f;
L_11527526:;
  /* 11527526 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527529 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152752c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1152752f:;
  /* 1152752f mov edx, dword ptr [0x11555240] */
  EDX = (r32((uint32_t)(0x11555240)));
  /* 11527535 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152753b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152753e jae 0x11527563 */
  if (!C.cf) goto L_11527563;
  /* 11527540 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527543 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11527547 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152754a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11527550 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527553 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11527557 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152755a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11527561 jmp 0x11527526 */
  goto L_11527526;
L_11527563:;
  /* 11527563 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11527566 push ecx */
  push32((uint32_t)(ECX));
  /* 11527567 call dword ptr [0x115563a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a8))), 0x1152756du);
  /* 1152756d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11527570 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11527576 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527578 je 0x11527705 */
  if (C.zf) goto L_11527705;
  /* 1152757e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527582 je 0x11527705 */
  if (C.zf) goto L_11527705;
  /* 11527588 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152758b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152758d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11527590 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11527593 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527596 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11527599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152759c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152759f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 115275a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115275a9 jge 0x115275b3 */
  if ((C.sf==C.of)) goto L_115275b3;
  /* 115275ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 115275ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 115275b1 jmp 0x115275ba */
  goto L_115275ba;
L_115275b3:;
  /* 115275b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_115275ba:;
  /* 115275ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 115275bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 115275c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 115275c7 jmp 0x115275d2 */
  goto L_115275d2;
L_115275c9:;
  /* 115275c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 115275cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115275cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_115275d2:;
  /* 115275d2 mov ecx, dword ptr [0x1155537c] */
  ECX = (r32((uint32_t)(0x1155537c)));
  /* 115275d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115275db jge 0x11527672 */
  if ((C.sf==C.of)) goto L_11527672;
  /* 115275e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 115275e6 push 0x1154e928 */
  push32((uint32_t)(0x1154e928u));
  /* 115275eb push 2 */
  push32((uint32_t)(0x2u));
  /* 115275ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115275f2 call 0x115278d0 */
  push32(0x115275f7u); f_115278d0();
  /* 115275f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115275fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 115275fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527601 jne 0x1152760e */
  if (!C.zf) goto L_1152760e;
  /* 11527603 mov edx, dword ptr [0x1155537c] */
  EDX = (r32((uint32_t)(0x1155537c)));
  /* 11527609 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1152760c jmp 0x11527672 */
  goto L_11527672;
L_1152760e:;
  /* 1152760e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11527611 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527614 mov dword ptr [eax*4 + 0x11555240], ecx */
  w32((uint32_t)(EAX*4 + 0x11555240), (ECX));
  /* 1152761b mov edx, dword ptr [0x1155537c] */
  EDX = (r32((uint32_t)(0x1155537c)));
  /* 11527621 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527624 mov dword ptr [0x1155537c], edx */
  w32((uint32_t)(0x1155537c), (EDX));
  /* 1152762a jmp 0x11527635 */
  goto L_11527635;
L_1152762c:;
  /* 1152762c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152762f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527632 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11527635:;
  /* 11527635 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11527638 mov edx, dword ptr [ecx*4 + 0x11555240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11555240)));
  /* 1152763f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527645 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527648 jae 0x1152766d */
  if (!C.cf) goto L_1152766d;
  /* 1152764a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152764d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11527651 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527654 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1152765a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152765d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11527661 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527664 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1152766b jmp 0x1152762c */
  goto L_1152762c;
L_1152766d:;
  /* 1152766d jmp 0x115275c9 */
  goto L_115275c9;
L_11527672:;
  /* 11527672 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11527679 jmp 0x11527696 */
  goto L_11527696;
L_1152767b:;
  /* 1152767b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1152767e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527681 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11527684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527687 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152768a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152768d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11527690 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527693 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11527696:;
  /* 11527696 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11527699 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152769c jge 0x11527705 */
  if ((C.sf==C.of)) goto L_11527705;
  /* 1152769e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 115276a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115276a4 je 0x11527700 */
  if (C.zf) goto L_11527700;
  /* 115276a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115276a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115276ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115276af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115276b1 je 0x11527700 */
  if (C.zf) goto L_11527700;
  /* 115276b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115276b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115276b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115276bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115276be jne 0x115276d0 */
  if (!C.zf) goto L_115276d0;
  /* 115276c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 115276c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115276c5 push edx */
  push32((uint32_t)(EDX));
  /* 115276c6 call dword ptr [0x115563ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ac))), 0x115276ccu);
  /* 115276cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115276ce je 0x11527700 */
  if (C.zf) goto L_11527700;
L_115276d0:;
  /* 115276d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 115276d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115276d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 115276d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115276dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115276df mov edx, dword ptr [eax*4 + 0x11555240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 115276e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115276e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 115276eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115276ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 115276f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115276f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115276f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115276f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115276fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115276fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11527700:;
  /* 11527700 jmp 0x1152767b */
  goto L_1152767b;
L_11527705:;
  /* 11527705 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1152770c jmp 0x11527717 */
  goto L_11527717;
L_1152770e:;
  /* 1152770e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11527711 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527714 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11527717:;
  /* 11527717 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152771b jge 0x115277f4 */
  if ((C.sf==C.of)) goto L_115277f4;
  /* 11527721 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11527724 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11527727 mov edx, dword ptr [0x11555240] */
  EDX = (r32((uint32_t)(0x11555240)));
  /* 1152772d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152772f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11527732 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527735 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527738 jne 0x115277e0 */
  if (!C.zf) goto L_115277e0;
  /* 1152773e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11527741 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11527745 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527749 jne 0x11527754 */
  if (!C.zf) goto L_11527754;
  /* 1152774b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11527752 jmp 0x11527764 */
  goto L_11527764;
L_11527754:;
  /* 11527754 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11527757 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152775a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152775c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152775e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527761 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11527764:;
  /* 11527764 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11527767 push eax */
  push32((uint32_t)(EAX));
  /* 11527768 call dword ptr [0x115563c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c0))), 0x1152776eu);
  /* 1152776e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11527771 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527775 je 0x115277cf */
  if (C.zf) goto L_115277cf;
  /* 11527777 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1152777a push ecx */
  push32((uint32_t)(ECX));
  /* 1152777b call dword ptr [0x115563ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563ac))), 0x11527781u);
  /* 11527781 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11527784 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527788 je 0x115277cf */
  if (C.zf) goto L_115277cf;
  /* 1152778a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152778d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11527790 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11527792 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11527795 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152779b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152779e jne 0x115277b0 */
  if (!C.zf) goto L_115277b0;
  /* 115277a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277a3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115277a6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 115277a8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277ab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 115277ae jmp 0x115277cd */
  goto L_115277cd;
L_115277b0:;
  /* 115277b0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 115277b3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115277b9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115277bc jne 0x115277cd */
  if (!C.zf) goto L_115277cd;
  /* 115277be mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115277c4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 115277c7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115277cd:;
  /* 115277cd jmp 0x115277de */
  goto L_115277de;
L_115277cf:;
  /* 115277cf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277d2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115277d5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 115277d8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115277de:;
  /* 115277de jmp 0x115277ef */
  goto L_115277ef;
L_115277e0:;
  /* 115277e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277e3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115277e6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 115277e9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115277ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115277ef:;
  /* 115277ef jmp 0x1152770e */
  goto L_1152770e;
L_115277f4:;
  /* 115277f4 mov eax, dword ptr [0x1155537c] */
  EAX = (r32((uint32_t)(0x1155537c)));
  /* 115277f9 push eax */
  push32((uint32_t)(EAX));
  /* 115277fa call dword ptr [0x115563b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563b0))), 0x11527800u);
  /* 11527800 mov esp, ebp */
  ESP = (EBP);
  /* 11527802 pop ebp */
  EBP = (pop32());
  /* 11527803 ret  */
  ESPCHK(0x115274e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11527810 (155 bytes, 45 insns) */
void f_11527810(void) {
  FTRACE(0x11527810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527810 push ebp */
  push32((uint32_t)(EBP));
  /* 11527811 mov ebp, esp */
  EBP = (ESP);
  /* 11527813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527816 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1152781d jmp 0x11527828 */
  goto L_11527828;
L_1152781f:;
  /* 1152781f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527822 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11527828:;
  /* 11527828 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152782c jge 0x115278a7 */
  if ((C.sf==C.of)) goto L_115278a7;
  /* 1152782e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527831 cmp dword ptr [ecx*4 + 0x11555240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11555240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527839 je 0x115278a2 */
  if (C.zf) goto L_115278a2;
  /* 1152783b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152783e mov eax, dword ptr [edx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 11527845 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527848 jmp 0x11527853 */
  goto L_11527853;
L_1152784a:;
  /* 1152784a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152784d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527850 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11527853:;
  /* 11527853 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527856 mov eax, dword ptr [edx*4 + 0x11555240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11555240)));
  /* 1152785d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527862 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527865 jae 0x1152787f */
  if (!C.cf) goto L_1152787f;
  /* 11527867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152786a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152786e je 0x1152787d */
  if (C.zf) goto L_1152787d;
  /* 11527870 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527873 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527876 push edx */
  push32((uint32_t)(EDX));
  /* 11527877 call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152787du);
L_1152787d:;
  /* 1152787d jmp 0x1152784a */
  goto L_1152784a;
L_1152787f:;
  /* 1152787f push 2 */
  push32((uint32_t)(0x2u));
  /* 11527881 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527884 mov ecx, dword ptr [eax*4 + 0x11555240] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11555240)));
  /* 1152788b push ecx */
  push32((uint32_t)(ECX));
  /* 1152788c call 0x11528360 */
  push32(0x11527891u); f_11528360();
  /* 11527891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527894 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527897 mov dword ptr [edx*4 + 0x11555240], 0 */
  w32((uint32_t)(EDX*4 + 0x11555240), (0x0u));
L_115278a2:;
  /* 115278a2 jmp 0x1152781f */
  goto L_1152781f;
L_115278a7:;
  /* 115278a7 mov esp, ebp */
  ESP = (EBP);
  /* 115278a9 pop ebp */
  EBP = (pop32());
  /* 115278aa ret  */
  ESPCHK(0x11527810u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x115278b0 (29 bytes, 13 insns) */
void f_115278b0(void) {
  FTRACE(0x115278b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115278b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115278b1 mov ebp, esp */
  EBP = (ESP);
  /* 115278b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115278b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115278b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115278b9 mov eax, dword ptr [0x11553a48] */
  EAX = (r32((uint32_t)(0x11553a48)));
  /* 115278be push eax */
  push32((uint32_t)(EAX));
  /* 115278bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115278c2 push ecx */
  push32((uint32_t)(ECX));
  /* 115278c3 call 0x11527920 */
  push32(0x115278c8u); f_11527920();
  /* 115278c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115278cb pop ebp */
  EBP = (pop32());
  /* 115278cc ret  */
  ESPCHK(0x115278b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x115278d0 (35 bytes, 16 insns) */
void f_115278d0(void) {
  FTRACE(0x115278d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115278d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115278d1 mov ebp, esp */
  EBP = (ESP);
  /* 115278d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115278d6 push eax */
  push32((uint32_t)(EAX));
  /* 115278d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115278da push ecx */
  push32((uint32_t)(ECX));
  /* 115278db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115278de push edx */
  push32((uint32_t)(EDX));
  /* 115278df mov eax, dword ptr [0x11553a48] */
  EAX = (r32((uint32_t)(0x11553a48)));
  /* 115278e4 push eax */
  push32((uint32_t)(EAX));
  /* 115278e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115278e8 push ecx */
  push32((uint32_t)(ECX));
  /* 115278e9 call 0x11527920 */
  push32(0x115278eeu); f_11527920();
  /* 115278ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115278f1 pop ebp */
  EBP = (pop32());
  /* 115278f2 ret  */
  ESPCHK(0x115278d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x11527900 (27 bytes, 13 insns) */
void f_11527900(void) {
  FTRACE(0x11527900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527900 push ebp */
  push32((uint32_t)(EBP));
  /* 11527901 mov ebp, esp */
  EBP = (ESP);
  /* 11527903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527905 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527907 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527909 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152790c push eax */
  push32((uint32_t)(EAX));
  /* 1152790d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527910 push ecx */
  push32((uint32_t)(ECX));
  /* 11527911 call 0x11527920 */
  push32(0x11527916u); f_11527920();
  /* 11527916 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527919 pop ebp */
  EBP = (pop32());
  /* 1152791a ret  */
  ESPCHK(0x11527900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x11527920 (94 bytes, 38 insns) */
void f_11527920(void) {
  FTRACE(0x11527920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527920 push ebp */
  push32((uint32_t)(EBP));
  /* 11527921 mov ebp, esp */
  EBP = (ESP);
  /* 11527923 push ecx */
  push32((uint32_t)(ECX));
L_11527924:;
  /* 11527924 push 9 */
  push32((uint32_t)(0x9u));
  /* 11527926 call 0x1152b2d0 */
  push32(0x1152792bu); f_1152b2d0();
  /* 1152792b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152792e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527931 push eax */
  push32((uint32_t)(EAX));
  /* 11527932 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527935 push ecx */
  push32((uint32_t)(ECX));
  /* 11527936 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527939 push edx */
  push32((uint32_t)(EDX));
  /* 1152793a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152793d push eax */
  push32((uint32_t)(EAX));
  /* 1152793e call 0x115279a0 */
  push32(0x11527943u); f_115279a0();
  /* 11527943 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527949 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152794b call 0x1152b370 */
  push32(0x11527950u); f_1152b370();
  /* 11527950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527953 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527957 jne 0x1152795f */
  if (!C.zf) goto L_1152795f;
  /* 11527959 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152795d jne 0x11527964 */
  if (!C.zf) goto L_11527964;
L_1152795f:;
  /* 1152795f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527962 jmp 0x1152797a */
  goto L_1152797a;
L_11527964:;
  /* 11527964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527967 push ecx */
  push32((uint32_t)(ECX));
  /* 11527968 call 0x1152b610 */
  push32(0x1152796du); f_1152b610();
  /* 1152796d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527972 jne 0x11527978 */
  if (!C.zf) goto L_11527978;
  /* 11527974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527976 jmp 0x1152797a */
  goto L_1152797a;
L_11527978:;
  /* 11527978 jmp 0x11527924 */
  goto L_11527924;
L_1152797a:;
  /* 1152797a mov esp, ebp */
  ESP = (EBP);
  /* 1152797c pop ebp */
  EBP = (pop32());
  /* 1152797d ret  */
  ESPCHK(0x11527920u, _esp0);
  ESP += 4; return;
}

/* FUN_10007980 @ 0x11527980 (23 bytes, 11 insns) */
void f_11527980(void) {
  FTRACE(0x11527980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527980 push ebp */
  push32((uint32_t)(EBP));
  /* 11527981 mov ebp, esp */
  EBP = (ESP);
  /* 11527983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527985 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527987 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152798c push eax */
  push32((uint32_t)(EAX));
  /* 1152798d call 0x115279a0 */
  push32(0x11527992u); f_115279a0();
  /* 11527992 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527995 pop ebp */
  EBP = (pop32());
  /* 11527996 ret  */
  ESPCHK(0x11527980u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x115279a0 (787 bytes, 254 insns) */
void f_115279a0(void) {
  FTRACE(0x115279a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115279a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115279a1 mov ebp, esp */
  EBP = (ESP);
  /* 115279a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115279a6 push ebx */
  push32((uint32_t)(EBX));
  /* 115279a7 push esi */
  push32((uint32_t)(ESI));
  /* 115279a8 push edi */
  push32((uint32_t)(EDI));
  /* 115279a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115279b0 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 115279b5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115279b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115279ba je 0x115279ec */
  if (C.zf) goto L_115279ec;
L_115279bc:;
  /* 115279bc call 0x11528a70 */
  push32(0x115279c1u); f_11528a70();
  /* 115279c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115279c3 jne 0x115279e6 */
  if (!C.zf) goto L_115279e6;
  /* 115279c5 push 0x1154ea1c */
  push32((uint32_t)(0x1154ea1cu));
  /* 115279ca push 0 */
  push32((uint32_t)(0x0u));
  /* 115279cc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 115279d1 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115279d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115279d8 call 0x11526990 */
  push32(0x115279ddu); f_11526990();
  /* 115279dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115279e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115279e3 jne 0x115279e6 */
  if (!C.zf) goto L_115279e6;
  /* 115279e5 int3  */
  x86_unimpl("int3 @ 0x115279e5");
L_115279e6:;
  /* 115279e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115279e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115279ea jne 0x115279bc */
  if (!C.zf) goto L_115279bc;
L_115279ec:;
  /* 115279ec mov edx, dword ptr [0x11551a88] */
  EDX = (r32((uint32_t)(0x11551a88)));
  /* 115279f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115279f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115279f8 cmp eax, dword ptr [0x11551a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11551a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115279fe jne 0x11527a01 */
  if (!C.zf) goto L_11527a01;
  /* 11527a00 int3  */
  x86_unimpl("int3 @ 0x11527a00");
L_11527a01:;
  /* 11527a01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527a04 push ecx */
  push32((uint32_t)(ECX));
  /* 11527a05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527a08 push edx */
  push32((uint32_t)(EDX));
  /* 11527a09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527a0c push eax */
  push32((uint32_t)(EAX));
  /* 11527a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527a10 push ecx */
  push32((uint32_t)(ECX));
  /* 11527a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527a14 push edx */
  push32((uint32_t)(EDX));
  /* 11527a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527a19 call dword ptr [0x11551c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11551c90))), 0x11527a1fu);
  /* 11527a1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527a24 jne 0x11527a84 */
  if (!C.zf) goto L_11527a84;
  /* 11527a26 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527a2a je 0x11527a57 */
  if (C.zf) goto L_11527a57;
L_11527a2c:;
  /* 11527a2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527a2f push eax */
  push32((uint32_t)(EAX));
  /* 11527a30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11527a34 push 0x1154e9d8 */
  push32((uint32_t)(0x1154e9d8u));
  /* 11527a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a41 call 0x11526990 */
  push32(0x11527a46u); f_11526990();
  /* 11527a46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527a4c jne 0x11527a4f */
  if (!C.zf) goto L_11527a4f;
  /* 11527a4e int3  */
  x86_unimpl("int3 @ 0x11527a4e");
L_11527a4f:;
  /* 11527a4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11527a51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527a53 jne 0x11527a2c */
  if (!C.zf) goto L_11527a2c;
  /* 11527a55 jmp 0x11527a7d */
  goto L_11527a7d;
L_11527a57:;
  /* 11527a57 push 0x1154e9b4 */
  push32((uint32_t)(0x1154e9b4u));
  /* 11527a5c push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11527a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527a69 call 0x11526990 */
  push32(0x11527a6eu); f_11526990();
  /* 11527a6e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527a71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527a74 jne 0x11527a77 */
  if (!C.zf) goto L_11527a77;
  /* 11527a76 int3  */
  x86_unimpl("int3 @ 0x11527a76");
L_11527a77:;
  /* 11527a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527a7b jne 0x11527a57 */
  if (!C.zf) goto L_11527a57;
L_11527a7d:;
  /* 11527a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527a7f jmp 0x11527cac */
  goto L_11527cac;
L_11527a84:;
  /* 11527a84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527a87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11527a8d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527a90 je 0x11527aa6 */
  if (C.zf) goto L_11527aa6;
  /* 11527a92 mov edx, dword ptr [0x11551a84] */
  EDX = (r32((uint32_t)(0x11551a84)));
  /* 11527a98 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11527a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527a9d jne 0x11527aa6 */
  if (!C.zf) goto L_11527aa6;
  /* 11527a9f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11527aa6:;
  /* 11527aa6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527aaa ja 0x11527ab7 */
  if ((!C.cf&&!C.zf)) goto L_11527ab7;
  /* 11527aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527aaf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527ab2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ab5 jbe 0x11527ae3 */
  if ((C.cf||C.zf)) goto L_11527ae3;
L_11527ab7:;
  /* 11527ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527aba push ecx */
  push32((uint32_t)(ECX));
  /* 11527abb push 0x1154e98c */
  push32((uint32_t)(0x1154e98cu));
  /* 11527ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527ac8 call 0x11526990 */
  push32(0x11527acdu); f_11526990();
  /* 11527acd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527ad0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ad3 jne 0x11527ad6 */
  if (!C.zf) goto L_11527ad6;
  /* 11527ad5 int3  */
  x86_unimpl("int3 @ 0x11527ad5");
L_11527ad6:;
  /* 11527ad6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11527ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527ada jne 0x11527ab7 */
  if (!C.zf) goto L_11527ab7;
  /* 11527adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527ade jmp 0x11527cac */
  goto L_11527cac;
L_11527ae3:;
  /* 11527ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527ae6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11527aeb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527aee je 0x11527b30 */
  if (C.zf) goto L_11527b30;
  /* 11527af0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527af4 je 0x11527b30 */
  if (C.zf) goto L_11527b30;
  /* 11527af6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527af9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11527aff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527b02 je 0x11527b30 */
  if (C.zf) goto L_11527b30;
  /* 11527b04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527b08 je 0x11527b30 */
  if (C.zf) goto L_11527b30;
L_11527b0a:;
  /* 11527b0a push 0x1154e958 */
  push32((uint32_t)(0x1154e958u));
  /* 11527b0f push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11527b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11527b1c call 0x11526990 */
  push32(0x11527b21u); f_11526990();
  /* 11527b21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527b24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527b27 jne 0x11527b2a */
  if (!C.zf) goto L_11527b2a;
  /* 11527b29 int3  */
  x86_unimpl("int3 @ 0x11527b29");
L_11527b2a:;
  /* 11527b2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11527b2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527b2e jne 0x11527b0a */
  if (!C.zf) goto L_11527b0a;
L_11527b30:;
  /* 11527b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527b33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527b36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11527b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11527b3c push ecx */
  push32((uint32_t)(ECX));
  /* 11527b3d call 0x1152b720 */
  push32(0x11527b42u); f_1152b720();
  /* 11527b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527b45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527b48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527b4c jne 0x11527b55 */
  if (!C.zf) goto L_11527b55;
  /* 11527b4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527b50 jmp 0x11527cac */
  goto L_11527cac;
L_11527b55:;
  /* 11527b55 mov edx, dword ptr [0x11551a88] */
  EDX = (r32((uint32_t)(0x11551a88)));
  /* 11527b5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527b5e mov dword ptr [0x11551a88], edx */
  w32((uint32_t)(0x11551a88), (EDX));
  /* 11527b64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527b68 je 0x11527bb3 */
  if (C.zf) goto L_11527bb3;
  /* 11527b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11527b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11527b7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11527b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11527b91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527b97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11527b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527b9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11527ba4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527ba7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11527bae jmp 0x11527c53 */
  goto L_11527c53;
L_11527bb3:;
  /* 11527bb3 mov edx, dword ptr [0x115538ac] */
  EDX = (r32((uint32_t)(0x115538ac)));
  /* 11527bb9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527bbc mov dword ptr [0x115538ac], edx */
  w32((uint32_t)(0x115538ac), (EDX));
  /* 11527bc2 mov eax, dword ptr [0x115538b4] */
  EAX = (r32((uint32_t)(0x115538b4)));
  /* 11527bc7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527bca mov dword ptr [0x115538b4], eax */
  w32((uint32_t)(0x115538b4), (EAX));
  /* 11527bcf mov ecx, dword ptr [0x115538b4] */
  ECX = (r32((uint32_t)(0x115538b4)));
  /* 11527bd5 cmp ecx, dword ptr [0x115538b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115538b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527bdb jbe 0x11527be9 */
  if ((C.cf||C.zf)) goto L_11527be9;
  /* 11527bdd mov edx, dword ptr [0x115538b4] */
  EDX = (r32((uint32_t)(0x115538b4)));
  /* 11527be3 mov dword ptr [0x115538b8], edx */
  w32((uint32_t)(0x115538b8), (EDX));
L_11527be9:;
  /* 11527be9 cmp dword ptr [0x115538b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115538b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527bf0 je 0x11527bff */
  if (C.zf) goto L_11527bff;
  /* 11527bf2 mov eax, dword ptr [0x115538b0] */
  EAX = (r32((uint32_t)(0x115538b0)));
  /* 11527bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527bfa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11527bfd jmp 0x11527c08 */
  goto L_11527c08;
L_11527bff:;
  /* 11527bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c02 mov dword ptr [0x115538a8], edx */
  w32((uint32_t)(0x115538a8), (EDX));
L_11527c08:;
  /* 11527c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c0b mov ecx, dword ptr [0x115538b0] */
  ECX = (r32((uint32_t)(0x115538b0)));
  /* 11527c11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11527c13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11527c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527c23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11527c26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527c2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11527c2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527c35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11527c38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527c3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11527c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527c47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11527c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c4d mov dword ptr [0x115538b0], ecx */
  w32((uint32_t)(0x115538b0), (ECX));
L_11527c53:;
  /* 11527c53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11527c55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11527c57 mov dl, byte ptr [0x11551a90] */
  DL = (r8((uint32_t)(0x11551a90)));
  /* 11527c5d push edx */
  push32((uint32_t)(EDX));
  /* 11527c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527c64 push eax */
  push32((uint32_t)(EAX));
  /* 11527c65 call 0x1152b640 */
  push32(0x11527c6au); f_1152b640();
  /* 11527c6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527c6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11527c6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11527c71 mov cl, byte ptr [0x11551a90] */
  CL = (r8((uint32_t)(0x11551a90)));
  /* 11527c77 push ecx */
  push32((uint32_t)(ECX));
  /* 11527c78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11527c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11527c83 call 0x1152b640 */
  push32(0x11527c88u); f_1152b640();
  /* 11527c88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527c8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527c8e push edx */
  push32((uint32_t)(EDX));
  /* 11527c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527c91 mov al, byte ptr [0x11551a92] */
  AL = (r8((uint32_t)(0x11551a92)));
  /* 11527c96 push eax */
  push32((uint32_t)(EAX));
  /* 11527c97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527c9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527c9d push ecx */
  push32((uint32_t)(ECX));
  /* 11527c9e call 0x1152b640 */
  push32(0x11527ca3u); f_1152b640();
  /* 11527ca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527ca6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527ca9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11527cac:;
  /* 11527cac pop edi */
  EDI = (pop32());
  /* 11527cad pop esi */
  ESI = (pop32());
  /* 11527cae pop ebx */
  EBX = (pop32());
  /* 11527caf mov esp, ebp */
  ESP = (EBP);
  /* 11527cb1 pop ebp */
  EBP = (pop32());
  /* 11527cb2 ret  */
  ESPCHK(0x115279a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x11527cc0 (27 bytes, 13 insns) */
void f_11527cc0(void) {
  FTRACE(0x11527cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11527cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11527cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527ccc push eax */
  push32((uint32_t)(EAX));
  /* 11527ccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11527cd1 call 0x11527ce0 */
  push32(0x11527cd6u); f_11527ce0();
  /* 11527cd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527cd9 pop ebp */
  EBP = (pop32());
  /* 11527cda ret  */
  ESPCHK(0x11527cc0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11527ce0 (96 bytes, 37 insns) */
void f_11527ce0(void) {
  FTRACE(0x11527ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11527ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11527ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527ce6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527ce9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11527ced mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11527cf0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11527cf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11527cf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527cfb push eax */
  push32((uint32_t)(EAX));
  /* 11527cfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527cff push ecx */
  push32((uint32_t)(ECX));
  /* 11527d00 call 0x115278d0 */
  push32(0x11527d05u); f_115278d0();
  /* 11527d05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11527d0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527d0f je 0x11527d39 */
  if (C.zf) goto L_11527d39;
  /* 11527d11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527d14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11527d17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11527d1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11527d20:;
  /* 11527d20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11527d23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527d26 jae 0x11527d39 */
  if (!C.cf) goto L_11527d39;
  /* 11527d28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11527d2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11527d2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11527d31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11527d37 jmp 0x11527d20 */
  goto L_11527d20;
L_11527d39:;
  /* 11527d39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527d3c mov esp, ebp */
  ESP = (EBP);
  /* 11527d3e pop ebp */
  EBP = (pop32());
  /* 11527d3f ret  */
  ESPCHK(0x11527ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x11527d40 (27 bytes, 13 insns) */
void f_11527d40(void) {
  FTRACE(0x11527d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11527d41 mov ebp, esp */
  EBP = (ESP);
  /* 11527d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527d49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527d4c push eax */
  push32((uint32_t)(EAX));
  /* 11527d4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11527d51 call 0x11527d60 */
  push32(0x11527d56u); f_11527d60();
  /* 11527d56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d59 pop ebp */
  EBP = (pop32());
  /* 11527d5a ret  */
  ESPCHK(0x11527d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x11527d60 (64 bytes, 27 insns) */
void f_11527d60(void) {
  FTRACE(0x11527d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11527d61 mov ebp, esp */
  EBP = (ESP);
  /* 11527d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11527d64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11527d66 call 0x1152b2d0 */
  push32(0x11527d6bu); f_1152b2d0();
  /* 11527d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11527d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527d73 push eax */
  push32((uint32_t)(EAX));
  /* 11527d74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527d77 push ecx */
  push32((uint32_t)(ECX));
  /* 11527d78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527d7b push edx */
  push32((uint32_t)(EDX));
  /* 11527d7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527d7f push eax */
  push32((uint32_t)(EAX));
  /* 11527d80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11527d84 call 0x11527da0 */
  push32(0x11527d89u); f_11527da0();
  /* 11527d89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11527d8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11527d91 call 0x1152b370 */
  push32(0x11527d96u); f_1152b370();
  /* 11527d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527d99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11527d9c mov esp, ebp */
  ESP = (EBP);
  /* 11527d9e pop ebp */
  EBP = (pop32());
  /* 11527d9f ret  */
  ESPCHK(0x11527d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x11527da0 (1297 bytes, 431 insns) */
void f_11527da0(void) {
  FTRACE(0x11527da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11527da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11527da1 mov ebp, esp */
  EBP = (ESP);
  /* 11527da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11527da7 push esi */
  push32((uint32_t)(ESI));
  /* 11527da8 push edi */
  push32((uint32_t)(EDI));
  /* 11527da9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11527db0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527db4 jne 0x11527dd3 */
  if (!C.zf) goto L_11527dd3;
  /* 11527db6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527db9 push eax */
  push32((uint32_t)(EAX));
  /* 11527dba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527dbd push ecx */
  push32((uint32_t)(ECX));
  /* 11527dbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527dc1 push edx */
  push32((uint32_t)(EDX));
  /* 11527dc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11527dc6 call 0x115278d0 */
  push32(0x11527dcbu); f_115278d0();
  /* 11527dcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527dce jmp 0x115282aa */
  goto L_115282aa;
L_11527dd3:;
  /* 11527dd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527dd7 je 0x11527df6 */
  if (C.zf) goto L_11527df6;
  /* 11527dd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ddd jne 0x11527df6 */
  if (!C.zf) goto L_11527df6;
  /* 11527ddf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527de2 push ecx */
  push32((uint32_t)(ECX));
  /* 11527de3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527de6 push edx */
  push32((uint32_t)(EDX));
  /* 11527de7 call 0x11528360 */
  push32(0x11527decu); f_11528360();
  /* 11527dec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527def xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527df1 jmp 0x115282aa */
  goto L_115282aa;
L_11527df6:;
  /* 11527df6 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 11527dfb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11527dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527e00 je 0x11527e32 */
  if (C.zf) goto L_11527e32;
L_11527e02:;
  /* 11527e02 call 0x11528a70 */
  push32(0x11527e07u); f_11528a70();
  /* 11527e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527e09 jne 0x11527e2c */
  if (!C.zf) goto L_11527e2c;
  /* 11527e0b push 0x1154ea1c */
  push32((uint32_t)(0x1154ea1cu));
  /* 11527e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527e12 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11527e17 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11527e1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11527e1e call 0x11526990 */
  push32(0x11527e23u); f_11526990();
  /* 11527e23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527e26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527e29 jne 0x11527e2c */
  if (!C.zf) goto L_11527e2c;
  /* 11527e2b int3  */
  x86_unimpl("int3 @ 0x11527e2b");
L_11527e2c:;
  /* 11527e2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11527e2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11527e30 jne 0x11527e02 */
  if (!C.zf) goto L_11527e02;
L_11527e32:;
  /* 11527e32 mov edx, dword ptr [0x11551a88] */
  EDX = (r32((uint32_t)(0x11551a88)));
  /* 11527e38 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11527e3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11527e3e cmp eax, dword ptr [0x11551a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11551a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527e44 jne 0x11527e47 */
  if (!C.zf) goto L_11527e47;
  /* 11527e46 int3  */
  x86_unimpl("int3 @ 0x11527e46");
L_11527e47:;
  /* 11527e47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527e4a push ecx */
  push32((uint32_t)(ECX));
  /* 11527e4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527e4e push edx */
  push32((uint32_t)(EDX));
  /* 11527e4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11527e52 push eax */
  push32((uint32_t)(EAX));
  /* 11527e53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527e56 push ecx */
  push32((uint32_t)(ECX));
  /* 11527e57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527e5a push edx */
  push32((uint32_t)(EDX));
  /* 11527e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527e5e push eax */
  push32((uint32_t)(EAX));
  /* 11527e5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11527e61 call dword ptr [0x11551c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11551c90))), 0x11527e67u);
  /* 11527e67 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527e6c jne 0x11527ecc */
  if (!C.zf) goto L_11527ecc;
  /* 11527e6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527e72 je 0x11527e9f */
  if (C.zf) goto L_11527e9f;
L_11527e74:;
  /* 11527e74 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11527e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11527e78 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11527e7b push edx */
  push32((uint32_t)(EDX));
  /* 11527e7c push 0x1154eb98 */
  push32((uint32_t)(0x1154eb98u));
  /* 11527e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527e89 call 0x11526990 */
  push32(0x11527e8eu); f_11526990();
  /* 11527e8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527e91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527e94 jne 0x11527e97 */
  if (!C.zf) goto L_11527e97;
  /* 11527e96 int3  */
  x86_unimpl("int3 @ 0x11527e96");
L_11527e97:;
  /* 11527e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527e9b jne 0x11527e74 */
  if (!C.zf) goto L_11527e74;
  /* 11527e9d jmp 0x11527ec5 */
  goto L_11527ec5;
L_11527e9f:;
  /* 11527e9f push 0x1154eb74 */
  push32((uint32_t)(0x1154eb74u));
  /* 11527ea4 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11527ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527eab push 0 */
  push32((uint32_t)(0x0u));
  /* 11527ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11527eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 11527eb1 call 0x11526990 */
  push32(0x11527eb6u); f_11526990();
  /* 11527eb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527eb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ebc jne 0x11527ebf */
  if (!C.zf) goto L_11527ebf;
  /* 11527ebe int3  */
  x86_unimpl("int3 @ 0x11527ebe");
L_11527ebf:;
  /* 11527ebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11527ec1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11527ec3 jne 0x11527e9f */
  if (!C.zf) goto L_11527e9f;
L_11527ec5:;
  /* 11527ec5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527ec7 jmp 0x115282aa */
  goto L_115282aa;
L_11527ecc:;
  /* 11527ecc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ed0 jbe 0x11527efe */
  if ((C.cf||C.zf)) goto L_11527efe;
L_11527ed2:;
  /* 11527ed2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11527ed5 push edx */
  push32((uint32_t)(EDX));
  /* 11527ed6 push 0x1154eb44 */
  push32((uint32_t)(0x1154eb44u));
  /* 11527edb push 0 */
  push32((uint32_t)(0x0u));
  /* 11527edd push 0 */
  push32((uint32_t)(0x0u));
  /* 11527edf push 0 */
  push32((uint32_t)(0x0u));
  /* 11527ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527ee3 call 0x11526990 */
  push32(0x11527ee8u); f_11526990();
  /* 11527ee8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527eeb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527eee jne 0x11527ef1 */
  if (!C.zf) goto L_11527ef1;
  /* 11527ef0 int3  */
  x86_unimpl("int3 @ 0x11527ef0");
L_11527ef1:;
  /* 11527ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527ef5 jne 0x11527ed2 */
  if (!C.zf) goto L_11527ed2;
  /* 11527ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527ef9 jmp 0x115282aa */
  goto L_115282aa;
L_11527efe:;
  /* 11527efe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f02 je 0x11527f46 */
  if (C.zf) goto L_11527f46;
  /* 11527f04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527f07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11527f0d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f10 je 0x11527f46 */
  if (C.zf) goto L_11527f46;
  /* 11527f12 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527f15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11527f1b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f1e je 0x11527f46 */
  if (C.zf) goto L_11527f46;
L_11527f20:;
  /* 11527f20 push 0x1154e958 */
  push32((uint32_t)(0x1154e958u));
  /* 11527f25 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11527f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11527f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11527f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11527f30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11527f32 call 0x11526990 */
  push32(0x11527f37u); f_11526990();
  /* 11527f37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527f3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f3d jne 0x11527f40 */
  if (!C.zf) goto L_11527f40;
  /* 11527f3f int3  */
  x86_unimpl("int3 @ 0x11527f3f");
L_11527f40:;
  /* 11527f40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11527f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527f44 jne 0x11527f20 */
  if (!C.zf) goto L_11527f20;
L_11527f46:;
  /* 11527f46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11527f4a call 0x11528ed0 */
  push32(0x11527f4fu); f_11528ed0();
  /* 11527f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11527f54 jne 0x11527f77 */
  if (!C.zf) goto L_11527f77;
  /* 11527f56 push 0x1154eb20 */
  push32((uint32_t)(0x1154eb20u));
  /* 11527f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11527f5d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11527f62 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11527f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527f69 call 0x11526990 */
  push32(0x11527f6eu); f_11526990();
  /* 11527f6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527f71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f74 jne 0x11527f77 */
  if (!C.zf) goto L_11527f77;
  /* 11527f76 int3  */
  x86_unimpl("int3 @ 0x11527f76");
L_11527f77:;
  /* 11527f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11527f79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11527f7b jne 0x11527f46 */
  if (!C.zf) goto L_11527f46;
  /* 11527f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11527f80 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11527f83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11527f86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527f89 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f8d jne 0x11527f96 */
  if (!C.zf) goto L_11527f96;
  /* 11527f8f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11527f96:;
  /* 11527f96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527f9a je 0x11527fda */
  if (C.zf) goto L_11527fda;
L_11527f9c:;
  /* 11527f9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527f9f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527fa6 jne 0x11527fb1 */
  if (!C.zf) goto L_11527fb1;
  /* 11527fa8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527fab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527faf je 0x11527fd2 */
  if (C.zf) goto L_11527fd2;
L_11527fb1:;
  /* 11527fb1 push 0x1154ead8 */
  push32((uint32_t)(0x1154ead8u));
  /* 11527fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11527fb8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11527fbd push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11527fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11527fc4 call 0x11526990 */
  push32(0x11527fc9u); f_11526990();
  /* 11527fc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11527fcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527fcf jne 0x11527fd2 */
  if (!C.zf) goto L_11527fd2;
  /* 11527fd1 int3  */
  x86_unimpl("int3 @ 0x11527fd1");
L_11527fd2:;
  /* 11527fd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11527fd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11527fd6 jne 0x11527f9c */
  if (!C.zf) goto L_11527f9c;
  /* 11527fd8 jmp 0x1152803e */
  goto L_1152803e;
L_11527fda:;
  /* 11527fda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11527fdd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11527fe0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11527fe5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527fe8 jne 0x11527fff */
  if (!C.zf) goto L_11527fff;
  /* 11527fea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11527fed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11527ff3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11527ff6 jne 0x11527fff */
  if (!C.zf) goto L_11527fff;
  /* 11527ff8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11527fff:;
  /* 11527fff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528002 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528005 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152800a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152800d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528013 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528015 je 0x11528038 */
  if (C.zf) goto L_11528038;
  /* 11528017 push 0x1154ea9c */
  push32((uint32_t)(0x1154ea9cu));
  /* 1152801c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152801e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11528023 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11528028 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152802a call 0x11526990 */
  push32(0x1152802fu); f_11526990();
  /* 1152802f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528032 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528035 jne 0x11528038 */
  if (!C.zf) goto L_11528038;
  /* 11528037 int3  */
  x86_unimpl("int3 @ 0x11528037");
L_11528038:;
  /* 11528038 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152803a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152803c jne 0x11527fff */
  if (!C.zf) goto L_11527fff;
L_1152803e:;
  /* 1152803e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528042 je 0x11528069 */
  if (C.zf) goto L_11528069;
  /* 11528044 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528047 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152804a push eax */
  push32((uint32_t)(EAX));
  /* 1152804b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152804e push ecx */
  push32((uint32_t)(ECX));
  /* 1152804f call 0x1152b850 */
  push32(0x11528054u); f_1152b850();
  /* 11528054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528057 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152805a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152805e jne 0x11528067 */
  if (!C.zf) goto L_11528067;
  /* 11528060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528062 jmp 0x115282aa */
  goto L_115282aa;
L_11528067:;
  /* 11528067 jmp 0x1152808c */
  goto L_1152808c;
L_11528069:;
  /* 11528069 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152806c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152806f push edx */
  push32((uint32_t)(EDX));
  /* 11528070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528073 push eax */
  push32((uint32_t)(EAX));
  /* 11528074 call 0x1152b7a0 */
  push32(0x11528079u); f_1152b7a0();
  /* 11528079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152807c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152807f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528083 jne 0x1152808c */
  if (!C.zf) goto L_1152808c;
  /* 11528085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528087 jmp 0x115282aa */
  goto L_115282aa;
L_1152808c:;
  /* 1152808c mov ecx, dword ptr [0x11551a88] */
  ECX = (r32((uint32_t)(0x11551a88)));
  /* 11528092 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528095 mov dword ptr [0x11551a88], ecx */
  w32((uint32_t)(0x11551a88), (ECX));
  /* 1152809b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152809f jne 0x115280f7 */
  if (!C.zf) goto L_115280f7;
  /* 115280a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115280a4 mov eax, dword ptr [0x115538ac] */
  EAX = (r32((uint32_t)(0x115538ac)));
  /* 115280a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115280ac mov dword ptr [0x115538ac], eax */
  w32((uint32_t)(0x115538ac), (EAX));
  /* 115280b1 mov ecx, dword ptr [0x115538ac] */
  ECX = (r32((uint32_t)(0x115538ac)));
  /* 115280b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115280ba mov dword ptr [0x115538ac], ecx */
  w32((uint32_t)(0x115538ac), (ECX));
  /* 115280c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115280c3 mov eax, dword ptr [0x115538b4] */
  EAX = (r32((uint32_t)(0x115538b4)));
  /* 115280c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115280cb mov dword ptr [0x115538b4], eax */
  w32((uint32_t)(0x115538b4), (EAX));
  /* 115280d0 mov ecx, dword ptr [0x115538b4] */
  ECX = (r32((uint32_t)(0x115538b4)));
  /* 115280d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115280d9 mov dword ptr [0x115538b4], ecx */
  w32((uint32_t)(0x115538b4), (ECX));
  /* 115280df mov edx, dword ptr [0x115538b4] */
  EDX = (r32((uint32_t)(0x115538b4)));
  /* 115280e5 cmp edx, dword ptr [0x115538b8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115538b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115280eb jbe 0x115280f7 */
  if ((C.cf||C.zf)) goto L_115280f7;
  /* 115280ed mov eax, dword ptr [0x115538b4] */
  EAX = (r32((uint32_t)(0x115538b4)));
  /* 115280f2 mov dword ptr [0x115538b8], eax */
  w32((uint32_t)(0x115538b8), (EAX));
L_115280f7:;
  /* 115280f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115280fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115280fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11528100 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528106 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528109 jbe 0x1152812f */
  if ((C.cf||C.zf)) goto L_1152812f;
  /* 1152810b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152810e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528111 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528114 push edx */
  push32((uint32_t)(EDX));
  /* 11528115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528117 mov al, byte ptr [0x11551a92] */
  AL = (r8((uint32_t)(0x11551a92)));
  /* 1152811c push eax */
  push32((uint32_t)(EAX));
  /* 1152811d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528120 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528123 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528126 push edx */
  push32((uint32_t)(EDX));
  /* 11528127 call 0x1152b640 */
  push32(0x1152812cu); f_1152b640();
  /* 1152812c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152812f:;
  /* 1152812f push 4 */
  push32((uint32_t)(0x4u));
  /* 11528131 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528133 mov al, byte ptr [0x11551a90] */
  AL = (r8((uint32_t)(0x11551a90)));
  /* 11528138 push eax */
  push32((uint32_t)(EAX));
  /* 11528139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152813c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152813f push ecx */
  push32((uint32_t)(ECX));
  /* 11528140 call 0x1152b640 */
  push32(0x11528145u); f_1152b640();
  /* 11528145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528148 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152814c jne 0x11528169 */
  if (!C.zf) goto L_11528169;
  /* 1152814e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528151 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11528154 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11528157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152815a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152815d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11528160 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528163 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11528166 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11528169:;
  /* 11528169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152816c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152816f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11528172:;
  /* 11528172 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528176 jne 0x115281a7 */
  if (!C.zf) goto L_115281a7;
  /* 11528178 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152817c jne 0x11528186 */
  if (!C.zf) goto L_11528186;
  /* 1152817e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528181 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528184 je 0x115281a7 */
  if (C.zf) goto L_115281a7;
L_11528186:;
  /* 11528186 push 0x1154ea68 */
  push32((uint32_t)(0x1154ea68u));
  /* 1152818b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152818d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11528192 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11528197 push 2 */
  push32((uint32_t)(0x2u));
  /* 11528199 call 0x11526990 */
  push32(0x1152819eu); f_11526990();
  /* 1152819e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115281a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115281a4 jne 0x115281a7 */
  if (!C.zf) goto L_115281a7;
  /* 115281a6 int3  */
  x86_unimpl("int3 @ 0x115281a6");
L_115281a7:;
  /* 115281a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115281a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115281ab jne 0x11528172 */
  if (!C.zf) goto L_11528172;
  /* 115281ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115281b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115281b3 je 0x115281bb */
  if (C.zf) goto L_115281bb;
  /* 115281b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115281b9 je 0x115281c3 */
  if (C.zf) goto L_115281c3;
L_115281bb:;
  /* 115281bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115281be jmp 0x115282aa */
  goto L_115282aa;
L_115281c3:;
  /* 115281c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115281c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115281c9 je 0x115281db */
  if (C.zf) goto L_115281db;
  /* 115281cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115281ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115281d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115281d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115281d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115281d9 jmp 0x11528217 */
  goto L_11528217;
L_115281db:;
  /* 115281db mov eax, dword ptr [0x115538a8] */
  EAX = (r32((uint32_t)(0x115538a8)));
  /* 115281e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115281e3 je 0x11528206 */
  if (C.zf) goto L_11528206;
  /* 115281e5 push 0x1154ea4c */
  push32((uint32_t)(0x1154ea4cu));
  /* 115281ea push 0 */
  push32((uint32_t)(0x0u));
  /* 115281ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 115281f1 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115281f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115281f8 call 0x11526990 */
  push32(0x115281fdu); f_11526990();
  /* 115281fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528200 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528203 jne 0x11528206 */
  if (!C.zf) goto L_11528206;
  /* 11528205 int3  */
  x86_unimpl("int3 @ 0x11528205");
L_11528206:;
  /* 11528206 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11528208 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152820a jne 0x115281db */
  if (!C.zf) goto L_115281db;
  /* 1152820c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152820f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11528212 mov dword ptr [0x115538a8], eax */
  w32((uint32_t)(0x115538a8), (EAX));
L_11528217:;
  /* 11528217 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152821a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152821e je 0x1152822f */
  if (C.zf) goto L_1152822f;
  /* 11528220 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528223 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11528226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528229 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152822b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1152822d jmp 0x1152826a */
  goto L_1152826a;
L_1152822f:;
  /* 1152822f mov eax, dword ptr [0x115538b0] */
  EAX = (r32((uint32_t)(0x115538b0)));
  /* 11528234 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528237 je 0x1152825a */
  if (C.zf) goto L_1152825a;
  /* 11528239 push 0x1154ea30 */
  push32((uint32_t)(0x1154ea30u));
  /* 1152823e push 0 */
  push32((uint32_t)(0x0u));
  /* 11528240 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11528245 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 1152824a push 2 */
  push32((uint32_t)(0x2u));
  /* 1152824c call 0x11526990 */
  push32(0x11528251u); f_11526990();
  /* 11528251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528257 jne 0x1152825a */
  if (!C.zf) goto L_1152825a;
  /* 11528259 int3  */
  x86_unimpl("int3 @ 0x11528259");
L_1152825a:;
  /* 1152825a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152825c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152825e jne 0x1152822f */
  if (!C.zf) goto L_1152822f;
  /* 11528260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528263 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11528265 mov dword ptr [0x115538b0], eax */
  w32((uint32_t)(0x115538b0), (EAX));
L_1152826a:;
  /* 1152826a cmp dword ptr [0x115538b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115538b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528271 je 0x11528281 */
  if (C.zf) goto L_11528281;
  /* 11528273 mov ecx, dword ptr [0x115538b0] */
  ECX = (r32((uint32_t)(0x115538b0)));
  /* 11528279 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152827c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1152827f jmp 0x11528289 */
  goto L_11528289;
L_11528281:;
  /* 11528281 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528284 mov dword ptr [0x115538a8], eax */
  w32((uint32_t)(0x115538a8), (EAX));
L_11528289:;
  /* 11528289 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152828c mov edx, dword ptr [0x115538b0] */
  EDX = (r32((uint32_t)(0x115538b0)));
  /* 11528292 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11528294 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528297 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1152829e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115282a1 mov dword ptr [0x115538b0], ecx */
  w32((uint32_t)(0x115538b0), (ECX));
  /* 115282a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115282aa:;
  /* 115282aa pop edi */
  EDI = (pop32());
  /* 115282ab pop esi */
  ESI = (pop32());
  /* 115282ac pop ebx */
  EBX = (pop32());
  /* 115282ad mov esp, ebp */
  ESP = (EBP);
  /* 115282af pop ebp */
  EBP = (pop32());
  /* 115282b0 ret  */
  ESPCHK(0x11527da0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082c0 @ 0x115282c0 (27 bytes, 13 insns) */
void f_115282c0(void) {
  FTRACE(0x115282c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115282c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115282c1 mov ebp, esp */
  EBP = (ESP);
  /* 115282c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115282c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115282c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115282c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115282cc push eax */
  push32((uint32_t)(EAX));
  /* 115282cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115282d0 push ecx */
  push32((uint32_t)(ECX));
  /* 115282d1 call 0x115282e0 */
  push32(0x115282d6u); f_115282e0();
  /* 115282d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115282d9 pop ebp */
  EBP = (pop32());
  /* 115282da ret  */
  ESPCHK(0x115282c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e0 @ 0x115282e0 (64 bytes, 27 insns) */
void f_115282e0(void) {
  FTRACE(0x115282e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115282e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115282e1 mov ebp, esp */
  EBP = (ESP);
  /* 115282e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115282e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 115282e6 call 0x1152b2d0 */
  push32(0x115282ebu); f_1152b2d0();
  /* 115282eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115282ee push 0 */
  push32((uint32_t)(0x0u));
  /* 115282f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115282f3 push eax */
  push32((uint32_t)(EAX));
  /* 115282f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115282f7 push ecx */
  push32((uint32_t)(ECX));
  /* 115282f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115282fb push edx */
  push32((uint32_t)(EDX));
  /* 115282fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115282ff push eax */
  push32((uint32_t)(EAX));
  /* 11528300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528303 push ecx */
  push32((uint32_t)(ECX));
  /* 11528304 call 0x11527da0 */
  push32(0x11528309u); f_11527da0();
  /* 11528309 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152830c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152830f push 9 */
  push32((uint32_t)(0x9u));
  /* 11528311 call 0x1152b370 */
  push32(0x11528316u); f_1152b370();
  /* 11528316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152831c mov esp, ebp */
  ESP = (EBP);
  /* 1152831e pop ebp */
  EBP = (pop32());
  /* 1152831f ret  */
  ESPCHK(0x115282e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x11528320 (19 bytes, 9 insns) */
void f_11528320(void) {
  FTRACE(0x11528320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528320 push ebp */
  push32((uint32_t)(EBP));
  /* 11528321 mov ebp, esp */
  EBP = (ESP);
  /* 11528323 push 1 */
  push32((uint32_t)(0x1u));
  /* 11528325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528328 push eax */
  push32((uint32_t)(EAX));
  /* 11528329 call 0x11528360 */
  push32(0x1152832eu); f_11528360();
  /* 1152832e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528331 pop ebp */
  EBP = (pop32());
  /* 11528332 ret  */
  ESPCHK(0x11528320u, _esp0);
  ESP += 4; return;
}

/* FUN_10008340 @ 0x11528340 (19 bytes, 9 insns) */
void f_11528340(void) {
  FTRACE(0x11528340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528340 push ebp */
  push32((uint32_t)(EBP));
  /* 11528341 mov ebp, esp */
  EBP = (ESP);
  /* 11528343 push 1 */
  push32((uint32_t)(0x1u));
  /* 11528345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528348 push eax */
  push32((uint32_t)(EAX));
  /* 11528349 call 0x11528390 */
  push32(0x1152834eu); f_11528390();
  /* 1152834e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528351 pop ebp */
  EBP = (pop32());
  /* 11528352 ret  */
  ESPCHK(0x11528340u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x11528360 (41 bytes, 16 insns) */
void f_11528360(void) {
  FTRACE(0x11528360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528360 push ebp */
  push32((uint32_t)(EBP));
  /* 11528361 mov ebp, esp */
  EBP = (ESP);
  /* 11528363 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528365 call 0x1152b2d0 */
  push32(0x1152836au); f_1152b2d0();
  /* 1152836a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152836d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528370 push eax */
  push32((uint32_t)(EAX));
  /* 11528371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528374 push ecx */
  push32((uint32_t)(ECX));
  /* 11528375 call 0x11528390 */
  push32(0x1152837au); f_11528390();
  /* 1152837a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152837d push 9 */
  push32((uint32_t)(0x9u));
  /* 1152837f call 0x1152b370 */
  push32(0x11528384u); f_1152b370();
  /* 11528384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528387 pop ebp */
  EBP = (pop32());
  /* 11528388 ret  */
  ESPCHK(0x11528360u, _esp0);
  ESP += 4; return;
}

/* FUN_10008390 @ 0x11528390 (1004 bytes, 342 insns) */
void f_11528390(void) {
  FTRACE(0x11528390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528390 push ebp */
  push32((uint32_t)(EBP));
  /* 11528391 mov ebp, esp */
  EBP = (ESP);
  /* 11528393 push ecx */
  push32((uint32_t)(ECX));
  /* 11528394 push ebx */
  push32((uint32_t)(EBX));
  /* 11528395 push esi */
  push32((uint32_t)(ESI));
  /* 11528396 push edi */
  push32((uint32_t)(EDI));
  /* 11528397 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 1152839c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1152839f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115283a1 je 0x115283d3 */
  if (C.zf) goto L_115283d3;
L_115283a3:;
  /* 115283a3 call 0x11528a70 */
  push32(0x115283a8u); f_11528a70();
  /* 115283a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115283aa jne 0x115283cd */
  if (!C.zf) goto L_115283cd;
  /* 115283ac push 0x1154ea1c */
  push32((uint32_t)(0x1154ea1cu));
  /* 115283b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115283b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 115283b8 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115283bd push 2 */
  push32((uint32_t)(0x2u));
  /* 115283bf call 0x11526990 */
  push32(0x115283c4u); f_11526990();
  /* 115283c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115283c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115283ca jne 0x115283cd */
  if (!C.zf) goto L_115283cd;
  /* 115283cc int3  */
  x86_unimpl("int3 @ 0x115283cc");
L_115283cd:;
  /* 115283cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115283cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115283d1 jne 0x115283a3 */
  if (!C.zf) goto L_115283a3;
L_115283d3:;
  /* 115283d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115283d7 jne 0x115283de */
  if (!C.zf) goto L_115283de;
  /* 115283d9 jmp 0x11528775 */
  goto L_11528775;
L_115283de:;
  /* 115283de push 0 */
  push32((uint32_t)(0x0u));
  /* 115283e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115283e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115283e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115283e7 push edx */
  push32((uint32_t)(EDX));
  /* 115283e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115283ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115283ed push eax */
  push32((uint32_t)(EAX));
  /* 115283ee push 3 */
  push32((uint32_t)(0x3u));
  /* 115283f0 call dword ptr [0x11551c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11551c90))), 0x115283f6u);
  /* 115283f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115283f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115283fb jne 0x11528428 */
  if (!C.zf) goto L_11528428;
L_115283fd:;
  /* 115283fd push 0x1154ece0 */
  push32((uint32_t)(0x1154ece0u));
  /* 11528402 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152840b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152840d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152840f call 0x11526990 */
  push32(0x11528414u); f_11526990();
  /* 11528414 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152841a jne 0x1152841d */
  if (!C.zf) goto L_1152841d;
  /* 1152841c int3  */
  x86_unimpl("int3 @ 0x1152841c");
L_1152841d:;
  /* 1152841d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152841f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528421 jne 0x115283fd */
  if (!C.zf) goto L_115283fd;
  /* 11528423 jmp 0x11528775 */
  goto L_11528775;
L_11528428:;
  /* 11528428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152842b push edx */
  push32((uint32_t)(EDX));
  /* 1152842c call 0x11528ed0 */
  push32(0x11528431u); f_11528ed0();
  /* 11528431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528436 jne 0x11528459 */
  if (!C.zf) goto L_11528459;
  /* 11528438 push 0x1154eb20 */
  push32((uint32_t)(0x1154eb20u));
  /* 1152843d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152843f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11528444 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11528449 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152844b call 0x11526990 */
  push32(0x11528450u); f_11526990();
  /* 11528450 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528453 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528456 jne 0x11528459 */
  if (!C.zf) goto L_11528459;
  /* 11528458 int3  */
  x86_unimpl("int3 @ 0x11528458");
L_11528459:;
  /* 11528459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152845b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152845d jne 0x11528428 */
  if (!C.zf) goto L_11528428;
  /* 1152845f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528462 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528465 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11528468:;
  /* 11528468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152846b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1152846e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528473 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528476 je 0x115284bb */
  if (C.zf) goto L_115284bb;
  /* 11528478 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152847b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152847f je 0x115284bb */
  if (C.zf) goto L_115284bb;
  /* 11528481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528484 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528487 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152848c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152848f je 0x115284bb */
  if (C.zf) goto L_115284bb;
  /* 11528491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528494 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528498 je 0x115284bb */
  if (C.zf) goto L_115284bb;
  /* 1152849a push 0x1154ecb8 */
  push32((uint32_t)(0x1154ecb8u));
  /* 1152849f push 0 */
  push32((uint32_t)(0x0u));
  /* 115284a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 115284a6 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115284ab push 2 */
  push32((uint32_t)(0x2u));
  /* 115284ad call 0x11526990 */
  push32(0x115284b2u); f_11526990();
  /* 115284b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115284b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115284b8 jne 0x115284bb */
  if (!C.zf) goto L_115284bb;
  /* 115284ba int3  */
  x86_unimpl("int3 @ 0x115284ba");
L_115284bb:;
  /* 115284bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115284bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115284bf jne 0x11528468 */
  if (!C.zf) goto L_11528468;
  /* 115284c1 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 115284c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115284c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115284cb jne 0x11528596 */
  if (!C.zf) goto L_11528596;
  /* 115284d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 115284d3 mov cl, byte ptr [0x11551a90] */
  CL = (r8((uint32_t)(0x11551a90)));
  /* 115284d9 push ecx */
  push32((uint32_t)(ECX));
  /* 115284da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115284dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115284e0 push edx */
  push32((uint32_t)(EDX));
  /* 115284e1 call 0x115289e0 */
  push32(0x115284e6u); f_115289e0();
  /* 115284e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115284e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115284eb jne 0x11528530 */
  if (!C.zf) goto L_11528530;
L_115284ed:;
  /* 115284ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115284f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115284f3 push eax */
  push32((uint32_t)(EAX));
  /* 115284f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115284f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115284fa push edx */
  push32((uint32_t)(EDX));
  /* 115284fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115284fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11528501 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528507 mov edx, dword ptr [ecx*4 + 0x11551a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a94)));
  /* 1152850e push edx */
  push32((uint32_t)(EDX));
  /* 1152850f push 0x1154ec8c */
  push32((uint32_t)(0x1154ec8cu));
  /* 11528514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528516 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528518 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152851a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152851c call 0x11526990 */
  push32(0x11528521u); f_11526990();
  /* 11528521 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528524 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528527 jne 0x1152852a */
  if (!C.zf) goto L_1152852a;
  /* 11528529 int3  */
  x86_unimpl("int3 @ 0x11528529");
L_1152852a:;
  /* 1152852a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152852c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152852e jne 0x115284ed */
  if (!C.zf) goto L_115284ed;
L_11528530:;
  /* 11528530 push 4 */
  push32((uint32_t)(0x4u));
  /* 11528532 mov cl, byte ptr [0x11551a90] */
  CL = (r8((uint32_t)(0x11551a90)));
  /* 11528538 push ecx */
  push32((uint32_t)(ECX));
  /* 11528539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152853c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152853f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528542 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11528546 push edx */
  push32((uint32_t)(EDX));
  /* 11528547 call 0x115289e0 */
  push32(0x1152854cu); f_115289e0();
  /* 1152854c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152854f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528551 jne 0x11528596 */
  if (!C.zf) goto L_11528596;
L_11528553:;
  /* 11528553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528556 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528559 push eax */
  push32((uint32_t)(EAX));
  /* 1152855a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152855d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11528560 push edx */
  push32((uint32_t)(EDX));
  /* 11528561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528564 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11528567 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152856d mov edx, dword ptr [ecx*4 + 0x11551a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a94)));
  /* 11528574 push edx */
  push32((uint32_t)(EDX));
  /* 11528575 push 0x1154ec60 */
  push32((uint32_t)(0x1154ec60u));
  /* 1152857a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152857c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152857e push 0 */
  push32((uint32_t)(0x0u));
  /* 11528580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11528582 call 0x11526990 */
  push32(0x11528587u); f_11526990();
  /* 11528587 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152858a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152858d jne 0x11528590 */
  if (!C.zf) goto L_11528590;
  /* 1152858f int3  */
  x86_unimpl("int3 @ 0x1152858f");
L_11528590:;
  /* 11528590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528594 jne 0x11528553 */
  if (!C.zf) goto L_11528553;
L_11528596:;
  /* 11528596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528599 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152859d jne 0x1152860b */
  if (!C.zf) goto L_1152860b;
L_1152859f:;
  /* 1152859f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115285a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115285a9 jne 0x115285b4 */
  if (!C.zf) goto L_115285b4;
  /* 115285ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115285ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115285b2 je 0x115285d5 */
  if (C.zf) goto L_115285d5;
L_115285b4:;
  /* 115285b4 push 0x1154ec20 */
  push32((uint32_t)(0x1154ec20u));
  /* 115285b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115285bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 115285c0 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115285c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115285c7 call 0x11526990 */
  push32(0x115285ccu); f_11526990();
  /* 115285cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115285cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115285d2 jne 0x115285d5 */
  if (!C.zf) goto L_115285d5;
  /* 115285d4 int3  */
  x86_unimpl("int3 @ 0x115285d4");
L_115285d5:;
  /* 115285d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115285d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115285d9 jne 0x1152859f */
  if (!C.zf) goto L_1152859f;
  /* 115285db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115285de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115285e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115285e4 push eax */
  push32((uint32_t)(EAX));
  /* 115285e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115285e7 mov cl, byte ptr [0x11551a91] */
  CL = (r8((uint32_t)(0x11551a91)));
  /* 115285ed push ecx */
  push32((uint32_t)(ECX));
  /* 115285ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115285f1 push edx */
  push32((uint32_t)(EDX));
  /* 115285f2 call 0x1152b640 */
  push32(0x115285f7u); f_1152b640();
  /* 115285f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115285fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115285fd push eax */
  push32((uint32_t)(EAX));
  /* 115285fe call 0x1152ba40 */
  push32(0x11528603u); f_1152ba40();
  /* 11528603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528606 jmp 0x11528775 */
  goto L_11528775;
L_1152860b:;
  /* 1152860b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152860e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528612 jne 0x11528621 */
  if (!C.zf) goto L_11528621;
  /* 11528614 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528618 jne 0x11528621 */
  if (!C.zf) goto L_11528621;
  /* 1152861a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11528621:;
  /* 11528621 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528624 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528627 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152862a je 0x1152864d */
  if (C.zf) goto L_1152864d;
  /* 1152862c push 0x1154ec00 */
  push32((uint32_t)(0x1154ec00u));
  /* 11528631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528633 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11528638 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 1152863d push 2 */
  push32((uint32_t)(0x2u));
  /* 1152863f call 0x11526990 */
  push32(0x11528644u); f_11526990();
  /* 11528644 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152864a jne 0x1152864d */
  if (!C.zf) goto L_1152864d;
  /* 1152864c int3  */
  x86_unimpl("int3 @ 0x1152864c");
L_1152864d:;
  /* 1152864d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152864f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528651 jne 0x11528621 */
  if (!C.zf) goto L_11528621;
  /* 11528653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528656 mov eax, dword ptr [0x115538b4] */
  EAX = (r32((uint32_t)(0x115538b4)));
  /* 1152865b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152865e mov dword ptr [0x115538b4], eax */
  w32((uint32_t)(0x115538b4), (EAX));
  /* 11528663 mov ecx, dword ptr [0x11551a84] */
  ECX = (r32((uint32_t)(0x11551a84)));
  /* 11528669 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1152866c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152866e jne 0x1152874c */
  if (!C.zf) goto L_1152874c;
  /* 11528674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528677 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152867a je 0x1152868c */
  if (C.zf) goto L_1152868c;
  /* 1152867c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152867f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11528681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11528687 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1152868a jmp 0x115286ca */
  goto L_115286ca;
L_1152868c:;
  /* 1152868c mov ecx, dword ptr [0x115538a8] */
  ECX = (r32((uint32_t)(0x115538a8)));
  /* 11528692 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528695 je 0x115286b8 */
  if (C.zf) goto L_115286b8;
  /* 11528697 push 0x1154ebe8 */
  push32((uint32_t)(0x1154ebe8u));
  /* 1152869c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152869e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 115286a3 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115286a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115286aa call 0x11526990 */
  push32(0x115286afu); f_11526990();
  /* 115286af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115286b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115286b5 jne 0x115286b8 */
  if (!C.zf) goto L_115286b8;
  /* 115286b7 int3  */
  x86_unimpl("int3 @ 0x115286b7");
L_115286b8:;
  /* 115286b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115286ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115286bc jne 0x1152868c */
  if (!C.zf) goto L_1152868c;
  /* 115286be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115286c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115286c4 mov dword ptr [0x115538a8], ecx */
  w32((uint32_t)(0x115538a8), (ECX));
L_115286ca:;
  /* 115286ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115286cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115286d1 je 0x115286e2 */
  if (C.zf) goto L_115286e2;
  /* 115286d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115286d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115286d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115286dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115286de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115286e0 jmp 0x1152871f */
  goto L_1152871f;
L_115286e2:;
  /* 115286e2 mov ecx, dword ptr [0x115538b0] */
  ECX = (r32((uint32_t)(0x115538b0)));
  /* 115286e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115286eb je 0x1152870e */
  if (C.zf) goto L_1152870e;
  /* 115286ed push 0x1154ebd0 */
  push32((uint32_t)(0x1154ebd0u));
  /* 115286f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115286f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 115286f9 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115286fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11528700 call 0x11526990 */
  push32(0x11528705u); f_11526990();
  /* 11528705 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528708 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152870b jne 0x1152870e */
  if (!C.zf) goto L_1152870e;
  /* 1152870d int3  */
  x86_unimpl("int3 @ 0x1152870d");
L_1152870e:;
  /* 1152870e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528712 jne 0x115286e2 */
  if (!C.zf) goto L_115286e2;
  /* 11528714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528717 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11528719 mov dword ptr [0x115538b0], ecx */
  w32((uint32_t)(0x115538b0), (ECX));
L_1152871f:;
  /* 1152871f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11528725 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528728 push eax */
  push32((uint32_t)(EAX));
  /* 11528729 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152872b mov cl, byte ptr [0x11551a91] */
  CL = (r8((uint32_t)(0x11551a91)));
  /* 11528731 push ecx */
  push32((uint32_t)(ECX));
  /* 11528732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528735 push edx */
  push32((uint32_t)(EDX));
  /* 11528736 call 0x1152b640 */
  push32(0x1152873bu); f_1152b640();
  /* 1152873b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152873e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528741 push eax */
  push32((uint32_t)(EAX));
  /* 11528742 call 0x1152ba40 */
  push32(0x11528747u); f_1152ba40();
  /* 11528747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152874a jmp 0x11528775 */
  goto L_11528775;
L_1152874c:;
  /* 1152874c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152874f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11528756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528759 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1152875c push eax */
  push32((uint32_t)(EAX));
  /* 1152875d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152875f mov cl, byte ptr [0x11551a91] */
  CL = (r8((uint32_t)(0x11551a91)));
  /* 11528765 push ecx */
  push32((uint32_t)(ECX));
  /* 11528766 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528769 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152876c push edx */
  push32((uint32_t)(EDX));
  /* 1152876d call 0x1152b640 */
  push32(0x11528772u); f_1152b640();
  /* 11528772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11528775:;
  /* 11528775 pop edi */
  EDI = (pop32());
  /* 11528776 pop esi */
  ESI = (pop32());
  /* 11528777 pop ebx */
  EBX = (pop32());
  /* 11528778 mov esp, ebp */
  ESP = (EBP);
  /* 1152877a pop ebp */
  EBP = (pop32());
  /* 1152877b ret  */
  ESPCHK(0x11528390u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x11528780 (19 bytes, 9 insns) */
void f_11528780(void) {
  FTRACE(0x11528780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528780 push ebp */
  push32((uint32_t)(EBP));
  /* 11528781 mov ebp, esp */
  EBP = (ESP);
  /* 11528783 push 1 */
  push32((uint32_t)(0x1u));
  /* 11528785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528788 push eax */
  push32((uint32_t)(EAX));
  /* 11528789 call 0x115287a0 */
  push32(0x1152878eu); f_115287a0();
  /* 1152878e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528791 pop ebp */
  EBP = (pop32());
  /* 11528792 ret  */
  ESPCHK(0x11528780u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x115287a0 (342 bytes, 119 insns) */
void f_115287a0(void) {
  FTRACE(0x115287a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115287a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115287a1 mov ebp, esp */
  EBP = (ESP);
  /* 115287a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115287a6 push ebx */
  push32((uint32_t)(EBX));
  /* 115287a7 push esi */
  push32((uint32_t)(ESI));
  /* 115287a8 push edi */
  push32((uint32_t)(EDI));
  /* 115287a9 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 115287ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115287b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115287b3 je 0x115287e5 */
  if (C.zf) goto L_115287e5;
L_115287b5:;
  /* 115287b5 call 0x11528a70 */
  push32(0x115287bau); f_11528a70();
  /* 115287ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115287bc jne 0x115287df */
  if (!C.zf) goto L_115287df;
  /* 115287be push 0x1154ea1c */
  push32((uint32_t)(0x1154ea1cu));
  /* 115287c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115287c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 115287ca push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115287cf push 2 */
  push32((uint32_t)(0x2u));
  /* 115287d1 call 0x11526990 */
  push32(0x115287d6u); f_11526990();
  /* 115287d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115287d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115287dc jne 0x115287df */
  if (!C.zf) goto L_115287df;
  /* 115287de int3  */
  x86_unimpl("int3 @ 0x115287de");
L_115287df:;
  /* 115287df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115287e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115287e3 jne 0x115287b5 */
  if (!C.zf) goto L_115287b5;
L_115287e5:;
  /* 115287e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 115287e7 call 0x1152b2d0 */
  push32(0x115287ecu); f_1152b2d0();
  /* 115287ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115287ef:;
  /* 115287ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115287f2 push edx */
  push32((uint32_t)(EDX));
  /* 115287f3 call 0x11528ed0 */
  push32(0x115287f8u); f_11528ed0();
  /* 115287f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115287fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115287fd jne 0x11528820 */
  if (!C.zf) goto L_11528820;
  /* 115287ff push 0x1154eb20 */
  push32((uint32_t)(0x1154eb20u));
  /* 11528804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528806 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1152880b push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11528810 push 2 */
  push32((uint32_t)(0x2u));
  /* 11528812 call 0x11526990 */
  push32(0x11528817u); f_11526990();
  /* 11528817 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152881a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152881d jne 0x11528820 */
  if (!C.zf) goto L_11528820;
  /* 1152881f int3  */
  x86_unimpl("int3 @ 0x1152881f");
L_11528820:;
  /* 11528820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528824 jne 0x115287ef */
  if (!C.zf) goto L_115287ef;
  /* 11528826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528829 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152882c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1152882f:;
  /* 1152882f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528832 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528835 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152883a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152883d je 0x11528882 */
  if (C.zf) goto L_11528882;
  /* 1152883f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528842 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528846 je 0x11528882 */
  if (C.zf) goto L_11528882;
  /* 11528848 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152884b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1152884e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528853 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528856 je 0x11528882 */
  if (C.zf) goto L_11528882;
  /* 11528858 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152885b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152885f je 0x11528882 */
  if (C.zf) goto L_11528882;
  /* 11528861 push 0x1154ecb8 */
  push32((uint32_t)(0x1154ecb8u));
  /* 11528866 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528868 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1152886d push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 11528872 push 2 */
  push32((uint32_t)(0x2u));
  /* 11528874 call 0x11526990 */
  push32(0x11528879u); f_11526990();
  /* 11528879 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152887c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152887f jne 0x11528882 */
  if (!C.zf) goto L_11528882;
  /* 11528881 int3  */
  x86_unimpl("int3 @ 0x11528881");
L_11528882:;
  /* 11528882 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528886 jne 0x1152882f */
  if (!C.zf) goto L_1152882f;
  /* 11528888 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152888b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152888f jne 0x1152889e */
  if (!C.zf) goto L_1152889e;
  /* 11528891 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528895 jne 0x1152889e */
  if (!C.zf) goto L_1152889e;
  /* 11528897 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1152889e:;
  /* 1152889e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115288a1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115288a5 je 0x115288d9 */
  if (C.zf) goto L_115288d9;
L_115288a7:;
  /* 115288a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115288aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115288ad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115288b0 je 0x115288d3 */
  if (C.zf) goto L_115288d3;
  /* 115288b2 push 0x1154ec00 */
  push32((uint32_t)(0x1154ec00u));
  /* 115288b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115288b9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 115288be push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 115288c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115288c5 call 0x11526990 */
  push32(0x115288cau); f_11526990();
  /* 115288ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115288cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115288d0 jne 0x115288d3 */
  if (!C.zf) goto L_115288d3;
  /* 115288d2 int3  */
  x86_unimpl("int3 @ 0x115288d2");
L_115288d3:;
  /* 115288d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115288d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115288d7 jne 0x115288a7 */
  if (!C.zf) goto L_115288a7;
L_115288d9:;
  /* 115288d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115288dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115288df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115288e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115288e4 call 0x1152b370 */
  push32(0x115288e9u); f_1152b370();
  /* 115288e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115288ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115288ef pop edi */
  EDI = (pop32());
  /* 115288f0 pop esi */
  ESI = (pop32());
  /* 115288f1 pop ebx */
  EBX = (pop32());
  /* 115288f2 mov esp, ebp */
  ESP = (EBP);
  /* 115288f4 pop ebp */
  EBP = (pop32());
  /* 115288f5 ret  */
  ESPCHK(0x115287a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008900 @ 0x11528900 (28 bytes, 11 insns) */
void f_11528900(void) {
  FTRACE(0x11528900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528900 push ebp */
  push32((uint32_t)(EBP));
  /* 11528901 mov ebp, esp */
  EBP = (ESP);
  /* 11528903 push ecx */
  push32((uint32_t)(ECX));
  /* 11528904 mov eax, dword ptr [0x11551a8c] */
  EAX = (r32((uint32_t)(0x11551a8c)));
  /* 11528909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152890c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152890f mov dword ptr [0x11551a8c], ecx */
  w32((uint32_t)(0x11551a8c), (ECX));
  /* 11528915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528918 mov esp, ebp */
  ESP = (EBP);
  /* 1152891a pop ebp */
  EBP = (pop32());
  /* 1152891b ret  */
  ESPCHK(0x11528900u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x11528920 (157 bytes, 59 insns) */
void f_11528920(void) {
  FTRACE(0x11528920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528920 push ebp */
  push32((uint32_t)(EBP));
  /* 11528921 mov ebp, esp */
  EBP = (ESP);
  /* 11528923 push ecx */
  push32((uint32_t)(ECX));
  /* 11528924 push ebx */
  push32((uint32_t)(EBX));
  /* 11528925 push esi */
  push32((uint32_t)(ESI));
  /* 11528926 push edi */
  push32((uint32_t)(EDI));
  /* 11528927 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528929 call 0x1152b2d0 */
  push32(0x1152892eu); f_1152b2d0();
  /* 1152892e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528934 push eax */
  push32((uint32_t)(EAX));
  /* 11528935 call 0x11528ed0 */
  push32(0x1152893au); f_11528ed0();
  /* 1152893a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152893d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152893f je 0x115289ac */
  if (C.zf) goto L_115289ac;
  /* 11528941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528944 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528947 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152894a:;
  /* 1152894a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152894d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528950 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528955 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528958 je 0x1152899d */
  if (C.zf) goto L_1152899d;
  /* 1152895a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152895d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528961 je 0x1152899d */
  if (C.zf) goto L_1152899d;
  /* 11528963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528966 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528969 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152896e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528971 je 0x1152899d */
  if (C.zf) goto L_1152899d;
  /* 11528973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528976 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152897a je 0x1152899d */
  if (C.zf) goto L_1152899d;
  /* 1152897c push 0x1154ecb8 */
  push32((uint32_t)(0x1154ecb8u));
  /* 11528981 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528983 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11528988 push 0x1154ea10 */
  push32((uint32_t)(0x1154ea10u));
  /* 1152898d push 2 */
  push32((uint32_t)(0x2u));
  /* 1152898f call 0x11526990 */
  push32(0x11528994u); f_11526990();
  /* 11528994 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152899a jne 0x1152899d */
  if (!C.zf) goto L_1152899d;
  /* 1152899c int3  */
  x86_unimpl("int3 @ 0x1152899c");
L_1152899d:;
  /* 1152899d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152899f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115289a1 jne 0x1152894a */
  if (!C.zf) goto L_1152894a;
  /* 115289a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115289a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115289a9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_115289ac:;
  /* 115289ac push 9 */
  push32((uint32_t)(0x9u));
  /* 115289ae call 0x1152b370 */
  push32(0x115289b3u); f_1152b370();
  /* 115289b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115289b6 pop edi */
  EDI = (pop32());
  /* 115289b7 pop esi */
  ESI = (pop32());
  /* 115289b8 pop ebx */
  EBX = (pop32());
  /* 115289b9 mov esp, ebp */
  ESP = (EBP);
  /* 115289bb pop ebp */
  EBP = (pop32());
  /* 115289bc ret  */
  ESPCHK(0x11528920u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x115289c0 (28 bytes, 11 insns) */
void f_115289c0(void) {
  FTRACE(0x115289c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115289c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115289c1 mov ebp, esp */
  EBP = (ESP);
  /* 115289c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115289c4 mov eax, dword ptr [0x11551c90] */
  EAX = (r32((uint32_t)(0x11551c90)));
  /* 115289c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115289cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115289cf mov dword ptr [0x11551c90], ecx */
  w32((uint32_t)(0x11551c90), (ECX));
  /* 115289d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115289d8 mov esp, ebp */
  ESP = (EBP);
  /* 115289da pop ebp */
  EBP = (pop32());
  /* 115289db ret  */
  ESPCHK(0x115289c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x115289e0 (136 bytes, 55 insns) */
void f_115289e0(void) {
  FTRACE(0x115289e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115289e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115289e1 mov ebp, esp */
  EBP = (ESP);
  /* 115289e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115289e4 push ebx */
  push32((uint32_t)(EBX));
  /* 115289e5 push esi */
  push32((uint32_t)(ESI));
  /* 115289e6 push edi */
  push32((uint32_t)(EDI));
  /* 115289e7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_115289ee:;
  /* 115289ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115289f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115289f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115289f7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115289fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115289fc je 0x11528a5e */
  if (C.zf) goto L_11528a5e;
  /* 115289fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528a01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528a03 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11528a05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528a08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528a11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528a14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11528a17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528a19 je 0x11528a5c */
  if (C.zf) goto L_11528a5c;
L_11528a1b:;
  /* 11528a1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528a1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528a23 push eax */
  push32((uint32_t)(EAX));
  /* 11528a24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528a27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528a29 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11528a2c push edx */
  push32((uint32_t)(EDX));
  /* 11528a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528a30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528a33 push eax */
  push32((uint32_t)(EAX));
  /* 11528a34 push 0x1154ecfc */
  push32((uint32_t)(0x1154ecfcu));
  /* 11528a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11528a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11528a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11528a41 call 0x11526990 */
  push32(0x11528a46u); f_11526990();
  /* 11528a46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528a4c jne 0x11528a4f */
  if (!C.zf) goto L_11528a4f;
  /* 11528a4e int3  */
  x86_unimpl("int3 @ 0x11528a4e");
L_11528a4f:;
  /* 11528a4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11528a51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528a53 jne 0x11528a1b */
  if (!C.zf) goto L_11528a1b;
  /* 11528a55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11528a5c:;
  /* 11528a5c jmp 0x115289ee */
  goto L_115289ee;
L_11528a5e:;
  /* 11528a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528a61 pop edi */
  EDI = (pop32());
  /* 11528a62 pop esi */
  ESI = (pop32());
  /* 11528a63 pop ebx */
  EBX = (pop32());
  /* 11528a64 mov esp, ebp */
  ESP = (EBP);
  /* 11528a66 pop ebp */
  EBP = (pop32());
  /* 11528a67 ret  */
  ESPCHK(0x115289e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x11528a70 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11528a70(void) {
  FTRACE(0x11528a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11528a71 mov ebp, esp */
  EBP = (ESP);
  /* 11528a73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11528a77 push esi */
  push32((uint32_t)(ESI));
  /* 11528a78 push edi */
  push32((uint32_t)(EDI));
  /* 11528a79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11528a80 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 11528a85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11528a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528a8a jne 0x11528a96 */
  if (!C.zf) goto L_11528a96;
  /* 11528a8c mov eax, 1 */
  EAX = (0x1u);
  /* 11528a91 jmp 0x11528dc8 */
  goto L_11528dc8;
L_11528a96:;
  /* 11528a96 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528a98 call 0x1152b2d0 */
  push32(0x11528a9du); f_1152b2d0();
  /* 11528a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528aa0 call 0x1152bab0 */
  push32(0x11528aa5u); f_1152bab0();
  /* 11528aa5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11528aa8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528aac je 0x11528bb9 */
  if (C.zf) goto L_11528bb9;
  /* 11528ab2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528ab6 je 0x11528bb9 */
  if (C.zf) goto L_11528bb9;
  /* 11528abc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11528abf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11528ac2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11528ac5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528ac8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11528acb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528acf ja 0x11528b82 */
  if ((!C.cf&&!C.zf)) goto L_11528b82;
  /* 11528ad5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11528ad8 jmp dword ptr [eax*4 + 0x11528dcf] */
  switch (EAX) {
    case 0: goto L_11528b5a;
    case 1: goto L_11528b32;
    case 2: goto L_11528b0a;
    case 3: goto L_11528adf;
    default: x86_unimpl("switch@0x11528ad8 out of table"); return;
  }
L_11528adf:;
  /* 11528adf push 0x1154ee50 */
  push32((uint32_t)(0x1154ee50u));
  /* 11528ae4 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11528aed push 0 */
  push32((uint32_t)(0x0u));
  /* 11528aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11528af1 call 0x11526990 */
  push32(0x11528af6u); f_11526990();
  /* 11528af6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528af9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528afc jne 0x11528aff */
  if (!C.zf) goto L_11528aff;
  /* 11528afe int3  */
  x86_unimpl("int3 @ 0x11528afe");
L_11528aff:;
  /* 11528aff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11528b01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528b03 jne 0x11528adf */
  if (!C.zf) goto L_11528adf;
  /* 11528b05 jmp 0x11528ba8 */
  goto L_11528ba8;
L_11528b0a:;
  /* 11528b0a push 0x1154ee2c */
  push32((uint32_t)(0x1154ee2cu));
  /* 11528b0f push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b1c call 0x11526990 */
  push32(0x11528b21u); f_11526990();
  /* 11528b21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528b24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528b27 jne 0x11528b2a */
  if (!C.zf) goto L_11528b2a;
  /* 11528b29 int3  */
  x86_unimpl("int3 @ 0x11528b29");
L_11528b2a:;
  /* 11528b2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528b2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528b2e jne 0x11528b0a */
  if (!C.zf) goto L_11528b0a;
  /* 11528b30 jmp 0x11528ba8 */
  goto L_11528ba8;
L_11528b32:;
  /* 11528b32 push 0x1154ee08 */
  push32((uint32_t)(0x1154ee08u));
  /* 11528b37 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b44 call 0x11526990 */
  push32(0x11528b49u); f_11526990();
  /* 11528b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528b4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528b4f jne 0x11528b52 */
  if (!C.zf) goto L_11528b52;
  /* 11528b51 int3  */
  x86_unimpl("int3 @ 0x11528b51");
L_11528b52:;
  /* 11528b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528b56 jne 0x11528b32 */
  if (!C.zf) goto L_11528b32;
  /* 11528b58 jmp 0x11528ba8 */
  goto L_11528ba8;
L_11528b5a:;
  /* 11528b5a push 0x1154ede4 */
  push32((uint32_t)(0x1154ede4u));
  /* 11528b5f push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b6c call 0x11526990 */
  push32(0x11528b71u); f_11526990();
  /* 11528b71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528b74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528b77 jne 0x11528b7a */
  if (!C.zf) goto L_11528b7a;
  /* 11528b79 int3  */
  x86_unimpl("int3 @ 0x11528b79");
L_11528b7a:;
  /* 11528b7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11528b7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528b7e jne 0x11528b5a */
  if (!C.zf) goto L_11528b5a;
  /* 11528b80 jmp 0x11528ba8 */
  goto L_11528ba8;
L_11528b82:;
  /* 11528b82 push 0x1154edb8 */
  push32((uint32_t)(0x1154edb8u));
  /* 11528b87 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11528b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528b94 call 0x11526990 */
  push32(0x11528b99u); f_11526990();
  /* 11528b99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528b9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528b9f jne 0x11528ba2 */
  if (!C.zf) goto L_11528ba2;
  /* 11528ba1 int3  */
  x86_unimpl("int3 @ 0x11528ba1");
L_11528ba2:;
  /* 11528ba2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528ba6 jne 0x11528b82 */
  if (!C.zf) goto L_11528b82;
L_11528ba8:;
  /* 11528ba8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528baa call 0x1152b370 */
  push32(0x11528bafu); f_1152b370();
  /* 11528baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528bb4 jmp 0x11528dc8 */
  goto L_11528dc8;
L_11528bb9:;
  /* 11528bb9 mov eax, dword ptr [0x115538b0] */
  EAX = (r32((uint32_t)(0x115538b0)));
  /* 11528bbe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11528bc1 jmp 0x11528bcb */
  goto L_11528bcb;
L_11528bc3:;
  /* 11528bc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528bc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11528bc8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11528bcb:;
  /* 11528bcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528bcf je 0x11528dbb */
  if (C.zf) goto L_11528dbb;
  /* 11528bd5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11528bdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528bdf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11528be2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528be8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528beb je 0x11528c10 */
  if (C.zf) goto L_11528c10;
  /* 11528bed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528bf0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528bf4 je 0x11528c10 */
  if (C.zf) goto L_11528c10;
  /* 11528bf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528bf9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11528bfc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528c02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528c05 je 0x11528c10 */
  if (C.zf) goto L_11528c10;
  /* 11528c07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528c0e jne 0x11528c28 */
  if (!C.zf) goto L_11528c28;
L_11528c10:;
  /* 11528c10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11528c16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11528c1c mov edx, dword ptr [ecx*4 + 0x11551a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a94)));
  /* 11528c23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11528c26 jmp 0x11528c2f */
  goto L_11528c2f;
L_11528c28:;
  /* 11528c28 mov dword ptr [ebp - 0x14], 0x1154edb0 */
  w32((uint32_t)(EBP + -0x14), (0x1154edb0u));
L_11528c2f:;
  /* 11528c2f push 4 */
  push32((uint32_t)(0x4u));
  /* 11528c31 mov al, byte ptr [0x11551a90] */
  AL = (r8((uint32_t)(0x11551a90)));
  /* 11528c36 push eax */
  push32((uint32_t)(EAX));
  /* 11528c37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528c3d push ecx */
  push32((uint32_t)(ECX));
  /* 11528c3e call 0x115289e0 */
  push32(0x11528c43u); f_115289e0();
  /* 11528c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528c48 jne 0x11528c84 */
  if (!C.zf) goto L_11528c84;
L_11528c4a:;
  /* 11528c4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528c50 push edx */
  push32((uint32_t)(EDX));
  /* 11528c51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11528c57 push ecx */
  push32((uint32_t)(ECX));
  /* 11528c58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11528c5b push edx */
  push32((uint32_t)(EDX));
  /* 11528c5c push 0x1154ec8c */
  push32((uint32_t)(0x1154ec8cu));
  /* 11528c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528c69 call 0x11526990 */
  push32(0x11528c6eu); f_11526990();
  /* 11528c6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528c71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528c74 jne 0x11528c77 */
  if (!C.zf) goto L_11528c77;
  /* 11528c76 int3  */
  x86_unimpl("int3 @ 0x11528c76");
L_11528c77:;
  /* 11528c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528c7b jne 0x11528c4a */
  if (!C.zf) goto L_11528c4a;
  /* 11528c7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11528c84:;
  /* 11528c84 push 4 */
  push32((uint32_t)(0x4u));
  /* 11528c86 mov cl, byte ptr [0x11551a90] */
  CL = (r8((uint32_t)(0x11551a90)));
  /* 11528c8c push ecx */
  push32((uint32_t)(ECX));
  /* 11528c8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11528c93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528c96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11528c9a push edx */
  push32((uint32_t)(EDX));
  /* 11528c9b call 0x115289e0 */
  push32(0x11528ca0u); f_115289e0();
  /* 11528ca0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528ca5 jne 0x11528ce1 */
  if (!C.zf) goto L_11528ce1;
L_11528ca7:;
  /* 11528ca7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528caa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528cad push eax */
  push32((uint32_t)(EAX));
  /* 11528cae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528cb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11528cb4 push edx */
  push32((uint32_t)(EDX));
  /* 11528cb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11528cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11528cb9 push 0x1154ec60 */
  push32((uint32_t)(0x1154ec60u));
  /* 11528cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11528cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528cc6 call 0x11526990 */
  push32(0x11528ccbu); f_11526990();
  /* 11528ccb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528cce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528cd1 jne 0x11528cd4 */
  if (!C.zf) goto L_11528cd4;
  /* 11528cd3 int3  */
  x86_unimpl("int3 @ 0x11528cd3");
L_11528cd4:;
  /* 11528cd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11528cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528cd8 jne 0x11528ca7 */
  if (!C.zf) goto L_11528ca7;
  /* 11528cda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11528ce1:;
  /* 11528ce1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528ce4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528ce8 jne 0x11528d3a */
  if (!C.zf) goto L_11528d3a;
  /* 11528cea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528ced mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11528cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11528cf1 mov dl, byte ptr [0x11551a91] */
  DL = (r8((uint32_t)(0x11551a91)));
  /* 11528cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11528cf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528cfb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528cfe push eax */
  push32((uint32_t)(EAX));
  /* 11528cff call 0x115289e0 */
  push32(0x11528d04u); f_115289e0();
  /* 11528d04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528d09 jne 0x11528d3a */
  if (!C.zf) goto L_11528d3a;
L_11528d0b:;
  /* 11528d0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528d11 push ecx */
  push32((uint32_t)(ECX));
  /* 11528d12 push 0x1154ed84 */
  push32((uint32_t)(0x1154ed84u));
  /* 11528d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d1f call 0x11526990 */
  push32(0x11528d24u); f_11526990();
  /* 11528d24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528d27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528d2a jne 0x11528d2d */
  if (!C.zf) goto L_11528d2d;
  /* 11528d2c int3  */
  x86_unimpl("int3 @ 0x11528d2c");
L_11528d2d:;
  /* 11528d2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528d2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528d31 jne 0x11528d0b */
  if (!C.zf) goto L_11528d0b;
  /* 11528d33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11528d3a:;
  /* 11528d3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528d3e jne 0x11528db6 */
  if (!C.zf) goto L_11528db6;
  /* 11528d40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528d47 je 0x11528d7c */
  if (C.zf) goto L_11528d7c;
L_11528d49:;
  /* 11528d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11528d4f push edx */
  push32((uint32_t)(EDX));
  /* 11528d50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11528d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11528d57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11528d5a push edx */
  push32((uint32_t)(EDX));
  /* 11528d5b push 0x1154ed64 */
  push32((uint32_t)(0x1154ed64u));
  /* 11528d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d68 call 0x11526990 */
  push32(0x11528d6du); f_11526990();
  /* 11528d6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528d70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528d73 jne 0x11528d76 */
  if (!C.zf) goto L_11528d76;
  /* 11528d75 int3  */
  x86_unimpl("int3 @ 0x11528d75");
L_11528d76:;
  /* 11528d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528d7a jne 0x11528d49 */
  if (!C.zf) goto L_11528d49;
L_11528d7c:;
  /* 11528d7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11528d82 push edx */
  push32((uint32_t)(EDX));
  /* 11528d83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11528d86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528d89 push eax */
  push32((uint32_t)(EAX));
  /* 11528d8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11528d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11528d8e push 0x1154ed38 */
  push32((uint32_t)(0x1154ed38u));
  /* 11528d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528d9b call 0x11526990 */
  push32(0x11528da0u); f_11526990();
  /* 11528da0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528da3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528da6 jne 0x11528da9 */
  if (!C.zf) goto L_11528da9;
  /* 11528da8 int3  */
  x86_unimpl("int3 @ 0x11528da8");
L_11528da9:;
  /* 11528da9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11528dab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11528dad jne 0x11528d7c */
  if (!C.zf) goto L_11528d7c;
  /* 11528daf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11528db6:;
  /* 11528db6 jmp 0x11528bc3 */
  goto L_11528bc3;
L_11528dbb:;
  /* 11528dbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11528dbd call 0x1152b370 */
  push32(0x11528dc2u); f_1152b370();
  /* 11528dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11528dc8:;
  /* 11528dc8 pop edi */
  EDI = (pop32());
  /* 11528dc9 pop esi */
  ESI = (pop32());
  /* 11528dca pop ebx */
  EBX = (pop32());
  /* 11528dcb mov esp, ebp */
  ESP = (EBP);
  /* 11528dcd pop ebp */
  EBP = (pop32());
  /* 11528dce ret  */
  ESPCHK(0x11528a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x11528de0 (34 bytes, 13 insns) */
void f_11528de0(void) {
  FTRACE(0x11528de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11528de1 mov ebp, esp */
  EBP = (ESP);
  /* 11528de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11528de4 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 11528de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11528dec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528df0 je 0x11528dfb */
  if (C.zf) goto L_11528dfb;
  /* 11528df2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528df5 mov dword ptr [0x11551a84], ecx */
  w32((uint32_t)(0x11551a84), (ECX));
L_11528dfb:;
  /* 11528dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528dfe mov esp, ebp */
  ESP = (EBP);
  /* 11528e00 pop ebp */
  EBP = (pop32());
  /* 11528e01 ret  */
  ESPCHK(0x11528de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x11528e10 (103 bytes, 38 insns) */
void f_11528e10(void) {
  FTRACE(0x11528e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11528e11 mov ebp, esp */
  EBP = (ESP);
  /* 11528e13 push ecx */
  push32((uint32_t)(ECX));
  /* 11528e14 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 11528e19 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11528e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528e1e jne 0x11528e22 */
  if (!C.zf) goto L_11528e22;
  /* 11528e20 jmp 0x11528e73 */
  goto L_11528e73;
L_11528e22:;
  /* 11528e22 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528e24 call 0x1152b2d0 */
  push32(0x11528e29u); f_1152b2d0();
  /* 11528e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528e2c mov ecx, dword ptr [0x115538b0] */
  ECX = (r32((uint32_t)(0x115538b0)));
  /* 11528e32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11528e35 jmp 0x11528e3f */
  goto L_11528e3f;
L_11528e37:;
  /* 11528e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528e3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11528e3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11528e3f:;
  /* 11528e3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528e43 je 0x11528e69 */
  if (C.zf) goto L_11528e69;
  /* 11528e45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528e48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11528e4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11528e51 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528e54 jne 0x11528e67 */
  if (!C.zf) goto L_11528e67;
  /* 11528e56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528e59 push eax */
  push32((uint32_t)(EAX));
  /* 11528e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528e5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11528e60 push ecx */
  push32((uint32_t)(ECX));
  /* 11528e61 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11528e64u);
  /* 11528e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11528e67:;
  /* 11528e67 jmp 0x11528e37 */
  goto L_11528e37;
L_11528e69:;
  /* 11528e69 push 9 */
  push32((uint32_t)(0x9u));
  /* 11528e6b call 0x1152b370 */
  push32(0x11528e70u); f_1152b370();
  /* 11528e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11528e73:;
  /* 11528e73 mov esp, ebp */
  ESP = (EBP);
  /* 11528e75 pop ebp */
  EBP = (pop32());
  /* 11528e76 ret  */
  ESPCHK(0x11528e10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11528e80 (75 bytes, 28 insns) */
void f_11528e80(void) {
  FTRACE(0x11528e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11528e81 mov ebp, esp */
  EBP = (ESP);
  /* 11528e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11528e84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528e88 je 0x11528ebd */
  if (C.zf) goto L_11528ebd;
  /* 11528e8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528e8d push eax */
  push32((uint32_t)(EAX));
  /* 11528e8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528e91 push ecx */
  push32((uint32_t)(ECX));
  /* 11528e92 call dword ptr [0x1155639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155639c))), 0x11528e98u);
  /* 11528e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528e9a jne 0x11528ebd */
  if (!C.zf) goto L_11528ebd;
  /* 11528e9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528ea0 je 0x11528eb4 */
  if (C.zf) goto L_11528eb4;
  /* 11528ea2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528ea5 push edx */
  push32((uint32_t)(EDX));
  /* 11528ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528ea9 push eax */
  push32((uint32_t)(EAX));
  /* 11528eaa call dword ptr [0x115563a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a0))), 0x11528eb0u);
  /* 11528eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528eb2 jne 0x11528ebd */
  if (!C.zf) goto L_11528ebd;
L_11528eb4:;
  /* 11528eb4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11528ebb jmp 0x11528ec4 */
  goto L_11528ec4;
L_11528ebd:;
  /* 11528ebd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11528ec4:;
  /* 11528ec4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528ec7 mov esp, ebp */
  ESP = (EBP);
  /* 11528ec9 pop ebp */
  EBP = (pop32());
  /* 11528eca ret  */
  ESPCHK(0x11528e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ed0 @ 0x11528ed0 (134 bytes, 50 insns) */
void f_11528ed0(void) {
  FTRACE(0x11528ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11528ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11528ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11528ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528ed8 jne 0x11528ede */
  if (!C.zf) goto L_11528ede;
  /* 11528eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528edc jmp 0x11528f52 */
  goto L_11528f52;
L_11528ede:;
  /* 11528ede push 1 */
  push32((uint32_t)(0x1u));
  /* 11528ee0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11528ee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528ee5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528ee8 push eax */
  push32((uint32_t)(EAX));
  /* 11528ee9 call 0x11528e80 */
  push32(0x11528eeeu); f_11528e80();
  /* 11528eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528ef3 jne 0x11528ef9 */
  if (!C.zf) goto L_11528ef9;
  /* 11528ef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528ef7 jmp 0x11528f52 */
  goto L_11528f52;
L_11528ef9:;
  /* 11528ef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528efc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528eff push ecx */
  push32((uint32_t)(ECX));
  /* 11528f00 call 0x1152bbd0 */
  push32(0x11528f05u); f_1152bbd0();
  /* 11528f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528f08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11528f0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528f0f je 0x11528f26 */
  if (C.zf) goto L_11528f26;
  /* 11528f11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528f14 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528f17 push edx */
  push32((uint32_t)(EDX));
  /* 11528f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528f1b push eax */
  push32((uint32_t)(EAX));
  /* 11528f1c call 0x1152bc30 */
  push32(0x11528f21u); f_1152bc30();
  /* 11528f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528f24 jmp 0x11528f52 */
  goto L_11528f52;
L_11528f26:;
  /* 11528f26 mov ecx, dword ptr [0x11553864] */
  ECX = (r32((uint32_t)(0x11553864)));
  /* 11528f2c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11528f32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11528f34 je 0x11528f3d */
  if (C.zf) goto L_11528f3d;
  /* 11528f36 mov eax, 1 */
  EAX = (0x1u);
  /* 11528f3b jmp 0x11528f52 */
  goto L_11528f52;
L_11528f3d:;
  /* 11528f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528f40 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528f43 push edx */
  push32((uint32_t)(EDX));
  /* 11528f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11528f46 mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 11528f4b push eax */
  push32((uint32_t)(EAX));
  /* 11528f4c call dword ptr [0x11556398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556398))), 0x11528f52u);
L_11528f52:;
  /* 11528f52 mov esp, ebp */
  ESP = (EBP);
  /* 11528f54 pop ebp */
  EBP = (pop32());
  /* 11528f55 ret  */
  ESPCHK(0x11528ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f60 @ 0x11528f60 (227 bytes, 80 insns) */
void f_11528f60(void) {
  FTRACE(0x11528f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11528f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11528f61 mov ebp, esp */
  EBP = (ESP);
  /* 11528f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11528f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528f67 push eax */
  push32((uint32_t)(EAX));
  /* 11528f68 call 0x11528ed0 */
  push32(0x11528f6du); f_11528ed0();
  /* 11528f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528f70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528f72 jne 0x11528f7b */
  if (!C.zf) goto L_11528f7b;
  /* 11528f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11528f76 jmp 0x1152903f */
  goto L_1152903f;
L_11528f7b:;
  /* 11528f7b push 9 */
  push32((uint32_t)(0x9u));
  /* 11528f7d call 0x1152b2d0 */
  push32(0x11528f82u); f_1152b2d0();
  /* 11528f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528f85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528f88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11528f8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11528f8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528f91 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528f94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528f99 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528f9c je 0x11528fc0 */
  if (C.zf) goto L_11528fc0;
  /* 11528f9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528fa1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528fa5 je 0x11528fc0 */
  if (C.zf) goto L_11528fc0;
  /* 11528fa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528faa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11528fad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11528fb2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528fb5 je 0x11528fc0 */
  if (C.zf) goto L_11528fc0;
  /* 11528fb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528fba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528fbe jne 0x11529033 */
  if (!C.zf) goto L_11529033;
L_11528fc0:;
  /* 11528fc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11528fc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11528fc5 push edx */
  push32((uint32_t)(EDX));
  /* 11528fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11528fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11528fca call 0x11528e80 */
  push32(0x11528fcfu); f_11528e80();
  /* 11528fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11528fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11528fd4 je 0x11529033 */
  if (C.zf) goto L_11529033;
  /* 11528fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528fd9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11528fdc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528fdf jne 0x11529033 */
  if (!C.zf) goto L_11529033;
  /* 11528fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528fe4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11528fe7 cmp ecx, dword ptr [0x11551a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11551a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528fed jg 0x11529033 */
  if ((!C.zf&&C.sf==C.of)) goto L_11529033;
  /* 11528fef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11528ff3 je 0x11529000 */
  if (C.zf) goto L_11529000;
  /* 11528ff5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11528ff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11528ffb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11528ffe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11529000:;
  /* 11529000 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529004 je 0x11529011 */
  if (C.zf) goto L_11529011;
  /* 11529006 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152900c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1152900f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11529011:;
  /* 11529011 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529015 je 0x11529022 */
  if (C.zf) goto L_11529022;
  /* 11529017 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1152901a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152901d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11529020 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11529022:;
  /* 11529022 push 9 */
  push32((uint32_t)(0x9u));
  /* 11529024 call 0x1152b370 */
  push32(0x11529029u); f_1152b370();
  /* 11529029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152902c mov eax, 1 */
  EAX = (0x1u);
  /* 11529031 jmp 0x1152903f */
  goto L_1152903f;
L_11529033:;
  /* 11529033 push 9 */
  push32((uint32_t)(0x9u));
  /* 11529035 call 0x1152b370 */
  push32(0x1152903au); f_1152b370();
  /* 1152903a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152903d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152903f:;
  /* 1152903f mov esp, ebp */
  ESP = (EBP);
  /* 11529041 pop ebp */
  EBP = (pop32());
  /* 11529042 ret  */
  ESPCHK(0x11528f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009050 @ 0x11529050 (28 bytes, 11 insns) */
void f_11529050(void) {
  FTRACE(0x11529050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529050 push ebp */
  push32((uint32_t)(EBP));
  /* 11529051 mov ebp, esp */
  EBP = (ESP);
  /* 11529053 push ecx */
  push32((uint32_t)(ECX));
  /* 11529054 mov eax, dword ptr [0x11555218] */
  EAX = (r32((uint32_t)(0x11555218)));
  /* 11529059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152905c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152905f mov dword ptr [0x11555218], ecx */
  w32((uint32_t)(0x11555218), (ECX));
  /* 11529065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529068 mov esp, ebp */
  ESP = (EBP);
  /* 1152906a pop ebp */
  EBP = (pop32());
  /* 1152906b ret  */
  ESPCHK(0x11529050u, _esp0);
  ESP += 4; return;
}

/* FUN_10009070 @ 0x11529070 (362 bytes, 116 insns) */
void f_11529070(void) {
  FTRACE(0x11529070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529070 push ebp */
  push32((uint32_t)(EBP));
  /* 11529071 mov ebp, esp */
  EBP = (ESP);
  /* 11529073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529076 push ebx */
  push32((uint32_t)(EBX));
  /* 11529077 push esi */
  push32((uint32_t)(ESI));
  /* 11529078 push edi */
  push32((uint32_t)(EDI));
  /* 11529079 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152907d jne 0x115290aa */
  if (!C.zf) goto L_115290aa;
L_1152907f:;
  /* 1152907f push 0x1154ee98 */
  push32((uint32_t)(0x1154ee98u));
  /* 11529084 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11529089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152908b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152908d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152908f push 0 */
  push32((uint32_t)(0x0u));
  /* 11529091 call 0x11526990 */
  push32(0x11529096u); f_11526990();
  /* 11529096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529099 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152909c jne 0x1152909f */
  if (!C.zf) goto L_1152909f;
  /* 1152909e int3  */
  x86_unimpl("int3 @ 0x1152909e");
L_1152909f:;
  /* 1152909f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115290a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115290a3 jne 0x1152907f */
  if (!C.zf) goto L_1152907f;
  /* 115290a5 jmp 0x115291d3 */
  goto L_115291d3;
L_115290aa:;
  /* 115290aa push 9 */
  push32((uint32_t)(0x9u));
  /* 115290ac call 0x1152b2d0 */
  push32(0x115290b1u); f_1152b2d0();
  /* 115290b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115290b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115290b7 mov edx, dword ptr [0x115538b0] */
  EDX = (r32((uint32_t)(0x115538b0)));
  /* 115290bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115290bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115290c6 jmp 0x115290d1 */
  goto L_115290d1;
L_115290c8:;
  /* 115290c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115290cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115290ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115290d1:;
  /* 115290d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115290d5 jge 0x115290f5 */
  if ((C.sf==C.of)) goto L_115290f5;
  /* 115290d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115290da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115290dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 115290e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115290e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115290eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 115290f3 jmp 0x115290c8 */
  goto L_115290c8;
L_115290f5:;
  /* 115290f5 mov edx, dword ptr [0x115538b0] */
  EDX = (r32((uint32_t)(0x115538b0)));
  /* 115290fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115290fe jmp 0x11529108 */
  goto L_11529108;
L_11529100:;
  /* 11529100 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529103 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529105 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11529108:;
  /* 11529108 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152910c je 0x115291b1 */
  if (C.zf) goto L_115291b1;
  /* 11529112 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529115 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11529118 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152911d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152911f jl 0x11529187 */
  if ((C.sf!=C.of)) goto L_11529187;
  /* 11529121 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529124 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11529127 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152912d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529130 jge 0x11529187 */
  if ((C.sf==C.of)) goto L_11529187;
  /* 11529132 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529135 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11529138 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152913e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529141 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11529145 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529148 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152914b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1152914e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11529154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529157 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1152915b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152915e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11529161 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11529166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529169 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1152916d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529170 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529173 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529176 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11529179 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152917e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529181 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11529185 jmp 0x115291ac */
  goto L_115291ac;
L_11529187:;
  /* 11529187 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152918a push edx */
  push32((uint32_t)(EDX));
  /* 1152918b push 0x1154ee74 */
  push32((uint32_t)(0x1154ee74u));
  /* 11529190 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529192 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529194 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529198 call 0x11526990 */
  push32(0x1152919du); f_11526990();
  /* 1152919d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115291a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115291a3 jne 0x115291a6 */
  if (!C.zf) goto L_115291a6;
  /* 115291a5 int3  */
  x86_unimpl("int3 @ 0x115291a5");
L_115291a6:;
  /* 115291a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115291a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115291aa jne 0x11529187 */
  if (!C.zf) goto L_11529187;
L_115291ac:;
  /* 115291ac jmp 0x11529100 */
  goto L_11529100;
L_115291b1:;
  /* 115291b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115291b4 mov edx, dword ptr [0x115538b8] */
  EDX = (r32((uint32_t)(0x115538b8)));
  /* 115291ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 115291bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115291c0 mov ecx, dword ptr [0x115538ac] */
  ECX = (r32((uint32_t)(0x115538ac)));
  /* 115291c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 115291c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 115291cb call 0x1152b370 */
  push32(0x115291d0u); f_1152b370();
  /* 115291d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115291d3:;
  /* 115291d3 pop edi */
  EDI = (pop32());
  /* 115291d4 pop esi */
  ESI = (pop32());
  /* 115291d5 pop ebx */
  EBX = (pop32());
  /* 115291d6 mov esp, ebp */
  ESP = (EBP);
  /* 115291d8 pop ebp */
  EBP = (pop32());
  /* 115291d9 ret  */
  ESPCHK(0x11529070u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x115291e0 (291 bytes, 95 insns) */
void f_115291e0(void) {
  FTRACE(0x115291e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115291e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115291e1 mov ebp, esp */
  EBP = (ESP);
  /* 115291e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115291e6 push ebx */
  push32((uint32_t)(EBX));
  /* 115291e7 push esi */
  push32((uint32_t)(ESI));
  /* 115291e8 push edi */
  push32((uint32_t)(EDI));
  /* 115291e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115291f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115291f4 je 0x11529202 */
  if (C.zf) goto L_11529202;
  /* 115291f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115291fa je 0x11529202 */
  if (C.zf) goto L_11529202;
  /* 115291fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529200 jne 0x11529230 */
  if (!C.zf) goto L_11529230;
L_11529202:;
  /* 11529202 push 0x1154eec0 */
  push32((uint32_t)(0x1154eec0u));
  /* 11529207 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 1152920c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152920e push 0 */
  push32((uint32_t)(0x0u));
  /* 11529210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529212 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529214 call 0x11526990 */
  push32(0x11529219u); f_11526990();
  /* 11529219 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152921c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152921f jne 0x11529222 */
  if (!C.zf) goto L_11529222;
  /* 11529221 int3  */
  x86_unimpl("int3 @ 0x11529221");
L_11529222:;
  /* 11529222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529226 jne 0x11529202 */
  if (!C.zf) goto L_11529202;
  /* 11529228 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152922b jmp 0x115292fc */
  goto L_115292fc;
L_11529230:;
  /* 11529230 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11529237 jmp 0x11529242 */
  goto L_11529242;
L_11529239:;
  /* 11529239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152923c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152923f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11529242:;
  /* 11529242 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529246 jge 0x115292cc */
  if ((C.sf==C.of)) goto L_115292cc;
  /* 1152924c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152924f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529255 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11529258 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1152925c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529266 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1152926a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152926d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529273 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11529276 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1152927a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152927e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529284 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11529288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152928b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152928e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529293 jne 0x115292a2 */
  if (!C.zf) goto L_115292a2;
  /* 11529295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152929b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115292a0 je 0x115292c7 */
  if (C.zf) goto L_115292c7;
L_115292a2:;
  /* 115292a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115292a6 je 0x115292c7 */
  if (C.zf) goto L_115292c7;
  /* 115292a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115292ac jne 0x115292c0 */
  if (!C.zf) goto L_115292c0;
  /* 115292ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115292b2 jne 0x115292c7 */
  if (!C.zf) goto L_115292c7;
  /* 115292b4 mov eax, dword ptr [0x11551a84] */
  EAX = (r32((uint32_t)(0x11551a84)));
  /* 115292b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 115292bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115292be je 0x115292c7 */
  if (C.zf) goto L_115292c7;
L_115292c0:;
  /* 115292c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_115292c7:;
  /* 115292c7 jmp 0x11529239 */
  goto L_11529239;
L_115292cc:;
  /* 115292cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115292cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115292d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 115292d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115292d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115292db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 115292de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115292e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115292e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 115292e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115292ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115292ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 115292f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115292f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115292f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115292fc:;
  /* 115292fc pop edi */
  EDI = (pop32());
  /* 115292fd pop esi */
  ESI = (pop32());
  /* 115292fe pop ebx */
  EBX = (pop32());
  /* 115292ff mov esp, ebp */
  ESP = (EBP);
  /* 11529301 pop ebp */
  EBP = (pop32());
  /* 11529302 ret  */
  ESPCHK(0x115291e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x11529310 (697 bytes, 253 insns) */
void f_11529310(void) {
  FTRACE(0x11529310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529310 push ebp */
  push32((uint32_t)(EBP));
  /* 11529311 mov ebp, esp */
  EBP = (ESP);
  /* 11529313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529316 push ebx */
  push32((uint32_t)(EBX));
  /* 11529317 push esi */
  push32((uint32_t)(ESI));
  /* 11529318 push edi */
  push32((uint32_t)(EDI));
  /* 11529319 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11529320 push 9 */
  push32((uint32_t)(0x9u));
  /* 11529322 call 0x1152b2d0 */
  push32(0x11529327u); f_1152b2d0();
  /* 11529327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152932a:;
  /* 1152932a push 0x1154efb8 */
  push32((uint32_t)(0x1154efb8u));
  /* 1152932f push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 11529334 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529336 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152933a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152933c call 0x11526990 */
  push32(0x11529341u); f_11526990();
  /* 11529341 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529344 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529347 jne 0x1152934a */
  if (!C.zf) goto L_1152934a;
  /* 11529349 int3  */
  x86_unimpl("int3 @ 0x11529349");
L_1152934a:;
  /* 1152934a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152934c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152934e jne 0x1152932a */
  if (!C.zf) goto L_1152932a;
  /* 11529350 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529354 je 0x1152935e */
  if (C.zf) goto L_1152935e;
  /* 11529356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529359 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152935b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1152935e:;
  /* 1152935e mov eax, dword ptr [0x115538b0] */
  EAX = (r32((uint32_t)(0x115538b0)));
  /* 11529363 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11529366 jmp 0x11529370 */
  goto L_11529370;
L_11529368:;
  /* 11529368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152936b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152936d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11529370:;
  /* 11529370 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529374 je 0x11529592 */
  if (C.zf) goto L_11529592;
  /* 1152937a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152937d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529380 je 0x11529592 */
  if (C.zf) goto L_11529592;
  /* 11529386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529389 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1152938c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11529392 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529395 je 0x115293c4 */
  if (C.zf) goto L_115293c4;
  /* 11529397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152939a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1152939d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115293a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115293a5 je 0x115293c4 */
  if (C.zf) goto L_115293c4;
  /* 115293a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115293aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115293ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115293b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115293b5 jne 0x115293c9 */
  if (!C.zf) goto L_115293c9;
  /* 115293b7 mov ecx, dword ptr [0x11551a84] */
  ECX = (r32((uint32_t)(0x11551a84)));
  /* 115293bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 115293c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115293c2 jne 0x115293c9 */
  if (!C.zf) goto L_115293c9;
L_115293c4:;
  /* 115293c4 jmp 0x1152958d */
  goto L_1152958d;
L_115293c9:;
  /* 115293c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115293cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115293d0 je 0x11529442 */
  if (C.zf) goto L_11529442;
  /* 115293d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115293d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115293d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115293d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115293dc push ecx */
  push32((uint32_t)(ECX));
  /* 115293dd call 0x11528e80 */
  push32(0x115293e2u); f_11528e80();
  /* 115293e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115293e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115293e7 jne 0x11529413 */
  if (!C.zf) goto L_11529413;
L_115293e9:;
  /* 115293e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115293ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115293ef push eax */
  push32((uint32_t)(EAX));
  /* 115293f0 push 0x1154efa4 */
  push32((uint32_t)(0x1154efa4u));
  /* 115293f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115293f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115293f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115293fb push 0 */
  push32((uint32_t)(0x0u));
  /* 115293fd call 0x11526990 */
  push32(0x11529402u); f_11526990();
  /* 11529402 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529405 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529408 jne 0x1152940b */
  if (!C.zf) goto L_1152940b;
  /* 1152940a int3  */
  x86_unimpl("int3 @ 0x1152940a");
L_1152940b:;
  /* 1152940b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152940d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152940f jne 0x115293e9 */
  if (!C.zf) goto L_115293e9;
  /* 11529411 jmp 0x11529442 */
  goto L_11529442;
L_11529413:;
  /* 11529413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529416 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11529419 push eax */
  push32((uint32_t)(EAX));
  /* 1152941a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152941d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11529420 push edx */
  push32((uint32_t)(EDX));
  /* 11529421 push 0x1154ef98 */
  push32((uint32_t)(0x1154ef98u));
  /* 11529426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529428 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152942a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152942c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152942e call 0x11526990 */
  push32(0x11529433u); f_11526990();
  /* 11529433 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529436 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529439 jne 0x1152943c */
  if (!C.zf) goto L_1152943c;
  /* 1152943b int3  */
  x86_unimpl("int3 @ 0x1152943b");
L_1152943c:;
  /* 1152943c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152943e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529440 jne 0x11529413 */
  if (!C.zf) goto L_11529413;
L_11529442:;
  /* 11529442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529445 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11529448 push edx */
  push32((uint32_t)(EDX));
  /* 11529449 push 0x1154ef90 */
  push32((uint32_t)(0x1154ef90u));
  /* 1152944e push 0 */
  push32((uint32_t)(0x0u));
  /* 11529450 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529452 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529454 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529456 call 0x11526990 */
  push32(0x1152945bu); f_11526990();
  /* 1152945b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152945e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529461 jne 0x11529464 */
  if (!C.zf) goto L_11529464;
  /* 11529463 int3  */
  x86_unimpl("int3 @ 0x11529463");
L_11529464:;
  /* 11529464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529468 jne 0x11529442 */
  if (!C.zf) goto L_11529442;
  /* 1152946a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152946d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11529470 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11529476 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529479 jne 0x115294ec */
  if (!C.zf) goto L_115294ec;
L_1152947b:;
  /* 1152947b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152947e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11529481 push ecx */
  push32((uint32_t)(ECX));
  /* 11529482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529485 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11529488 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1152948b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11529490 push eax */
  push32((uint32_t)(EAX));
  /* 11529491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529494 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529497 push ecx */
  push32((uint32_t)(ECX));
  /* 11529498 push 0x1154ef5c */
  push32((uint32_t)(0x1154ef5cu));
  /* 1152949d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152949f push 0 */
  push32((uint32_t)(0x0u));
  /* 115294a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115294a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115294a5 call 0x11526990 */
  push32(0x115294aau); f_11526990();
  /* 115294aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115294ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115294b0 jne 0x115294b3 */
  if (!C.zf) goto L_115294b3;
  /* 115294b2 int3  */
  x86_unimpl("int3 @ 0x115294b2");
L_115294b3:;
  /* 115294b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115294b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115294b7 jne 0x1152947b */
  if (!C.zf) goto L_1152947b;
  /* 115294b9 cmp dword ptr [0x11555218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115294c0 je 0x115294db */
  if (C.zf) goto L_115294db;
  /* 115294c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115294c8 push ecx */
  push32((uint32_t)(ECX));
  /* 115294c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115294cf push edx */
  push32((uint32_t)(EDX));
  /* 115294d0 call dword ptr [0x11555218] */
  call_ind((uint32_t)(r32((uint32_t)(0x11555218))), 0x115294d6u);
  /* 115294d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115294d9 jmp 0x115294e7 */
  goto L_115294e7;
L_115294db:;
  /* 115294db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294de push eax */
  push32((uint32_t)(EAX));
  /* 115294df call 0x115295d0 */
  push32(0x115294e4u); f_115295d0();
  /* 115294e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115294e7:;
  /* 115294e7 jmp 0x1152958d */
  goto L_1152958d;
L_115294ec:;
  /* 115294ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115294f3 jne 0x11529532 */
  if (!C.zf) goto L_11529532;
L_115294f5:;
  /* 115294f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115294fb push eax */
  push32((uint32_t)(EAX));
  /* 115294fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115294ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529502 push ecx */
  push32((uint32_t)(ECX));
  /* 11529503 push 0x1154ef34 */
  push32((uint32_t)(0x1154ef34u));
  /* 11529508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152950a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152950c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152950e push 0 */
  push32((uint32_t)(0x0u));
  /* 11529510 call 0x11526990 */
  push32(0x11529515u); f_11526990();
  /* 11529515 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529518 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152951b jne 0x1152951e */
  if (!C.zf) goto L_1152951e;
  /* 1152951d int3  */
  x86_unimpl("int3 @ 0x1152951d");
L_1152951e:;
  /* 1152951e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529522 jne 0x115294f5 */
  if (!C.zf) goto L_115294f5;
  /* 11529524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529527 push eax */
  push32((uint32_t)(EAX));
  /* 11529528 call 0x115295d0 */
  push32(0x1152952du); f_115295d0();
  /* 1152952d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529530 jmp 0x1152958d */
  goto L_1152958d;
L_11529532:;
  /* 11529532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529535 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11529538 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152953e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529541 jne 0x1152958d */
  if (!C.zf) goto L_1152958d;
L_11529543:;
  /* 11529543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529546 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11529549 push ecx */
  push32((uint32_t)(ECX));
  /* 1152954a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152954d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11529550 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11529553 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11529558 push eax */
  push32((uint32_t)(EAX));
  /* 11529559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152955c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152955f push ecx */
  push32((uint32_t)(ECX));
  /* 11529560 push 0x1154ef00 */
  push32((uint32_t)(0x1154ef00u));
  /* 11529565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152956b push 0 */
  push32((uint32_t)(0x0u));
  /* 1152956d call 0x11526990 */
  push32(0x11529572u); f_11526990();
  /* 11529572 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529575 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529578 jne 0x1152957b */
  if (!C.zf) goto L_1152957b;
  /* 1152957a int3  */
  x86_unimpl("int3 @ 0x1152957a");
L_1152957b:;
  /* 1152957b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152957d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152957f jne 0x11529543 */
  if (!C.zf) goto L_11529543;
  /* 11529581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529584 push eax */
  push32((uint32_t)(EAX));
  /* 11529585 call 0x115295d0 */
  push32(0x1152958au); f_115295d0();
  /* 1152958a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152958d:;
  /* 1152958d jmp 0x11529368 */
  goto L_11529368;
L_11529592:;
  /* 11529592 push 9 */
  push32((uint32_t)(0x9u));
  /* 11529594 call 0x1152b370 */
  push32(0x11529599u); f_1152b370();
  /* 11529599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152959c:;
  /* 1152959c push 0x1154eee8 */
  push32((uint32_t)(0x1154eee8u));
  /* 115295a1 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 115295a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115295a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115295aa push 0 */
  push32((uint32_t)(0x0u));
  /* 115295ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115295ae call 0x11526990 */
  push32(0x115295b3u); f_11526990();
  /* 115295b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115295b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115295b9 jne 0x115295bc */
  if (!C.zf) goto L_115295bc;
  /* 115295bb int3  */
  x86_unimpl("int3 @ 0x115295bb");
L_115295bc:;
  /* 115295bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115295be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115295c0 jne 0x1152959c */
  if (!C.zf) goto L_1152959c;
  /* 115295c2 pop edi */
  EDI = (pop32());
  /* 115295c3 pop esi */
  ESI = (pop32());
  /* 115295c4 pop ebx */
  EBX = (pop32());
  /* 115295c5 mov esp, ebp */
  ESP = (EBP);
  /* 115295c7 pop ebp */
  EBP = (pop32());
  /* 115295c8 ret  */
  ESPCHK(0x11529310u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x115295d0 (276 bytes, 89 insns) */
void f_115295d0(void) {
  FTRACE(0x115295d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115295d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115295d1 mov ebp, esp */
  EBP = (ESP);
  /* 115295d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115295d6 push ebx */
  push32((uint32_t)(EBX));
  /* 115295d7 push esi */
  push32((uint32_t)(ESI));
  /* 115295d8 push edi */
  push32((uint32_t)(EDI));
  /* 115295d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 115295e0 jmp 0x115295eb */
  goto L_115295eb;
L_115295e2:;
  /* 115295e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115295e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115295e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_115295eb:;
  /* 115295eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115295ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115295f2 jge 0x115295ff */
  if ((C.sf==C.of)) goto L_115295ff;
  /* 115295f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115295f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115295fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 115295fd jmp 0x11529606 */
  goto L_11529606;
L_115295ff:;
  /* 115295ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11529606:;
  /* 11529606 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11529609 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152960c jge 0x115296ac */
  if ((C.sf==C.of)) goto L_115296ac;
  /* 11529612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529615 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529618 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1152961b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1152961e cmp dword ptr [0x11551ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11551ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529625 jle 0x11529643 */
  if ((C.zf||C.sf!=C.of)) goto L_11529643;
  /* 11529627 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1152962c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1152962f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11529635 push ecx */
  push32((uint32_t)(ECX));
  /* 11529636 call 0x1152d8e0 */
  push32(0x1152963bu); f_1152d8e0();
  /* 1152963b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152963e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11529641 jmp 0x11529660 */
  goto L_11529660;
L_11529643:;
  /* 11529643 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11529646 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152964c mov eax, dword ptr [0x11551c98] */
  EAX = (r32((uint32_t)(0x11551c98)));
  /* 11529651 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11529653 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11529657 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1152965d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11529660:;
  /* 11529660 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529664 je 0x11529674 */
  if (C.zf) goto L_11529674;
  /* 11529666 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11529669 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152966f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11529672 jmp 0x1152967b */
  goto L_1152967b;
L_11529674:;
  /* 11529674 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1152967b:;
  /* 1152967b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1152967e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11529681 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11529685 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11529688 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152968e push edx */
  push32((uint32_t)(EDX));
  /* 1152968f push 0x1154efdc */
  push32((uint32_t)(0x1154efdcu));
  /* 11529694 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11529697 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152969a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1152969e push ecx */
  push32((uint32_t)(ECX));
  /* 1152969f call 0x1152d7e0 */
  push32(0x115296a4u); f_1152d7e0();
  /* 115296a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115296a7 jmp 0x115295e2 */
  goto L_115295e2;
L_115296ac:;
  /* 115296ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115296af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_115296b4:;
  /* 115296b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 115296b7 push eax */
  push32((uint32_t)(EAX));
  /* 115296b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 115296bb push ecx */
  push32((uint32_t)(ECX));
  /* 115296bc push 0x1154efcc */
  push32((uint32_t)(0x1154efccu));
  /* 115296c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115296c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115296c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115296c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115296c9 call 0x11526990 */
  push32(0x115296ceu); f_11526990();
  /* 115296ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115296d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115296d4 jne 0x115296d7 */
  if (!C.zf) goto L_115296d7;
  /* 115296d6 int3  */
  x86_unimpl("int3 @ 0x115296d6");
L_115296d7:;
  /* 115296d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115296d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115296db jne 0x115296b4 */
  if (!C.zf) goto L_115296b4;
  /* 115296dd pop edi */
  EDI = (pop32());
  /* 115296de pop esi */
  ESI = (pop32());
  /* 115296df pop ebx */
  EBX = (pop32());
  /* 115296e0 mov esp, ebp */
  ESP = (EBP);
  /* 115296e2 pop ebp */
  EBP = (pop32());
  /* 115296e3 ret  */
  ESPCHK(0x115295d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096f0 @ 0x115296f0 (116 bytes, 46 insns) */
void f_115296f0(void) {
  FTRACE(0x115296f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115296f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115296f1 mov ebp, esp */
  EBP = (ESP);
  /* 115296f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115296f6 push ebx */
  push32((uint32_t)(EBX));
  /* 115296f7 push esi */
  push32((uint32_t)(ESI));
  /* 115296f8 push edi */
  push32((uint32_t)(EDI));
  /* 115296f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 115296fc push eax */
  push32((uint32_t)(EAX));
  /* 115296fd call 0x11529070 */
  push32(0x11529702u); f_11529070();
  /* 11529702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529705 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529709 jne 0x11529724 */
  if (!C.zf) goto L_11529724;
  /* 1152970b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152970f jne 0x11529724 */
  if (!C.zf) goto L_11529724;
  /* 11529711 mov ecx, dword ptr [0x11551a84] */
  ECX = (r32((uint32_t)(0x11551a84)));
  /* 11529717 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1152971a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152971c je 0x1152975b */
  if (C.zf) goto L_1152975b;
  /* 1152971e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529722 je 0x1152975b */
  if (C.zf) goto L_1152975b;
L_11529724:;
  /* 11529724 push 0x1154efe4 */
  push32((uint32_t)(0x1154efe4u));
  /* 11529729 push 0x1154e9b0 */
  push32((uint32_t)(0x1154e9b0u));
  /* 1152972e push 0 */
  push32((uint32_t)(0x0u));
  /* 11529730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529734 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529736 call 0x11526990 */
  push32(0x1152973bu); f_11526990();
  /* 1152973b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152973e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529741 jne 0x11529744 */
  if (!C.zf) goto L_11529744;
  /* 11529743 int3  */
  x86_unimpl("int3 @ 0x11529743");
L_11529744:;
  /* 11529744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529746 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529748 jne 0x11529724 */
  if (!C.zf) goto L_11529724;
  /* 1152974a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152974c call 0x11529310 */
  push32(0x11529751u); f_11529310();
  /* 11529751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529754 mov eax, 1 */
  EAX = (0x1u);
  /* 11529759 jmp 0x1152975d */
  goto L_1152975d;
L_1152975b:;
  /* 1152975b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152975d:;
  /* 1152975d pop edi */
  EDI = (pop32());
  /* 1152975e pop esi */
  ESI = (pop32());
  /* 1152975f pop ebx */
  EBX = (pop32());
  /* 11529760 mov esp, ebp */
  ESP = (EBP);
  /* 11529762 pop ebp */
  EBP = (pop32());
  /* 11529763 ret  */
  ESPCHK(0x115296f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x11529770 (197 bytes, 79 insns) */
void f_11529770(void) {
  FTRACE(0x11529770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529770 push ebp */
  push32((uint32_t)(EBP));
  /* 11529771 mov ebp, esp */
  EBP = (ESP);
  /* 11529773 push ecx */
  push32((uint32_t)(ECX));
  /* 11529774 push ebx */
  push32((uint32_t)(EBX));
  /* 11529775 push esi */
  push32((uint32_t)(ESI));
  /* 11529776 push edi */
  push32((uint32_t)(EDI));
  /* 11529777 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152977b jne 0x11529782 */
  if (!C.zf) goto L_11529782;
  /* 1152977d jmp 0x1152982e */
  goto L_1152982e;
L_11529782:;
  /* 11529782 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11529789 jmp 0x11529794 */
  goto L_11529794;
L_1152978b:;
  /* 1152978b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152978e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11529794:;
  /* 11529794 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529798 jge 0x115297de */
  if ((C.sf==C.of)) goto L_115297de;
L_1152979a:;
  /* 1152979a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152979d mov edx, dword ptr [ecx*4 + 0x11551a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551a94)));
  /* 115297a4 push edx */
  push32((uint32_t)(EDX));
  /* 115297a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115297a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115297ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 115297af push edx */
  push32((uint32_t)(EDX));
  /* 115297b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115297b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115297b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 115297ba push edx */
  push32((uint32_t)(EDX));
  /* 115297bb push 0x1154f040 */
  push32((uint32_t)(0x1154f040u));
  /* 115297c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115297c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115297c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115297c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115297c8 call 0x11526990 */
  push32(0x115297cdu); f_11526990();
  /* 115297cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115297d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115297d3 jne 0x115297d6 */
  if (!C.zf) goto L_115297d6;
  /* 115297d5 int3  */
  x86_unimpl("int3 @ 0x115297d5");
L_115297d6:;
  /* 115297d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115297d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115297da jne 0x1152979a */
  if (!C.zf) goto L_1152979a;
  /* 115297dc jmp 0x1152978b */
  goto L_1152978b;
L_115297de:;
  /* 115297de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115297e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 115297e4 push edx */
  push32((uint32_t)(EDX));
  /* 115297e5 push 0x1154f01c */
  push32((uint32_t)(0x1154f01cu));
  /* 115297ea push 0 */
  push32((uint32_t)(0x0u));
  /* 115297ec push 0 */
  push32((uint32_t)(0x0u));
  /* 115297ee push 0 */
  push32((uint32_t)(0x0u));
  /* 115297f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115297f2 call 0x11526990 */
  push32(0x115297f7u); f_11526990();
  /* 115297f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115297fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115297fd jne 0x11529800 */
  if (!C.zf) goto L_11529800;
  /* 115297ff int3  */
  x86_unimpl("int3 @ 0x115297ff");
L_11529800:;
  /* 11529800 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529804 jne 0x115297de */
  if (!C.zf) goto L_115297de;
L_11529806:;
  /* 11529806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529809 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1152980c push edx */
  push32((uint32_t)(EDX));
  /* 1152980d push 0x1154effc */
  push32((uint32_t)(0x1154effcu));
  /* 11529812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152981a call 0x11526990 */
  push32(0x1152981fu); f_11526990();
  /* 1152981f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529822 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529825 jne 0x11529828 */
  if (!C.zf) goto L_11529828;
  /* 11529827 int3  */
  x86_unimpl("int3 @ 0x11529827");
L_11529828:;
  /* 11529828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152982a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152982c jne 0x11529806 */
  if (!C.zf) goto L_11529806;
L_1152982e:;
  /* 1152982e pop edi */
  EDI = (pop32());
  /* 1152982f pop esi */
  ESI = (pop32());
  /* 11529830 pop ebx */
  EBX = (pop32());
  /* 11529831 mov esp, ebp */
  ESP = (EBP);
  /* 11529833 pop ebp */
  EBP = (pop32());
  /* 11529834 ret  */
  ESPCHK(0x11529770u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x11529840 (329 bytes, 102 insns) */
void f_11529840(void) {
  FTRACE(0x11529840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529840 push ebp */
  push32((uint32_t)(EBP));
  /* 11529841 mov ebp, esp */
  EBP = (ESP);
  /* 11529843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529846 cmp dword ptr [0x11555390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152984d jne 0x11529854 */
  if (!C.zf) goto L_11529854;
  /* 1152984f call 0x1152e180 */
  push32(0x11529854u); f_1152e180();
L_11529854:;
  /* 11529854 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1152985b mov eax, dword ptr [0x1155384c] */
  EAX = (r32((uint32_t)(0x1155384c)));
  /* 11529860 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11529863:;
  /* 11529863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529866 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11529869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152986b je 0x11529899 */
  if (C.zf) goto L_11529899;
  /* 1152986d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529870 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529873 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529876 je 0x11529881 */
  if (C.zf) goto L_11529881;
  /* 11529878 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152987b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152987e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11529881:;
  /* 11529881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529884 push eax */
  push32((uint32_t)(EAX));
  /* 11529885 call 0x1152a700 */
  push32(0x1152988au); f_1152a700();
  /* 1152988a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152988d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529890 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11529894 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11529897 jmp 0x11529863 */
  goto L_11529863;
L_11529899:;
  /* 11529899 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1152989b push 0x1154f060 */
  push32((uint32_t)(0x1154f060u));
  /* 115298a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115298a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115298a5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 115298ac push ecx */
  push32((uint32_t)(ECX));
  /* 115298ad call 0x115278d0 */
  push32(0x115298b2u); f_115278d0();
  /* 115298b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115298b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115298b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115298bb mov dword ptr [0x11553880], edx */
  w32((uint32_t)(0x11553880), (EDX));
  /* 115298c1 cmp dword ptr [0x11553880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115298c8 jne 0x115298d4 */
  if (!C.zf) goto L_115298d4;
  /* 115298ca push 9 */
  push32((uint32_t)(0x9u));
  /* 115298cc call 0x11526840 */
  push32(0x115298d1u); f_11526840();
  /* 115298d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115298d4:;
  /* 115298d4 mov eax, dword ptr [0x1155384c] */
  EAX = (r32((uint32_t)(0x1155384c)));
  /* 115298d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115298dc jmp 0x115298e7 */
  goto L_115298e7;
L_115298de:;
  /* 115298de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115298e1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115298e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115298e7:;
  /* 115298e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115298ea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115298ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115298ef je 0x11529957 */
  if (C.zf) goto L_11529957;
  /* 115298f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115298f4 push ecx */
  push32((uint32_t)(ECX));
  /* 115298f5 call 0x1152a700 */
  push32(0x115298fau); f_1152a700();
  /* 115298fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115298fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529900 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11529903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529906 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11529909 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152990c je 0x11529955 */
  if (C.zf) goto L_11529955;
  /* 1152990e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11529910 push 0x1154f060 */
  push32((uint32_t)(0x1154f060u));
  /* 11529915 push 2 */
  push32((uint32_t)(0x2u));
  /* 11529917 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152991a push ecx */
  push32((uint32_t)(ECX));
  /* 1152991b call 0x115278d0 */
  push32(0x11529920u); f_115278d0();
  /* 11529920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529923 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529926 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11529928 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152992b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152992e jne 0x1152993a */
  if (!C.zf) goto L_1152993a;
  /* 11529930 push 9 */
  push32((uint32_t)(0x9u));
  /* 11529932 call 0x11526840 */
  push32(0x11529937u); f_11526840();
  /* 11529937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152993a:;
  /* 1152993a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152993d push ecx */
  push32((uint32_t)(ECX));
  /* 1152993e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529941 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11529943 push eax */
  push32((uint32_t)(EAX));
  /* 11529944 call 0x1152a880 */
  push32(0x11529949u); f_1152a880();
  /* 11529949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152994c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152994f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529952 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11529955:;
  /* 11529955 jmp 0x115298de */
  goto L_115298de;
L_11529957:;
  /* 11529957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11529959 mov edx, dword ptr [0x1155384c] */
  EDX = (r32((uint32_t)(0x1155384c)));
  /* 1152995f push edx */
  push32((uint32_t)(EDX));
  /* 11529960 call 0x11528360 */
  push32(0x11529965u); f_11528360();
  /* 11529965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529968 mov dword ptr [0x1155384c], 0 */
  w32((uint32_t)(0x1155384c), (0x0u));
  /* 11529972 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529975 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1152997b mov dword ptr [0x11555380], 1 */
  w32((uint32_t)(0x11555380), (0x1u));
  /* 11529985 mov esp, ebp */
  ESP = (EBP);
  /* 11529987 pop ebp */
  EBP = (pop32());
  /* 11529988 ret  */
  ESPCHK(0x11529840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x11529990 (216 bytes, 69 insns) */
void f_11529990(void) {
  FTRACE(0x11529990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529990 push ebp */
  push32((uint32_t)(EBP));
  /* 11529991 mov ebp, esp */
  EBP = (ESP);
  /* 11529993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529996 cmp dword ptr [0x11555390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11555390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152999d jne 0x115299a4 */
  if (!C.zf) goto L_115299a4;
  /* 1152999f call 0x1152e180 */
  push32(0x115299a4u); f_1152e180();
L_115299a4:;
  /* 115299a4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115299a9 push 0x115538bc */
  push32((uint32_t)(0x115538bcu));
  /* 115299ae push 0 */
  push32((uint32_t)(0x0u));
  /* 115299b0 call dword ptr [0x115562e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e4))), 0x115299b6u);
  /* 115299b6 mov dword ptr [0x11553890], 0x115538bc */
  w32((uint32_t)(0x11553890), (0x115538bcu));
  /* 115299c0 mov eax, dword ptr [0x115553ac] */
  EAX = (r32((uint32_t)(0x115553ac)));
  /* 115299c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115299c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115299ca jne 0x115299d7 */
  if (!C.zf) goto L_115299d7;
  /* 115299cc mov edx, dword ptr [0x11553890] */
  EDX = (r32((uint32_t)(0x11553890)));
  /* 115299d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115299d5 jmp 0x115299df */
  goto L_115299df;
L_115299d7:;
  /* 115299d7 mov eax, dword ptr [0x115553ac] */
  EAX = (r32((uint32_t)(0x115553ac)));
  /* 115299dc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_115299df:;
  /* 115299df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115299e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115299e5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 115299e8 push edx */
  push32((uint32_t)(EDX));
  /* 115299e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 115299ec push eax */
  push32((uint32_t)(EAX));
  /* 115299ed push 0 */
  push32((uint32_t)(0x0u));
  /* 115299ef push 0 */
  push32((uint32_t)(0x0u));
  /* 115299f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115299f4 push ecx */
  push32((uint32_t)(ECX));
  /* 115299f5 call 0x11529a70 */
  push32(0x115299fau); f_11529a70();
  /* 115299fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115299fd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11529a02 push 0x1154f06c */
  push32((uint32_t)(0x1154f06cu));
  /* 11529a07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11529a09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529a0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529a0f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11529a12 push ecx */
  push32((uint32_t)(ECX));
  /* 11529a13 call 0x115278d0 */
  push32(0x11529a18u); f_115278d0();
  /* 11529a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11529a1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529a22 jne 0x11529a2e */
  if (!C.zf) goto L_11529a2e;
  /* 11529a24 push 8 */
  push32((uint32_t)(0x8u));
  /* 11529a26 call 0x11526840 */
  push32(0x11529a2bu); f_11526840();
  /* 11529a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11529a2e:;
  /* 11529a2e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11529a31 push edx */
  push32((uint32_t)(EDX));
  /* 11529a32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11529a35 push eax */
  push32((uint32_t)(EAX));
  /* 11529a36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529a39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529a3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11529a3f push eax */
  push32((uint32_t)(EAX));
  /* 11529a40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11529a44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529a47 push edx */
  push32((uint32_t)(EDX));
  /* 11529a48 call 0x11529a70 */
  push32(0x11529a4du); f_11529a70();
  /* 11529a4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529a50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529a53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529a56 mov dword ptr [0x11553874], eax */
  w32((uint32_t)(0x11553874), (EAX));
  /* 11529a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529a5e mov dword ptr [0x11553878], ecx */
  w32((uint32_t)(0x11553878), (ECX));
  /* 11529a64 mov esp, ebp */
  ESP = (EBP);
  /* 11529a66 pop ebp */
  EBP = (pop32());
  /* 11529a67 ret  */
  ESPCHK(0x11529990u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x11529a70 (1060 bytes, 360 insns) */
void f_11529a70(void) {
  FTRACE(0x11529a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11529a71 mov ebp, esp */
  EBP = (ESP);
  /* 11529a73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529a76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529a79 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11529a7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529a82 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11529a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11529a8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11529a8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529a92 je 0x11529aa5 */
  if (C.zf) goto L_11529aa5;
  /* 11529a94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529a9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11529a9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529a9f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529aa2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11529aa5:;
  /* 11529aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529aa8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529aab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529aae jne 0x11529b7d */
  if (!C.zf) goto L_11529b7d;
L_11529ab4:;
  /* 11529ab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ab7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529aba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11529abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ac0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529ac3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529ac6 je 0x11529b42 */
  if (C.zf) goto L_11529b42;
  /* 11529ac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529acb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11529ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529ad0 je 0x11529b42 */
  if (C.zf) goto L_11529b42;
  /* 11529ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ad5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529ad7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11529ad9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529adb mov al, byte ptr [edx + 0x115550e1] */
  AL = (r8((uint32_t)(EDX + 0x115550e1)));
  /* 11529ae1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11529ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529ae6 je 0x11529b17 */
  if (C.zf) goto L_11529b17;
  /* 11529ae8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529aeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11529aed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529af0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529af3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11529af5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529af9 je 0x11529b17 */
  if (C.zf) goto L_11529b17;
  /* 11529afb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529afe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11529b03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11529b05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11529b0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11529b17:;
  /* 11529b17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529b1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11529b24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529b28 je 0x11529b3d */
  if (C.zf) goto L_11529b3d;
  /* 11529b2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11529b32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11529b34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11529b3d:;
  /* 11529b3d jmp 0x11529ab4 */
  goto L_11529ab4;
L_11529b42:;
  /* 11529b42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11529b47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11529b4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529b53 je 0x11529b64 */
  if (C.zf) goto L_11529b64;
  /* 11529b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11529b5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11529b64:;
  /* 11529b64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529b6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529b6d jne 0x11529b78 */
  if (!C.zf) goto L_11529b78;
  /* 11529b6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11529b78:;
  /* 11529b78 jmp 0x11529c4c */
  goto L_11529c4c;
L_11529b7d:;
  /* 11529b7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529b82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529b85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529b88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11529b8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529b8e je 0x11529ba3 */
  if (C.zf) goto L_11529ba3;
  /* 11529b90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529b96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11529b98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11529b9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529b9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529ba0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11529ba3:;
  /* 11529ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11529ba8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11529bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529bae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529bb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11529bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529bb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11529bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529bbf mov dl, byte ptr [ecx + 0x115550e1] */
  DL = (r8((uint32_t)(ECX + 0x115550e1)));
  /* 11529bc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11529bc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529bca je 0x11529bfb */
  if (C.zf) goto L_11529bfb;
  /* 11529bcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529bd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529bd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529bd7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11529bd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529bdd je 0x11529bf2 */
  if (C.zf) goto L_11529bf2;
  /* 11529bdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529be5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11529be7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11529be9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529bec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529bef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11529bf2:;
  /* 11529bf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529bf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529bf8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11529bfb:;
  /* 11529bfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529bfe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11529c04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c07 je 0x11529c27 */
  if (C.zf) goto L_11529c27;
  /* 11529c09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529c0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11529c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529c13 je 0x11529c27 */
  if (C.zf) goto L_11529c27;
  /* 11529c15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529c18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11529c1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c21 jne 0x11529b7d */
  if (!C.zf) goto L_11529b7d;
L_11529c27:;
  /* 11529c27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11529c2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11529c30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529c32 jne 0x11529c3f */
  if (!C.zf) goto L_11529c3f;
  /* 11529c34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529c3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11529c3d jmp 0x11529c4c */
  goto L_11529c4c;
L_11529c3f:;
  /* 11529c3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c43 je 0x11529c4c */
  if (C.zf) goto L_11529c4c;
  /* 11529c45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529c48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11529c4c:;
  /* 11529c4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11529c53:;
  /* 11529c53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11529c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529c5b je 0x11529c7e */
  if (C.zf) goto L_11529c7e;
L_11529c5d:;
  /* 11529c5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11529c63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c66 je 0x11529c73 */
  if (C.zf) goto L_11529c73;
  /* 11529c68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529c6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c71 jne 0x11529c7e */
  if (!C.zf) goto L_11529c7e;
L_11529c73:;
  /* 11529c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529c79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11529c7c jmp 0x11529c5d */
  goto L_11529c5d;
L_11529c7e:;
  /* 11529c7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529c81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529c84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11529c86 jne 0x11529c8d */
  if (!C.zf) goto L_11529c8d;
  /* 11529c88 jmp 0x11529e6b */
  goto L_11529e6b;
L_11529c8d:;
  /* 11529c8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529c91 je 0x11529ca4 */
  if (C.zf) goto L_11529ca4;
  /* 11529c93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529c96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529c99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11529c9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529c9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529ca1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11529ca4:;
  /* 11529ca4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529ca7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11529ca9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529cac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529caf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11529cb1:;
  /* 11529cb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11529cb8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11529cbf:;
  /* 11529cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529cc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11529cc5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529cc8 jne 0x11529cde */
  if (!C.zf) goto L_11529cde;
  /* 11529cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ccd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11529cd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529cd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529cd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11529cdc jmp 0x11529cbf */
  goto L_11529cbf;
L_11529cde:;
  /* 11529cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529ce1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529ce4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529ce7 jne 0x11529d3a */
  if (!C.zf) goto L_11529d3a;
  /* 11529ce9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529cec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529cee mov ecx, 2 */
  ECX = (0x2u);
  /* 11529cf3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11529cf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529cf7 jne 0x11529d32 */
  if (!C.zf) goto L_11529d32;
  /* 11529cf9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529cfd je 0x11529d1f */
  if (C.zf) goto L_11529d1f;
  /* 11529cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529d02 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11529d06 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d09 jne 0x11529d16 */
  if (!C.zf) goto L_11529d16;
  /* 11529d0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529d0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529d11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11529d14 jmp 0x11529d1d */
  goto L_11529d1d;
L_11529d16:;
  /* 11529d16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11529d1d:;
  /* 11529d1d jmp 0x11529d26 */
  goto L_11529d26;
L_11529d1f:;
  /* 11529d1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11529d26:;
  /* 11529d26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529d28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d2c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11529d2f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11529d32:;
  /* 11529d32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529d35 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11529d37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11529d3a:;
  /* 11529d3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529d3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529d40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529d43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11529d46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11529d48 je 0x11529d6e */
  if (C.zf) goto L_11529d6e;
  /* 11529d4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d4e je 0x11529d5f */
  if (C.zf) goto L_11529d5f;
  /* 11529d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529d53 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11529d56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529d59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529d5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11529d5f:;
  /* 11529d5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529d62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11529d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529d67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529d6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11529d6c jmp 0x11529d3a */
  goto L_11529d3a;
L_11529d6e:;
  /* 11529d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529d71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11529d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529d76 je 0x11529d94 */
  if (C.zf) goto L_11529d94;
  /* 11529d78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d7c jne 0x11529d99 */
  if (!C.zf) goto L_11529d99;
  /* 11529d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529d81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11529d84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d87 je 0x11529d94 */
  if (C.zf) goto L_11529d94;
  /* 11529d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529d8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11529d8f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d92 jne 0x11529d99 */
  if (!C.zf) goto L_11529d99;
L_11529d94:;
  /* 11529d94 jmp 0x11529e44 */
  goto L_11529e44;
L_11529d99:;
  /* 11529d99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529d9d je 0x11529e36 */
  if (C.zf) goto L_11529e36;
  /* 11529da3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529da7 je 0x11529dfd */
  if (C.zf) goto L_11529dfd;
  /* 11529da9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529dae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11529db0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11529db2 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 11529db8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11529dbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11529dbd je 0x11529de8 */
  if (C.zf) goto L_11529de8;
  /* 11529dbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529dc5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11529dc7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11529dc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529dcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529dcf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11529dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529dd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529dd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11529ddb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11529de0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529de3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11529de8:;
  /* 11529de8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529deb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529dee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11529df0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11529df2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529df5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529df8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11529dfb jmp 0x11529e29 */
  goto L_11529e29;
L_11529dfd:;
  /* 11529dfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529e02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11529e04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11529e06 mov cl, byte ptr [eax + 0x115550e1] */
  CL = (r8((uint32_t)(EAX + 0x115550e1)));
  /* 11529e0c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11529e0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11529e11 je 0x11529e29 */
  if (C.zf) goto L_11529e29;
  /* 11529e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529e16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11529e1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11529e29:;
  /* 11529e29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529e2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11529e36:;
  /* 11529e36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11529e3f jmp 0x11529cb1 */
  goto L_11529cb1;
L_11529e44:;
  /* 11529e44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529e48 je 0x11529e59 */
  if (C.zf) goto L_11529e59;
  /* 11529e4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529e4d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11529e50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11529e53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e56 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11529e59:;
  /* 11529e59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11529e5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11529e64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11529e66 jmp 0x11529c53 */
  goto L_11529c53;
L_11529e6b:;
  /* 11529e6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529e6f je 0x11529e83 */
  if (C.zf) goto L_11529e83;
  /* 11529e71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529e74 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11529e7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11529e7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e80 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11529e83:;
  /* 11529e83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529e86 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11529e88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529e8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11529e8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11529e90 mov esp, ebp */
  ESP = (EBP);
  /* 11529e92 pop ebp */
  EBP = (pop32());
  /* 11529e93 ret  */
  ESPCHK(0x11529a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ea0 @ 0x11529ea0 (537 bytes, 173 insns) */
void f_11529ea0(void) {
  FTRACE(0x11529ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11529ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11529ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11529ea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529ea6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11529ead mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11529eb4 cmp dword ptr [0x115539c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529ebb jne 0x11529efa */
  if (!C.zf) goto L_11529efa;
  /* 11529ebd call dword ptr [0x11556384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556384))), 0x11529ec3u);
  /* 11529ec3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11529ec6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529eca je 0x11529ed8 */
  if (C.zf) goto L_11529ed8;
  /* 11529ecc mov dword ptr [0x115539c0], 1 */
  w32((uint32_t)(0x115539c0), (0x1u));
  /* 11529ed6 jmp 0x11529efa */
  goto L_11529efa;
L_11529ed8:;
  /* 11529ed8 call dword ptr [0x11556388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556388))), 0x11529edeu);
  /* 11529ede mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11529ee1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529ee5 je 0x11529ef3 */
  if (C.zf) goto L_11529ef3;
  /* 11529ee7 mov dword ptr [0x115539c0], 2 */
  w32((uint32_t)(0x115539c0), (0x2u));
  /* 11529ef1 jmp 0x11529efa */
  goto L_11529efa;
L_11529ef3:;
  /* 11529ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529ef5 jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_11529efa:;
  /* 11529efa cmp dword ptr [0x115539c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115539c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529f01 jne 0x11529ffe */
  if (!C.zf) goto L_11529ffe;
  /* 11529f07 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529f0b jne 0x11529f23 */
  if (!C.zf) goto L_11529f23;
  /* 11529f0d call dword ptr [0x11556384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556384))), 0x11529f13u);
  /* 11529f13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11529f16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529f1a jne 0x11529f23 */
  if (!C.zf) goto L_11529f23;
  /* 11529f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529f1e jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_11529f23:;
  /* 11529f23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11529f26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11529f29:;
  /* 11529f29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529f2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529f2e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11529f31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529f33 je 0x11529f55 */
  if (C.zf) goto L_11529f55;
  /* 11529f35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529f38 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529f3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11529f3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529f41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11529f43 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11529f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11529f48 jne 0x11529f53 */
  if (!C.zf) goto L_11529f53;
  /* 11529f4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529f4d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529f50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11529f53:;
  /* 11529f53 jmp 0x11529f29 */
  goto L_11529f29;
L_11529f55:;
  /* 11529f55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11529f58 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11529f5b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11529f5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11529f60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11529f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529f6e push edx */
  push32((uint32_t)(EDX));
  /* 11529f6f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11529f72 push eax */
  push32((uint32_t)(EAX));
  /* 11529f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529f77 call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11529f7du);
  /* 11529f7d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11529f80 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529f84 je 0x11529fa4 */
  if (C.zf) goto L_11529fa4;
  /* 11529f86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11529f88 push 0x1154f078 */
  push32((uint32_t)(0x1154f078u));
  /* 11529f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11529f8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529f92 push ecx */
  push32((uint32_t)(ECX));
  /* 11529f93 call 0x115278d0 */
  push32(0x11529f98u); f_115278d0();
  /* 11529f98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529f9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11529f9e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11529fa2 jne 0x11529fb5 */
  if (!C.zf) goto L_11529fb5;
L_11529fa4:;
  /* 11529fa4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11529fa7 push edx */
  push32((uint32_t)(EDX));
  /* 11529fa8 call dword ptr [0x11556390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556390))), 0x11529faeu);
  /* 11529fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11529fb0 jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_11529fb5:;
  /* 11529fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529fb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11529fbc push eax */
  push32((uint32_t)(EAX));
  /* 11529fbd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11529fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11529fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11529fc4 push edx */
  push32((uint32_t)(EDX));
  /* 11529fc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11529fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11529fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11529fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11529fcd call dword ptr [0x1155638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155638c))), 0x11529fd3u);
  /* 11529fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11529fd5 jne 0x11529fec */
  if (!C.zf) goto L_11529fec;
  /* 11529fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11529fd9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11529fdc push ecx */
  push32((uint32_t)(ECX));
  /* 11529fdd call 0x11528360 */
  push32(0x11529fe2u); f_11528360();
  /* 11529fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11529fe5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11529fec:;
  /* 11529fec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11529fef push edx */
  push32((uint32_t)(EDX));
  /* 11529ff0 call dword ptr [0x11556390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556390))), 0x11529ff6u);
  /* 11529ff6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11529ff9 jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_11529ffe:;
  /* 11529ffe cmp dword ptr [0x115539c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115539c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a005 jne 0x1152a0b3 */
  if (!C.zf) goto L_1152a0b3;
  /* 1152a00b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a00f jne 0x1152a027 */
  if (!C.zf) goto L_1152a027;
  /* 1152a011 call dword ptr [0x11556388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556388))), 0x1152a017u);
  /* 1152a017 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152a01a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a01e jne 0x1152a027 */
  if (!C.zf) goto L_1152a027;
  /* 1152a020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a022 jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_1152a027:;
  /* 1152a027 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152a02a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1152a02d:;
  /* 1152a02d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a030 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152a033 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152a035 je 0x1152a055 */
  if (C.zf) goto L_1152a055;
  /* 1152a037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a03a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a03d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152a040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a043 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1152a046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152a048 jne 0x1152a053 */
  if (!C.zf) goto L_1152a053;
  /* 1152a04a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a04d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a050 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1152a053:;
  /* 1152a053 jmp 0x1152a02d */
  goto L_1152a02d;
L_1152a055:;
  /* 1152a055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a058 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a05b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a05e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1152a061 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 1152a066 push 0x1154f078 */
  push32((uint32_t)(0x1154f078u));
  /* 1152a06b push 2 */
  push32((uint32_t)(0x2u));
  /* 1152a06d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152a070 push edx */
  push32((uint32_t)(EDX));
  /* 1152a071 call 0x115278d0 */
  push32(0x1152a076u); f_115278d0();
  /* 1152a076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a079 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152a07c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a080 jne 0x1152a090 */
  if (!C.zf) goto L_1152a090;
  /* 1152a082 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152a085 push eax */
  push32((uint32_t)(EAX));
  /* 1152a086 call dword ptr [0x11556394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556394))), 0x1152a08cu);
  /* 1152a08c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a08e jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_1152a090:;
  /* 1152a090 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152a093 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a094 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152a097 push edx */
  push32((uint32_t)(EDX));
  /* 1152a098 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a09b push eax */
  push32((uint32_t)(EAX));
  /* 1152a09c call 0x1152e1b0 */
  push32(0x1152a0a1u); f_1152e1b0();
  /* 1152a0a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a0a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152a0a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a0a8 call dword ptr [0x11556394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556394))), 0x1152a0aeu);
  /* 1152a0ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a0b1 jmp 0x1152a0b5 */
  goto L_1152a0b5;
L_1152a0b3:;
  /* 1152a0b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152a0b5:;
  /* 1152a0b5 mov esp, ebp */
  ESP = (EBP);
  /* 1152a0b7 pop ebp */
  EBP = (pop32());
  /* 1152a0b8 ret  */
  ESPCHK(0x11529ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c0 @ 0x1152a0c0 (77 bytes, 25 insns) */
void f_1152a0c0(void) {
  FTRACE(0x1152a0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152a0c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a0c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1152a0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a0cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a0d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1152a0d3 push eax */
  push32((uint32_t)(EAX));
  /* 1152a0d4 call dword ptr [0x1155637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155637c))), 0x1152a0dau);
  /* 1152a0da mov dword ptr [0x1155520c], eax */
  w32((uint32_t)(0x1155520c), (EAX));
  /* 1152a0df cmp dword ptr [0x1155520c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1155520c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a0e6 jne 0x1152a0ec */
  if (!C.zf) goto L_1152a0ec;
  /* 1152a0e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a0ea jmp 0x1152a10b */
  goto L_1152a10b;
L_1152a0ec:;
  /* 1152a0ec call 0x1152bb70 */
  push32(0x1152a0f1u); f_1152bb70();
  /* 1152a0f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152a0f3 jne 0x1152a106 */
  if (!C.zf) goto L_1152a106;
  /* 1152a0f5 mov ecx, dword ptr [0x1155520c] */
  ECX = (r32((uint32_t)(0x1155520c)));
  /* 1152a0fb push ecx */
  push32((uint32_t)(ECX));
  /* 1152a0fc call dword ptr [0x11556380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556380))), 0x1152a102u);
  /* 1152a102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a104 jmp 0x1152a10b */
  goto L_1152a10b;
L_1152a106:;
  /* 1152a106 mov eax, 1 */
  EAX = (0x1u);
L_1152a10b:;
  /* 1152a10b pop ebp */
  EBP = (pop32());
  /* 1152a10c ret  */
  ESPCHK(0x1152a0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x1152a110 (156 bytes, 48 insns) */
void f_1152a110(void) {
  FTRACE(0x1152a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a110 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a111 mov ebp, esp */
  EBP = (ESP);
  /* 1152a113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a116 mov eax, dword ptr [0x11555208] */
  EAX = (r32((uint32_t)(0x11555208)));
  /* 1152a11b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152a11e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152a125 jmp 0x1152a130 */
  goto L_1152a130;
L_1152a127:;
  /* 1152a127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a12a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a12d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152a130:;
  /* 1152a130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a133 cmp edx, dword ptr [0x11555204] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11555204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a139 jge 0x1152a186 */
  if ((C.sf==C.of)) goto L_1152a186;
  /* 1152a13b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1152a140 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1152a145 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a148 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1152a14b push ecx */
  push32((uint32_t)(ECX));
  /* 1152a14c call dword ptr [0x11556374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556374))), 0x1152a152u);
  /* 1152a152 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1152a157 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a159 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a15c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1152a15f push eax */
  push32((uint32_t)(EAX));
  /* 1152a160 call dword ptr [0x11556374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556374))), 0x1152a166u);
  /* 1152a166 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a169 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1152a16c push edx */
  push32((uint32_t)(EDX));
  /* 1152a16d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a16f mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152a174 push eax */
  push32((uint32_t)(EAX));
  /* 1152a175 call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152a17bu);
  /* 1152a17b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a17e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a181 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152a184 jmp 0x1152a127 */
  goto L_1152a127;
L_1152a186:;
  /* 1152a186 mov edx, dword ptr [0x11555208] */
  EDX = (r32((uint32_t)(0x11555208)));
  /* 1152a18c push edx */
  push32((uint32_t)(EDX));
  /* 1152a18d push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a18f mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152a194 push eax */
  push32((uint32_t)(EAX));
  /* 1152a195 call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152a19bu);
  /* 1152a19b mov ecx, dword ptr [0x1155520c] */
  ECX = (r32((uint32_t)(0x1155520c)));
  /* 1152a1a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a1a2 call dword ptr [0x11556380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556380))), 0x1152a1a8u);
  /* 1152a1a8 mov esp, ebp */
  ESP = (EBP);
  /* 1152a1aa pop ebp */
  EBP = (pop32());
  /* 1152a1ab ret  */
  ESPCHK(0x1152a110u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1152a1b0 (73 bytes, 19 insns) */
void f_1152a1b0(void) {
  FTRACE(0x1152a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1152a1b3 cmp dword ptr [0x11553854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a1ba je 0x1152a1ce */
  if (C.zf) goto L_1152a1ce;
  /* 1152a1bc cmp dword ptr [0x11553854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a1c3 jne 0x1152a1f7 */
  if (!C.zf) goto L_1152a1f7;
  /* 1152a1c5 cmp dword ptr [0x11553858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a1cc jne 0x1152a1f7 */
  if (!C.zf) goto L_1152a1f7;
L_1152a1ce:;
  /* 1152a1ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1152a1d3 call 0x1152a200 */
  push32(0x1152a1d8u); f_1152a200();
  /* 1152a1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a1db cmp dword ptr [0x115539c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a1e2 je 0x1152a1ea */
  if (C.zf) goto L_1152a1ea;
  /* 1152a1e4 call dword ptr [0x115539c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115539c4))), 0x1152a1eau);
L_1152a1ea:;
  /* 1152a1ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 1152a1ef call 0x1152a200 */
  push32(0x1152a1f4u); f_1152a200();
  /* 1152a1f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152a1f7:;
  /* 1152a1f7 pop ebp */
  EBP = (pop32());
  /* 1152a1f8 ret  */
  ESPCHK(0x1152a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a200 @ 0x1152a200 (447 bytes, 131 insns) */
void f_1152a200(void) {
  FTRACE(0x1152a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a200 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a201 mov ebp, esp */
  EBP = (ESP);
  /* 1152a203 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a209 push ebx */
  push32((uint32_t)(EBX));
  /* 1152a20a push esi */
  push32((uint32_t)(ESI));
  /* 1152a20b push edi */
  push32((uint32_t)(EDI));
  /* 1152a20c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1152a213 jmp 0x1152a21e */
  goto L_1152a21e;
L_1152a215:;
  /* 1152a215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a218 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a21b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1152a21e:;
  /* 1152a21e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a222 jae 0x1152a237 */
  if (!C.cf) goto L_1152a237;
  /* 1152a224 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a22a cmp edx, dword ptr [ecx*8 + 0x11551ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11551ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a231 jne 0x1152a235 */
  if (!C.zf) goto L_1152a235;
  /* 1152a233 jmp 0x1152a237 */
  goto L_1152a237;
L_1152a235:;
  /* 1152a235 jmp 0x1152a215 */
  goto L_1152a215;
L_1152a237:;
  /* 1152a237 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a23a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a23d cmp ecx, dword ptr [eax*8 + 0x11551ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11551ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a244 jne 0x1152a3b8 */
  if (!C.zf) goto L_1152a3b8;
  /* 1152a24a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a251 je 0x1152a274 */
  if (C.zf) goto L_1152a274;
  /* 1152a253 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a256 mov eax, dword ptr [edx*8 + 0x11551ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11551ab4)));
  /* 1152a25d push eax */
  push32((uint32_t)(EAX));
  /* 1152a25e push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a260 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a262 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a264 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152a266 call 0x11526990 */
  push32(0x1152a26bu); f_11526990();
  /* 1152a26b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a26e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a271 jne 0x1152a274 */
  if (!C.zf) goto L_1152a274;
  /* 1152a273 int3  */
  x86_unimpl("int3 @ 0x1152a273");
L_1152a274:;
  /* 1152a274 cmp dword ptr [0x11553854], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a27b je 0x1152a28f */
  if (C.zf) goto L_1152a28f;
  /* 1152a27d cmp dword ptr [0x11553854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a284 jne 0x1152a2c8 */
  if (!C.zf) goto L_1152a2c8;
  /* 1152a286 cmp dword ptr [0x11553858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11553858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a28d jne 0x1152a2c8 */
  if (!C.zf) goto L_1152a2c8;
L_1152a28f:;
  /* 1152a28f push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a291 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1152a294 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a295 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a298 mov eax, dword ptr [edx*8 + 0x11551ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11551ab4)));
  /* 1152a29f push eax */
  push32((uint32_t)(EAX));
  /* 1152a2a0 call 0x1152a700 */
  push32(0x1152a2a5u); f_1152a700();
  /* 1152a2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a2a8 push eax */
  push32((uint32_t)(EAX));
  /* 1152a2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a2ac mov edx, dword ptr [ecx*8 + 0x11551ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11551ab4)));
  /* 1152a2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1152a2b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1152a2b6 call dword ptr [0x115563c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c0))), 0x1152a2bcu);
  /* 1152a2bc push eax */
  push32((uint32_t)(EAX));
  /* 1152a2bd call dword ptr [0x115563c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563c4))), 0x1152a2c3u);
  /* 1152a2c3 jmp 0x1152a3b8 */
  goto L_1152a3b8;
L_1152a2c8:;
  /* 1152a2c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a2cf je 0x1152a3b8 */
  if (C.zf) goto L_1152a3b8;
  /* 1152a2d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1152a2da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1152a2e0 push eax */
  push32((uint32_t)(EAX));
  /* 1152a2e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a2e3 call dword ptr [0x115562e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115562e4))), 0x1152a2e9u);
  /* 1152a2e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152a2eb jne 0x1152a301 */
  if (!C.zf) goto L_1152a301;
  /* 1152a2ed push 0x1154e8e0 */
  push32((uint32_t)(0x1154e8e0u));
  /* 1152a2f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1152a2f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a2f9 call 0x1152a880 */
  push32(0x1152a2feu); f_1152a880();
  /* 1152a2fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152a301:;
  /* 1152a301 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1152a307 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152a30a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a30d push eax */
  push32((uint32_t)(EAX));
  /* 1152a30e call 0x1152a700 */
  push32(0x1152a313u); f_1152a700();
  /* 1152a313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a316 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a319 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a31c jbe 0x1152a34a */
  if ((C.cf||C.zf)) goto L_1152a34a;
  /* 1152a31e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1152a324 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a325 call 0x1152a700 */
  push32(0x1152a32au); f_1152a700();
  /* 1152a32a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a32d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a330 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1152a334 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152a337 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152a339 push 0x1154e8dc */
  push32((uint32_t)(0x1154e8dcu));
  /* 1152a33e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a341 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a342 call 0x1152b0f0 */
  push32(0x1152a347u); f_1152b0f0();
  /* 1152a347 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152a34a:;
  /* 1152a34a push 0x1154f334 */
  push32((uint32_t)(0x1154f334u));
  /* 1152a34f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1152a355 push edx */
  push32((uint32_t)(EDX));
  /* 1152a356 call 0x1152a880 */
  push32(0x1152a35bu); f_1152a880();
  /* 1152a35b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a35e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a361 push eax */
  push32((uint32_t)(EAX));
  /* 1152a362 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1152a368 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a369 call 0x1152a890 */
  push32(0x1152a36eu); f_1152a890();
  /* 1152a36e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a371 push 0x1154e854 */
  push32((uint32_t)(0x1154e854u));
  /* 1152a376 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1152a37c push edx */
  push32((uint32_t)(EDX));
  /* 1152a37d call 0x1152a890 */
  push32(0x1152a382u); f_1152a890();
  /* 1152a382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a388 mov ecx, dword ptr [eax*8 + 0x11551ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11551ab4)));
  /* 1152a38f push ecx */
  push32((uint32_t)(ECX));
  /* 1152a390 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1152a396 push edx */
  push32((uint32_t)(EDX));
  /* 1152a397 call 0x1152a890 */
  push32(0x1152a39cu); f_1152a890();
  /* 1152a39c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a39f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1152a3a4 push 0x1154f30c */
  push32((uint32_t)(0x1154f30cu));
  /* 1152a3a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1152a3af push eax */
  push32((uint32_t)(EAX));
  /* 1152a3b0 call 0x1152b030 */
  push32(0x1152a3b5u); f_1152b030();
  /* 1152a3b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152a3b8:;
  /* 1152a3b8 pop edi */
  EDI = (pop32());
  /* 1152a3b9 pop esi */
  ESI = (pop32());
  /* 1152a3ba pop ebx */
  EBX = (pop32());
  /* 1152a3bb mov esp, ebp */
  ESP = (EBP);
  /* 1152a3bd pop ebp */
  EBP = (pop32());
  /* 1152a3be ret  */
  ESPCHK(0x1152a200u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1152a3c0 (80 bytes, 27 insns) */
void f_1152a3c0(void) {
  FTRACE(0x1152a3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152a3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a3c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152a3cb jmp 0x1152a3d6 */
  goto L_1152a3d6;
L_1152a3cd:;
  /* 1152a3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a3d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a3d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152a3d6:;
  /* 1152a3d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a3da jae 0x1152a3ef */
  if (!C.cf) goto L_1152a3ef;
  /* 1152a3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a3df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a3e2 cmp edx, dword ptr [ecx*8 + 0x11551ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11551ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a3e9 jne 0x1152a3ed */
  if (!C.zf) goto L_1152a3ed;
  /* 1152a3eb jmp 0x1152a3ef */
  goto L_1152a3ef;
L_1152a3ed:;
  /* 1152a3ed jmp 0x1152a3cd */
  goto L_1152a3cd;
L_1152a3ef:;
  /* 1152a3ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a3f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a3f5 cmp ecx, dword ptr [eax*8 + 0x11551ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11551ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a3fc jne 0x1152a40a */
  if (!C.zf) goto L_1152a40a;
  /* 1152a3fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a401 mov eax, dword ptr [edx*8 + 0x11551ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11551ab4)));
  /* 1152a408 jmp 0x1152a40c */
  goto L_1152a40c;
L_1152a40a:;
  /* 1152a40a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152a40c:;
  /* 1152a40c mov esp, ebp */
  ESP = (EBP);
  /* 1152a40e pop ebp */
  EBP = (pop32());
  /* 1152a40f ret  */
  ESPCHK(0x1152a3c0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1152a410 (66 bytes, 28 insns) */
void f_1152a410(void) {
  FTRACE(0x1152a410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a410 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a411 mov ebp, esp */
  EBP = (ESP);
  /* 1152a413 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a417 jne 0x1152a437 */
  if (!C.zf) goto L_1152a437;
  /* 1152a419 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a41d jge 0x1152a437 */
  if ((C.sf==C.of)) goto L_1152a437;
  /* 1152a41f push 1 */
  push32((uint32_t)(0x1u));
  /* 1152a421 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a424 push eax */
  push32((uint32_t)(EAX));
  /* 1152a425 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a428 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a42c push edx */
  push32((uint32_t)(EDX));
  /* 1152a42d call 0x1152a460 */
  push32(0x1152a432u); f_1152a460();
  /* 1152a432 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a435 jmp 0x1152a44d */
  goto L_1152a44d;
L_1152a437:;
  /* 1152a437 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a439 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a43c push eax */
  push32((uint32_t)(EAX));
  /* 1152a43d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a440 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a444 push edx */
  push32((uint32_t)(EDX));
  /* 1152a445 call 0x1152a460 */
  push32(0x1152a44au); f_1152a460();
  /* 1152a44a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152a44d:;
  /* 1152a44d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a450 pop ebp */
  EBP = (pop32());
  /* 1152a451 ret  */
  ESPCHK(0x1152a410u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1152a460 (194 bytes, 71 insns) */
void f_1152a460(void) {
  FTRACE(0x1152a460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a460 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a461 mov ebp, esp */
  EBP = (ESP);
  /* 1152a463 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152a46c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a470 je 0x1152a489 */
  if (C.zf) goto L_1152a489;
  /* 1152a472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a475 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1152a478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a47b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a47e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152a481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a484 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152a486 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1152a489:;
  /* 1152a489 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a48c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1152a48f:;
  /* 1152a48f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a492 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a494 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152a497 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152a49a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a49d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a49f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1152a4a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1152a4a5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a4a9 jbe 0x1152a4c1 */
  if ((C.cf||C.zf)) goto L_1152a4c1;
  /* 1152a4ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a4ae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4b4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a4b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a4bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152a4bf jmp 0x1152a4d5 */
  goto L_1152a4d5;
L_1152a4c1:;
  /* 1152a4c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a4c4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a4cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a4d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152a4d5:;
  /* 1152a4d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a4d9 ja 0x1152a48f */
  if ((!C.cf&&!C.zf)) goto L_1152a48f;
  /* 1152a4db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4de mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1152a4e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a4e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152a4ea:;
  /* 1152a4ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152a4ef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1152a4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a4f8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152a4fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a4fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a4ff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1152a502 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1152a504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a507 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a50a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152a50d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152a516 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a519 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a51c jb 0x1152a4ea */
  if (C.cf) goto L_1152a4ea;
  /* 1152a51e mov esp, ebp */
  ESP = (EBP);
  /* 1152a520 pop ebp */
  EBP = (pop32());
  /* 1152a521 ret  */
  ESPCHK(0x1152a460u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1152a530 (63 bytes, 24 insns) */
void f_1152a530(void) {
  FTRACE(0x1152a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a530 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a531 mov ebp, esp */
  EBP = (ESP);
  /* 1152a533 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a534 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a538 jne 0x1152a549 */
  if (!C.zf) goto L_1152a549;
  /* 1152a53a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a53e jge 0x1152a549 */
  if ((C.sf==C.of)) goto L_1152a549;
  /* 1152a540 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1152a547 jmp 0x1152a550 */
  goto L_1152a550;
L_1152a549:;
  /* 1152a549 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1152a550:;
  /* 1152a550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a553 push eax */
  push32((uint32_t)(EAX));
  /* 1152a554 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a557 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a558 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a55b push edx */
  push32((uint32_t)(EDX));
  /* 1152a55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a55f push eax */
  push32((uint32_t)(EAX));
  /* 1152a560 call 0x1152a460 */
  push32(0x1152a565u); f_1152a460();
  /* 1152a565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a568 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a56b mov esp, ebp */
  ESP = (EBP);
  /* 1152a56d pop ebp */
  EBP = (pop32());
  /* 1152a56e ret  */
  ESPCHK(0x1152a530u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1152a570 (30 bytes, 14 insns) */
void f_1152a570(void) {
  FTRACE(0x1152a570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a570 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a571 mov ebp, esp */
  EBP = (ESP);
  /* 1152a573 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a575 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a578 push eax */
  push32((uint32_t)(EAX));
  /* 1152a579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a57c push ecx */
  push32((uint32_t)(ECX));
  /* 1152a57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a580 push edx */
  push32((uint32_t)(EDX));
  /* 1152a581 call 0x1152a460 */
  push32(0x1152a586u); f_1152a460();
  /* 1152a586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a589 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a58c pop ebp */
  EBP = (pop32());
  /* 1152a58d ret  */
  ESPCHK(0x1152a570u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1152a590 (72 bytes, 28 insns) */
void f_1152a590(void) {
  FTRACE(0x1152a590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a590 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a591 mov ebp, esp */
  EBP = (ESP);
  /* 1152a593 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a594 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a598 jne 0x1152a5b1 */
  if (!C.zf) goto L_1152a5b1;
  /* 1152a59a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a59e jg 0x1152a5b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1152a5b1;
  /* 1152a5a0 jl 0x1152a5a8 */
  if ((C.sf!=C.of)) goto L_1152a5a8;
  /* 1152a5a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a5a6 jae 0x1152a5b1 */
  if (!C.cf) goto L_1152a5b1;
L_1152a5a8:;
  /* 1152a5a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1152a5af jmp 0x1152a5b8 */
  goto L_1152a5b8;
L_1152a5b1:;
  /* 1152a5b1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1152a5b8:;
  /* 1152a5b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a5bb push eax */
  push32((uint32_t)(EAX));
  /* 1152a5bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152a5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1152a5c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a5c3 push edx */
  push32((uint32_t)(EDX));
  /* 1152a5c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1152a5c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a5cb push ecx */
  push32((uint32_t)(ECX));
  /* 1152a5cc call 0x1152a5e0 */
  push32(0x1152a5d1u); f_1152a5e0();
  /* 1152a5d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a5d4 mov esp, ebp */
  ESP = (EBP);
  /* 1152a5d6 pop ebp */
  EBP = (pop32());
  /* 1152a5d7 ret  */
  ESPCHK(0x1152a590u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1152a5e0 (242 bytes, 91 insns) */
void f_1152a5e0(void) {
  FTRACE(0x1152a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152a5e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a5e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a5e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152a5ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a5f0 je 0x1152a614 */
  if (C.zf) goto L_1152a614;
  /* 1152a5f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a5f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1152a5f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a5fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a5fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152a601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a604 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152a606 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a609 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a60c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152a60e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1152a611 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1152a614:;
  /* 1152a614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a617 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1152a61a:;
  /* 1152a61a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152a61d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152a61f push ecx */
  push32((uint32_t)(ECX));
  /* 1152a620 push eax */
  push32((uint32_t)(EAX));
  /* 1152a621 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a624 push edx */
  push32((uint32_t)(EDX));
  /* 1152a625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a628 push eax */
  push32((uint32_t)(EAX));
  /* 1152a629 call 0x1152e560 */
  push32(0x1152a62eu); f_1152e560();
  /* 1152a62e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152a631 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152a634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a636 push edx */
  push32((uint32_t)(EDX));
  /* 1152a637 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a63b push eax */
  push32((uint32_t)(EAX));
  /* 1152a63c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a63f push ecx */
  push32((uint32_t)(ECX));
  /* 1152a640 call 0x1152e4f0 */
  push32(0x1152a645u); f_1152e4f0();
  /* 1152a645 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1152a648 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1152a64b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a64f jbe 0x1152a667 */
  if ((C.cf||C.zf)) goto L_1152a667;
  /* 1152a651 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a654 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a65a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a65c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a65f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a662 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152a665 jmp 0x1152a67b */
  goto L_1152a67b;
L_1152a667:;
  /* 1152a667 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152a66a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a66d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a670 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a675 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a678 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1152a67b:;
  /* 1152a67b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a67f ja 0x1152a61a */
  if ((!C.cf&&!C.zf)) goto L_1152a61a;
  /* 1152a681 jb 0x1152a689 */
  if (C.cf) goto L_1152a689;
  /* 1152a683 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a687 ja 0x1152a61a */
  if ((!C.cf&&!C.zf)) goto L_1152a61a;
L_1152a689:;
  /* 1152a689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a68c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1152a68f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a692 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152a698:;
  /* 1152a698 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a69b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152a69d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1152a6a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a6a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a6a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152a6a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1152a6aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a6ad mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1152a6b0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1152a6b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152a6b5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a6b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152a6bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a6be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a6c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152a6c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152a6c7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a6ca jb 0x1152a698 */
  if (C.cf) goto L_1152a698;
  /* 1152a6cc mov esp, ebp */
  ESP = (EBP);
  /* 1152a6ce pop ebp */
  EBP = (pop32());
  /* 1152a6cf ret 0x14 */
  ESPCHK(0x1152a5e0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1152a6e0 (31 bytes, 15 insns) */
void f_1152a6e0(void) {
  FTRACE(0x1152a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1152a6e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a6e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152a6e8 push eax */
  push32((uint32_t)(EAX));
  /* 1152a6e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a6ec push ecx */
  push32((uint32_t)(ECX));
  /* 1152a6ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1152a6f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1152a6f5 call 0x1152a5e0 */
  push32(0x1152a6fau); f_1152a5e0();
  /* 1152a6fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a6fd pop ebp */
  EBP = (pop32());
  /* 1152a6fe ret  */
  ESPCHK(0x1152a6e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1152a700 (123 bytes, 44 insns) */
void f_1152a700(void) {
  FTRACE(0x1152a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a700 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a704 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a70a je 0x1152a720 */
  if (C.zf) goto L_1152a720;
L_1152a70c:;
  /* 1152a70c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1152a70e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1152a70f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152a711 je 0x1152a753 */
  if (C.zf) goto L_1152a753;
  /* 1152a713 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a719 jne 0x1152a70c */
  if (!C.zf) goto L_1152a70c;
  /* 1152a71b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1152a720:;
  /* 1152a720 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1152a722 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1152a727 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a729 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152a72c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a72e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a731 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1152a736 je 0x1152a720 */
  if (C.zf) goto L_1152a720;
  /* 1152a738 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1152a73b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152a73d je 0x1152a771 */
  if (C.zf) goto L_1152a771;
  /* 1152a73f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1152a741 je 0x1152a767 */
  if (C.zf) goto L_1152a767;
  /* 1152a743 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1152a748 je 0x1152a75d */
  if (C.zf) goto L_1152a75d;
  /* 1152a74a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1152a74f je 0x1152a753 */
  if (C.zf) goto L_1152a753;
  /* 1152a751 jmp 0x1152a720 */
  goto L_1152a720;
L_1152a753:;
  /* 1152a753 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1152a756 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a75a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a75c ret  */
  ESPCHK(0x1152a700u, _esp0);
  ESP += 4; return;
L_1152a75d:;
  /* 1152a75d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1152a760 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a764 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a766 ret  */
  ESPCHK(0x1152a700u, _esp0);
  ESP += 4; return;
L_1152a767:;
  /* 1152a767 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1152a76a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a76e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a770 ret  */
  ESPCHK(0x1152a700u, _esp0);
  ESP += 4; return;
L_1152a771:;
  /* 1152a771 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1152a774 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a778 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a77a ret  */
  ESPCHK(0x1152a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x1152a780 (249 bytes, 93 insns) */
void f_1152a780(void) {
  FTRACE(0x1152a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a780 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a781 mov ebp, esp */
  EBP = (ESP);
  /* 1152a783 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a786 push ebx */
  push32((uint32_t)(EBX));
  /* 1152a787 push esi */
  push32((uint32_t)(ESI));
  /* 1152a788 push edi */
  push32((uint32_t)(EDI));
  /* 1152a789 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1152a78c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1152a78f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1152a792 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1152a795:;
  /* 1152a795 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a799 jne 0x1152a7b9 */
  if (!C.zf) goto L_1152a7b9;
  /* 1152a79b push 0x1154f36c */
  push32((uint32_t)(0x1154f36cu));
  /* 1152a7a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a7a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1152a7a4 push 0x1154f360 */
  push32((uint32_t)(0x1154f360u));
  /* 1152a7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152a7ab call 0x11526990 */
  push32(0x1152a7b0u); f_11526990();
  /* 1152a7b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a7b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a7b6 jne 0x1152a7b9 */
  if (!C.zf) goto L_1152a7b9;
  /* 1152a7b8 int3  */
  x86_unimpl("int3 @ 0x1152a7b8");
L_1152a7b9:;
  /* 1152a7b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a7bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152a7bd jne 0x1152a795 */
  if (!C.zf) goto L_1152a795;
L_1152a7bf:;
  /* 1152a7bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a7c3 jne 0x1152a7e3 */
  if (!C.zf) goto L_1152a7e3;
  /* 1152a7c5 push 0x1154f350 */
  push32((uint32_t)(0x1154f350u));
  /* 1152a7ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a7cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1152a7ce push 0x1154f360 */
  push32((uint32_t)(0x1154f360u));
  /* 1152a7d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152a7d5 call 0x11526990 */
  push32(0x1152a7dau); f_11526990();
  /* 1152a7da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a7dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a7e0 jne 0x1152a7e3 */
  if (!C.zf) goto L_1152a7e3;
  /* 1152a7e2 int3  */
  x86_unimpl("int3 @ 0x1152a7e2");
L_1152a7e3:;
  /* 1152a7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a7e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152a7e7 jne 0x1152a7bf */
  if (!C.zf) goto L_1152a7bf;
  /* 1152a7e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a7ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1152a7f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a7f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152a7fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a802 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1152a804 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a807 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a80a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1152a80d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1152a810 push edx */
  push32((uint32_t)(EDX));
  /* 1152a811 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a814 push eax */
  push32((uint32_t)(EAX));
  /* 1152a815 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a818 push ecx */
  push32((uint32_t)(ECX));
  /* 1152a819 call 0x1152e860 */
  push32(0x1152a81eu); f_1152e860();
  /* 1152a81e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a821 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152a824 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a827 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152a82a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a82d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a830 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1152a833 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a836 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a83a jl 0x1152a85e */
  if ((C.sf!=C.of)) goto L_1152a85e;
  /* 1152a83c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a83f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152a841 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1152a844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a846 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152a84c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1152a84f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a852 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152a854 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a857 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a85a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1152a85c jmp 0x1152a86f */
  goto L_1152a86f;
L_1152a85e:;
  /* 1152a85e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a861 push eax */
  push32((uint32_t)(EAX));
  /* 1152a862 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a864 call 0x1152e5e0 */
  push32(0x1152a869u); f_1152e5e0();
  /* 1152a869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a86c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1152a86f:;
  /* 1152a86f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152a872 pop edi */
  EDI = (pop32());
  /* 1152a873 pop esi */
  ESI = (pop32());
  /* 1152a874 pop ebx */
  EBX = (pop32());
  /* 1152a875 mov esp, ebp */
  ESP = (EBP);
  /* 1152a877 pop ebp */
  EBP = (pop32());
  /* 1152a878 ret  */
  ESPCHK(0x1152a780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x1152a880 (7 bytes, 3 insns) */
void f_1152a880(void) {
  FTRACE(0x1152a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a880 push edi */
  push32((uint32_t)(EDI));
  /* 1152a881 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1152a885 jmp 0x1152a8f1 */
  jmp_ind(0x1152a8f1u); return;
}

/* FUN_1000a890 @ 0x1152a890 (224 bytes, 84 insns) */
void f_1152a890(void) {
  FTRACE(0x1152a890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152a894 push edi */
  push32((uint32_t)(EDI));
  /* 1152a895 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a89b je 0x1152a8ac */
  if (C.zf) goto L_1152a8ac;
L_1152a89d:;
  /* 1152a89d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1152a89f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1152a8a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152a8a2 je 0x1152a8df */
  if (C.zf) goto L_1152a8df;
  /* 1152a8a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a8aa jne 0x1152a89d */
  if (!C.zf) goto L_1152a89d;
L_1152a8ac:;
  /* 1152a8ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1152a8ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1152a8b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a8b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152a8b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a8ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a8bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1152a8c2 je 0x1152a8ac */
  if (C.zf) goto L_1152a8ac;
  /* 1152a8c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1152a8c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152a8c9 je 0x1152a8ee */
  if (C.zf) goto L_1152a8ee;
  /* 1152a8cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1152a8cd je 0x1152a8e9 */
  if (C.zf) goto L_1152a8e9;
  /* 1152a8cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1152a8d4 je 0x1152a8e4 */
  if (C.zf) goto L_1152a8e4;
  /* 1152a8d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1152a8db je 0x1152a8df */
  if (C.zf) goto L_1152a8df;
  /* 1152a8dd jmp 0x1152a8ac */
  goto L_1152a8ac;
L_1152a8df:;
  /* 1152a8df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1152a8e2 jmp 0x1152a8f1 */
  goto L_1152a8f1;
L_1152a8e4:;
  /* 1152a8e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1152a8e7 jmp 0x1152a8f1 */
  goto L_1152a8f1;
L_1152a8e9:;
  /* 1152a8e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1152a8ec jmp 0x1152a8f1 */
  goto L_1152a8f1;
L_1152a8ee:;
  /* 1152a8ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1152a8f1:;
  /* 1152a8f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152a8f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a8fb je 0x1152a916 */
  if (C.zf) goto L_1152a916;
L_1152a8fd:;
  /* 1152a8fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1152a8ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1152a900 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1152a902 je 0x1152a968 */
  if (C.zf) goto L_1152a968;
  /* 1152a904 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1152a906 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152a907 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1152a90d jne 0x1152a8fd */
  if (!C.zf) goto L_1152a8fd;
  /* 1152a90f jmp 0x1152a916 */
  goto L_1152a916;
L_1152a911:;
  /* 1152a911 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152a913 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1152a916:;
  /* 1152a916 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1152a91b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1152a91d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a91f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152a922 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152a924 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152a926 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a929 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1152a92e je 0x1152a911 */
  if (C.zf) goto L_1152a911;
  /* 1152a930 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1152a932 je 0x1152a968 */
  if (C.zf) goto L_1152a968;
  /* 1152a934 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1152a936 je 0x1152a95f */
  if (C.zf) goto L_1152a95f;
  /* 1152a938 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1152a93e je 0x1152a952 */
  if (C.zf) goto L_1152a952;
  /* 1152a940 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1152a946 je 0x1152a94a */
  if (C.zf) goto L_1152a94a;
  /* 1152a948 jmp 0x1152a911 */
  goto L_1152a911;
L_1152a94a:;
  /* 1152a94a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152a94c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152a950 pop edi */
  EDI = (pop32());
  /* 1152a951 ret  */
  ESPCHK(0x1152a890u, _esp0);
  ESP += 4; return;
L_1152a952:;
  /* 1152a952 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1152a955 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152a959 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1152a95d pop edi */
  EDI = (pop32());
  /* 1152a95e ret  */
  ESPCHK(0x1152a890u, _esp0);
  ESP += 4; return;
L_1152a95f:;
  /* 1152a95f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1152a962 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152a966 pop edi */
  EDI = (pop32());
  /* 1152a967 ret  */
  ESPCHK(0x1152a890u, _esp0);
  ESP += 4; return;
L_1152a968:;
  /* 1152a968 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1152a96a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152a96e pop edi */
  EDI = (pop32());
  /* 1152a96f ret  */
  ESPCHK(0x1152a890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a970 @ 0x1152a970 (243 bytes, 91 insns) */
void f_1152a970(void) {
  FTRACE(0x1152a970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152a970 push ebp */
  push32((uint32_t)(EBP));
  /* 1152a971 mov ebp, esp */
  EBP = (ESP);
  /* 1152a973 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152a976 push ebx */
  push32((uint32_t)(EBX));
  /* 1152a977 push esi */
  push32((uint32_t)(ESI));
  /* 1152a978 push edi */
  push32((uint32_t)(EDI));
  /* 1152a979 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1152a97c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1152a97f:;
  /* 1152a97f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a983 jne 0x1152a9a3 */
  if (!C.zf) goto L_1152a9a3;
  /* 1152a985 push 0x1154f36c */
  push32((uint32_t)(0x1154f36cu));
  /* 1152a98a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a98c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1152a98e push 0x1154f37c */
  push32((uint32_t)(0x1154f37cu));
  /* 1152a993 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152a995 call 0x11526990 */
  push32(0x1152a99au); f_11526990();
  /* 1152a99a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a99d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a9a0 jne 0x1152a9a3 */
  if (!C.zf) goto L_1152a9a3;
  /* 1152a9a2 int3  */
  x86_unimpl("int3 @ 0x1152a9a2");
L_1152a9a3:;
  /* 1152a9a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152a9a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152a9a7 jne 0x1152a97f */
  if (!C.zf) goto L_1152a97f;
L_1152a9a9:;
  /* 1152a9a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a9ad jne 0x1152a9cd */
  if (!C.zf) goto L_1152a9cd;
  /* 1152a9af push 0x1154f350 */
  push32((uint32_t)(0x1154f350u));
  /* 1152a9b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152a9b6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1152a9b8 push 0x1154f37c */
  push32((uint32_t)(0x1154f37cu));
  /* 1152a9bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1152a9bf call 0x11526990 */
  push32(0x1152a9c4u); f_11526990();
  /* 1152a9c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152a9c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152a9ca jne 0x1152a9cd */
  if (!C.zf) goto L_1152a9cd;
  /* 1152a9cc int3  */
  x86_unimpl("int3 @ 0x1152a9cc");
L_1152a9cd:;
  /* 1152a9cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152a9cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152a9d1 jne 0x1152a9a9 */
  if (!C.zf) goto L_1152a9a9;
  /* 1152a9d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a9d6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1152a9dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a9e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a9e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1152a9e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a9e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152a9ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1152a9ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152a9f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152a9f4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1152a9f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1152a9fa push ecx */
  push32((uint32_t)(ECX));
  /* 1152a9fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152a9fe push edx */
  push32((uint32_t)(EDX));
  /* 1152a9ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa02 push eax */
  push32((uint32_t)(EAX));
  /* 1152aa03 call 0x1152e860 */
  push32(0x1152aa08u); f_1152e860();
  /* 1152aa08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aa0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1152aa0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152aa14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152aa17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1152aa1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa20 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aa24 jl 0x1152aa48 */
  if ((C.sf!=C.of)) goto L_1152aa48;
  /* 1152aa26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152aa2b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1152aa2e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1152aa30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1152aa36 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1152aa39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152aa3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aa41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1152aa46 jmp 0x1152aa59 */
  goto L_1152aa59;
L_1152aa48:;
  /* 1152aa48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1152aa4b push edx */
  push32((uint32_t)(EDX));
  /* 1152aa4c push 0 */
  push32((uint32_t)(0x0u));
  /* 1152aa4e call 0x1152e5e0 */
  push32(0x1152aa53u); f_1152e5e0();
  /* 1152aa53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aa56 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1152aa59:;
  /* 1152aa59 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1152aa5c pop edi */
  EDI = (pop32());
  /* 1152aa5d pop esi */
  ESI = (pop32());
  /* 1152aa5e pop ebx */
  EBX = (pop32());
  /* 1152aa5f mov esp, ebp */
  ESP = (EBP);
  /* 1152aa61 pop ebp */
  EBP = (pop32());
  /* 1152aa62 ret  */
  ESPCHK(0x1152a970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa70 @ 0x1152aa70 (47 bytes, 17 insns) */
void f_1152aa70(void) {
  FTRACE(0x1152aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152aa70 push ecx */
  push32((uint32_t)(ECX));
  /* 1152aa71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aa76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1152aa7a jb 0x1152aa90 */
  if (C.cf) goto L_1152aa90;
L_1152aa7c:;
  /* 1152aa7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152aa82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152aa87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1152aa89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aa8e jae 0x1152aa7c */
  if (!C.cf) goto L_1152aa7c;
L_1152aa90:;
  /* 1152aa90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152aa92 mov eax, esp */
  EAX = (ESP);
  /* 1152aa94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1152aa96 mov esp, ecx */
  ESP = (ECX);
  /* 1152aa98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152aa9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152aa9d push eax */
  push32((uint32_t)(EAX));
  /* 1152aa9e ret  */
  ESPCHK(0x1152aa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x1152aaa0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1152aaa0(void) {
  FTRACE(0x1152aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1152aaa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152aaa6 push esi */
  push32((uint32_t)(ESI));
  /* 1152aaa7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aaab je 0x1152aab3 */
  if (C.zf) goto L_1152aab3;
  /* 1152aaad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aab1 jne 0x1152aab8 */
  if (!C.zf) goto L_1152aab8;
L_1152aab3:;
  /* 1152aab3 jmp 0x1152ac88 */
  goto L_1152ac88;
L_1152aab8:;
  /* 1152aab8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aabc je 0x1152aad4 */
  if (C.zf) goto L_1152aad4;
  /* 1152aabe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aac2 je 0x1152aad4 */
  if (C.zf) goto L_1152aad4;
  /* 1152aac4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aac8 je 0x1152aad4 */
  if (C.zf) goto L_1152aad4;
  /* 1152aaca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aace jne 0x1152abb1 */
  if (!C.zf) goto L_1152abb1;
L_1152aad4:;
  /* 1152aad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152aad6 call 0x1152b2d0 */
  push32(0x1152aadbu); f_1152b2d0();
  /* 1152aadb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aade cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aae2 je 0x1152aaea */
  if (C.zf) goto L_1152aaea;
  /* 1152aae4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aae8 jne 0x1152ab2f */
  if (!C.zf) goto L_1152ab2f;
L_1152aaea:;
  /* 1152aaea cmp dword ptr [0x115539d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aaf1 jne 0x1152ab2f */
  if (!C.zf) goto L_1152ab2f;
  /* 1152aaf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152aaf5 push 0x1152acd0 */
  push32((uint32_t)(0x1152acd0u));
  /* 1152aafa call dword ptr [0x11556370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556370))), 0x1152ab00u);
  /* 1152ab00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ab03 jne 0x1152ab11 */
  if (!C.zf) goto L_1152ab11;
  /* 1152ab05 mov dword ptr [0x115539d8], 1 */
  w32((uint32_t)(0x115539d8), (0x1u));
  /* 1152ab0f jmp 0x1152ab2f */
  goto L_1152ab2f;
L_1152ab11:;
  /* 1152ab11 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x1152ab17u);
  /* 1152ab17 mov esi, eax */
  ESI = (EAX);
  /* 1152ab19 call 0x1152f7b0 */
  push32(0x1152ab1eu); f_1152f7b0();
  /* 1152ab1e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1152ab20 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ab22 call 0x1152b370 */
  push32(0x1152ab27u); f_1152b370();
  /* 1152ab27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ab2a jmp 0x1152ac88 */
  goto L_1152ac88;
L_1152ab2f:;
  /* 1152ab2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ab32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152ab35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152ab38 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ab3b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1152ab3e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ab42 ja 0x1152aba2 */
  if ((!C.cf&&!C.zf)) goto L_1152aba2;
  /* 1152ab44 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152ab47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152ab49 mov dl, byte ptr [eax + 0x1152acaf] */
  DL = (r8((uint32_t)(EAX + 0x1152acaf)));
  /* 1152ab4f jmp dword ptr [edx*4 + 0x1152ac9b] */
  switch (EDX) {
    case 0: goto L_1152ab56;
    case 1: goto L_1152ab90;
    case 2: goto L_1152ab6a;
    case 3: goto L_1152ab7d;
    case 4: goto L_1152aba2;
    default: x86_unimpl("switch@0x1152ab4f out of table"); return;
  }
L_1152ab56:;
  /* 1152ab56 mov ecx, dword ptr [0x115539c8] */
  ECX = (r32((uint32_t)(0x115539c8)));
  /* 1152ab5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152ab5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ab62 mov dword ptr [0x115539c8], edx */
  w32((uint32_t)(0x115539c8), (EDX));
  /* 1152ab68 jmp 0x1152aba2 */
  goto L_1152aba2;
L_1152ab6a:;
  /* 1152ab6a mov eax, dword ptr [0x115539cc] */
  EAX = (r32((uint32_t)(0x115539cc)));
  /* 1152ab6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152ab72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ab75 mov dword ptr [0x115539cc], ecx */
  w32((uint32_t)(0x115539cc), (ECX));
  /* 1152ab7b jmp 0x1152aba2 */
  goto L_1152aba2;
L_1152ab7d:;
  /* 1152ab7d mov edx, dword ptr [0x115539d0] */
  EDX = (r32((uint32_t)(0x115539d0)));
  /* 1152ab83 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1152ab86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ab89 mov dword ptr [0x115539d0], eax */
  w32((uint32_t)(0x115539d0), (EAX));
  /* 1152ab8e jmp 0x1152aba2 */
  goto L_1152aba2;
L_1152ab90:;
  /* 1152ab90 mov ecx, dword ptr [0x115539d4] */
  ECX = (r32((uint32_t)(0x115539d4)));
  /* 1152ab96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152ab99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ab9c mov dword ptr [0x115539d4], edx */
  w32((uint32_t)(0x115539d4), (EDX));
L_1152aba2:;
  /* 1152aba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152aba4 call 0x1152b370 */
  push32(0x1152aba9u); f_1152b370();
  /* 1152aba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152abac jmp 0x1152ac83 */
  goto L_1152ac83;
L_1152abb1:;
  /* 1152abb1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152abb5 je 0x1152abc8 */
  if (C.zf) goto L_1152abc8;
  /* 1152abb7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152abbb je 0x1152abc8 */
  if (C.zf) goto L_1152abc8;
  /* 1152abbd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152abc1 je 0x1152abc8 */
  if (C.zf) goto L_1152abc8;
  /* 1152abc3 jmp 0x1152ac88 */
  goto L_1152ac88;
L_1152abc8:;
  /* 1152abc8 call 0x11527310 */
  push32(0x1152abcdu); f_11527310();
  /* 1152abcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152abd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152abd3 cmp dword ptr [eax + 0x50], 0x11551c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11551c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152abda jne 0x1152ac25 */
  if (!C.zf) goto L_1152ac25;
  /* 1152abdc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1152abe1 push 0x1154f388 */
  push32((uint32_t)(0x1154f388u));
  /* 1152abe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152abe8 mov ecx, dword ptr [0x11551c80] */
  ECX = (r32((uint32_t)(0x11551c80)));
  /* 1152abee push ecx */
  push32((uint32_t)(ECX));
  /* 1152abef call 0x115278d0 */
  push32(0x1152abf4u); f_115278d0();
  /* 1152abf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152abf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152abfa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1152abfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ac00 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ac04 je 0x1152ac23 */
  if (C.zf) goto L_1152ac23;
  /* 1152ac06 mov ecx, dword ptr [0x11551c80] */
  ECX = (r32((uint32_t)(0x11551c80)));
  /* 1152ac0c push ecx */
  push32((uint32_t)(ECX));
  /* 1152ac0d push 0x11551c00 */
  push32((uint32_t)(0x11551c00u));
  /* 1152ac12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ac15 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1152ac18 push eax */
  push32((uint32_t)(EAX));
  /* 1152ac19 call 0x1152e1b0 */
  push32(0x1152ac1eu); f_1152e1b0();
  /* 1152ac1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ac21 jmp 0x1152ac25 */
  goto L_1152ac25;
L_1152ac23:;
  /* 1152ac23 jmp 0x1152ac88 */
  goto L_1152ac88;
L_1152ac25:;
  /* 1152ac25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ac28 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1152ac2b push edx */
  push32((uint32_t)(EDX));
  /* 1152ac2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ac2f push eax */
  push32((uint32_t)(EAX));
  /* 1152ac30 call 0x1152afb0 */
  push32(0x1152ac35u); f_1152afb0();
  /* 1152ac35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ac38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152ac3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ac3f jne 0x1152ac43 */
  if (!C.zf) goto L_1152ac43;
  /* 1152ac41 jmp 0x1152ac88 */
  goto L_1152ac88;
L_1152ac43:;
  /* 1152ac43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ac46 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1152ac49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1152ac4c:;
  /* 1152ac4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ac4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152ac52 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ac55 jne 0x1152ac83 */
  if (!C.zf) goto L_1152ac83;
  /* 1152ac57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ac5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ac5d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1152ac60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ac63 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ac66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152ac69 mov edx, dword ptr [0x11551c84] */
  EDX = (r32((uint32_t)(0x11551c84)));
  /* 1152ac6f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152ac72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ac75 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1152ac78 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ac7a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ac7d jb 0x1152ac81 */
  if (C.cf) goto L_1152ac81;
  /* 1152ac7f jmp 0x1152ac83 */
  goto L_1152ac83;
L_1152ac81:;
  /* 1152ac81 jmp 0x1152ac4c */
  goto L_1152ac4c;
L_1152ac83:;
  /* 1152ac83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152ac86 jmp 0x1152ac96 */
  goto L_1152ac96;
L_1152ac88:;
  /* 1152ac88 call 0x1152f7a0 */
  push32(0x1152ac8du); f_1152f7a0();
  /* 1152ac8d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1152ac93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1152ac96:;
  /* 1152ac96 pop esi */
  ESI = (pop32());
  /* 1152ac97 mov esp, ebp */
  ESP = (EBP);
  /* 1152ac99 pop ebp */
  EBP = (pop32());
  /* 1152ac9a ret  */
  ESPCHK(0x1152aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acd0 @ 0x1152acd0 (146 bytes, 45 insns) */
void f_1152acd0(void) {
  FTRACE(0x1152acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152acd1 mov ebp, esp */
  EBP = (ESP);
  /* 1152acd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152acd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152acd8 call 0x1152b2d0 */
  push32(0x1152acddu); f_1152b2d0();
  /* 1152acdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ace0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ace4 jne 0x1152acfe */
  if (!C.zf) goto L_1152acfe;
  /* 1152ace6 mov dword ptr [ebp - 8], 0x115539c8 */
  w32((uint32_t)(EBP + -0x8), (0x115539c8u));
  /* 1152aced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152acf0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1152acf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152acf5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1152acfc jmp 0x1152ad14 */
  goto L_1152ad14;
L_1152acfe:;
  /* 1152acfe mov dword ptr [ebp - 8], 0x115539cc */
  w32((uint32_t)(EBP + -0x8), (0x115539ccu));
  /* 1152ad05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ad08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152ad0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152ad0d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1152ad14:;
  /* 1152ad14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ad18 jne 0x1152ad28 */
  if (!C.zf) goto L_1152ad28;
  /* 1152ad1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ad1c call 0x1152b370 */
  push32(0x1152ad21u); f_1152b370();
  /* 1152ad21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ad24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ad26 jmp 0x1152ad5c */
  goto L_1152ad5c;
L_1152ad28:;
  /* 1152ad28 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ad2c je 0x1152ad4d */
  if (C.zf) goto L_1152ad4d;
  /* 1152ad2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ad31 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1152ad37 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ad39 call 0x1152b370 */
  push32(0x1152ad3eu); f_1152b370();
  /* 1152ad3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ad41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ad44 push edx */
  push32((uint32_t)(EDX));
  /* 1152ad45 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1152ad48u);
  /* 1152ad48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ad4b jmp 0x1152ad57 */
  goto L_1152ad57;
L_1152ad4d:;
  /* 1152ad4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ad4f call 0x1152b370 */
  push32(0x1152ad54u); f_1152b370();
  /* 1152ad54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ad57:;
  /* 1152ad57 mov eax, 1 */
  EAX = (0x1u);
L_1152ad5c:;
  /* 1152ad5c mov esp, ebp */
  ESP = (EBP);
  /* 1152ad5e pop ebp */
  EBP = (pop32());
  /* 1152ad5f ret 4 */
  ESPCHK(0x1152acd0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ad70 @ 0x1152ad70 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1152ad70(void) {
  FTRACE(0x1152ad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152ad70 push ebp */
  push32((uint32_t)(EBP));
  /* 1152ad71 mov ebp, esp */
  EBP = (ESP);
  /* 1152ad73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ad76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1152ad7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ad80 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1152ad83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ad86 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152ad89 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1152ad8c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ad90 ja 0x1152ae3e */
  if ((!C.cf&&!C.zf)) goto L_1152ae3e;
  /* 1152ad96 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1152ad99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152ad9b mov dl, byte ptr [eax + 0x1152af92] */
  DL = (r8((uint32_t)(EAX + 0x1152af92)));
  /* 1152ada1 jmp dword ptr [edx*4 + 0x1152af7a] */
  switch (EDX) {
    case 0: goto L_1152ada8;
    case 1: goto L_1152ae13;
    case 2: goto L_1152adf9;
    case 3: goto L_1152adc5;
    case 4: goto L_1152addf;
    case 5: goto L_1152ae3e;
    default: x86_unimpl("switch@0x1152ada1 out of table"); return;
  }
L_1152ada8:;
  /* 1152ada8 mov dword ptr [ebp - 0x18], 0x115539c8 */
  w32((uint32_t)(EBP + -0x18), (0x115539c8u));
  /* 1152adaf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152adb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152adb4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152adb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152adba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152adbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152adc0 jmp 0x1152ae46 */
  goto L_1152ae46;
L_1152adc5:;
  /* 1152adc5 mov dword ptr [ebp - 0x18], 0x115539cc */
  w32((uint32_t)(EBP + -0x18), (0x115539ccu));
  /* 1152adcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152adcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152add1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152add4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152add7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152adda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152addd jmp 0x1152ae46 */
  goto L_1152ae46;
L_1152addf:;
  /* 1152addf mov dword ptr [ebp - 0x18], 0x115539d0 */
  w32((uint32_t)(EBP + -0x18), (0x115539d0u));
  /* 1152ade6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ade9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152adeb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152adee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152adf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152adf4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152adf7 jmp 0x1152ae46 */
  goto L_1152ae46;
L_1152adf9:;
  /* 1152adf9 mov dword ptr [ebp - 0x18], 0x115539d4 */
  w32((uint32_t)(EBP + -0x18), (0x115539d4u));
  /* 1152ae00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ae03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152ae05 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152ae08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152ae0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ae0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152ae11 jmp 0x1152ae46 */
  goto L_1152ae46;
L_1152ae13:;
  /* 1152ae13 call 0x11527310 */
  push32(0x1152ae18u); f_11527310();
  /* 1152ae18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152ae1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ae1e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1152ae21 push edx */
  push32((uint32_t)(EDX));
  /* 1152ae22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ae25 push eax */
  push32((uint32_t)(EAX));
  /* 1152ae26 call 0x1152afb0 */
  push32(0x1152ae2bu); f_1152afb0();
  /* 1152ae2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ae2e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ae31 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1152ae34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152ae37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152ae39 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1152ae3c jmp 0x1152ae46 */
  goto L_1152ae46;
L_1152ae3e:;
  /* 1152ae3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152ae41 jmp 0x1152af76 */
  goto L_1152af76;
L_1152ae46:;
  /* 1152ae46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae4a je 0x1152ae56 */
  if (C.zf) goto L_1152ae56;
  /* 1152ae4c push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ae4e call 0x1152b2d0 */
  push32(0x1152ae53u); f_1152b2d0();
  /* 1152ae53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ae56:;
  /* 1152ae56 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae5a jne 0x1152ae73 */
  if (!C.zf) goto L_1152ae73;
  /* 1152ae5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae60 je 0x1152ae6c */
  if (C.zf) goto L_1152ae6c;
  /* 1152ae62 push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ae64 call 0x1152b370 */
  push32(0x1152ae69u); f_1152b370();
  /* 1152ae69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ae6c:;
  /* 1152ae6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ae6e jmp 0x1152af76 */
  goto L_1152af76;
L_1152ae73:;
  /* 1152ae73 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae77 jne 0x1152ae90 */
  if (!C.zf) goto L_1152ae90;
  /* 1152ae79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae7d je 0x1152ae89 */
  if (C.zf) goto L_1152ae89;
  /* 1152ae7f push 1 */
  push32((uint32_t)(0x1u));
  /* 1152ae81 call 0x1152b370 */
  push32(0x1152ae86u); f_1152b370();
  /* 1152ae86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152ae89:;
  /* 1152ae89 push 3 */
  push32((uint32_t)(0x3u));
  /* 1152ae8b call 0x11527090 */
  push32(0x1152ae90u); f_11527090();
L_1152ae90:;
  /* 1152ae90 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae94 je 0x1152aea2 */
  if (C.zf) goto L_1152aea2;
  /* 1152ae96 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ae9a je 0x1152aea2 */
  if (C.zf) goto L_1152aea2;
  /* 1152ae9c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aea0 jne 0x1152aece */
  if (!C.zf) goto L_1152aece;
L_1152aea2:;
  /* 1152aea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152aea5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1152aea8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1152aeab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152aeae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1152aeb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aeb9 jne 0x1152aece */
  if (!C.zf) goto L_1152aece;
  /* 1152aebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152aebe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1152aec1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152aec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152aec7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1152aece:;
  /* 1152aece cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aed2 jne 0x1152af10 */
  if (!C.zf) goto L_1152af10;
  /* 1152aed4 mov eax, dword ptr [0x11551c78] */
  EAX = (r32((uint32_t)(0x11551c78)));
  /* 1152aed9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152aedc jmp 0x1152aee7 */
  goto L_1152aee7;
L_1152aede:;
  /* 1152aede mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152aee1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aee4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1152aee7:;
  /* 1152aee7 mov edx, dword ptr [0x11551c78] */
  EDX = (r32((uint32_t)(0x11551c78)));
  /* 1152aeed add edx, dword ptr [0x11551c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11551c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aef3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aef6 jge 0x1152af0e */
  if ((C.sf==C.of)) goto L_1152af0e;
  /* 1152aef8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152aefb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152aefe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152af01 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1152af04 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1152af0c jmp 0x1152aede */
  goto L_1152aede;
L_1152af0e:;
  /* 1152af0e jmp 0x1152af19 */
  goto L_1152af19;
L_1152af10:;
  /* 1152af10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152af13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1152af19:;
  /* 1152af19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af1d je 0x1152af29 */
  if (C.zf) goto L_1152af29;
  /* 1152af1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1152af21 call 0x1152b370 */
  push32(0x1152af26u); f_1152b370();
  /* 1152af26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152af29:;
  /* 1152af29 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af2d jne 0x1152af40 */
  if (!C.zf) goto L_1152af40;
  /* 1152af2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152af32 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1152af35 push edx */
  push32((uint32_t)(EDX));
  /* 1152af36 push 8 */
  push32((uint32_t)(0x8u));
  /* 1152af38 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1152af3bu);
  /* 1152af3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152af3e jmp 0x1152af4a */
  goto L_1152af4a;
L_1152af40:;
  /* 1152af40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152af43 push eax */
  push32((uint32_t)(EAX));
  /* 1152af44 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1152af47u);
  /* 1152af47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152af4a:;
  /* 1152af4a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af4e je 0x1152af5c */
  if (C.zf) goto L_1152af5c;
  /* 1152af50 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af54 je 0x1152af5c */
  if (C.zf) goto L_1152af5c;
  /* 1152af56 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af5a jne 0x1152af74 */
  if (!C.zf) goto L_1152af74;
L_1152af5c:;
  /* 1152af5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152af5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152af62 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1152af65 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152af69 jne 0x1152af74 */
  if (!C.zf) goto L_1152af74;
  /* 1152af6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152af6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152af71 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1152af74:;
  /* 1152af74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152af76:;
  /* 1152af76 mov esp, ebp */
  ESP = (EBP);
  /* 1152af78 pop ebp */
  EBP = (pop32());
  /* 1152af79 ret  */
  ESPCHK(0x1152ad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x1152afb0 (91 bytes, 35 insns) */
void f_1152afb0(void) {
  FTRACE(0x1152afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152afb1 mov ebp, esp */
  EBP = (ESP);
  /* 1152afb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152afb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152afb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152afba:;
  /* 1152afba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152afbd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1152afc0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152afc3 je 0x1152afe3 */
  if (C.zf) goto L_1152afe3;
  /* 1152afc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152afc8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152afcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152afce mov ecx, dword ptr [0x11551c84] */
  ECX = (r32((uint32_t)(0x11551c84)));
  /* 1152afd4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152afd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152afda add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152afdc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152afdf jae 0x1152afe3 */
  if (!C.cf) goto L_1152afe3;
  /* 1152afe1 jmp 0x1152afba */
  goto L_1152afba;
L_1152afe3:;
  /* 1152afe3 mov eax, dword ptr [0x11551c84] */
  EAX = (r32((uint32_t)(0x11551c84)));
  /* 1152afe8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152afeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152afee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152aff0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152aff3 jae 0x1152b005 */
  if (!C.cf) goto L_1152b005;
  /* 1152aff5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152aff8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1152affb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152affe jne 0x1152b005 */
  if (!C.zf) goto L_1152b005;
  /* 1152b000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b003 jmp 0x1152b007 */
  goto L_1152b007;
L_1152b005:;
  /* 1152b005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152b007:;
  /* 1152b007 mov esp, ebp */
  ESP = (EBP);
  /* 1152b009 pop ebp */
  EBP = (pop32());
  /* 1152b00a ret  */
  ESPCHK(0x1152afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x1152b010 (13 bytes, 6 insns) */
void f_1152b010(void) {
  FTRACE(0x1152b010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b010 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b011 mov ebp, esp */
  EBP = (ESP);
  /* 1152b013 call 0x11527310 */
  push32(0x1152b018u); f_11527310();
  /* 1152b018 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b01b pop ebp */
  EBP = (pop32());
  /* 1152b01c ret  */
  ESPCHK(0x1152b010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x1152b020 (13 bytes, 6 insns) */
void f_1152b020(void) {
  FTRACE(0x1152b020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b020 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b021 mov ebp, esp */
  EBP = (ESP);
  /* 1152b023 call 0x11527310 */
  push32(0x1152b028u); f_11527310();
  /* 1152b028 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b02b pop ebp */
  EBP = (pop32());
  /* 1152b02c ret  */
  ESPCHK(0x1152b020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x1152b030 (187 bytes, 54 insns) */
void f_1152b030(void) {
  FTRACE(0x1152b030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b030 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b031 mov ebp, esp */
  EBP = (ESP);
  /* 1152b033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b036 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152b03d cmp dword ptr [0x115539dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b044 jne 0x1152b0a3 */
  if (!C.zf) goto L_1152b0a3;
  /* 1152b046 push 0x1154e7b4 */
  push32((uint32_t)(0x1154e7b4u));
  /* 1152b04b call dword ptr [0x115563d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d4))), 0x1152b051u);
  /* 1152b051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152b054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b058 je 0x1152b077 */
  if (C.zf) goto L_1152b077;
  /* 1152b05a push 0x1154f3b8 */
  push32((uint32_t)(0x1154f3b8u));
  /* 1152b05f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b062 push eax */
  push32((uint32_t)(EAX));
  /* 1152b063 call dword ptr [0x115563d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d0))), 0x1152b069u);
  /* 1152b069 mov dword ptr [0x115539dc], eax */
  w32((uint32_t)(0x115539dc), (EAX));
  /* 1152b06e cmp dword ptr [0x115539dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b075 jne 0x1152b07b */
  if (!C.zf) goto L_1152b07b;
L_1152b077:;
  /* 1152b077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b079 jmp 0x1152b0e7 */
  goto L_1152b0e7;
L_1152b07b:;
  /* 1152b07b push 0x1154f3a8 */
  push32((uint32_t)(0x1154f3a8u));
  /* 1152b080 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b083 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b084 call dword ptr [0x115563d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d0))), 0x1152b08au);
  /* 1152b08a mov dword ptr [0x115539e0], eax */
  w32((uint32_t)(0x115539e0), (EAX));
  /* 1152b08f push 0x1154f394 */
  push32((uint32_t)(0x1154f394u));
  /* 1152b094 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b097 push edx */
  push32((uint32_t)(EDX));
  /* 1152b098 call dword ptr [0x115563d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563d0))), 0x1152b09eu);
  /* 1152b09e mov dword ptr [0x115539e4], eax */
  w32((uint32_t)(0x115539e4), (EAX));
L_1152b0a3:;
  /* 1152b0a3 cmp dword ptr [0x115539e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b0aa je 0x1152b0b5 */
  if (C.zf) goto L_1152b0b5;
  /* 1152b0ac call dword ptr [0x115539e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115539e0))), 0x1152b0b2u);
  /* 1152b0b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152b0b5:;
  /* 1152b0b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b0b9 je 0x1152b0d1 */
  if (C.zf) goto L_1152b0d1;
  /* 1152b0bb cmp dword ptr [0x115539e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115539e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b0c2 je 0x1152b0d1 */
  if (C.zf) goto L_1152b0d1;
  /* 1152b0c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b0c7 push eax */
  push32((uint32_t)(EAX));
  /* 1152b0c8 call dword ptr [0x115539e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115539e4))), 0x1152b0ceu);
  /* 1152b0ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152b0d1:;
  /* 1152b0d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1152b0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b0d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b0d8 push edx */
  push32((uint32_t)(EDX));
  /* 1152b0d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b0dc push eax */
  push32((uint32_t)(EAX));
  /* 1152b0dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b0e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b0e1 call dword ptr [0x115539dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115539dc))), 0x1152b0e7u);
L_1152b0e7:;
  /* 1152b0e7 mov esp, ebp */
  ESP = (EBP);
  /* 1152b0e9 pop ebp */
  EBP = (pop32());
  /* 1152b0ea ret  */
  ESPCHK(0x1152b030u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1152b0f0 (254 bytes, 109 insns) */
void f_1152b0f0(void) {
  FTRACE(0x1152b0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b0f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152b0f4 push edi */
  push32((uint32_t)(EDI));
  /* 1152b0f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1152b0f7 je 0x1152b173 */
  if (C.zf) goto L_1152b173;
  /* 1152b0f9 push esi */
  push32((uint32_t)(ESI));
  /* 1152b0fa push ebx */
  push32((uint32_t)(EBX));
  /* 1152b0fb mov ebx, ecx */
  EBX = (ECX);
  /* 1152b0fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1152b101 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1152b107 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1152b10b jne 0x1152b114 */
  if (!C.zf) goto L_1152b114;
  /* 1152b10d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152b110 jne 0x1152b181 */
  if (!C.zf) goto L_1152b181;
  /* 1152b112 jmp 0x1152b135 */
  goto L_1152b135;
L_1152b114:;
  /* 1152b114 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152b116 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1152b117 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b119 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152b11a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b11b je 0x1152b142 */
  if (C.zf) goto L_1152b142;
  /* 1152b11d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152b11f je 0x1152b14a */
  if (C.zf) goto L_1152b14a;
  /* 1152b121 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1152b127 jne 0x1152b114 */
  if (!C.zf) goto L_1152b114;
  /* 1152b129 mov ebx, ecx */
  EBX = (ECX);
  /* 1152b12b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152b12e jne 0x1152b181 */
  if (!C.zf) goto L_1152b181;
L_1152b130:;
  /* 1152b130 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1152b133 je 0x1152b142 */
  if (C.zf) goto L_1152b142;
L_1152b135:;
  /* 1152b135 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1152b137 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1152b138 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b13a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152b13b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1152b13d je 0x1152b16e */
  if (C.zf) goto L_1152b16e;
  /* 1152b13f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1152b140 jne 0x1152b135 */
  if (!C.zf) goto L_1152b135;
L_1152b142:;
  /* 1152b142 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152b146 pop ebx */
  EBX = (pop32());
  /* 1152b147 pop esi */
  ESI = (pop32());
  /* 1152b148 pop edi */
  EDI = (pop32());
  /* 1152b149 ret  */
  ESPCHK(0x1152b0f0u, _esp0);
  ESP += 4; return;
L_1152b14a:;
  /* 1152b14a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152b150 je 0x1152b164 */
  if (C.zf) goto L_1152b164;
L_1152b152:;
  /* 1152b152 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b154 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152b155 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b156 je 0x1152b1e6 */
  if (C.zf) goto L_1152b1e6;
  /* 1152b15c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1152b162 jne 0x1152b152 */
  if (!C.zf) goto L_1152b152;
L_1152b164:;
  /* 1152b164 mov ebx, ecx */
  EBX = (ECX);
  /* 1152b166 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152b169 jne 0x1152b1d7 */
  if (!C.zf) goto L_1152b1d7;
L_1152b16b:;
  /* 1152b16b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b16d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1152b16e:;
  /* 1152b16e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1152b16f jne 0x1152b16b */
  if (!C.zf) goto L_1152b16b;
  /* 1152b171 pop ebx */
  EBX = (pop32());
  /* 1152b172 pop esi */
  ESI = (pop32());
L_1152b173:;
  /* 1152b173 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152b177 pop edi */
  EDI = (pop32());
  /* 1152b178 ret  */
  ESPCHK(0x1152b0f0u, _esp0);
  ESP += 4; return;
L_1152b179:;
  /* 1152b179 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152b17b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b17e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b17f je 0x1152b130 */
  if (C.zf) goto L_1152b130;
L_1152b181:;
  /* 1152b181 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1152b186 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1152b188 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b18a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152b18d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b18f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1152b191 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b194 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1152b199 je 0x1152b179 */
  if (C.zf) goto L_1152b179;
  /* 1152b19b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1152b19d je 0x1152b1cb */
  if (C.zf) goto L_1152b1cb;
  /* 1152b19f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1152b1a1 je 0x1152b1c1 */
  if (C.zf) goto L_1152b1c1;
  /* 1152b1a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1152b1a9 je 0x1152b1b7 */
  if (C.zf) goto L_1152b1b7;
  /* 1152b1ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1152b1b1 jne 0x1152b179 */
  if (!C.zf) goto L_1152b179;
  /* 1152b1b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152b1b5 jmp 0x1152b1cf */
  goto L_1152b1cf;
L_1152b1b7:;
  /* 1152b1b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152b1bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152b1bf jmp 0x1152b1cf */
  goto L_1152b1cf;
L_1152b1c1:;
  /* 1152b1c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1152b1c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1152b1c9 jmp 0x1152b1cf */
  goto L_1152b1cf;
L_1152b1cb:;
  /* 1152b1cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1152b1cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1152b1cf:;
  /* 1152b1cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b1d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b1d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b1d5 je 0x1152b1e1 */
  if (C.zf) goto L_1152b1e1;
L_1152b1d7:;
  /* 1152b1d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1152b1d9:;
  /* 1152b1d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1152b1db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b1de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b1df jne 0x1152b1d9 */
  if (!C.zf) goto L_1152b1d9;
L_1152b1e1:;
  /* 1152b1e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1152b1e4 jne 0x1152b16b */
  if (!C.zf) goto L_1152b16b;
L_1152b1e6:;
  /* 1152b1e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1152b1ea pop ebx */
  EBX = (pop32());
  /* 1152b1eb pop esi */
  ESI = (pop32());
  /* 1152b1ec pop edi */
  EDI = (pop32());
  /* 1152b1ed ret  */
  ESPCHK(0x1152b0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x1152b1f0 (55 bytes, 16 insns) */
void f_1152b1f0(void) {
  FTRACE(0x1152b1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b1f3 mov eax, dword ptr [0x11551b84] */
  EAX = (r32((uint32_t)(0x11551b84)));
  /* 1152b1f8 push eax */
  push32((uint32_t)(EAX));
  /* 1152b1f9 call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x1152b1ffu);
  /* 1152b1ff mov ecx, dword ptr [0x11551b74] */
  ECX = (r32((uint32_t)(0x11551b74)));
  /* 1152b205 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b206 call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x1152b20cu);
  /* 1152b20c mov edx, dword ptr [0x11551b64] */
  EDX = (r32((uint32_t)(0x11551b64)));
  /* 1152b212 push edx */
  push32((uint32_t)(EDX));
  /* 1152b213 call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x1152b219u);
  /* 1152b219 mov eax, dword ptr [0x11551b44] */
  EAX = (r32((uint32_t)(0x11551b44)));
  /* 1152b21e push eax */
  push32((uint32_t)(EAX));
  /* 1152b21f call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x1152b225u);
  /* 1152b225 pop ebp */
  EBP = (pop32());
  /* 1152b226 ret  */
  ESPCHK(0x1152b1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b230 @ 0x1152b230 (159 bytes, 47 insns) */
void f_1152b230(void) {
  FTRACE(0x1152b230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b230 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b231 mov ebp, esp */
  EBP = (ESP);
  /* 1152b233 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b234 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152b23b jmp 0x1152b246 */
  goto L_1152b246;
L_1152b23d:;
  /* 1152b23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b243 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152b246:;
  /* 1152b246 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b24a jge 0x1152b299 */
  if ((C.sf==C.of)) goto L_1152b299;
  /* 1152b24c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b24f cmp dword ptr [ecx*4 + 0x11551b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11551b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b257 je 0x1152b297 */
  if (C.zf) goto L_1152b297;
  /* 1152b259 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b25d je 0x1152b297 */
  if (C.zf) goto L_1152b297;
  /* 1152b25f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b263 je 0x1152b297 */
  if (C.zf) goto L_1152b297;
  /* 1152b265 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b269 je 0x1152b297 */
  if (C.zf) goto L_1152b297;
  /* 1152b26b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b26f je 0x1152b297 */
  if (C.zf) goto L_1152b297;
  /* 1152b271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b274 mov eax, dword ptr [edx*4 + 0x11551b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11551b40)));
  /* 1152b27b push eax */
  push32((uint32_t)(EAX));
  /* 1152b27c call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152b282u);
  /* 1152b282 push 2 */
  push32((uint32_t)(0x2u));
  /* 1152b284 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b287 mov edx, dword ptr [ecx*4 + 0x11551b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11551b40)));
  /* 1152b28e push edx */
  push32((uint32_t)(EDX));
  /* 1152b28f call 0x11528360 */
  push32(0x1152b294u); f_11528360();
  /* 1152b294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b297:;
  /* 1152b297 jmp 0x1152b23d */
  goto L_1152b23d;
L_1152b299:;
  /* 1152b299 mov eax, dword ptr [0x11551b64] */
  EAX = (r32((uint32_t)(0x11551b64)));
  /* 1152b29e push eax */
  push32((uint32_t)(EAX));
  /* 1152b29f call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152b2a5u);
  /* 1152b2a5 mov ecx, dword ptr [0x11551b74] */
  ECX = (r32((uint32_t)(0x11551b74)));
  /* 1152b2ab push ecx */
  push32((uint32_t)(ECX));
  /* 1152b2ac call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152b2b2u);
  /* 1152b2b2 mov edx, dword ptr [0x11551b84] */
  EDX = (r32((uint32_t)(0x11551b84)));
  /* 1152b2b8 push edx */
  push32((uint32_t)(EDX));
  /* 1152b2b9 call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152b2bfu);
  /* 1152b2bf mov eax, dword ptr [0x11551b44] */
  EAX = (r32((uint32_t)(0x11551b44)));
  /* 1152b2c4 push eax */
  push32((uint32_t)(EAX));
  /* 1152b2c5 call dword ptr [0x115563a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563a4))), 0x1152b2cbu);
  /* 1152b2cb mov esp, ebp */
  ESP = (EBP);
  /* 1152b2cd pop ebp */
  EBP = (pop32());
  /* 1152b2ce ret  */
  ESPCHK(0x1152b230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x1152b2d0 (151 bytes, 46 insns) */
void f_1152b2d0(void) {
  FTRACE(0x1152b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b2d7 cmp dword ptr [eax*4 + 0x11551b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11551b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b2df jne 0x1152b352 */
  if (!C.zf) goto L_1152b352;
  /* 1152b2e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1152b2e6 push 0x1154f3c4 */
  push32((uint32_t)(0x1154f3c4u));
  /* 1152b2eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1152b2ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1152b2ef call 0x115278d0 */
  push32(0x1152b2f4u); f_115278d0();
  /* 1152b2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b2f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b2fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b2fe jne 0x1152b30a */
  if (!C.zf) goto L_1152b30a;
  /* 1152b300 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1152b302 call 0x11526840 */
  push32(0x1152b307u); f_11526840();
  /* 1152b307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b30a:;
  /* 1152b30a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1152b30c call 0x1152b2d0 */
  push32(0x1152b311u); f_1152b2d0();
  /* 1152b311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b317 cmp dword ptr [ecx*4 + 0x11551b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11551b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b31f jne 0x1152b33a */
  if (!C.zf) goto L_1152b33a;
  /* 1152b321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b324 push edx */
  push32((uint32_t)(EDX));
  /* 1152b325 call dword ptr [0x1155636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155636c))), 0x1152b32bu);
  /* 1152b32b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b32e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b331 mov dword ptr [eax*4 + 0x11551b40], ecx */
  w32((uint32_t)(EAX*4 + 0x11551b40), (ECX));
  /* 1152b338 jmp 0x1152b348 */
  goto L_1152b348;
L_1152b33a:;
  /* 1152b33a push 2 */
  push32((uint32_t)(0x2u));
  /* 1152b33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b33f push edx */
  push32((uint32_t)(EDX));
  /* 1152b340 call 0x11528360 */
  push32(0x1152b345u); f_11528360();
  /* 1152b345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b348:;
  /* 1152b348 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1152b34a call 0x1152b370 */
  push32(0x1152b34fu); f_1152b370();
  /* 1152b34f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b352:;
  /* 1152b352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b355 mov ecx, dword ptr [eax*4 + 0x11551b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11551b40)));
  /* 1152b35c push ecx */
  push32((uint32_t)(ECX));
  /* 1152b35d call dword ptr [0x11556368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556368))), 0x1152b363u);
  /* 1152b363 mov esp, ebp */
  ESP = (EBP);
  /* 1152b365 pop ebp */
  EBP = (pop32());
  /* 1152b366 ret  */
  ESPCHK(0x1152b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x1152b370 (22 bytes, 8 insns) */
void f_1152b370(void) {
  FTRACE(0x1152b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b371 mov ebp, esp */
  EBP = (ESP);
  /* 1152b373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b376 mov ecx, dword ptr [eax*4 + 0x11551b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11551b40)));
  /* 1152b37d push ecx */
  push32((uint32_t)(ECX));
  /* 1152b37e call dword ptr [0x11556364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556364))), 0x1152b384u);
  /* 1152b384 pop ebp */
  EBP = (pop32());
  /* 1152b385 ret  */
  ESPCHK(0x1152b370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x1152b390 (26 bytes, 10 insns) */
void f_1152b390(void) {
  FTRACE(0x1152b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b390 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b391 mov ebp, esp */
  EBP = (ESP);
  /* 1152b393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b396 push eax */
  push32((uint32_t)(EAX));
  /* 1152b397 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152b399 call dword ptr [0x11556360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556360))), 0x1152b39fu);
  /* 1152b39f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1152b3a4 call dword ptr [0x115563e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115563e0))), 0x1152b3aau);
  /* 1152b3aa pop ebp */
  EBP = (pop32());
  /* 1152b3ab ret  */
  ESPCHK(0x1152b390u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1152b3b0 (446 bytes, 130 insns) */
void f_1152b3b0(void) {
  FTRACE(0x1152b3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b3b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b3b6 call 0x11527310 */
  push32(0x1152b3bbu); f_11527310();
  /* 1152b3bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152b3be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b3c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1152b3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b3c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b3c8 push edx */
  push32((uint32_t)(EDX));
  /* 1152b3c9 call 0x1152b570 */
  push32(0x1152b3ceu); f_1152b570();
  /* 1152b3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b3d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152b3d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b3d8 je 0x1152b3e3 */
  if (C.zf) goto L_1152b3e3;
  /* 1152b3da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b3dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b3e1 jne 0x1152b3f2 */
  if (!C.zf) goto L_1152b3f2;
L_1152b3e3:;
  /* 1152b3e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b3e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b3e7 call dword ptr [0x1155635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1155635c))), 0x1152b3edu);
  /* 1152b3ed jmp 0x1152b56a */
  goto L_1152b56a;
L_1152b3f2:;
  /* 1152b3f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b3f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b3f9 jne 0x1152b40f */
  if (!C.zf) goto L_1152b40f;
  /* 1152b3fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b3fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1152b405 mov eax, 1 */
  EAX = (0x1u);
  /* 1152b40a jmp 0x1152b56a */
  goto L_1152b56a;
L_1152b40f:;
  /* 1152b40f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b412 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b416 jne 0x1152b420 */
  if (!C.zf) goto L_1152b420;
  /* 1152b418 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1152b41b jmp 0x1152b56a */
  goto L_1152b56a;
L_1152b420:;
  /* 1152b420 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b423 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1152b426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b42c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1152b42f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1152b432 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b435 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b438 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1152b43b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b43e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b442 jne 0x1152b547 */
  if (!C.zf) goto L_1152b547;
  /* 1152b448 mov eax, dword ptr [0x11551c78] */
  EAX = (r32((uint32_t)(0x11551c78)));
  /* 1152b44d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1152b450 jmp 0x1152b45b */
  goto L_1152b45b;
L_1152b452:;
  /* 1152b452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152b455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b458 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1152b45b:;
  /* 1152b45b mov edx, dword ptr [0x11551c78] */
  EDX = (r32((uint32_t)(0x11551c78)));
  /* 1152b461 add edx, dword ptr [0x11551c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11551c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b467 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b46a jge 0x1152b482 */
  if ((C.sf==C.of)) goto L_1152b482;
  /* 1152b46c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152b46f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152b472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b475 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1152b478 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1152b480 jmp 0x1152b452 */
  goto L_1152b452;
L_1152b482:;
  /* 1152b482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b485 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1152b488 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1152b48b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b48e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b494 jne 0x1152b4a5 */
  if (!C.zf) goto L_1152b4a5;
  /* 1152b496 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b499 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1152b4a0 jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b4a5:;
  /* 1152b4a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b4a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b4ae jne 0x1152b4bc */
  if (!C.zf) goto L_1152b4bc;
  /* 1152b4b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b4b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1152b4ba jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b4bc:;
  /* 1152b4bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b4bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b4c5 jne 0x1152b4d3 */
  if (!C.zf) goto L_1152b4d3;
  /* 1152b4c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b4ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1152b4d1 jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b4d3:;
  /* 1152b4d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b4d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b4dc jne 0x1152b4ea */
  if (!C.zf) goto L_1152b4ea;
  /* 1152b4de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b4e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1152b4e8 jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b4ea:;
  /* 1152b4ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b4ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b4f3 jne 0x1152b501 */
  if (!C.zf) goto L_1152b501;
  /* 1152b4f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b4f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1152b4ff jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b501:;
  /* 1152b501 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b504 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b50a jne 0x1152b518 */
  if (!C.zf) goto L_1152b518;
  /* 1152b50c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b50f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1152b516 jmp 0x1152b52d */
  goto L_1152b52d;
L_1152b518:;
  /* 1152b518 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b51b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b521 jne 0x1152b52d */
  if (!C.zf) goto L_1152b52d;
  /* 1152b523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b526 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1152b52d:;
  /* 1152b52d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b530 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1152b533 push edx */
  push32((uint32_t)(EDX));
  /* 1152b534 push 8 */
  push32((uint32_t)(0x8u));
  /* 1152b536 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1152b539u);
  /* 1152b539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b53c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b53f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152b542 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1152b545 jmp 0x1152b55e */
  goto L_1152b55e;
L_1152b547:;
  /* 1152b547 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b54a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1152b551 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b554 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1152b557 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b558 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1152b55bu);
  /* 1152b55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b55e:;
  /* 1152b55e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b561 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1152b564 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1152b567 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1152b56a:;
  /* 1152b56a mov esp, ebp */
  ESP = (EBP);
  /* 1152b56c pop ebp */
  EBP = (pop32());
  /* 1152b56d ret  */
  ESPCHK(0x1152b3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x1152b570 (89 bytes, 35 insns) */
void f_1152b570(void) {
  FTRACE(0x1152b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b570 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b571 mov ebp, esp */
  EBP = (ESP);
  /* 1152b573 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1152b57a:;
  /* 1152b57a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b57d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1152b57f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b582 je 0x1152b5a2 */
  if (C.zf) goto L_1152b5a2;
  /* 1152b584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b587 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b58a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b58d mov ecx, dword ptr [0x11551c84] */
  ECX = (r32((uint32_t)(0x11551c84)));
  /* 1152b593 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152b596 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b599 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b59b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b59e jae 0x1152b5a2 */
  if (!C.cf) goto L_1152b5a2;
  /* 1152b5a0 jmp 0x1152b57a */
  goto L_1152b57a;
L_1152b5a2:;
  /* 1152b5a2 mov eax, dword ptr [0x11551c84] */
  EAX = (r32((uint32_t)(0x11551c84)));
  /* 1152b5a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1152b5aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b5ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b5af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b5b2 jae 0x1152b5be */
  if (!C.cf) goto L_1152b5be;
  /* 1152b5b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b5b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1152b5b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b5bc je 0x1152b5c2 */
  if (C.zf) goto L_1152b5c2;
L_1152b5be:;
  /* 1152b5be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b5c0 jmp 0x1152b5c5 */
  goto L_1152b5c5;
L_1152b5c2:;
  /* 1152b5c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1152b5c5:;
  /* 1152b5c5 mov esp, ebp */
  ESP = (EBP);
  /* 1152b5c7 pop ebp */
  EBP = (pop32());
  /* 1152b5c8 ret  */
  ESPCHK(0x1152b570u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1152b5d0 (48 bytes, 17 insns) */
void f_1152b5d0(void) {
  FTRACE(0x1152b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b5d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b5d6 call 0x1152b2d0 */
  push32(0x1152b5dbu); f_1152b2d0();
  /* 1152b5db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b5de mov eax, dword ptr [0x11553a4c] */
  EAX = (r32((uint32_t)(0x11553a4c)));
  /* 1152b5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b5e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b5e9 mov dword ptr [0x11553a4c], ecx */
  w32((uint32_t)(0x11553a4c), (ECX));
  /* 1152b5ef push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b5f1 call 0x1152b370 */
  push32(0x1152b5f6u); f_1152b370();
  /* 1152b5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b5fc mov esp, ebp */
  ESP = (EBP);
  /* 1152b5fe pop ebp */
  EBP = (pop32());
  /* 1152b5ff ret  */
  ESPCHK(0x1152b5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x1152b600 (10 bytes, 5 insns) */
void f_1152b600(void) {
  FTRACE(0x1152b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b600 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b601 mov ebp, esp */
  EBP = (ESP);
  /* 1152b603 mov eax, dword ptr [0x11553a4c] */
  EAX = (r32((uint32_t)(0x11553a4c)));
  /* 1152b608 pop ebp */
  EBP = (pop32());
  /* 1152b609 ret  */
  ESPCHK(0x1152b600u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1152b610 (45 bytes, 19 insns) */
void f_1152b610(void) {
  FTRACE(0x1152b610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b610 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b611 mov ebp, esp */
  EBP = (ESP);
  /* 1152b613 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b614 mov eax, dword ptr [0x11553a4c] */
  EAX = (r32((uint32_t)(0x11553a4c)));
  /* 1152b619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b620 je 0x1152b630 */
  if (C.zf) goto L_1152b630;
  /* 1152b622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b625 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b626 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1152b629u);
  /* 1152b629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b62c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152b62e jne 0x1152b634 */
  if (!C.zf) goto L_1152b634;
L_1152b630:;
  /* 1152b630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b632 jmp 0x1152b639 */
  goto L_1152b639;
L_1152b634:;
  /* 1152b634 mov eax, 1 */
  EAX = (0x1u);
L_1152b639:;
  /* 1152b639 mov esp, ebp */
  ESP = (EBP);
  /* 1152b63b pop ebp */
  EBP = (pop32());
  /* 1152b63c ret  */
  ESPCHK(0x1152b610u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1152b640 (88 bytes, 40 insns) */
void f_1152b640(void) {
  FTRACE(0x1152b640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b640 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1152b644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152b648 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152b64a je 0x1152b693 */
  if (C.zf) goto L_1152b693;
  /* 1152b64c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b64e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1152b652 push edi */
  push32((uint32_t)(EDI));
  /* 1152b653 mov edi, ecx */
  EDI = (ECX);
  /* 1152b655 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b658 jb 0x1152b687 */
  if (C.cf) goto L_1152b687;
  /* 1152b65a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1152b65c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1152b65f je 0x1152b669 */
  if (C.zf) goto L_1152b669;
  /* 1152b661 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1152b663:;
  /* 1152b663 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b665 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152b666 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1152b667 jne 0x1152b663 */
  if (!C.zf) goto L_1152b663;
L_1152b669:;
  /* 1152b669 mov ecx, eax */
  ECX = (EAX);
  /* 1152b66b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1152b66e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b670 mov ecx, eax */
  ECX = (EAX);
  /* 1152b672 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1152b675 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b677 mov ecx, edx */
  ECX = (EDX);
  /* 1152b679 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1152b67c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1152b67f je 0x1152b687 */
  if (C.zf) goto L_1152b687;
  /* 1152b681 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1152b683 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1152b685 je 0x1152b68d */
  if (C.zf) goto L_1152b68d;
L_1152b687:;
  /* 1152b687 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1152b689 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1152b68a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1152b68b jne 0x1152b687 */
  if (!C.zf) goto L_1152b687;
L_1152b68d:;
  /* 1152b68d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1152b691 pop edi */
  EDI = (pop32());
  /* 1152b692 ret  */
  ESPCHK(0x1152b640u, _esp0);
  ESP += 4; return;
L_1152b693:;
  /* 1152b693 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1152b697 ret  */
  ESPCHK(0x1152b640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6a0 @ 0x1152b6a0 (23 bytes, 10 insns) */
void f_1152b6a0(void) {
  FTRACE(0x1152b6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b6a3 mov eax, dword ptr [0x11553a48] */
  EAX = (r32((uint32_t)(0x11553a48)));
  /* 1152b6a8 push eax */
  push32((uint32_t)(EAX));
  /* 1152b6a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b6ac push ecx */
  push32((uint32_t)(ECX));
  /* 1152b6ad call 0x1152b6c0 */
  push32(0x1152b6b2u); f_1152b6c0();
  /* 1152b6b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b6b5 pop ebp */
  EBP = (pop32());
  /* 1152b6b6 ret  */
  ESPCHK(0x1152b6a0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1152b6c0 (87 bytes, 34 insns) */
void f_1152b6c0(void) {
  FTRACE(0x1152b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b6c4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b6c8 jbe 0x1152b6ce */
  if ((C.cf||C.zf)) goto L_1152b6ce;
  /* 1152b6ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b6cc jmp 0x1152b713 */
  goto L_1152b713;
L_1152b6ce:;
  /* 1152b6ce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b6d2 ja 0x1152b6e5 */
  if ((!C.cf&&!C.zf)) goto L_1152b6e5;
  /* 1152b6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b6d7 push eax */
  push32((uint32_t)(EAX));
  /* 1152b6d8 call 0x1152b720 */
  push32(0x1152b6ddu); f_1152b720();
  /* 1152b6dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b6e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b6e3 jmp 0x1152b6ec */
  goto L_1152b6ec;
L_1152b6e5:;
  /* 1152b6e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1152b6ec:;
  /* 1152b6ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b6f0 jne 0x1152b6f8 */
  if (!C.zf) goto L_1152b6f8;
  /* 1152b6f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b6f6 jne 0x1152b6fd */
  if (!C.zf) goto L_1152b6fd;
L_1152b6f8:;
  /* 1152b6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b6fb jmp 0x1152b713 */
  goto L_1152b713;
L_1152b6fd:;
  /* 1152b6fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b700 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b701 call 0x1152b610 */
  push32(0x1152b706u); f_1152b610();
  /* 1152b706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152b70b jne 0x1152b711 */
  if (!C.zf) goto L_1152b711;
  /* 1152b70d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b70f jmp 0x1152b713 */
  goto L_1152b713;
L_1152b711:;
  /* 1152b711 jmp 0x1152b6ce */
  goto L_1152b6ce;
L_1152b713:;
  /* 1152b713 mov esp, ebp */
  ESP = (EBP);
  /* 1152b715 pop ebp */
  EBP = (pop32());
  /* 1152b716 ret  */
  ESPCHK(0x1152b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x1152b720 (109 bytes, 37 insns) */
void f_1152b720(void) {
  FTRACE(0x1152b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b720 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b721 mov ebp, esp */
  EBP = (ESP);
  /* 1152b723 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b727 cmp eax, dword ptr [0x11551c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11551c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b72d ja 0x1152b75d */
  if ((!C.cf&&!C.zf)) goto L_1152b75d;
  /* 1152b72f push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b731 call 0x1152b2d0 */
  push32(0x1152b736u); f_1152b2d0();
  /* 1152b736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b73c push ecx */
  push32((uint32_t)(ECX));
  /* 1152b73d call 0x1152c260 */
  push32(0x1152b742u); f_1152c260();
  /* 1152b742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b745 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152b748 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b74a call 0x1152b370 */
  push32(0x1152b74fu); f_1152b370();
  /* 1152b74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b752 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b756 je 0x1152b75d */
  if (C.zf) goto L_1152b75d;
  /* 1152b758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b75b jmp 0x1152b789 */
  goto L_1152b789;
L_1152b75d:;
  /* 1152b75d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b761 jne 0x1152b76a */
  if (!C.zf) goto L_1152b76a;
  /* 1152b763 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1152b76a:;
  /* 1152b76a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b76d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b770 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1152b773 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1152b776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b779 push eax */
  push32((uint32_t)(EAX));
  /* 1152b77a push 0 */
  push32((uint32_t)(0x0u));
  /* 1152b77c mov ecx, dword ptr [0x1155520c] */
  ECX = (r32((uint32_t)(0x1155520c)));
  /* 1152b782 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b783 call dword ptr [0x11556358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556358))), 0x1152b789u);
L_1152b789:;
  /* 1152b789 mov esp, ebp */
  ESP = (EBP);
  /* 1152b78b pop ebp */
  EBP = (pop32());
  /* 1152b78c ret  */
  ESPCHK(0x1152b720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b790 @ 0x1152b790 (10 bytes, 5 insns) */
void f_1152b790(void) {
  FTRACE(0x1152b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b790 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b791 mov ebp, esp */
  EBP = (ESP);
  /* 1152b793 mov eax, 1 */
  EAX = (0x1u);
  /* 1152b798 pop ebp */
  EBP = (pop32());
  /* 1152b799 ret  */
  ESPCHK(0x1152b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x1152b7a0 (173 bytes, 59 insns) */
void f_1152b7a0(void) {
  FTRACE(0x1152b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1152b7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b7a6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b7aa jbe 0x1152b7b3 */
  if ((C.cf||C.zf)) goto L_1152b7b3;
  /* 1152b7ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b7ae jmp 0x1152b849 */
  goto L_1152b849;
L_1152b7b3:;
  /* 1152b7b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b7b5 call 0x1152b2d0 */
  push32(0x1152b7bau); f_1152b2d0();
  /* 1152b7ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b7bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b7c0 push eax */
  push32((uint32_t)(EAX));
  /* 1152b7c1 call 0x1152bbd0 */
  push32(0x1152b7c6u); f_1152bbd0();
  /* 1152b7c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b7c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152b7cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b7d0 je 0x1152b811 */
  if (C.zf) goto L_1152b811;
  /* 1152b7d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1152b7d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b7dc cmp ecx, dword ptr [0x11551c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11551c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b7e2 ja 0x1152b802 */
  if ((!C.cf&&!C.zf)) goto L_1152b802;
  /* 1152b7e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b7e7 push edx */
  push32((uint32_t)(EDX));
  /* 1152b7e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b7eb push eax */
  push32((uint32_t)(EAX));
  /* 1152b7ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b7ef push ecx */
  push32((uint32_t)(ECX));
  /* 1152b7f0 call 0x1152caa0 */
  push32(0x1152b7f5u); f_1152caa0();
  /* 1152b7f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b7f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152b7fa je 0x1152b802 */
  if (C.zf) goto L_1152b802;
  /* 1152b7fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b7ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1152b802:;
  /* 1152b802 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b804 call 0x1152b370 */
  push32(0x1152b809u); f_1152b370();
  /* 1152b809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b80c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b80f jmp 0x1152b849 */
  goto L_1152b849;
L_1152b811:;
  /* 1152b811 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b813 call 0x1152b370 */
  push32(0x1152b818u); f_1152b370();
  /* 1152b818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b81b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b81f jne 0x1152b828 */
  if (!C.zf) goto L_1152b828;
  /* 1152b821 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1152b828:;
  /* 1152b828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b82b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b82e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1152b830 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1152b833 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b836 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b83a push edx */
  push32((uint32_t)(EDX));
  /* 1152b83b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1152b83d mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152b842 push eax */
  push32((uint32_t)(EAX));
  /* 1152b843 call dword ptr [0x11556354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556354))), 0x1152b849u);
L_1152b849:;
  /* 1152b849 mov esp, ebp */
  ESP = (EBP);
  /* 1152b84b pop ebp */
  EBP = (pop32());
  /* 1152b84c ret  */
  ESPCHK(0x1152b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b850 @ 0x1152b850 (490 bytes, 165 insns) */
void f_1152b850(void) {
  FTRACE(0x1152b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152b850 push ebp */
  push32((uint32_t)(EBP));
  /* 1152b851 mov ebp, esp */
  EBP = (ESP);
  /* 1152b853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b856 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b85a jne 0x1152b86d */
  if (!C.zf) goto L_1152b86d;
  /* 1152b85c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b85f push eax */
  push32((uint32_t)(EAX));
  /* 1152b860 call 0x1152b6a0 */
  push32(0x1152b865u); f_1152b6a0();
  /* 1152b865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b868 jmp 0x1152ba36 */
  goto L_1152ba36;
L_1152b86d:;
  /* 1152b86d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b871 jne 0x1152b886 */
  if (!C.zf) goto L_1152b886;
  /* 1152b873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b876 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b877 call 0x1152ba40 */
  push32(0x1152b87cu); f_1152ba40();
  /* 1152b87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b87f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152b881 jmp 0x1152ba36 */
  goto L_1152ba36;
L_1152b886:;
  /* 1152b886 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1152b88d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b891 ja 0x1152ba09 */
  if ((!C.cf&&!C.zf)) goto L_1152ba09;
  /* 1152b897 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b899 call 0x1152b2d0 */
  push32(0x1152b89eu); f_1152b2d0();
  /* 1152b89e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b8a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b8a4 push edx */
  push32((uint32_t)(EDX));
  /* 1152b8a5 call 0x1152bbd0 */
  push32(0x1152b8aau); f_1152bbd0();
  /* 1152b8aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b8ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1152b8b0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b8b4 je 0x1152b9cc */
  if (C.zf) goto L_1152b9cc;
  /* 1152b8ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b8bd cmp eax, dword ptr [0x11551c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11551c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b8c3 ja 0x1152b940 */
  if ((!C.cf&&!C.zf)) goto L_1152b940;
  /* 1152b8c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b8c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b8c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b8cc push edx */
  push32((uint32_t)(EDX));
  /* 1152b8cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152b8d0 push eax */
  push32((uint32_t)(EAX));
  /* 1152b8d1 call 0x1152caa0 */
  push32(0x1152b8d6u); f_1152caa0();
  /* 1152b8d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b8d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152b8db je 0x1152b8e5 */
  if (C.zf) goto L_1152b8e5;
  /* 1152b8dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b8e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1152b8e3 jmp 0x1152b940 */
  goto L_1152b940;
L_1152b8e5:;
  /* 1152b8e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b8e8 push edx */
  push32((uint32_t)(EDX));
  /* 1152b8e9 call 0x1152c260 */
  push32(0x1152b8eeu); f_1152c260();
  /* 1152b8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b8f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152b8f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b8f8 je 0x1152b940 */
  if (C.zf) goto L_1152b940;
  /* 1152b8fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b8fd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1152b900 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b903 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1152b906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b909 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b90c jae 0x1152b916 */
  if (!C.cf) goto L_1152b916;
  /* 1152b90e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b911 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1152b914 jmp 0x1152b91c */
  goto L_1152b91c;
L_1152b916:;
  /* 1152b916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b919 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1152b91c:;
  /* 1152b91c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1152b91f push edx */
  push32((uint32_t)(EDX));
  /* 1152b920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b923 push eax */
  push32((uint32_t)(EAX));
  /* 1152b924 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b927 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b928 call 0x1152e1b0 */
  push32(0x1152b92du); f_1152e1b0();
  /* 1152b92d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b933 push edx */
  push32((uint32_t)(EDX));
  /* 1152b934 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152b937 push eax */
  push32((uint32_t)(EAX));
  /* 1152b938 call 0x1152bc90 */
  push32(0x1152b93du); f_1152bc90();
  /* 1152b93d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b940:;
  /* 1152b940 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b944 jne 0x1152b9c0 */
  if (!C.zf) goto L_1152b9c0;
  /* 1152b946 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b94a jne 0x1152b953 */
  if (!C.zf) goto L_1152b953;
  /* 1152b94c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1152b953:;
  /* 1152b953 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b956 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b959 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1152b95c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1152b95f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b962 push edx */
  push32((uint32_t)(EDX));
  /* 1152b963 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152b965 mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152b96a push eax */
  push32((uint32_t)(EAX));
  /* 1152b96b call dword ptr [0x11556358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556358))), 0x1152b971u);
  /* 1152b971 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1152b974 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b978 je 0x1152b9c0 */
  if (C.zf) goto L_1152b9c0;
  /* 1152b97a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b97d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1152b980 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1152b983 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1152b986 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b989 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b98c jae 0x1152b996 */
  if (!C.cf) goto L_1152b996;
  /* 1152b98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152b991 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1152b994 jmp 0x1152b99c */
  goto L_1152b99c;
L_1152b996:;
  /* 1152b996 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b999 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1152b99c:;
  /* 1152b99c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1152b99f push eax */
  push32((uint32_t)(EAX));
  /* 1152b9a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b9a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152b9a7 push edx */
  push32((uint32_t)(EDX));
  /* 1152b9a8 call 0x1152e1b0 */
  push32(0x1152b9adu); f_1152e1b0();
  /* 1152b9ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b9b3 push eax */
  push32((uint32_t)(EAX));
  /* 1152b9b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1152b9b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b9b8 call 0x1152bc90 */
  push32(0x1152b9bdu); f_1152bc90();
  /* 1152b9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1152b9c0:;
  /* 1152b9c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b9c2 call 0x1152b370 */
  push32(0x1152b9c7u); f_1152b370();
  /* 1152b9c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b9ca jmp 0x1152ba09 */
  goto L_1152ba09;
L_1152b9cc:;
  /* 1152b9cc push 9 */
  push32((uint32_t)(0x9u));
  /* 1152b9ce call 0x1152b370 */
  push32(0x1152b9d3u); f_1152b370();
  /* 1152b9d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b9d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152b9da jne 0x1152b9e3 */
  if (!C.zf) goto L_1152b9e3;
  /* 1152b9dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1152b9e3:;
  /* 1152b9e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b9e6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1152b9e9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1152b9ec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1152b9ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152b9f2 push eax */
  push32((uint32_t)(EAX));
  /* 1152b9f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152b9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1152b9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152b9f9 mov edx, dword ptr [0x1155520c] */
  EDX = (r32((uint32_t)(0x1155520c)));
  /* 1152b9ff push edx */
  push32((uint32_t)(EDX));
  /* 1152ba00 call dword ptr [0x11556354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556354))), 0x1152ba06u);
  /* 1152ba06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1152ba09:;
  /* 1152ba09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ba0d jne 0x1152ba18 */
  if (!C.zf) goto L_1152ba18;
  /* 1152ba0f cmp dword ptr [0x11553a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11553a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ba16 jne 0x1152ba1d */
  if (!C.zf) goto L_1152ba1d;
L_1152ba18:;
  /* 1152ba18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1152ba1b jmp 0x1152ba36 */
  goto L_1152ba36;
L_1152ba1d:;
  /* 1152ba1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1152ba20 push eax */
  push32((uint32_t)(EAX));
  /* 1152ba21 call 0x1152b610 */
  push32(0x1152ba26u); f_1152b610();
  /* 1152ba26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152ba2b jne 0x1152ba31 */
  if (!C.zf) goto L_1152ba31;
  /* 1152ba2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1152ba2f jmp 0x1152ba36 */
  goto L_1152ba36;
L_1152ba31:;
  /* 1152ba31 jmp 0x1152b886 */
  goto L_1152b886;
L_1152ba36:;
  /* 1152ba36 mov esp, ebp */
  ESP = (EBP);
  /* 1152ba38 pop ebp */
  EBP = (pop32());
  /* 1152ba39 ret  */
  ESPCHK(0x1152b850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba40 @ 0x1152ba40 (104 bytes, 38 insns) */
void f_1152ba40(void) {
  FTRACE(0x1152ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 1152ba41 mov ebp, esp */
  EBP = (ESP);
  /* 1152ba43 push ecx */
  push32((uint32_t)(ECX));
  /* 1152ba44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ba48 jne 0x1152ba4c */
  if (!C.zf) goto L_1152ba4c;
  /* 1152ba4a jmp 0x1152baa4 */
  goto L_1152baa4;
L_1152ba4c:;
  /* 1152ba4c push 9 */
  push32((uint32_t)(0x9u));
  /* 1152ba4e call 0x1152b2d0 */
  push32(0x1152ba53u); f_1152b2d0();
  /* 1152ba53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ba59 push eax */
  push32((uint32_t)(EAX));
  /* 1152ba5a call 0x1152bbd0 */
  push32(0x1152ba5fu); f_1152bbd0();
  /* 1152ba5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1152ba65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152ba69 je 0x1152ba87 */
  if (C.zf) goto L_1152ba87;
  /* 1152ba6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ba6e push ecx */
  push32((uint32_t)(ECX));
  /* 1152ba6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152ba72 push edx */
  push32((uint32_t)(EDX));
  /* 1152ba73 call 0x1152bc90 */
  push32(0x1152ba78u); f_1152bc90();
  /* 1152ba78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba7b push 9 */
  push32((uint32_t)(0x9u));
  /* 1152ba7d call 0x1152b370 */
  push32(0x1152ba82u); f_1152b370();
  /* 1152ba82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba85 jmp 0x1152baa4 */
  goto L_1152baa4;
L_1152ba87:;
  /* 1152ba87 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152ba89 call 0x1152b370 */
  push32(0x1152ba8eu); f_1152b370();
  /* 1152ba8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152ba91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1152ba94 push eax */
  push32((uint32_t)(EAX));
  /* 1152ba95 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152ba97 mov ecx, dword ptr [0x1155520c] */
  ECX = (r32((uint32_t)(0x1155520c)));
  /* 1152ba9d push ecx */
  push32((uint32_t)(ECX));
  /* 1152ba9e call dword ptr [0x11556378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556378))), 0x1152baa4u);
L_1152baa4:;
  /* 1152baa4 mov esp, ebp */
  ESP = (EBP);
  /* 1152baa6 pop ebp */
  EBP = (pop32());
  /* 1152baa7 ret  */
  ESPCHK(0x1152ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x1152bab0 (116 bytes, 34 insns) */
void f_1152bab0(void) {
  FTRACE(0x1152bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1152bab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1152bab4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1152babb push 9 */
  push32((uint32_t)(0x9u));
  /* 1152babd call 0x1152b2d0 */
  push32(0x1152bac2u); f_1152b2d0();
  /* 1152bac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152bac5 call 0x1152d1c0 */
  push32(0x1152bacau); f_1152d1c0();
  /* 1152baca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152bacc jge 0x1152bad5 */
  if ((C.sf==C.of)) goto L_1152bad5;
  /* 1152bace mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1152bad5:;
  /* 1152bad5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1152bad7 call 0x1152b370 */
  push32(0x1152badcu); f_1152b370();
  /* 1152badc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1152badf push 0 */
  push32((uint32_t)(0x0u));
  /* 1152bae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1152bae3 mov eax, dword ptr [0x1155520c] */
  EAX = (r32((uint32_t)(0x1155520c)));
  /* 1152bae8 push eax */
  push32((uint32_t)(EAX));
  /* 1152bae9 call dword ptr [0x11556398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556398))), 0x1152baefu);
  /* 1152baef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1152baf1 jne 0x1152bb1d */
  if (!C.zf) goto L_1152bb1d;
  /* 1152baf3 call dword ptr [0x11556400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11556400))), 0x1152baf9u);
  /* 1152baf9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1152bafc jne 0x1152bb16 */
  if (!C.zf) goto L_1152bb16;
  /* 1152bafe call 0x1152f7b0 */
  push32(0x1152bb03u); f_1152f7b0();
  /* 1152bb03 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1152bb09 call 0x1152f7a0 */
  push32(0x1152bb0eu); f_1152f7a0();
  /* 1152bb0e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1152bb14 jmp 0x1152bb1d */
  goto L_1152bb1d;
L_1152bb16:;
  /* 1152bb16 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1152bb1d:;
  /* 1152bb1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1152bb20 mov esp, ebp */
  ESP = (EBP);
  /* 1152bb22 pop ebp */
  EBP = (pop32());
  /* 1152bb23 ret  */
  ESPCHK(0x1152bab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x1152bb30 (10 bytes, 5 insns) */
void f_1152bb30(void) {
  FTRACE(0x1152bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1152bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1152bb31 mov ebp, esp */
  EBP = (ESP);
  /* 1152bb33 call 0x1152bab0 */
  push32(0x1152bb38u); f_1152bab0();
  /* 1152bb38 pop ebp */
  EBP = (pop32());
  /* 1152bb39 ret  */
  ESPCHK(0x1152bb30u, _esp0);
  ESP += 4; return;
}

